#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0036BE78();
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern int func_00521078(int param_1);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_0022a648;
extern float DAT_0022a64c;
extern float DAT_0022a650;
extern undefined4 DAT_0022a654;
extern int DAT_0022a658;

// USA 0022A300 <- EU 0022A300 (Ghidra, non-matching)
// GLOBAL DAT_0022a648 float
// GLOBAL DAT_0022a64c float
// GLOBAL DAT_0022a650 float
// GLOBAL DAT_0022a654 undefined4
// GLOBAL DAT_0022a658 int

undefined4 func_0022A300(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 in_r2;
  int *in_r3;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  func_0036BE78(param_1 + 0x968);
  *(undefined1 *)(param_1 + 0xd05) = 0;
  if (*(uint *)(param_1 + 0xa70) < *(uint *)(param_1 + 0xa74)) {
    *(uint *)(param_1 + 0xa70) = *(uint *)(param_1 + 0xa70) + 1;
  }
  else {
    uVar10 = func_0058AB74(param_1);
    if ((int)uVar10 == 0) {
      return func_004FC07C(param_1,4,0xffffffff,0);
    }
    uVar10 = func_0058AB74(param_1);
    if ((int)uVar10 == 4) {
      iVar6 = func_0058A8F0(param_1);
      if (iVar6 != 0) {
        func_004FC07C(param_1,5,0xffffffff,0);
        *(undefined4 *)(param_1 + 0xaf8) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(param_1 + 0xafc) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(param_1 + 0xb00) = *(undefined4 *)(param_1 + 0x10);
        func_00115C70(&local_5c,(float *)(param_1 + 0xaf8),(float *)(param_1 + 0x3d0));
        fVar4 = DAT_0022a650;
        *(float *)(param_1 + 0x3dc) = local_5c;
        *(undefined4 *)(param_1 + 0x3e0) = uStack_58;
        *(undefined4 *)(param_1 + 0x3e4) = uStack_54;
        func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),fVar4);
        *(undefined4 *)(param_1 + 0x3e0) = DAT_0022a654;
      }
    }
    else {
      uVar10 = func_0058AB74(param_1);
      if ((int)uVar10 == 5) {
        fVar4 = DAT_0022a64c;
        fVar9 = DAT_0022a648;
        fVar5 = func_0058AC38(param_1);
        fVar8 = func_0058AA40(param_1);
        iVar7 = (int)(fVar5 - fVar8);
        func_0051D39C((int *)(param_1 + 1000),0,iVar7);
        iVar6 = iVar7;
        if (iVar7 < 2) {
          iVar6 = 1;
        }
        fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        if (iVar7 < 2) {
          iVar7 = 1;
        }
        fVar8 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x15) & 3);
        *(float *)(param_1 + 0x3dc) =
             (*(float *)(param_1 + 0x3d0) +
             (*(float *)(param_1 + 0xaf8) - *(float *)(param_1 + 0x3d0)) * (fVar4 / fVar5)) -
             *(float *)(param_1 + 0x3d0);
        *(float *)(param_1 + 0x3e4) =
             (*(float *)(param_1 + 0x3d8) +
             (*(float *)(param_1 + 0xb00) - *(float *)(param_1 + 0x3d8)) * (fVar4 / fVar8)) -
             *(float *)(param_1 + 0x3d8);
        if (*(float *)(param_1 + 0x3e0) <= fVar9) {
          *(undefined1 *)(param_1 + 0xd05) = 1;
        }
        iVar6 = func_0058A8F0(param_1);
        if (iVar6 != 0) {
          return func_004FABDC(param_1,10,0xffffffff,0);
        }
      }
      else {
        fVar4 = DAT_0022a648;
        fVar9 = DAT_0022a64c;
        uVar10 = func_0058AB74(param_1);
        if ((int)uVar10 == 10) {
          *(float *)(param_1 + 0x3e0) = fVar4;
          *(undefined1 *)(param_1 + 0xd05) = 1;
          uVar2 = *(undefined4 *)(*(int *)(param_1 + 0xaa4) + 0xc);
          *(float *)(*(int *)(*(int *)(param_1 + 0xaa4) + 0x14) + 0x10) = fVar9;
          func_00169A80(*(int **)(param_1 + 0xaa4),uVar2,in_r2,in_r3);
          func_00168E9C(*(int **)(param_1 + 0xaa4),*(int *)(param_1 + 0x40c),(int *)0x0);
          pfVar3 = (float *)(param_1 + 0xcb8);
          fVar8 = *(float *)(DAT_0022a658 + 0x1bc);
          uVar10 = *(undefined8 *)(DAT_0022a658 + 0x1c0);
          fVar4 = func_0058AC38(param_1);
          fVar5 = func_0058AA40(param_1);
          local_3c = (undefined4)uVar10;
          uStack_38 = (undefined4)((ulonglong)uVar10 >> 0x20);
          iVar6 = (int)(fVar4 - fVar5);
          if (iVar6 < 2) {
            iVar6 = 1;
          }
          fVar4 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar9 = fVar9 / fVar4;
          local_40 = fVar8;
          func_00115C70(&local_34,&local_40,pfVar3);
          local_50 = local_34;
          uStack_4c = uStack_30;
          uStack_48 = uStack_2c;
          func_00115D70(&local_34,&local_50,fVar9);
          local_5c = local_34;
          uStack_58 = uStack_30;
          uStack_54 = uStack_2c;
          func_00115C54(pfVar3,pfVar3,&local_5c);
          *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_1 + 0xcb8);
          *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_1 + 0xcbc);
          *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_1 + 0xcc0);
          iVar6 = func_0058A8F0(param_1);
          if (iVar6 != 0) {
            return func_004FABDC(param_1,7,0xffffffff,0);
          }
        }
        else {
          uVar10 = func_0058AB74(param_1);
          if (((int)uVar10 != 7) ||
             ((*(float *)(param_1 + 0x3e0) <= fVar4 && (bVar1 = func_00521078(param_1), bVar1)))) {
            return func_0065E8B8((undefined4 *)(param_1 + 0x8fc),0xf);
          }
        }
      }
    }
  }
  return 0;
}

