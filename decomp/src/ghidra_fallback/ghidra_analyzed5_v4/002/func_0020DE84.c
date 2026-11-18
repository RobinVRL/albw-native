#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_00291FE0(int param_1,float *param_2,float fparam_0);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004F9FC4(int param_1,int param_2);
extern int func_004FBA3C(int param_1,undefined4 param_2,int param_3);
extern int func_004FC244(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5);
extern int func_00520FC0(void);
extern undefined8 func_0058A474(undefined4 param_1,uint param_2);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_0020e188;
extern int DAT_0020e18c;
extern int DAT_0020e190;
extern float DAT_0020e194;
extern undefined4 DAT_0020e198;
extern int *DAT_0020e19c;
extern int DAT_0020e1a0;
extern int *DAT_0020e1a4;
extern float DAT_0020e1a8;
extern int DAT_0020e1ac;

// USA 0020DE84 <- EU 0020DE84 (Ghidra, non-matching)
// GLOBAL DAT_0020e188 int
// GLOBAL DAT_0020e18c int
// GLOBAL DAT_0020e190 int
// GLOBAL DAT_0020e194 float
// GLOBAL DAT_0020e198 undefined4
// GLOBAL DAT_0020e19c int *
// GLOBAL DAT_0020e1a0 int
// GLOBAL DAT_0020e1a4 int *
// GLOBAL DAT_0020e1a8 float
// GLOBAL DAT_0020e1ac int

/* WARNING: Variable defined which should be unmapped: objStack_88 */

