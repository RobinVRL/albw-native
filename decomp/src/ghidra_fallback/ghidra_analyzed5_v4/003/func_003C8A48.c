#include "ghidra_types.h"

extern int func_00100910(short *param_1);
extern int func_006761A0(int param_1);
extern undefined4 DAT_003c8a8c;

// USA 003C8A48 <- EU 003C8A24 (Ghidra, non-matching)
// GLOBAL DAT_003c8a8c undefined4

undefined4 func_003C8A48(short *param_1)

{
  short sVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define psStack_1c (*(short * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  piVar2 = (int *)func_006761A0((int)param_1);
  uVar4 = DAT_003c8a8c;
  if (piVar2 != (int *)0x0) {
    do {
      psStack_1c = param_1 + 1;
      sVar1 = *param_1;
      param_1 = psStack_1c;
    } while (sVar1 != 0x3a);
    local_20 = 4;
    iVar3 = func_00100910(psStack_1c);
    local_18 = (iVar3 + 1) * 2;
    uVar4 = (**(code **)(*piVar2 + 8))(piVar2,&local_20);
  }
  return uVar4;
}

