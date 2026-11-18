#include "ghidra_types.h"

extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_004356B4(int *param_1);
extern float DAT_002ec188;
extern float *DAT_002ec18c;
extern float *DAT_002ec190;

// USA 002EBFB8 <- EU 002EBF94 (Ghidra, non-matching)
// GLOBAL DAT_002ec188 float
// GLOBAL DAT_002ec18c float *
// GLOBAL DAT_002ec190 float *

/* WARNING: Variable defined which should be unmapped: objStack_40 */

void func_002EBFB8(int param_1)

{
  uint in_r1;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define objStack_40 ((uint *)(albw_frame + 0x0))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  piVar4 = *(int **)(param_1 + 0x424);
  piVar3 = *(int **)(param_1 + 0x430);
  if (piVar4 != (int *)0x0 && piVar3 != (int *)0x0) {
    if (*(char *)(param_1 + 0xe0c) == '\0') {
      pfVar6 = (float *)(*(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
                        *(int *)(param_1 + 0xb88) * 0x30);
      fVar9 = DAT_002ec188;
      func_00115CA8((float *)objStack_40,pfVar6,DAT_002ec18c);
      func_00115CA8(&fStack_34,pfVar6,DAT_002ec190);
      objStack_40[1] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) + ALBW_AS_F32(piVar4[0x1c]) * fVar9));
      piVar4[1] = *(int *)(param_1 + 0x3d0);
      piVar4[2] = *(int *)(param_1 + 0x3d4);
      piVar4[3] = *(int *)(param_1 + 0x3d8);
      piVar4[0x16] = objStack_40[0];
      piVar4[0x17] = objStack_40[1];
      piVar4[0x18] = iStack_38;
      piVar4[0x19] = (int)ALBW_AS_U32(fStack_34);
      piVar4[0x1a] = objStack_40[1];
      piVar4[0x1b] = iStack_2c;
      local_30 = ALBW_AS_F32(objStack_40[1]);
      func_004356B4(piVar4);
      objStack_40[1] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) + ALBW_AS_F32(piVar3[0x1c]) * fVar9));
      piVar3[1] = *(int *)(param_1 + 0x3d0);
      piVar3[2] = *(int *)(param_1 + 0x3d4);
      piVar3[3] = *(int *)(param_1 + 0x3d8);
      piVar3[0x16] = objStack_40[0];
      piVar3[0x17] = objStack_40[1];
      piVar3[0x18] = iStack_38;
      piVar3[0x19] = (int)ALBW_AS_U32(fStack_34);
      piVar3[0x1a] = objStack_40[1];
      piVar3[0x1b] = iStack_2c;
      local_30 = ALBW_AS_F32(objStack_40[1]);
      func_004356B4(piVar3);
      in_r1 = extraout_r1_00;
    }
    else {
      iVar5 = *(int *)(param_1 + 0xddc);
      iVar7 = *(int *)(param_1 + 0xde4);
      fVar9 = *(float *)(param_1 + 0xc) + ALBW_AS_F32(piVar3[0x1c]) * DAT_002ec188;
      piVar4[1] = iVar5;
      piVar4[2] = (int)ALBW_AS_U32(fVar9);
      piVar4[0x16] = iVar5;
      piVar4[3] = iVar7;
      piVar4[0x17] = (int)ALBW_AS_U32(fVar9);
      piVar4[0x19] = iVar5;
      piVar4[0x18] = iVar7;
      piVar4[0x1a] = (int)ALBW_AS_U32(fVar9);
      piVar4[0x1b] = iVar7;
      func_004356B4(piVar4);
      piVar3[1] = iVar5;
      piVar3[2] = (int)ALBW_AS_U32(fVar9);
      piVar3[3] = iVar7;
      iVar1 = piVar4[0x1c];
      piVar3[0x16] = iVar5;
      piVar3[0x17] = (int)ALBW_AS_U32(fVar9);
      piVar3[0x19] = iVar5;
      piVar3[0x18] = iVar7;
      piVar3[0x1a] = (int)ALBW_AS_U32(fVar9);
      piVar3[0x1c] = iVar1;
      piVar3[0x1b] = iVar7;
      func_004356B4(piVar3);
      in_r1 = extraout_r1;
    }
  }
  iVar1 = *(int *)(param_1 + 0xaf4);
  if (iVar1 != 0) {
    in_r1 = (uint)*(byte *)(param_1 + 0xe0c);
  }
  if (iVar1 != 0 && in_r1 != 0) {
    fVar8 = *(float *)(param_1 + 0xb94);
    fVar9 = *(float *)(param_1 + 0xde0);
    uVar2 = *(undefined4 *)(param_1 + 0xde4);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0xddc);
    *(float *)(iVar1 + 8) = fVar9 + fVar8;
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
    func_004356B4(*(int **)(param_1 + 0xaf4));
    *(undefined1 *)(param_1 + 0xe2d) = 0;
    objStack_40[0] = param_1 + 0xcd8;
    *(undefined1 *)(param_1 + 0xe2e) = 0;
    objStack_40[1] = 0;
    func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0xaf4),0,0x1000,objStack_40[0],0);
  }
  return;
}

