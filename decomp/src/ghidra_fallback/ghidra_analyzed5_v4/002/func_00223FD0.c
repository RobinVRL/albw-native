#include "ghidra_types.h"

extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00224060;
extern int *DAT_00224064;

// USA 00223FD0 <- EU 00223FD0 (Ghidra, non-matching)
// GLOBAL DAT_00224060 undefined4
// GLOBAL DAT_00224064 int *

undefined4 func_00223FD0(int param_1,short param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  ushort uVar4;
  
  *(undefined4 *)(param_1 + 0x6cc) = DAT_00224060;
  piVar1 = DAT_00224064;
  if (*(char *)(param_1 + 0x744) == '\0') {
    *(undefined1 *)(param_1 + 0x744) = 0x19;
    iVar3 = func_004D80EC((float *)(*(int *)(param_1 + 0x608) + 4),*(float **)(*piVar1 + 0x1c),0);
    *(int *)(param_1 + 0x6d0) = iVar3 + -0x80000000;
    uVar4 = *(short *)(param_1 + 0x740) + param_2;
    *(ushort *)(param_1 + 0x740) = uVar4;
    if (0x13 < uVar4) {
      *(undefined1 *)(param_1 + 0x744) = 0x1e;
      func_0065E774((undefined4 *)(param_1 + 0x468),0xe);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

