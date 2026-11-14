# native/sdk/snd.c: the nn::snd layer on a native mixer

`snd.c` replaces the nn::snd API that the game's sound engine calls. The engine is nw::snd
(NW4C sound: BCSAR archive, BCSTM streams, BCWAV waves, BCSEQ sequences, at USA
0x00408000-0x0041F000). The replacement runs on the host voice mixer in `native/audio/`, with
SDL3 output. The 3DS DSP, its firmware, pipes, interrupts and shared memory are not emulated.
Each `func_<USA>` in snd.c is a strong definition that carries a comment with its evidence and
confidence.

## Where the boundary is

nw::snd stays decompiled. It only calls the *public* nn::snd API, which is 57 functions in the
EU 003DB6BC-003E0C3C region (USA +0x20). This list comes from a scan of every BL and literal in
eu_code.bin that targets the region from outside it (`armdis.py`/`blscan.py` in the audio
agent's scratchpad), not only from Ghidra's call graph. Below that API sits the library internal
layer: the voice manager 0x007A1CF0, the parameter block 0x007A06A0, the sound-thread object
0x007A1CA0, and the DSP shared-memory writer 0x007A06F0 (offsets +0x10B0, +0x131A, ...). None of
it is reached any more.

Several decompiled versions of these public functions are broken. Matched thunks drop their
arguments, for example `f_3DE188(p)` loses the float, and the fall-through functions are split
by the EU/USA map. They are replaced anyway, so their quality no longer matters.

Pure-CPU helpers stay decompiled:

| USA | function |
|---|---|
| 003DD64C | DSP-ADPCM block decode helper |
| 003DE244 | InitializeWaveBuffer |
| 003DBB54 / 003DC2BC | effect parameter constructors |
| 003E00A8 / 003E099C | FxDelay / FxReverb constructors |
| 003DFEC8.. | CPU effect vtable thunks (AssignWorkBuffer and similar; their converted versions are correct) |
| 005E4BF4 | static constructor of the library's own voice objects |

## API replaced (USA address, meaning, confidence)

| USA | API | notes |
|---|---|---|
| 003DE268 | nn::snd::Initialize() | dsp init + 003DBB7C + output-buffer count; native init, returns 0. high |
| 003DBB7C | library init | returns 0, or 0x0820ABF9 if already initialised. high |
| 003DD770 | SetMasterVolume(f32) | high |
| 003DDB5C | surround depth (f32 0..1 -> u16) | recorded only (stereo). medium |
| 003DE2D0 | 0/1 mode (+0x27: speaker position / clipping mode) | recorded only. medium |
| 003DE120 | GetSoundOutputMode() | returns 1 (stereo). high |
| 003DE188 | SetAuxReturnVolume(bus, f32) | high |
| 003DE198 / 003DD48C / 003DD77C | Register / Get / ClearAuxCallback | cb(AuxBusData{fl,fr,rl,rr int32*}, 160, arg) every frame. high |
| 003DBC38 | ClearEffect(bus) | finalises the CPU effect (003DFF20 / 003E07DC field semantics). high |
| 003E0B00 / 003E0B14 | SetEffect(bus, FxDelay*) / SetEffect(bus, FxReverb*) | native delay / reverb with the object's parameters. high |
| 003DFF78 / 003E0828 | FxDelay / FxReverb::SetParameters | exact port of the checks and copies; a live effect is reconfigured. high |
| 003DB6FC, 003DB6F4 / 003DBC50, 003DBC48 | DSP FxDelay / FxReverb AssignWorkBuffer (+ vtable thunk) | no FCRAM range check / VA->PA. high |
| 003DB7C4, 003DB7B8 / 003DBD18, 003DBD0C | GetRequiredMemorySize (+ thunk) | exact formula port. high |
| 003DB804 / 003DBD8C | DSP effect attach(bus) | one per bus. high |
| 003DB894 / 003DBDE4 | enable / disable | high |
| 003DB920 / 003DBE70 | finalise | detach + release buffer. high |
| 003DB9EC / 003DBF3C | DSP effect SetParameters | high (layout); the algorithm is approximated |
| 003DB770 / 003DBCC4 | "still used by the DSP" | returns `enabled`. high |
| 003DB6DC | AllocVoice(prio, dropCb, arg) | 24 voices, priority drop of the oldest lowest-priority voice. high |
| 003E0AF0 | FreeVoice | high |
| 003E16D4 | Voice::SetState (0 play, 1 stop, 2 pause) | high |
| 003E14A0 | Voice::AppendWaveBuffer | status 1/2/3, bufferId, length 0 -> done. high |
| 003E11D0 | Voice::SetAdpcmParam (16 coefs) | high |
| 003E1224 / 003E145C / 003E147C | SetSampleRate / SetChannelCount / SetSampleFormat (0 PCM8, 1 PCM16, 2 ADPCM) | high |
| 003E15CC | SetInterpolationType (0 polyphase, 1 linear, 2 none) | medium-high |
| 003E15B0 / 003E1600 | impl +0x1E bit 4 / bit 6 flags | recorded only. medium |
| 003DE404 | SetPriority | high |
| 003E176C / 003DE4E4 | SetVolume / SetPitch | high |
| 003E0C30 | SetMixParam (12 floats: main, auxA, auxB x FL FR RL RR) | high |
| 003E11F0 / 003DE458 | mono filter enable / cut-off (Hz, <= 16000) | high |
| 003DE438 / 003E1634 | biquad enable / coefficients (b0 b1 b2 a1 a2, Q14) | high, but medium for the a1/a2 sign |
| 003DDB68 | start the sound thread (cfg, frameCb, arg, auxCfg, userCb, userArg, mode) | high |
| 003DD088 | stop / join the sound thread | high |
| 003DD410 / 003DD060 | profiling flag / last frame time (ticks) | medium-high |
| 003DC398 | DSP counter (statistics only) | returns 0. low (meaning) |

## Mixer (native/audio)

- **mixer.c.** 24 voices. Each voice has a ring of 64 queued wave buffers and decodes on demand:
  - PCM8 (s8), PCM16 (s16), and DSP-ADPCM (8-byte frames, the header supplies the predictor and
    scale, decoded with the voice's 16 coefficients);
  - interleaved stereo for PCM, although nw::snd only uses mono voices.
- **ADPCM context.** A WaveBuffer's AdpcmContext is read at append time. It resets the history
  when the buffer starts and on every loop. Buffers without a context continue the previous
  state (stream blocks).
- **Resampling.** Step = rate × pitch / 32728.498, through a 4-sample history:
  - cubic Hermite for "polyphase";
  - linear;
  - none.
- **Filters.** One-pole low-pass from the cut-off frequency. Biquad: `y = b0 x + b1 x1 + b2 x2 +
  a1 y1 + a2 y2` in Q14, with a reset if it goes unstable.
- **Output mix.** Volume, then main L = FL + RL and R = FR + RR. Aux A and aux B keep 4
  channels.
- **Aux buses.** A bus is active only while a callback or an effect is set, as on the 3DS (the
  bus-enable logic in 003DDFC8 / 003DE088). For each active bus, the frame is processed in this
  order:
  1. the CPU effect, then the DSP effect (native fx.c);
  2. the game's aux callback, which processes the data in place;
  3. the result is added back with the aux return volume.
- **Final output.** Master volume, clamped to [-1, 1], stereo float.
- **fx.c.**
  - Delay: a feedback line per channel with damping in the loop, matching the FxDelay parameters.
  - Reverb: pre-delay, 4 early taps, 3 damped combs sized by FilterSize (default
    0xBE0 / 0xE60 / 0x820 from data 0x00716150) with T60 = fusedTime, plus 2 all-passes.
  - This is an approximation, not the SDK algorithm.
- **Status reporting.** The mixer reports `wait -> play -> done` through a callback. snd.c writes
  the result into the game's WaveBuffer+0x11 with release semantics; nw::snd polls that byte
  (00414348 and the stream code).

## Timing model

The 3DS DSP frame is 160 samples at 32728.498 Hz (268111856 / 8192), so 4.8887 ms or 204.55
frames/s. The SDK sound thread (003DD194) loops through these steps:

1. WaitForDspSync;
2. the user callback (mode 0 here, or in the aux thread for mode 1, which also runs the aux
   callbacks);
3. `frameCb(arg)` under the CriticalSection 0x007A1CD4;
4. SendParameterToDsp.

The native sound thread keeps the same order. `aud_out_wait()` waits until the host queue holds
less than the target latency (`ALBW_AUDIO_LATENCY_MS`, default 40 ms). It then runs `cb2`, then
`cb` under the sound-thread mutex, and then the mixer, which applies the parameters and renders
the frame. It pushes the 160 samples into a ring, and the SDL3 stream callback
(`SDL_OpenAudioDeviceStream`, F32 stereo 32728 Hz, resampled by SDL to the device rate) drains
that ring. The game's sound clock is therefore the audio device clock, so there is no drift.

With no device (`ALBW_AUDIO=0`, a failure, or headless), CLOCK_MONOTONIC paces the thread at
exactly 4.8887 ms per frame. `ALBW_AUDIO_WAV=path` also records the output as a 32728 Hz WAV.

Locks:

- the engine mutex (recursive) protects all voice, aux and effect state, and the drop callback
  runs under it, as under the SDK's voice-manager CS;
- game aux callbacks run without the engine mutex and hold the aux mutex instead; the mixer
  never holds both at once;
- the frame callback runs under the sound-thread mutex.

## 64-bit

Everything in snd.c and native/audio builds with `-m32` and `-m64`, and the audio test passes on
both. Game objects keep their 32-bit layout:

- WaveBuffer is 0x18 bytes, and its `bufferAddress` and `pAdpcmContext` fields are 32-bit
  values that `GPTR()` turns into pointers;
- the effect objects' `+4` and `+0x10` thunk pointers are also 32-bit values;
- `GetAuxCallback` writes 32-bit values into the game's 4-byte fields.

On x86-64 this works only while game memory and game code lie below 4 GB. The test allocates its
game-layout objects with `MAP_32BIT` for that reason. Native state is never stored in game
fields: Voice is a native object, and AllocVoice returns a pointer into a static array.

## Integration

- **Link.** `tools/link.sh` must compile `native/audio/mixer.c native/audio/fx.c
  native/audio/output.c` next to `native/sdk/*.c`. Otherwise the `aud_*` symbols become tripwire
  stubs. `bcstm.c` and `audio_test.c` are tools only.
- **snd_silent.c.** snd.c defines `func_003DBB7C` and `func_003DDB68`, which snd_silent.c also
  defines. Remove those two from snd_silent.c, or build it with `-DALBW_REAL_SND`. Its dsp::
  part (003D2810 + IPC wrappers 0010AAAC, 003D2D08..003D2F54) is not part of nn::snd and can
  stay. Note that boot_extra.c also defines 003D2810.
- **native/game/func_004154B4.c** (new). This is nw::snd SoundThread::CreateSoundThread. Its
  Ghidra version called 003DDB68 and 003DD410 without arguments, and its caller 00408030 passes
  only `this`. The native version needs none of its arguments: it starts the sound thread with
  frame callback 00415048, user callback 00415624, and argument 0x007A3DE8. It leaves profiling
  off, because with profiling on, 00415048 would call 003DD060 through a converted call that
  also lost its argument.

## Test

`native/audio/build.sh [OUT]` builds `audio_test64` and `audio_test32` from snd.c, the mixer,
and the RomFS reader. `audio_test [romfs .bcstm] [seconds] [out.wav]` checks the following:

- allocation, priorities, and the drop callback;
- a PCM16 looping sine at pitch 0.5 (frequency measured after resampling);
- the BCSTM played nw::snd-style: four ADPCM wave buffers per channel, refilled when their status
  turns "done", with the loop block using the loop context;
- the status sequence;
- the aux callback;
- level and clipping;
- the 48 kHz WAV output through `SDL_ConvertAudioSamples`;
- with `ALBW_AUDIO_PLAY=N`, live playback through the real sound thread and SDL3, including the
  measured pacing.
