#include "ghidra_types.h"

extern float DAT_00234d90;
extern float DAT_00234d94;

// USA 00234CE0 <- EU 00234CE0 (Ghidra, non-matching)
// GLOBAL DAT_00234d90 float
// GLOBAL DAT_00234d94 float

void func_00234CE0(int param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  fVar2 = DAT_00234d94;
  fVar1 = DAT_00234d90;
  iVar3 = *(int *)(param_1 + 0x54c);
  if ((iVar3 != 0) && (uVar4 = 0, 0 < *(int *)(iVar3 + 0xc))) {
    do {
      iVar5 = *(int *)(iVar3 + 0x14);
      if (uVar4 < *(uint *)(iVar3 + 0xc)) {
        iVar5 = iVar5 + uVar4 * 0x28;
      }
      if (fVar1 <= fVar2) {
        *(float *)(iVar5 + 0xc) = fVar1;
        *(float *)(iVar5 + 8) = fVar1;
      }
      else {
        *(float *)(iVar5 + 0xc) = *(float *)(iVar5 + 0x14);
        *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
      }
      uVar4 = uVar4 + 1;
      *(float *)(iVar5 + 0x10) = fVar2;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined1 *)(iVar5 + 0x26) = 1;
      *(undefined1 *)(iVar5 + 0x25) = 1;
    } while ((int)uVar4 < *(int *)(iVar3 + 0xc));
  }
  return;
}

