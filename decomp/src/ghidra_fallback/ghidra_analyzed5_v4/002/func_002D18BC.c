#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002D3428(int param_1);
extern int DAT_002d1b7c;
extern int DAT_002d1b80;
extern float DAT_002d1b84;
extern float DAT_002d1b88;
extern int DAT_002d1b8c;
extern float DAT_002d1b90;

// USA 002D18BC <- EU 002D1898 (Ghidra, non-matching)
// GLOBAL DAT_002d1b7c int
// GLOBAL DAT_002d1b80 int
// GLOBAL DAT_002d1b84 float
// GLOBAL DAT_002d1b88 float
// GLOBAL DAT_002d1b8c int
// GLOBAL DAT_002d1b90 float

void func_002D18BC(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(float *)(albw_frame + 0x0))
  #define fStack_8c (*(float *)(albw_frame + 0x4))
  #define fStack_88 (*(float *)(albw_frame + 0x8))
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define fStack_80 (*(float *)(albw_frame + 0x10))
  #define fStack_7c (*(float *)(albw_frame + 0x14))
  piVar7 = (int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xd];
  piVar8 = (int *)piVar7[5];
  iVar4 = (int)((ulonglong)((longlong)DAT_002d1b7c * (longlong)param_1[0x3e]) >> 0x20);
  iVar4 = param_1[0x3e] + ((iVar4 >> 5) - (iVar4 >> 0x1f)) * DAT_002d1b80 * 4;
  fVar12 = DAT_002d1b88;
  fVar13 = DAT_002d1b84;
  if (iVar4 == 0x5a || iVar4 == 600) {
LAB_002d1910:
    piVar6 = (int *)0x0;
    uVar5 = 10;
    puVar2 = (uint *)func_002C11E8((int *)&local_90,0,10,0);
    func_0016898C((int)piVar7,puVar2);
    *(undefined1 *)(piVar7[5] + 0x1c) = 0;
    *(float *)(piVar7[5] + 0x10) = fVar13;
    iVar4 = piVar7[5];
    if (*(float *)(iVar4 + 8) != fVar12) {
      *(float *)(iVar4 + 8) = fVar12;
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    func_00169A80(piVar7,extraout_r1,uVar5,piVar6);
  }
  else {
    iVar1 = 0;
    if (iVar4 != 0x2ee) {
      iVar1 = iVar4 + -0x3ee;
    }
    if (iVar4 == 0x2ee || iVar1 == 0xc2) goto LAB_002d1910;
  }
  uVar9 = 0;
  func_00115C70(&local_84,(float *)(*param_1 + 0x3d0),(float *)(*param_1 + 0x368));
  local_90 = local_84;
  fStack_8c = fStack_80;
  fStack_88 = fStack_7c;
  func_00115C70(&local_84,&local_90,(float *)(*(int *)(*param_1 + 0x604) + 0x4e4));
  if ((DAT_002d1b8c <=
       (int)ALBW_AS_U32(SQRT(local_84 * local_84 + fStack_80 * fStack_80 + fStack_7c * fStack_7c))) ||
     (fVar10 = *(float *)(*param_1 + 0x3dc), fVar11 = *(float *)(*param_1 + 0x3e4),
     SQRT(fVar10 * fVar10 + fVar11 * fVar11) <= fVar12)) {
    if ((0 < piVar7[3]) && (*piVar8 == 1)) {
      func_002D3428((int)param_1);
    }
  }
  else {
    iVar4 = piVar7[3];
    uVar9 = 1;
    if (0 < iVar4) {
      if (piVar8 != (int *)0x0) {
        iVar4 = *piVar8;
      }
      if (piVar8 == (int *)0x0 || iVar4 == 1) goto LAB_002d1aa0;
    }
    piVar7 = (int *)0x0;
    uVar5 = 10;
    piVar8 = (int *)param_1[(uint)*(byte *)(param_1 + 9) * 10 + 0xd];
    puVar2 = (uint *)func_002C11E8((int *)&local_84,1,10,0);
    func_0016898C((int)piVar8,puVar2);
    *(undefined1 *)(piVar8[5] + 0x1c) = 0;
    *(float *)(piVar8[5] + 0x10) = fVar13;
    iVar4 = piVar8[5];
    if (*(float *)(iVar4 + 8) != fVar12) {
      *(float *)(iVar4 + 8) = fVar12;
      *(undefined1 *)(iVar4 + 0x26) = 1;
    }
    func_00169A80(piVar8,extraout_r1_00,uVar5,piVar7);
  }
LAB_002d1aa0:
  *(undefined1 *)((int)param_1 + 0x101) = uVar9;
  iVar4 = *param_1;
  fVar11 = *(float *)(iVar4 + 0x3d0) - *(float *)(iVar4 + 0x368);
  fVar10 = *(float *)(iVar4 + 0x3d8) - *(float *)(iVar4 + 0x370);
  fVar10 = SQRT(fVar11 * fVar11 + fVar10 * fVar10);
  if (*(char *)(iVar4 + 0x5ac) == '\0') {
    fVar10 = ALBW_AS_F32(param_1[0x3f]) - fVar10 * DAT_002d1b90;
    param_1[0x3f] = (int)ALBW_AS_U32(fVar10);
    if (fVar12 < fVar10) goto LAB_002d1afc;
    fVar10 = fVar10 + fVar13;
  }
  else {
    fVar10 = ALBW_AS_F32(param_1[0x3f]) + fVar10 * DAT_002d1b90;
    param_1[0x3f] = (int)ALBW_AS_U32(fVar10);
    if ((int)ALBW_AS_U32(fVar10) < 0x3f800000) goto LAB_002d1afc;
    fVar10 = fVar10 - fVar13;
  }
  param_1[0x3f] = (int)ALBW_AS_U32(fVar10);
LAB_002d1afc:
  for (uVar3 = 0; uVar3 < (uint)(*(int **)(param_1[2] + 0x20))[1]; uVar3 = uVar3 + 1) {
    iVar4 = **(int **)(param_1[2] + 0x20) + uVar3 * 0x154;
    if (*(int *)(iVar4 + 0x148) != 0) {
      *(float *)(iVar4 + 0x110) = fVar10;
      *(undefined4 *)(iVar4 + 0x114) = *(undefined4 *)(iVar4 + 0x114);
    }
  }
  param_1[0x3e] = param_1[0x3e] + 1;
  return;
}

