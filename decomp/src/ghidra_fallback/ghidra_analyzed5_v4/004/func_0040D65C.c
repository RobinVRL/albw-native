#include "ghidra_types.h"

extern float func_00111EA8(int param_1);
extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);
extern float DAT_0040d7e0;
extern float DAT_0040d7e4;

// USA 0040D65C <- EU 0040D63C (Ghidra, non-matching)
// GLOBAL DAT_0040d7e0 float
// GLOBAL DAT_0040d7e4 float

undefined4 func_0040D65C(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  
  (**(code **)(*param_1 + 0x2c))(param_1);
  fVar6 = DAT_0040d7e4;
  fVar9 = DAT_0040d7e4;
  if (*(char *)((int)param_1 + 0x9e) != '\x02') {
    fVar7 = *(float *)(param_1[4] + 0x3c) * ALBW_AS_F32(param_1[0x31]) * DAT_0040d7e0;
    fVar6 = func_00111EA8((int)(param_1 + 0x2d));
    fVar6 = fVar6 * fVar7;
    fVar7 = func_00111EA8((int)(param_1 + 0x19));
    fVar7 = fVar7 * fVar6;
    fVar6 = func_00111EA8((int)(param_1 + 0x1d));
    fVar6 = fVar6 * fVar7;
    fVar7 = func_00111EA8((int)(param_1 + 0x21));
    fVar6 = ALBW_AS_F32(param_1[0x16]) * ALBW_AS_F32(param_1[0xc]) * fVar7 * fVar6;
  }
  iVar1 = param_1[4];
  iVar5 = (int)*(char *)((int)param_1 + 0x9a);
  fVar10 = ALBW_AS_F32(param_1[0xf]) + ALBW_AS_F32(param_1[0x39]);
  fVar13 = *(float *)(iVar1 + 0x40) + ALBW_AS_F32(param_1[0x11]) + ALBW_AS_F32(param_1[0x34]);
  iVar14 = param_1[0x35];
  fVar11 = ALBW_AS_F32(param_1[0x17]) * ALBW_AS_F32(param_1[0xd]) * ALBW_AS_F32(param_1[0x33]);
  fVar7 = ALBW_AS_F32(param_1[0x18]) + ALBW_AS_F32(param_1[0xe]) + ALBW_AS_F32(param_1[0x32]);
  if (iVar5 == -1) {
    iVar5 = *(int *)(iVar1 + 0x44);
    iVar14 = *(int *)(iVar1 + 0x48);
    if (iVar5 == -1) {
      iVar5 = param_1[0x13];
      iVar14 = param_1[0x12];
    }
  }
  fVar12 = *(float *)(iVar1 + 0x4c) + ALBW_AS_F32(param_1[0x36]);
  fVar8 = fVar9 + ALBW_AS_F32(param_1[0x38]) + *(float *)(iVar1 + 0x54);
  fVar9 = fVar9 + ALBW_AS_F32(param_1[0x37]) + *(float *)(iVar1 + 0x50) + ALBW_AS_F32(param_1[0x10]);
  piVar2 = (int *)func_00412BB4();
  puVar3 = (undefined4 *)func_00412A3C(piVar2,0xf);
  puVar3[3] = piVar2[0x61];
  *(undefined1 *)(puVar3 + 1) = 8;
  uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar3[4] = uVar4;
  puVar3[5] = ALBW_AS_U32(fVar6);
  puVar3[6] = ALBW_AS_U32(fVar11);
  puVar3[9] = ALBW_AS_U32(fVar13);
  puVar3[7] = ALBW_AS_U32(fVar7);
  puVar3[8] = ALBW_AS_U32(fVar10);
  puVar3[10] = iVar5;
  puVar3[0xb] = iVar14;
  puVar3[0xc] = ALBW_AS_U32(fVar12);
  puVar3[0xd] = ALBW_AS_U32(fVar9);
  puVar3[0xe] = ALBW_AS_U32(fVar8);
  return func_00412C68((int)piVar2,puVar3);
}

