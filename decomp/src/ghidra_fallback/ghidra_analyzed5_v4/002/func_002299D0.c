#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00229E24(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00229bc8;
extern int *DAT_00229bcc;
extern float DAT_00229bd0;
extern float DAT_00229bd4;
extern float DAT_00229bd8;
extern float DAT_00229bdc;

// USA 002299D0 <- EU 002299D0 (Ghidra, non-matching)
// GLOBAL DAT_00229bc8 int *
// GLOBAL DAT_00229bcc int *
// GLOBAL DAT_00229bd0 float
// GLOBAL DAT_00229bd4 float
// GLOBAL DAT_00229bd8 float
// GLOBAL DAT_00229bdc float

undefined4 func_002299D0(int param_1)

{
  int *piVar1;
  float fVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  func_00229E24(param_1);
  local_34 = *(int *)(param_1 + 0xab8) - *(int *)(param_1 + 0xab4);
  uVar3 = func_0058E2B8(&local_34);
  piVar1 = DAT_00229bc8;
  piVar9 = DAT_00229bc8 + 2;
  piVar7 = (int *)(param_1 + 0xabc);
  if (uVar3 < 0x20000000) {
    uVar3 = *(uint *)(param_1 + 0xa70);
    if (uVar3 < *(uint *)(param_1 + 0xa74)) {
      uVar3 = uVar3 + 1;
      *(uint *)(param_1 + 0xa70) = uVar3;
    }
    if (*(uint *)(param_1 + 0xa74) <= uVar3) {
      func_0051D27C(piVar7,0,*DAT_00229bcc);
      func_0051D27C((int *)(param_1 + 0xab8),*(int *)(param_1 + 0xab4),*piVar7);
      goto LAB_00229af0;
    }
    if (*(char *)(param_1 + 0xd04) == '\0') {
      puVar4 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar4);
      *(int *)(param_1 + 0xab4) =
           (int)((ulonglong)uVar3 * 2 >> 0x20) * -0x20000000 + -0x40000000 +
           *(int *)(param_1 + 0xab4);
    }
    else {
      puVar4 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar4);
      *(int *)(param_1 + 0xab4) =
           (int)((ulonglong)uVar3 * 2 >> 0x20) * 0x20000000 + 0x40000000 + *(int *)(param_1 + 0xab4)
      ;
    }
  }
  func_0051D27C(piVar7,*piVar9,*piVar1);
  func_0051D27C((int *)(param_1 + 0xab8),*(int *)(param_1 + 0xab4),*piVar7);
LAB_00229af0:
  func_00115C70(local_40,(float *)(param_1 + 0x3d0),(float *)(param_1 + 8));
  fVar2 = DAT_00229bdc;
  fVar11 = SQRT(local_40[0] * local_40[0] + local_38 * local_38);
  if (DAT_00229bd4 < DAT_00229bd0 - fVar11) {
    fVar10 = fVar11 + DAT_00229bd4;
  }
  else {
    fVar10 = DAT_00229bd0;
    if (DAT_00229bd0 - fVar11 < DAT_00229bd8) {
      fVar10 = fVar11 - DAT_00229bd4;
    }
  }
  pfVar8 = (float *)(param_1 + 0xaf8);
  *pfVar8 = DAT_00229bdc;
  *(float *)(param_1 + 0xafc) = fVar2;
  *(float *)(param_1 + 0xb00) = fVar10;
  func_004D7F70(pfVar8,*(uint *)(param_1 + 0xab8));
  func_00115C54(pfVar8,pfVar8,(float *)(param_1 + 8));
  func_00115C70(&local_30,pfVar8,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x3dc) = local_30;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_2c;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_28;
  if (*(int *)(param_1 + 0xcb4) < 1) {
    uVar6 = 7;
  }
  else {
    if (*(int *)(param_1 + 0xabc) != 0) {
      return (undefined4 *)(param_1 + 0x8fc);
    }
    uVar6 = 8;
  }
  uVar5 = func_0065E8B8((undefined4 *)(param_1 + 0x8fc),uVar6);
  return uVar5;
}

