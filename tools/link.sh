#!/usr/bin/env bash
# Link the native game: decomp objects + game data + native runtime/platform/SDK + tripwire stubs.
#   tools/link.sh            (after tools/build_decomp.py and tools/gen_data.py)
set -euo pipefail
cd "$(dirname "$0")/.."
B=build
CFLAGS=(-m32 -std=gnu11 -O2 -g -Wall -Wextra -Wno-unused-parameter -fno-strict-aliasing)
SDL=$(PKG_CONFIG_PATH=/usr/lib32/pkgconfig pkg-config --cflags --libs sdl3)

mkdir -p $B/native
NATIVE=()
for f in native/platform/platform.c native/runtime/*.c $(ls native/sdk/*.c native/game/*.c native/robust/*.c 2>/dev/null); do
    o=$B/native/$(basename "$f" .c).o
    EXTRA=()
    [[ "$f" == native/game/* || "$f" == native/robust/* ]] && EXTRA=(-Inative/robust -include native/albw_native.h -I../albw-decomp-ai/shared/include -w -Wno-error=implicit-function-declaration -Wno-error=int-conversion -Wno-error=incompatible-pointer-types -Wno-error=incompatible-function-pointer-types -Wno-error=return-type)  # decompiled code only
    [[ -f "$o" && "$o" -nt "$f" ]] || clang "${CFLAGS[@]}" -Inative/include "${EXTRA[@]}" \
        $(PKG_CONFIG_PATH=/usr/lib32/pkgconfig pkg-config --cflags sdl3) -c "$f" -o "$o"
    NATIVE+=("$o")
done
# data symbols the native code uses get defined by the data generator too
llvm-nm -u --format=just-symbols "${NATIVE[@]}" | sort -u > $B/native_syms.txt
python3 tools/gen_data.py --code "${ALBW_CODE_BIN:-../albw-decomp-ai/rom/eu_code.bin}" \
    --map ../albw-decomp-ai/shared/eu_usa_map.json --extra $B/native_syms.txt >/dev/null
clang --target=i686-linux-gnu -c $B/data/gamedata.s -o $B/data/gamedata.o
# exactly the objects of the current source selection (stale ones from older selections excluded)
python3 -c "import json;print('\n'.join(json.load(open('$B/decomp/report.json'))['objects']))" > $B/objs.txt
echo $B/data/gamedata.o >> $B/objs.txt
ld.lld -m elf_i386 -r -o $B/albw_game.o @$B/objs.txt
# names the decomp calls by C++/ad-hoc names -> the function they are (tools/resolve_names.py +
# hand-verified ones)
cat native/symbol_aliases.txt native/symbol_aliases_manual.txt 2>/dev/null | grep -v '^#' | grep . > $B/aliases.txt || true
# a "function" name whose address lies in the data sections is data (prefix-based guesses like g_)
llvm-nm -u --format=just-symbols $B/albw_game.o | python3 -c "
import sys,re
for n in sys.stdin.read().split():
    m=re.match(r'^func_([0-9A-F]{8})$',n)
    if m and 0x693000<=int(m.group(1),16)<0x7AFE34: print(n,'data_'+m.group(1))" >> $B/aliases.txt
[[ -s $B/aliases.txt ]] && llvm-objcopy --redefine-syms=$B/aliases.txt $B/albw_game.o
# the game runs its static constructors itself (albw_ctors, in its own order): drop the native
# constructor lists the C++ sources generated, so nothing game-side runs before main()
llvm-objcopy --remove-section=.init_array --remove-section=.rel.init_array \
             --remove-section=.ctors --remove-section=.rel.ctors $B/albw_game.o

python3 tools/gen_stubs.py $B/albw_game.o "${NATIVE[@]}" > $B/stubs.c
clang "${CFLAGS[@]}" -w -c $B/stubs.c -o $B/native/stubs.o
clang -m32 -no-pie -o $B/albw "${NATIVE[@]}" $B/native/stubs.o $B/albw_game.o $SDL -lm -rdynamic
echo "linked $B/albw ($(du -h $B/albw | cut -f1))"
