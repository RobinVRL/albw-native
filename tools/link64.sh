#!/usr/bin/env bash
# Link the x86-64 game (low-4GB mode, native/64BIT.md): mirrors tools/link.sh for 64-bit.
#   tools/build_decomp64_v2.sh && tools/link64.sh          -> build/albw64
#   ALBW_FRONTEND=qt tools/link64.sh                         -> Qt frontend instead of platform.c
#                                                              (build it first: native/frontend/qt/build.sh)
# Separate outputs (build/decomp64, build/native64, build/data64, build/albw64): the 32-bit
# build (tools/link.sh, build/decomp, build/albw) is untouched.
#
# Low-4GB mode: non-PIE at the default base 0x400000, the game data (gamedata.s) in the binary,
# its pointer words `.long` = R_X86_64_32 relocations (the linker refuses any symbol above 4 GiB),
# all memory given to the game from below 2 GiB (native/runtime/lowmem.c).
set -euo pipefail
cd "$(dirname "$0")/.."
B=build
O=$B/native64
export ALBW_ARCH=x86_64
# float model as link.sh (the 3DS VFP: single precision in SSE, no FMA contraction); no
# vectorizers: LLVM 23 crashes on vectors of __ptr32 casts (ALBW_GP)
CFLAGS=(-m64 -std=gnu11 -O2 -g -Wall -Wextra -Wno-unused-parameter -fno-strict-aliasing -ffp-contract=off
        -fms-extensions -fno-vectorize -fno-slp-vectorize)
SDLC=$(pkg-config --cflags sdl3)
FE=${ALBW_FRONTEND:-sdl}
if [[ $FE == qt ]]; then
    QTLIB=${ALBW_QT_LIB:-$B/frontend-qt/libalbw_frontend_qt.a}
    [[ -f $QTLIB ]] || { echo "missing $QTLIB (native/frontend/qt/build.sh)"; exit 1; }
    LIBS=("$QTLIB" $(pkg-config --libs Qt6Widgets Qt6OpenGL Qt6OpenGLWidgets sdl3) -lGL -lstdc++)
    PLATFORM=()
else
    LIBS=($(pkg-config --libs sdl3))
    PLATFORM=(native/platform/platform.c)
fi

