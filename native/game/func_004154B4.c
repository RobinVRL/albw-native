/* USA 004154B4 (EU 00415494) nw::snd::internal::driver::SoundThread::CreateSoundThread(
 *     void *stack, u32 stackSize, s32 priority, void *userStack, u32 userStackSize,
 *     s32 userPriority, s32 mode, bool enableProfile) -> bool
 * (argument order from the EU disassembly; the only caller, nw::snd::SoundSystem::Initialize
 * 00408030, passes its work memory, param+8 / +0 / +4 and (s8)param+0x1D).
 *   - first call: +0x1F4 = initialised, +0x1F6 = enableProfile, +0x1F7 = 0; +0x1F0 = mode;
 *   - constructs the SoundThread singleton 0x007A3DE8 (guard 0x007164C4, ctor 00415750);
 *   - nn::snd StartSoundThread (003DDB68): frame callback 00415048 and user callback 00415624,
 *     both with the singleton, the user-thread config only for mode 1 with a stack;
 *   - 003DD410(enableProfile); returns result >= 0.
 * Native: the stacks, priorities and the user-thread mode have no host meaning (native/sdk/snd.c
 * runs both callbacks in its own sound thread), so this version uses none of the arguments:
 * the Ghidra-converted caller 00408030 currently calls it with `this` only, and the Ghidra
 * version of this function passed no arguments at all to 003DDB68 / 003DD410. Profiling is
 * left off (it would make 00415048 call 003DD060, whose Ghidra-converted call also lost its
 * argument). Confidence: high (behaviour), see native/sdk/snd.md. */
#include <stdint.h>

extern uint32_t data_007164C4[];   /* static-init guard of the SoundThread singleton */
extern uint8_t data_007A3DE8[];    /* nw::snd SoundThread singleton */

int func_00100174(uint32_t *guard);        /* guard acquire: non-zero = construct now */
void *func_00415750(void *self);           /* SoundThread ctor */
void func_00415048(void *self);            /* per-sound-frame callback */
void func_00415624(void *self);            /* user callback (runs +0x1E8(+0x1EC)) */
uint32_t func_003DDB68(const uint32_t *cfg, void (*cb)(void *), void *arg, const uint32_t *aux_cfg,
                       void (*cb2)(void *), void *arg2, int32_t mode);
void func_003DD410(uint8_t enable);

int32_t func_004154B4(uint8_t *self, void *stack, uint32_t stack_size, int32_t priority,
                      void *user_stack, uint32_t user_stack_size, int32_t user_priority,
                      int32_t mode, int8_t enable_profile)
{
    (void)stack; (void)stack_size; (void)priority; (void)user_stack; (void)user_stack_size;
    (void)user_priority; (void)mode; (void)enable_profile;
    if (!self[0x1F4]) {
        self[0x1F4] = 1;
        self[0x1F6] = 0;   /* profiling off natively */
        self[0x1F7] = 0;
    }
    *(uint32_t *)(self + 0x1F0) = 0;   /* mode 0: user callback in the sound thread */
    if (!(data_007164C4[0] & 1) && func_00100174(data_007164C4))
        func_00415750(data_007A3DE8);
    uint32_t cfg[3] = {0, 0, 0};
    uint32_t r = func_003DDB68(cfg, func_00415048, data_007A3DE8, 0, func_00415624, data_007A3DE8, 0);
    func_003DD410(0);
    return (int32_t)r >= 0;
}
