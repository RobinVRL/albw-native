#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002A363C(int param_1,uint param_2);
extern int func_002A49F8(int param_1,int param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern undefined8 func_0058AB74(int param_1);
extern int func_0068C690(float *param_1);
extern float *DAT_002a5fac;
extern float DAT_002a5fb0;
extern int DAT_002a5fb4;
extern float DAT_002a5fb8;
extern float DAT_002a5fbc;
extern float DAT_002a5fc0;
extern float DAT_002a5fc4;
extern int *DAT_002a5fc8;
extern float DAT_002a5fcc;
extern undefined4 DAT_002a5fd0;
extern int DAT_002a5fd4;
extern int *DAT_002a5fd8;

// USA 002A5DB4 <- EU 002A5D90 (Ghidra, non-matching)
// GLOBAL DAT_002a5fac float *
// GLOBAL DAT_002a5fb0 float
// GLOBAL DAT_002a5fb4 int
// GLOBAL DAT_002a5fb8 float
// GLOBAL DAT_002a5fbc float
// GLOBAL DAT_002a5fc0 float
// GLOBAL DAT_002a5fc4 float
// GLOBAL DAT_002a5fc8 int *
// GLOBAL DAT_002a5fcc float
// GLOBAL DAT_002a5fd0 undefined4
// GLOBAL DAT_002a5fd4 int
// GLOBAL DAT_002a5fd8 int *

undefined4 func_002A5DB4(int param_1,int param_2)

{
  int *piVar1;
  undefined1 uVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define fStack_20 (*(float *)(albw_frame + 0x10))
  local_28 = *DAT_002a5fac;
  fStack_24 = DAT_002a5fac[1];
  fStack_20 = DAT_002a5fac[2];
  if (param_2 == 0) {
    fVar9 = DAT_002a5fb0;
    uVar10 = func_0058AB74(param_1);
    if ((((int)uVar10 == 2) || (uVar10 = func_0058AB74(param_1), (int)uVar10 == 0x1e)) ||
       (pfVar3 = (float *)func_00520FC0(), fVar7 = *pfVar3 - *(float *)(param_1 + 0x3d0),
       fVar8 = pfVar3[2] - *(float *)(param_1 + 0x3d8),
       DAT_002a5fb4 < (int)ALBW_AS_U32((fVar7 * fVar7 + fVar8 * fVar8)))) {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
      uVar4 = func_0068C690(&local_28);
      fVar9 = DAT_002a5fb8;
      if (*(byte *)(param_1 + 0xb92) < 3) {
        fVar9 = DAT_002a5fbc;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1000);
      if (2 < *(byte *)(param_1 + 0xb92)) {
        fVar9 = DAT_002a5fc0;
      }
    }
    fVar7 = *(float *)(param_1 + 0xb24);
    *(float *)(param_1 + 0xb24) = fVar7 + (fVar9 - fVar7) * DAT_002a5fc4;
    func_002A363C(param_1,uVar4);
  }
  piVar1 = DAT_002a5fc8;
  piVar6 = DAT_002a5fc8 + -1;
  fVar9 = DAT_002a5fcc;
  if (*(char *)(param_1 + 0xb95) == '\0') {
    iVar5 = func_002A49F8(param_1,*(int *)(DAT_002a5fd4 + 100),0);
    if (iVar5 == 0) {
      uVar2 = 1;
      goto LAB_002a5eb8;
    }
    uVar10 = func_0058AB74(param_1);
    if (((int)uVar10 != 2) && (uVar10 = func_0058AB74(param_1), (int)uVar10 != 0x1e)) {
      func_0051D2F4((int *)(param_1 + 0xb80),*DAT_002a5fd8,0,*piVar1,fVar9);
      goto LAB_002a5ebc;
    }
  }
  else {
    iVar5 = func_002A49F8(param_1,0,0);
    if (iVar5 != 0) {
      uVar2 = 0;
LAB_002a5eb8:
      *(undefined1 *)(param_1 + 0xb95) = uVar2;
      goto LAB_002a5ebc;
    }
  }
  func_0051D2F4((int *)(param_1 + 0xb80),*piVar6,0,*piVar1,fVar9);
LAB_002a5ebc:
  if (*(int *)(param_1 + 0xb80) < 1) {
    *(undefined4 *)(param_1 + 0xb80) = DAT_002a5fd0;
  }
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
  iVar5 = func_0068C690(&local_28);
  return func_0051D2F4((int *)(param_1 + 1000),iVar5,0,*(int *)(param_1 + 0xb80),fVar9);
}