mkdir -p $O $B/data64
NATIVE=()
# native/x64/*.c: 64-bit-only replacements (strong func_<ADDR>); a file there named like one
# in native/game or native/robust replaces it in this build
X64=" $( (ls native/x64/*.c 2>/dev/null || true) | xargs -rn1 basename | tr "\n" " ") "
for f in "${PLATFORM[@]}" native/runtime/*.c native/audio/mixer.c native/audio/fx.c native/audio/output.c \
         $(ls native/render/*.c native/sdk/*.c native/game/*.c native/robust/*.c native/gameplay/*.c native/x64/*.c 2>/dev/null); do
    [[ "$f" == native/gameplay/func_0051E5F8.c ]] && continue  # as link.sh
    b=$(basename "$f" .c)
    if [[ ( "$f" == native/game/* || "$f" == native/robust/* || "$f" == native/gameplay/* ) && "$X64" == *" $b.c "* ]]; then continue; fi
    sub=$(basename "$(dirname "$f")")
    o=$O/$sub/$b.o
    mkdir -p $O/$sub
    EXTRA=()
    [[ "$f" == native/game/* || "$f" == native/robust/* || "$f" == native/gameplay/* || "$f" == native/x64/* ]] && EXTRA=(-Inative/robust -Inative/gameplay -include native/albw_native.h -I../albw-decomp-ai/shared/include -w -Wno-error=implicit-function-declaration -Wno-error=int-conversion -Wno-error=incompatible-pointer-types -Wno-error=incompatible-function-pointer-types -Wno-error=return-type)
    if [[ "${ALBW_REAL_SND:-1}" == 0 && ( "$f" == native/sdk/snd.c || "$f" == native/audio/* ) ]]; then continue; fi
    if [[ "$f" == native/sdk/snd_silent.c ]]; then
        [[ "${ALBW_REAL_SND:-1}" != 0 ]] && EXTRA+=(-DALBW_REAL_SND)
        rm -f "$o"
    fi
    src=$f
    if [[ "$f" == native/game/* || "$f" == native/robust/* || "$f" == native/gameplay/* ]]; then
        # pointer words of game memory stay 4 bytes (tools/ptr32.py --native)
        src=$O/$sub/$b.p32.c
        EXTRA+=(-I"$(dirname "$f")")
        [[ -f "$src" && "$src" -nt "$f" && "$src" -nt tools/ptr32.py ]] || python3 tools/ptr32.py --native "$f" "$src"
    fi
    if ! [[ -f "$o" && "$o" -nt "$src" ]]; then
        for try in 1 2 3 4 5; do
            if clang "${CFLAGS[@]}" -Inative/include "${EXTRA[@]}" $SDLC -c "$src" -o "$o" 2>$O/err.txt; then break; fi
            # a symbol address stored into a 4-byte pointer: route it through ALBW_LAUNDER
            syms=$(grep -o 'addrspacecast (ptr @[A-Za-z_][A-Za-z0-9_]*' $O/err.txt | sed 's/.*@//' | sort -u)
            if [[ -z "$syms" || "$src" == "$f" ]]; then cat $O/err.txt >&2; exit 1; fi
            python3 tools/ptr32.py --launder "$src" $syms
        done
    fi
    NATIVE+=("$o")
done
llvm-nm -u --format=just-symbols "${NATIVE[@]}" | sort -u > $B/native64_syms.txt
python3 tools/gen_data.py --code "${ALBW_CODE_BIN:-../albw-decomp-ai/rom/eu_code.bin}" \
    --map ../albw-decomp-ai/shared/eu_usa_map.json --extra $B/native64_syms.txt \
    --report $B/decomp64/report.json --out $B/data64/gamedata.s >/dev/null
clang --target=x86_64-linux-gnu -c $B/data64/gamedata.s -o $B/data64/gamedata.o
python3 -c "import json;print('\n'.join(json.load(open('$B/decomp64/report.json'))['objects']))" > $B/objs64.txt
echo $B/data64/gamedata.o >> $B/objs64.txt
ld.lld -m elf_x86_64 -r -o $B/albw64_game.o @$B/objs64.txt
cat native/symbol_aliases.txt native/symbol_aliases_manual.txt 2>/dev/null | grep -v '^#' | grep . > $B/aliases64.txt || true
llvm-nm -u --format=just-symbols $B/albw64_game.o | python3 -c "
import sys,re
for n in sys.stdin.read().split():
    m=re.match(r'^func_([0-9A-F]{8})$',n)
    if m and 0x693000<=int(m.group(1),16)<0x7AFE34: print(n,'data_'+m.group(1))" >> $B/aliases64.txt
[[ -s $B/aliases64.txt ]] && llvm-objcopy --redefine-syms=$B/aliases64.txt $B/albw64_game.o
llvm-objcopy --remove-section=.init_array --remove-section=.rela.init_array \
             --remove-section=.ctors --remove-section=.rela.ctors $B/albw64_game.o

# returns-this thunks (see link.sh), System V x86-64: arguments in rdi rsi rdx rcx r8 r9 (and
# xmm0-7, al for varargs) are passed through untouched; 16 stack words are copied; the thunk
# returns the incoming rdi (the first argument). r10/r11 are free scratch registers.
llvm-nm --defined-only --format=just-symbols "${NATIVE[@]}" | sort -u > $B/native64_defs.txt
llvm-nm --defined-only --format=just-symbols $B/albw64_game.o | grep '__impl$' | sort -u | python3 -c "
import sys
native = set(open('$B/native64_defs.txt').read().split())
out = ['.text']
for impl in sys.stdin.read().split():
    f = impl[:-len('__impl')]
    if f in native: continue
    body = ['  push %rbx', '  mov %rdi, %rbx', '  sub \$128, %rsp']
    for i in range(16):
        body += ['  mov %d(%%rsp), %%r11' % (144 + 8 * i), '  mov %%r11, %d(%%rsp)' % (8 * i)]
    body += ['  call %s' % impl, '  mov %rbx, %rax', '  add \$128, %rsp', '  pop %rbx', '  ret']
    out += ['.globl %s' % f, '.type %s,@function' % f, '.p2align 4', '%s:' % f] + body
print('\\n'.join(out))
print('.section .note.GNU-stack,\\\"\\\",@progbits')" > $B/thunks64.s
clang --target=x86_64-linux-gnu -c $B/thunks64.s -o $O/thunks.o
NATIVE+=($O/thunks.o)
DEFS=()
[[ $FE == qt ]] && DEFS=(--defs="$QTLIB")
python3 tools/gen_stubs.py $B/albw64_game.o "${NATIVE[@]}" "${DEFS[@]}" > $B/stubs64.c
clang "${CFLAGS[@]}" -w -c $B/stubs64.c -o $O/stubs.o
OUT=$B/albw64
[[ $FE == qt ]] && OUT=$B/albw64-qt
clang -m64 -no-pie -o $OUT "${NATIVE[@]}" $O/stubs.o $B/albw64_game.o "${LIBS[@]}" -lm -rdynamic
echo "linked $OUT ($(du -h $OUT | cut -f1))"
