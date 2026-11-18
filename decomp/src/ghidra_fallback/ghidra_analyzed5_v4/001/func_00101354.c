#include "ghidra_types.h"

extern int func_00101DE8(undefined4 *param_1,undefined4 param_2);
extern uint *DAT_0010138c;

// USA 00101354 <- EU 00101354 (Ghidra, non-matching)
// GLOBAL DAT_0010138c uint *

uint func_00101354(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint *)(albw_frame + 0x0))
  puVar1 = DAT_0010138c;
  uVar3 = *DAT_0010138c;
  if (*DAT_0010138c == 0) {
    local_10 = 0;
    puVar2 = func_00101DE8(&local_10,param_2);
    uVar3 = (uint)puVar2 & 0x80000000;
    if (((uint)puVar2 & 0x80000000) == 0) {
      *puVar1 = local_10;
      uVar3 = local_10;
    }
  }
  return uVar3;
}

