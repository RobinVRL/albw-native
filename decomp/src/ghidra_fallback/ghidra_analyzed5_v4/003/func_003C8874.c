#include "ghidra_types.h"

extern int func_00100910(short *param_1);
extern int func_006761A0(int param_1);
extern uint DAT_003c88e0;

// USA 003C8874 <- EU 003C8850 (Ghidra, non-matching)
// GLOBAL DAT_003c88e0 uint

uint func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(short * *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  puVar2 = (undefined4 *)func_006761A0((int)param_2);
  uVar4 = DAT_003c88e0;
  if (puVar2 != (undefined4 *)0x0) {
    do {
      local_20 = param_2 + 1;
      sVar1 = *param_2;
      param_2 = local_20;
    } while (sVar1 != 0x3a);
    local_24 = 4;
    iVar3 = func_00100910(local_20);
    local_1c = (iVar3 + 1) * 2;
    uVar4 = (**(code **)*puVar2)(puVar2,&local_28,&local_24,param_3);
    if ((uVar4 & 0x80000000) == 0) {
      *param_1 = local_28;
    }
  }
  return uVar4;
}

