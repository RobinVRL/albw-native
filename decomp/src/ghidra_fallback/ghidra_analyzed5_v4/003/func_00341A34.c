#include "ghidra_types.h"

extern int func_003418E0(int param_1,undefined4 *param_2,undefined1 param_3);
extern int *DAT_00341c08;

// USA 00341A34 <- EU 00341A10 (Ghidra, non-matching)
// GLOBAL DAT_00341c08 int *

undefined4 func_00341A34(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if ((param_4 == 0) && (iVar3 = func_003418E0(param_1,param_2,1), iVar3 != 0)) {
    uVar4 = 0;
  }
  else {
    piVar1 = DAT_00341c08;
    *(undefined4 *)(param_1 + 0x68) = *param_2;
    *(undefined4 *)(param_1 + 0x6c) = param_2[1];
    fVar9 = ALBW_AS_F32(param_2[2]);
    *(float *)(param_1 + 0x70) = fVar9;
    iVar5 = *piVar1;
    iVar3 = *(int *)(iVar5 + 0x18);
    uVar4 = *(undefined4 *)(iVar5 + 0x1c);
    uVar6 = *(undefined4 *)(iVar5 + 0x20);
    *(int *)(param_1 + 0x80) = iVar3;
    *(undefined4 *)(param_1 + 0x84) = uVar4;
    *(undefined4 *)(param_1 + 0x88) = uVar6;
    if (((*(uint *)(param_1 + 0x328) & 0x80) == 0) || (*(char *)(param_1 + 0x33c) != '\f')) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    if (param_3 != 0) {
      iVar3 = 0;
    }
    *(undefined1 *)(param_1 + 0x8c) = uVar2;
    if (param_3 == 0) {
      fVar7 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0x90);
      fVar8 = fVar9 - *(float *)(param_1 + 0x98);
      if ((0x3fc00000 < (int)ALBW_AS_U32(SQRT(fVar7 * fVar7 + fVar8 * fVar8))) &&
         (fVar7 = *(float *)(param_1 + 0x68) - *(float *)(param_1 + 0xb8),
         fVar9 = fVar9 - *(float *)(param_1 + 0xc0),
         0x3fc00000 < (int)ALBW_AS_U32(SQRT(fVar7 * fVar7 + fVar9 * fVar9)))) {
        iVar3 = 3;
        do {
          iVar5 = iVar3 + -1;
          iVar3 = param_1 + iVar3 * 0x28;
          *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar3 + 0x68);
          *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0x6c);
          *(undefined4 *)(iVar3 + 0x98) = *(undefined4 *)(iVar3 + 0x70);
          *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(iVar3 + 0x74);
          *(undefined4 *)(iVar3 + 0xa0) = *(undefined4 *)(iVar3 + 0x78);
          *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar3 + 0x7c);
          *(undefined4 *)(iVar3 + 0xa8) = *(undefined4 *)(iVar3 + 0x80);
          *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(iVar3 + 0x84);
          *(undefined4 *)(iVar3 + 0xb0) = *(undefined4 *)(iVar3 + 0x88);
          *(undefined1 *)(iVar3 + 0xb4) = *(undefined1 *)(iVar3 + 0x8c);
          iVar3 = iVar5;
        } while (0 < iVar5);
        *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(param_1 + 0x98) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0x7c);
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(param_1 + 0x84);
        *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x88);
        *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_1 + 0x8c);
      }
    }
    else {
      do {
        iVar5 = param_1 + iVar3 * 0x28;
        *(undefined4 *)(iVar5 + 0x90) = *(undefined4 *)(param_1 + 0x68);
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar5 + 0x94) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(iVar5 + 0x98) = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(iVar5 + 0xa0) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(iVar5 + 0xa4) = *(undefined4 *)(param_1 + 0x70);
        uVar4 = *(undefined4 *)(param_1 + 0x84);
        uVar6 = *(undefined4 *)(param_1 + 0x88);
        *(undefined4 *)(iVar5 + 0xa8) = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(iVar5 + 0xac) = uVar4;
        *(undefined4 *)(iVar5 + 0xb0) = uVar6;
        *(undefined1 *)(iVar5 + 0xb4) = *(undefined1 *)(param_1 + 0x8c);
      } while (iVar3 < 4);
    }
    uVar4 = 1;
  }
  return uVar4;
}

