#include "ghidra_types.h"

extern int func_00100910(short *param_1);
extern int func_006761A0(int param_1);
extern undefined4 DAT_003c8a20;

// USA 003C89CC <- EU 003C89A8 (Ghidra, non-matching)
// GLOBAL DAT_003c8a20 undefined4

undefined4 func_003C89CC(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define psStack_24 (*(short * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  piVar2 = (int *)func_006761A0((int)param_1);
  uVar4 = DAT_003c8a20;
  if (piVar2 != (int *)0x0) {
    do {
      psStack_24 = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_24;
    } while (sVar1 != 0x3a);
    local_28 = 4;
    iVar3 = func_00100910(psStack_24);
    local_20 = (iVar3 + 1) * 2;
    uVar4 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_28,param_3,param_4);
  }
  return uVar4;
}

