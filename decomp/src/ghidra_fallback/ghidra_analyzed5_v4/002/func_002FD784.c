// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_001E8C44(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_002769DC(int param_1,int param_2,int param_3);
extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern float func_004D7FBC(float *param_1,float *param_2,uint param_3,uint param_4,float fparam_0);
extern int func_005230BC(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00556E64(int param_1);
extern int func_00588FD4(int param_1,float *param_2);
extern int *DAT_002fdabc;
extern int *DAT_002fdac0;
extern int *DAT_002fdac4;
extern int *DAT_002fdac8;
extern int *DAT_002fdacc;
extern int *DAT_002fdad0;
extern int DAT_002fdad4;
extern undefined4 DAT_002fdad8;
extern float DAT_002fdadc;
extern int DAT_002fdae0;

// USA 002FD784 <- EU 002FD760 (Ghidra, non-matching)
// GLOBAL DAT_002fdabc int *
// GLOBAL DAT_002fdac0 int *
// GLOBAL DAT_002fdac4 int *
// GLOBAL DAT_002fdac8 int *
// GLOBAL DAT_002fdacc int *
// GLOBAL DAT_002fdad0 int *
// GLOBAL DAT_002fdad4 int
// GLOBAL DAT_002fdad8 undefined4
// GLOBAL DAT_002fdadc float
// GLOBAL DAT_002fdae0 int

undefined4 func_002FD784(int *param_1,float *param_2,float *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(float *)(albw_frame + 0x0))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define fStack_74 (*(float *)(albw_frame + 0xc))
  #define fStack_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define fStack_54 (*(float *)(albw_frame + 0x2c))
  #define fStack_50 (*(float *)(albw_frame + 0x30))
  #define local_4c (*(float *)(albw_frame + 0x34))
  #define local_48 (*(float *)(albw_frame + 0x38))
  #define local_44 (*(float *)(albw_frame + 0x3c))
  #define local_40 (*(float *)(albw_frame + 0x40))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x44))
  #define fStack_38 (*(float *)(albw_frame + 0x48))
  #define local_34 (*(float *)(albw_frame + 0x4c))
  #define fStack_30 (*(float *)(albw_frame + 0x50))
  #define fStack_2c (*(float *)(albw_frame + 0x54))
  piVar1 = DAT_002fdabc;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  if ((*piVar1 != 0) && (cVar3 = func_004CDDEC(*piVar1,param_1,0), cVar3 != '\0')) {
    bVar4 = func_00556E64(*DAT_002fdac0);
    if (param_4 == 0) {
      uVar5 = 3;
    }
    else {
      uVar5 = 1;
    }
    *(bool *)(param_1 + 0x20) = bVar4;
    *(undefined1 *)(param_1 + 0x1f) = uVar5;
    piVar2 = DAT_002fdac8;
    piVar1 = DAT_002fdac4;
    param_1[0x1d] = param_1[0x1c];
    param_1[0x1c] = (int)*(short *)((int)param_2 + 0x1e);
    if (bVar4) {
      func_00588FD4(*piVar1,(float *)(param_1 + 0x11));
      local_80 = 0.0;
      func_001E8C44(*(int *)(*piVar1 + 0x18),param_1 + 0xe,&local_80);
      param_1[0x13] = (int)ALBW_AS_U32(local_80) + param_1[0x13];
    }
    else {
      iVar7 = *(int *)(*piVar1 + 0x10);
      func_00588FD4(*piVar1,(float *)(param_1 + 0x11));
      iVar8 = *(int *)(*piVar2 + 0x38) + 0x183c +
              (int)*(short *)((int)param_2 + 0x1e) * (int)(short)DAT_002fdad8 * 4;
      iVar6 = *(int *)(*piVar1 + 0x18);
      if (*(int *)(iVar6 + 0x10c) < 0) {
        local_5c = *(float *)(iVar6 + 0x1c4);
        local_64 = *(float *)(iVar6 + 0x1bc);
        local_60 = *(float *)(iVar6 + 0x1c0);
      }
      else {
        local_5c = *(float *)(iVar6 + 0xdc);
        local_64 = *(float *)(iVar6 + 0xd4);
        local_60 = *(float *)(iVar6 + 0xd8);
      }
      func_00115C70(&local_34,param_2,&local_64);
      func_00115D70(&local_34,param_3,
                    local_34 * *param_3 + fStack_30 * param_3[1] + fStack_2c * param_3[2]);
      local_58 = local_34;
      fStack_54 = fStack_30;
      fStack_50 = fStack_2c;
      func_00115C54(&local_34,&local_58,&local_64);
      local_64 = local_34;
      local_60 = fStack_30;
      local_5c = fStack_2c;
      func_004D7FBC(&fStack_70,&local_64,param_1[0x12],param_1[0x13],ALBW_AS_F32(param_1[0x14]));
      fVar10 = local_6c;
      fVar9 = DAT_002fdadc;
      if (*(char *)(iVar7 + 0x24) != '\0') {
        local_6c = *(float *)(iVar8 + 8) + *(float *)(iVar7 + 0x18);
      }
      param_1[0xe] = (int)ALBW_AS_U32(local_64);
      param_1[0xf] = (int)ALBW_AS_U32(local_60);
      param_1[0x10] = (int)ALBW_AS_U32(local_5c);
      local_4c = fVar9;
      local_48 = fVar9;
      local_44 = fVar9;
      bVar4 = func_005230BC(iVar8,&local_4c,&fStack_70);
      if (bVar4) {
        func_00115C54((float *)(param_1 + 0xe),(float *)(param_1 + 0xe),&local_4c);
        func_00115C54(&fStack_70,&fStack_70,&local_4c);
        if ((((char)param_1[0x1f] == '\x01') && (param_3[2] < fVar9)) && (local_6c != fVar10)) {
          func_00115154(&fStack_74,&local_78,param_1[0x12]);
          param_1[0x10] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x10]) - (local_6c - fVar10) * (local_78 / fStack_74)))
          ;
        }
      }
      func_00115C70(&local_80,&fStack_70,(float *)(param_1 + 0xe));
      local_40 = local_80;
      uStack_3c = uStack_7c;
      fStack_38 = local_78;
      fVar9 = func_00115DC8(&local_40);
      param_1[0x14] = (int)ALBW_AS_U32(fVar9);
    }
    iVar7 = DAT_002fdae0;
    iVar6 = DAT_002fdad4;
    piVar1 = DAT_002fdad0;
    if (*(byte *)(*DAT_002fdacc + 0x18) < 2 || *(byte *)(*DAT_002fdacc + 0x18) == 0x20) {
      *DAT_002fdad0 = DAT_002fdae0;
      piVar1[1] = iVar7 + 7;
      iVar6 = iVar7 + 9;
    }
    else {
      *DAT_002fdad0 = DAT_002fdad4;
      piVar1[1] = iVar6 + 4;
      iVar6 = iVar6 + 6;
    }
    piVar1[2] = iVar6;
    iVar6 = *piVar2;
    if ((iVar6 != 0) && ((char)param_1[0x1f] == '\x01')) {
      func_002769DC(*(int *)(iVar6 + 0x38),param_1[0x1c],0);
    }
    return 1;
  }
  return 0;
}

