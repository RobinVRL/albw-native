// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00556914(int param_1);
extern int func_00556B14(int param_1);
extern int func_00556B3C(int param_1);
extern int func_00556E64(int param_1);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00180b24;
extern float *DAT_00180b28;
extern float DAT_00180b2c;
extern float DAT_00180b30;
extern float DAT_00180b34;
extern float DAT_00180b38;
extern float DAT_00180b3c;
extern undefined4 DAT_00180b40;
extern int *DAT_00180b44;

// USA 0018096C <- EU 0018096C (Ghidra, non-matching)
// GLOBAL DAT_00180b24 float
// GLOBAL DAT_00180b28 float *
// GLOBAL DAT_00180b2c float
// GLOBAL DAT_00180b30 float
// GLOBAL DAT_00180b34 float
// GLOBAL DAT_00180b38 float
// GLOBAL DAT_00180b3c float
// GLOBAL DAT_00180b40 undefined4
// GLOBAL DAT_00180b44 int *

undefined4 func_0018096C(int param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define fStack_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  fVar6 = DAT_00180b24;
  pfVar2 = (float *)(param_1 + 0x3dc);
  *pfVar2 = *(float *)(param_1 + 0xa7c);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0xa80);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa84);
  func_00115D70(pfVar2,pfVar2,fVar6);
  pfVar2 = (float *)(param_1 + 0xa7c);
  local_48 = *DAT_00180b28;
  fStack_44 = DAT_00180b28[1];
  fStack_40 = DAT_00180b28[2];
  fVar6 = DAT_00180b2c;
  func_00115C70(&local_24,&local_48,pfVar2);
  local_30 = local_24;
  uStack_2c = uStack_20;
  uStack_28 = uStack_1c;
  func_00115D70(&local_24,&local_30,fVar6);
  local_3c = local_24;
  uStack_38 = uStack_20;
  uStack_34 = uStack_1c;
  func_00115C54(pfVar2,pfVar2,&local_3c);
  iVar3 = func_0068C690(pfVar2);
  func_0051D2CC((int *)(param_1 + 1000),iVar3,DAT_00180b30);
  fVar6 = *pfVar2;
  bVar1 = DAT_00180b38 == fVar6;
  bVar5 = fVar6 <= DAT_00180b38;
  if (!bVar5 || bVar1) {
    bVar1 = fVar6 == DAT_00180b34;
    bVar5 = DAT_00180b34 <= fVar6;
  }
  if (!bVar5 || bVar1) {
    fVar6 = *(float *)(param_1 + 0xa80);
    bVar1 = DAT_00180b38 == fVar6;
    bVar5 = fVar6 <= DAT_00180b38;
    if (!bVar5 || bVar1) {
      bVar1 = fVar6 == DAT_00180b34;
      bVar5 = DAT_00180b34 <= fVar6;
    }
    if (!bVar5 || bVar1) {
      fVar6 = *(float *)(param_1 + 0xa84);
      bVar1 = DAT_00180b38 == fVar6;
      bVar5 = fVar6 <= DAT_00180b38;
      if (!bVar5 || bVar1) {
        bVar1 = fVar6 == DAT_00180b34;
        bVar5 = DAT_00180b34 <= fVar6;
      }
      if (!bVar5 || bVar1) {
        func_004D80A4((float *)(param_1 + 0x3dc),*(uint *)(param_1 + 1000),DAT_00180b3c);
        *(undefined4 *)(param_1 + 0x3e0) = DAT_00180b40;
        if (*(uint *)(param_1 + 0x9a4) < *(uint *)(param_1 + 0x9a8)) {
          *(uint *)(param_1 + 0x9a4) = *(uint *)(param_1 + 0x9a4) + 1;
        }
        else {
          iVar3 = *DAT_00180b44;
          if ((((iVar3 != 0) && (bVar1 = func_00556E64(iVar3), !bVar1)) &&
              (iVar4 = func_00556914(iVar3), iVar4 == 0)) &&
             ((bVar1 = func_00556B3C(iVar3), !bVar1 && (bVar1 = func_00556B14(iVar3), !bVar1)))) {
            return func_00659400((undefined4 *)(param_1 + 0x960),5);
          }
          func_00659400((undefined4 *)(param_1 + 0x960),0);
        }
      }
    }
  }
  return 0;
}

