#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00520FC0(void);
extern int func_0054E06C(int *param_1);
extern int func_0054E0F8(int *param_1);
extern float func_0054E4C4(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
extern int func_0054EA88(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_0068C690(float *param_1);
extern int *DAT_003261a4;
extern undefined4 *DAT_003261a8;
extern int DAT_003261ac;
extern float *DAT_003261b0;
extern float DAT_003261b4;

// USA 00325DE0 <- EU 00325DBC (Ghidra, non-matching)
// GLOBAL DAT_003261a4 int *
// GLOBAL DAT_003261a8 undefined4 *
// GLOBAL DAT_003261ac int
// GLOBAL DAT_003261b0 float *
// GLOBAL DAT_003261b4 float

undefined4 func_00325DE0(int *param_1,float *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define fStack_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  if ((char)param_1[0x13a] == '\0') {
    uVar7 = func_0054E0F8(param_1);
    bVar10 = uVar7 != 0;
    if (!bVar10) {
      uVar7 = (uint)*(byte *)((int)param_1 + 0x4eb);
    }
    if (bVar10 || uVar7 != 0) {
      return 0;
    }
  }
  if (*(char *)((int)param_1 + 0x4e9) == '\0') {
    uVar7 = func_0054E06C(param_1);
    bVar10 = uVar7 != 0;
    if (!bVar10) {
      uVar7 = (uint)*(byte *)(param_1 + 0x13b);
    }
    if (bVar10 || uVar7 != 0) {
      return 0;
    }
  }
  iVar3 = func_00520FC0();
  fVar12 = *(float *)(iVar3 + 4);
  iVar3 = (**(code **)(*param_1 + 0x78))(param_1);
  puVar2 = DAT_003261a8;
  piVar1 = DAT_003261a4;
  if ((fVar12 <= *(float *)(iVar3 + 4) + ALBW_AS_F32(param_1[0x131])) &&
     (*(float *)(iVar3 + 4) - ALBW_AS_F32(param_1[0x131]) <= fVar12)) {
    piVar4 = (int *)func_005841A8(*DAT_003261a4,*DAT_003261a8,
                                  *(int **)(DAT_003261ac + *DAT_003261a4));
    piVar9 = *(int **)(*piVar1 + 0x3dbc8);
    for (; piVar4 != piVar9; piVar4 = (int *)func_005841A8(*piVar1,*puVar2,piVar4 + 1)) {
      iVar3 = *piVar4;
      if ((iVar3 != 0) &&
         (fVar12 = *param_2 - *(float *)(iVar3 + 0x3d0),
         fVar11 = param_2[2] - *(float *)(iVar3 + 0x3d8),
         (int)ALBW_AS_U32((fVar12 * fVar12 + fVar11 * fVar11)) < 0x3e800001)) {
        return 0;
      }
    }
    if ((((char)param_1[0x13b] == '\0') && (iVar3 = func_0054E0F8(param_1), iVar3 != 0)) ||
       (*(char *)((int)param_1 + 0x4eb) != '\0')) {
      *(undefined1 *)((int)param_1 + 0x4eb) = 0;
      (**(code **)(*param_1 + 0x78))(param_1);
      func_0054E4C4(param_1,param_2,param_1[0x139]);
      iVar3 = (**(code **)(*param_1 + 0x60))(param_1);
      if (iVar3 != 0) {
        return 0;
      }
      uVar5 = (**(code **)(*param_1 + 0x80))(param_1);
      uVar6 = (**(code **)(*param_1 + 0x78))(param_1);
      iVar3 = func_0054EA88((int)param_1,(uint)param_2,uVar6,uVar5);
    }
    else {
      uVar7 = func_0054E06C(param_1);
      pfVar8 = DAT_003261b0;
      bVar10 = uVar7 == 0;
      if (bVar10) {
        uVar7 = (uint)*(byte *)(param_1 + 0x13b);
      }
      if (bVar10 && uVar7 == 0) {
        return 1;
      }
      *(undefined1 *)(param_1 + 0x13b) = 0;
      local_50 = *pfVar8;
      fStack_4c = pfVar8[1];
      local_48 = pfVar8[2];
      pfVar8 = (float *)(**(code **)(*param_1 + 0x78))(param_1);
      func_00115C70(&local_38,param_2,pfVar8);
      local_44 = local_38;
      uStack_40 = uStack_34;
      uStack_3c = uStack_30;
      iVar3 = func_0068C690(&local_44);
      uVar7 = iVar3 + 0x20000000U >> 0x1e;
      if (uVar7 == 0) {
        local_48 = local_48 + DAT_003261b4;
      }
      else if (uVar7 == 1) {
        local_50 = local_50 + DAT_003261b4;
      }
      else if (uVar7 == 2) {
        local_48 = local_48 - DAT_003261b4;
      }
      else if (uVar7 == 3) {
        local_50 = local_50 - DAT_003261b4;
      }
      func_00115C54(&local_50,&local_50,param_2);
      piVar4 = (int *)func_005841A8(*piVar1,*puVar2,*(int **)(DAT_003261ac + *piVar1));
      piVar9 = *(int **)(*piVar1 + 0x3dbc8);
      for (; piVar4 != piVar9; piVar4 = (int *)func_005841A8(*piVar1,*puVar2,piVar4 + 1)) {
        iVar3 = *piVar4;
        if ((iVar3 != 0) &&
           (fVar12 = local_50 - *(float *)(iVar3 + 0x3d0),
           fVar11 = local_48 - *(float *)(iVar3 + 0x3d8),
           (int)ALBW_AS_U32((fVar12 * fVar12 + fVar11 * fVar11)) < 0x3e800001)) {
          return 0;
        }
      }
      (**(code **)(*param_1 + 0x78))(param_1);
      func_0054E4C4(param_1,&local_50,param_1[0x139]);
      iVar3 = (**(code **)(*param_1 + 100))(param_1);
      if (iVar3 != 0) {
        return 0;
      }
      uVar5 = (**(code **)(*param_1 + 0x84))(param_1);
      iVar3 = func_0054EA88((int)param_1,(uint)&local_50,param_2,uVar5);
    }
    if (iVar3 == 0) {
      return 1;
    }
  }
  return 0;
}

