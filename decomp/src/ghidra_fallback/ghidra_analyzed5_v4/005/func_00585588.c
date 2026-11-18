#include "ghidra_types.h"

extern int func_0055696C(int param_1,int param_2);
extern int func_00588BE4(int param_1);
extern float fRam005856f0;
extern int *DAT_005856e0;
extern int *DAT_005856e4;
extern int *DAT_005856e8;
extern float DAT_005856ec;

// USA 00585588 <- EU 00585560 (Ghidra, non-matching)
// GLOBAL DAT_005856e0 int *
// GLOBAL DAT_005856e4 int *
// GLOBAL DAT_005856e8 int *
// GLOBAL DAT_005856ec float
// GLOBAL UNK_005856f0 float

int func_00585588(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  
  iVar6 = 0;
  iVar5 = 1;
  iVar4 = 4;
  iVar3 = *DAT_005856e0;
  iVar1 = func_00588BE4(param_1);
  if ((iVar1 == *DAT_005856e4) || (iVar1 = func_00588BE4(param_1), iVar1 == *DAT_005856e8)) {
    iVar5 = 3;
    iVar4 = 5;
  }
  if (iVar3 != 0) {
    iVar6 = func_0055696C(iVar3,0x1e);
    if (*(uint *)(param_2 + 0x14) < *(uint *)(param_1 + 0x620)) {
      iVar1 = *(int *)(param_1 + 0x624) + *(uint *)(param_2 + 0x14) * 0x118;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x624);
    }
    fVar7 = DAT_005856ec;
    if (iVar4 != 5) {
      fVar7 = fRam005856f0;
    }
    if (fVar7 < *(float *)(*(int *)(iVar3 + 0x1c) + 4) - *(float *)(*(int *)(iVar1 + 0x28) + 8)) {
      return 0;
    }
  }
  if (param_2 != 0) {
    uVar2 = *(uint *)(param_2 + 0x14);
    if (iVar6 < iVar5) {
      if (uVar2 < *(uint *)(param_1 + 0x620)) {
        iVar1 = *(int *)(param_1 + 0x624) + uVar2 * 0x118;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x624);
      }
      iVar1 = *(int *)(iVar1 + 0x28);
      *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 4);
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 8);
      *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
      *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x61c);
      return 0x14;
    }
    if (uVar2 < *(uint *)(param_1 + 0x620)) {
      iVar1 = *(int *)(param_1 + 0x624) + uVar2 * 0x118;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x624);
    }
    iVar1 = *(int *)(iVar1 + 0x28);
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(iVar1 + 0xc);
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) - *(float *)(param_1 + 0x61c);
  }
  return iVar4;
}

