#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00280948(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_00588BE4(int param_1);
extern int func_006610B4(undefined4 *param_1,undefined1 param_2);
extern float DAT_00281090;
extern int DAT_00281094;
extern float DAT_00281098;
extern int *DAT_0028109c;
extern uint DAT_002810a0;
extern int *DAT_002810a4;
extern int DAT_002810a8;
extern uint *DAT_002810ac;
extern int *DAT_002810b0;
extern undefined4 DAT_002810b4;
extern undefined4 *DAT_002810b8;
extern undefined4 DAT_002810bc;
extern float DAT_002810c0;

// USA 00280E64 <- EU 00280E8C (Ghidra, non-matching)
// GLOBAL DAT_00281090 float
// GLOBAL DAT_00281094 int
// GLOBAL DAT_00281098 float
// GLOBAL DAT_0028109c int *
// GLOBAL DAT_002810a0 uint
// GLOBAL DAT_002810a4 int *
// GLOBAL DAT_002810a8 int
// GLOBAL DAT_002810ac uint *
// GLOBAL DAT_002810b0 int *
// GLOBAL DAT_002810b4 undefined4
// GLOBAL DAT_002810b8 undefined4 *
// GLOBAL DAT_002810bc undefined4
// GLOBAL DAT_002810c0 float

void func_00280E64(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  func_00280948((int)param_1);
  iVar6 = DAT_00281094;
  fVar11 = ALBW_AS_F32(param_1[0xf8]) + DAT_00281090;
  param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  piVar8 = DAT_0028109c;
  if (iVar6 < (int)ALBW_AS_U32(fVar11)) {
    fVar11 = DAT_00281098;
  }
  param_1[0xf8] = (int)ALBW_AS_U32(fVar11);
  iVar7 = param_1[0x113];
  iVar6 = piVar8[2];
  param_1[0x113] = iVar6 + iVar7;
  if ((uint)piVar8[3] < (uint)(iVar6 + iVar7)) {
    param_1[0x113] = piVar8[3];
  }
  param_1[0xfa] = param_1[0x113] + param_1[0xfa];
  iVar7 = param_1[0x114];
  iVar6 = *piVar8;
  param_1[0x114] = iVar6 + iVar7;
  if ((uint)piVar8[1] < (uint)(iVar6 + iVar7)) {
    param_1[0x114] = piVar8[1];
  }
  pfVar5 = (float *)func_00520FC0();
  func_00115C70(&local_38,pfVar5,(float *)(param_1 + 0xf4));
  func_004D7F70(&local_38,param_1[0x114]);
  uVar12 = (ulonglong)DAT_002810a0;
  local_34 = DAT_002810a0;
  iVar7 = param_1[0xf5];
  pfVar5 = (float *)func_00520FC0();
  func_00115C70((float *)(param_1 + 0xf4),pfVar5,&local_38);
  piVar8 = DAT_002810a4;
  iVar6 = (int)uVar12;
  param_1[0xf5] = iVar7;
  uVar3 = DAT_002810b4;
  piVar2 = DAT_002810b0;
  puVar1 = DAT_002810ac;
  piVar10 = *(int **)(DAT_002810a8 + *piVar8);
  for (piVar8 = *(int **)(*piVar8 + 0x3dbc0); piVar8 != piVar10; piVar8 = piVar8 + 1) {
    puVar9 = (undefined4 *)*piVar8;
    if (((*puVar1 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_002810ac), iVar6 != 0)) {
      *DAT_002810b8 = uVar3;
    }
    if ((puVar9 == (undefined4 *)0x0) ||
       (iVar6 = (**(code **)*puVar9)(puVar9,DAT_002810b8), iVar6 == 0)) {
      puVar9 = (undefined4 *)0x0;
    }
    if (puVar9 != (undefined4 *)0x0) {
      iVar7 = func_00588BE4(*piVar8);
      iVar6 = (int)uVar12;
      if (iVar7 == *piVar2) goto LAB_00281030;
    }
    iVar6 = (int)uVar12;
  }
  func_006610B4(param_1 + 0x106,3);
LAB_00281030:
  bVar4 = func_00521018((int)param_1);
  if (bVar4) {
    param_1[0xf7] = iVar6;
    param_1[0xf8] = iVar6;
    param_1[0xf9] = iVar6;
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
    local_34 = DAT_002810bc;
    local_38 = DAT_002810c0;
    func_00150A84(param_1,(int *)&local_38,0);
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  }
  return;
}

