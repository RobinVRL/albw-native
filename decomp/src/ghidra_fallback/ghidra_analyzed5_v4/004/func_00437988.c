#include "ghidra_types.h"

extern int func_005895C4(ushort *param_1,int param_2,int param_3);

// USA 00437988 <- EU 00437968 (Ghidra, non-matching)

undefined4 func_00437988(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x14);
  if (((*(char *)(param_1 + 0x1c) == '\0') ||
      ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) != 0)) ||
     ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x200)) {
    if (*(float *)(param_1 + 0x10) < fVar4) {
      iVar3 = func_005895C4((ushort *)(param_2 + 0x20),param_2 + 4,1);
      *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(param_2 + 0x20);
      *(float *)(param_1 + 0x14) = fVar4;
      if (iVar3 != 0) {
        *(float *)(param_1 + 0x10) = fVar4;
        if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) == 0) &&
           ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x200)) {
          uVar1 = 0;
        }
        else {
          uVar1 = 1;
        }
        *(undefined1 *)(param_1 + 0x1a) = uVar1;
      }
    }
    if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0xc00U) != 0) ||
       ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x200)) {
      *(undefined1 *)(param_1 + 0x1b) = 1;
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