uint func_0020DE84(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  float fparam_0;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_7c (*(float *)(albw_frame + 0x14))
  #define uStack_78 (*(uint *)(albw_frame + 0x18))
  #define uStack_74 (*(uint *)(albw_frame + 0x1c))
  iVar3 = DAT_0020e1ac;
  fparam_0 = DAT_0020e1a8;
  iVar6 = DAT_0020e1a0;
  fVar12 = DAT_0020e194;
  iVar2 = DAT_0020e190;
  iVar8 = DAT_0020e18c;
  if (param_2 != 0) {
    if (param_2 == 3) {
      return 0;
    }
    cVar1 = *(char *)(DAT_0020e188 + (int)param_1);
    objStack_88[0] = (uint)(param_1 + 0x22f);
    if (cVar1 == '\0') {
      if (param_2 == 10 || param_2 == 0x1d) {
        return 0;
      }
    }
    else {
      if (param_2 == 10) {
        func_0065D630((undefined4 *)objStack_88[0],0x28);
        return 0;
      }
      if (param_2 == 0x1d) {
        bVar11 = false;
        if (ALBW_AS_F32(param_1[0x325]) == DAT_0020e194) {
          bVar11 = ALBW_AS_F32(param_1[0x326]) == DAT_0020e194;
        }
        if (bVar11) {
          pfVar7 = (float *)func_00520FC0();
          func_00115C70(&local_7c,pfVar7,(float *)(param_1 + 0x270));
          objStack_88[0] = (uint)ALBW_AS_U32(local_7c);
          objStack_88[1] = uStack_78;
          objStack_88[2] = uStack_74;
          iVar6 = func_0068C690((float *)objStack_88);
          if (iVar6 - param_1[0xfa] < iVar8) {
            iVar8 = *(int *)(iVar2 + 0x20);
          }
          else {
            iVar8 = -*DAT_0020e19c;
          }
          param_1[0x327] = iVar8;
          *(undefined1 *)(param_1 + 0x27c) = 1;
        }
        return 0xf;
      }
    }
    iVar9 = (int)*(char *)(param_3 + 0x24);
    if (iVar9 == 2) {
      if ((cVar1 != '\0') && (*(char *)((int)param_1 + 0x4b5) == '\0')) {
        return 0;
      }
      if ((uint)param_1[0x29c] < (uint)param_1[0x29d]) {
        return 0;
      }
      if (cVar1 == '\0') {
        if (*(char *)(param_3 + 0x27) == '\0') {
          param_1[0x29d] = 0x1e;
          param_1[0x29e] = iVar6;
          param_1[0x29c] = 0;
          return 0;
        }
        iVar8 = DAT_0020e1a0;
        uVar13 = DAT_0020e198;
        puVar5 = (uint *)func_002C11E8((int *)objStack_88,0,10,0);
        func_0016898C(param_1[0x239],puVar5);
        *(undefined4 *)(*(int *)(param_1[0x239] + 0x14) + 0x10) = uVar13;
        param_1[0x29d] = 0x1e;
        param_1[0x29e] = iVar8;
        param_1[0x29c] = 0;
      }
      else if (*(char *)(param_3 + 0x27) == '\0') {
        return 0;
      }
    }
    else {
      uVar4 = param_2 & 0xff;
      bVar11 = 0x1d < uVar4;
      bVar10 = uVar4 != 0x1e;
      if (bVar10) {
        uVar4 = uVar4 - 0xe;
        bVar11 = 2 < uVar4;
      }
      if (!bVar11 || (!bVar10 || uVar4 == 3)) {
        iVar6 = *DAT_0020e1a4;
        if (iVar9 == 5) {
          func_002917A4(iVar6,param_3,0,DAT_0020e1a8);
        }
        else if (iVar9 == 0xe) {
          func_00291FE0(iVar6,param_3,DAT_0020e1a8);
        }
        else if (iVar9 == 8) {
          param_1[0x1be] = 0x32;
          param_1[0x1bf] = iVar3;
          param_1[0x1bd] = 0;
          func_00291A38(iVar6,param_3,fparam_0);
        }
        if (*(char *)(param_3 + 0x27) == '\0') {
          func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
          return 0;
        }
        cVar1 = (char)param_1[0x230];
        if (cVar1 == '\x10' || cVar1 == '\x11') {
          if (*(char *)((int)param_1 + 0xd19) == '\0') {
            if ((uint)param_1[0x2e4] < 3) {
              uVar14 = func_0058A474(param_1,0x2a);
              if ((int)uVar14 == 0) goto LAB_0020e200;
              uVar14 = func_0058A474(param_1,0x14);
              iVar6 = (int)uVar14;
            }
            else {
              uVar14 = func_0058A474(param_1,0x1e);
              iVar6 = (int)uVar14;
            }
            if (iVar6 == 0) {
              *(undefined1 *)((int)param_1 + 0xd1a) = 1;
              func_0065D630((undefined4 *)objStack_88[0],0x1b);
            }
            else {
              func_0065D630((undefined4 *)objStack_88[0],0x15);
            }
            param_1[0x2e4] = 0;
          }
          else {
            func_0065D630((undefined4 *)objStack_88[0],0x24);
          }
        }
        else if (cVar1 == '(' || cVar1 == ')') {
          func_0065D630((undefined4 *)objStack_88[0],0x2a);
        }
LAB_0020e200:
        objStack_88[0] = 1;
        func_004FC244(param_1,(int *)param_1[0x10f],0xc,1,1);
        func_004FBA3C((int)param_1,(int)*(char *)(param_3 + 0x24),(int)*(char *)(param_3 + 0x25));
        bVar11 = false;
        if (ALBW_AS_F32(param_1[0x325]) == fVar12) {
          bVar11 = ALBW_AS_F32(param_1[0x326]) == fVar12;
        }
        if (bVar11) {
          pfVar7 = (float *)func_00520FC0();
          func_00115C70(&local_7c,pfVar7,(float *)(param_1 + 0x270));
          objStack_88[0] = (uint)ALBW_AS_U32(local_7c);
          objStack_88[1] = uStack_78;
          objStack_88[2] = uStack_74;
          iVar6 = func_0068C690((float *)objStack_88);
          if (iVar6 - param_1[0xfa] < iVar8) {
            iVar8 = *(int *)(iVar2 + 0x20);
          }
          else {
            iVar8 = -*DAT_0020e19c;
          }
          param_1[0x327] = iVar8;
          *(undefined1 *)(param_1 + 0x27c) = 1;
        }
        return 0;
      }
      if (*(char *)(param_3 + 0x27) == '\0') {
        func_004FBA3C((int)param_1,iVar9,(int)*(char *)(param_3 + 0x25));
        func_004F9FC4((int)param_1,param_1[0x10f]);
        return 0;
      }
    }
  }
  param_1[0x168] = param_1[0x168] | 0x80;
  return param_2;
}

