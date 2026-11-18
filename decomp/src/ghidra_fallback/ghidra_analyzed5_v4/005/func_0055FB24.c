#include "ghidra_types.h"

extern int *DAT_0055fb68;

// USA 0055FB24 <- EU 0055FAFC (Ghidra, non-matching)
// GLOBAL DAT_0055fb68 int *

void func_0055FB24(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  *(undefined1 *)(param_2 + 0x23c0) = 1;
  piVar1 = DAT_0055fb68;
  *(undefined4 *)(param_2 + 0x23b0) = uVar3;
  *(undefined4 *)(param_2 + 0x23bc) = uVar4;
  *(undefined4 *)(param_2 + 0x23b4) = 0;
  if (*(int *)(*piVar1 + 0x658) != 0) {
    uVar2 = *(uint *)(*(int *)(*(int *)(*piVar1 + 0x658) + 4) + 0x2c);
    *(uint *)(param_2 + 0x23b8) =
         uVar2 << 0x18 | ((uVar2 << 0x10) >> 0x18) << 0x10 | ((uVar2 << 8) >> 0x18) << 8 |
         uVar2 >> 0x18;
  }
  return;
}

