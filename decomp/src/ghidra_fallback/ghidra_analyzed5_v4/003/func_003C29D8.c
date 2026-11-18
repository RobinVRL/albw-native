#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003C24B8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern float DAT_003c2cc4;
extern float DAT_003c2cc8;
extern int *DAT_003c2ccc;
extern uint *DAT_003c2cd0;
extern undefined4 *DAT_003c2cd4;
extern undefined4 DAT_003c2cd8;

// USA 003C29D8 <- EU 003C29B4 (Ghidra, non-matching)
// GLOBAL DAT_003c2cc4 float
// GLOBAL DAT_003c2cc8 float
// GLOBAL DAT_003c2ccc int *
// GLOBAL DAT_003c2cd0 uint *
// GLOBAL DAT_003c2cd4 undefined4 *
// GLOBAL DAT_003c2cd8 undefined4

undefined4 func_003C29D8(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar9 = DAT_003c2cc4;
  fVar8 = DAT_003c2cc8;
  if (param_1[0xb] == 0) goto LAB_003c2ba0;
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_003c2ccc + 0x3dbbc,param_1[0xb]);
  if (puVar1 == (undefined4 *)0x0) {
    if ((uint)param_1[0xc] < 2 || param_1[0xc] == 4) {
LAB_003c2ab0:
      param_1[0xc] = 3;
      func_003C24B8((int)param_1);
      param_1[0x16] = (int)ALBW_AS_U32(fVar9);
    }
  }
  else {
    if (((*DAT_003c2cd0 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_003c2cd0), iVar2 != 0)) {
      *DAT_003c2cd4 = DAT_003c2cd8;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_003c2cd4);
    uVar3 = param_1[0xc];
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      if ((uVar3 != 4) && (*(char *)((int)puVar1 + 0x48e) == '\0')) {
        (**(code **)(*param_1 + 8))(param_1);
        piVar4 = (int *)param_1[2];
        param_1[3] = *piVar4;
        param_1[4] = piVar4[1];
        iVar2 = piVar4[2];
        param_1[0xc] = 4;
        param_1[5] = iVar2;
      }
      if (*(char *)(puVar1 + 0x124) == '\x01') {
        if ((uint)param_1[0xc] < 2 || param_1[0xc] == 4) {
          param_1[0xc] = 3;
          func_003C24B8((int)param_1);
          param_1[0x16] = (int)ALBW_AS_U32(fVar9);
        }
        (**(code **)(*param_1 + 4))(param_1);
        param_1[0xb] = 0;
      }
      if (*(char *)((int)param_1 + 0x76) != '\0') {
        fVar7 = ALBW_AS_F32(param_1[0x16]);
        uVar3 = param_1[0x12];
        if (uVar3 < (uint)param_1[0x13]) {
          uVar3 = uVar3 + 1;
          param_1[0x12] = uVar3;
        }
        iVar2 = param_1[0x13] - uVar3;
        if (iVar2 < 2) {
          iVar2 = 1;
        }
        fVar10 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = fVar7 + (fVar9 - fVar7) * (fVar8 / fVar10);
        param_1[0x16] = (int)ALBW_AS_U32(fVar10);
        *(float *)(param_1[2] + 4) = *(float *)(param_1[2] + 4) - (fVar10 - fVar7);
      }
      goto LAB_003c2ba0;
    }
    if (uVar3 < 2 || uVar3 == 4) goto LAB_003c2ab0;
  }
  (**(code **)(*param_1 + 4))(param_1);
  param_1[0xb] = 0;
LAB_003c2ba0:
  switch(param_1[0xc]) {
  case 0:
    fVar9 = ALBW_AS_F32(param_1[0x16]);
    uVar3 = param_1[0xf];
    uVar5 = param_1[0x10];
    bVar6 = uVar3 < uVar5;
    if (bVar6) {
      uVar3 = uVar3 + 1;
      param_1[0xf] = uVar3;
    }
    iVar2 = uVar5 - uVar3;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar7 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar9 + (ALBW_AS_F32(param_1[0x15]) - fVar9) * (fVar8 / fVar7);
    param_1[0x16] = (int)ALBW_AS_U32(fVar8);
    *(float *)(param_1[2] + 4) = *(float *)(param_1[2] + 4) - (fVar8 - fVar9);
    if (!bVar6) {
      param_1[0xc] = 1;
    }
    break;
  case 2:
    uVar3 = param_1[0x10];
    uVar5 = param_1[0xf];
    fVar7 = ALBW_AS_F32(param_1[0x16]);
    if (uVar5 < uVar3) {
      iVar2 = uVar5 + 1;
      param_1[0xf] = iVar2;
    }
    else {
      iVar2 = param_1[0xf];
    }
    iVar2 = uVar3 - iVar2;
    if (iVar2 < 2) {
      iVar2 = 1;
    }
    fVar10 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = fVar7 + (fVar9 - fVar7) * (fVar8 / fVar10);
    param_1[0x16] = (int)ALBW_AS_U32(fVar9);
    *(float *)(param_1[2] + 4) = *(float *)(param_1[2] + 4) - (fVar9 - fVar7);
    if (uVar5 >= uVar3) {
      param_1[0xc] = 3;
      func_003C24B8((int)param_1);
    }
  }
  if ((char)param_1[0x1d] != '\0') {
    *(int *)(param_1[1] + 0x854) = param_1[0x16];
  }
  return 0;
}

