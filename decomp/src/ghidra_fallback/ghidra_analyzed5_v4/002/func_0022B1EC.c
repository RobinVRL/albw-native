#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00229E24(int param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065E8B8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0022b410;
extern int *DAT_0022b414;
extern float DAT_0022b418;
extern float DAT_0022b41c;
extern float DAT_0022b420;
extern float DAT_0022b424;

// USA 0022B1EC <- EU 0022B1EC (Ghidra, non-matching)
// GLOBAL DAT_0022b410 int *
// GLOBAL DAT_0022b414 int *
// GLOBAL DAT_0022b418 float
// GLOBAL DAT_0022b41c float
// GLOBAL DAT_0022b420 float
// GLOBAL DAT_0022b424 float

void func_0022B1EC(int param_1)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  float *pfVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  func_00229E24(param_1);
  uVar11 = func_0058AB74(param_1);
  if (((int)uVar11 == 1) && (iVar3 = func_0058A8F0(param_1), iVar3 != 0)) {
    func_004FC07C(param_1,2,8,0);
  }
  local_34 = *(int *)(param_1 + 0xab8) - *(int *)(param_1 + 0xab4);
  uVar4 = func_0058E2B8(&local_34);
  piVar1 = DAT_0022b410;
  piVar8 = DAT_0022b410 + 2;
  piVar6 = (int *)(param_1 + 0xabc);
  if (uVar4 < 0x20000000) {
    uVar4 = *(uint *)(param_1 + 0xa70);
    if (uVar4 < *(uint *)(param_1 + 0xa74)) {
      uVar4 = uVar4 + 1;
      *(uint *)(param_1 + 0xa70) = uVar4;
    }
    if (*(uint *)(param_1 + 0xa74) <= uVar4) {
      func_0051D27C(piVar6,0,*DAT_0022b414);
      func_0051D27C((int *)(param_1 + 0xab8),*(int *)(param_1 + 0xab4),*piVar6);
      goto LAB_0022b348;
    }
    if (*(char *)(param_1 + 0xd04) == '\0') {
      puVar5 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar5);
      *(int *)(param_1 + 0xab4) =
           (int)((ulonglong)uVar4 * 2 >> 0x20) * -0x20000000 + -0x40000000 +
           *(int *)(param_1 + 0xab4);
    }
    else {
      puVar5 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar5);
      *(int *)(param_1 + 0xab4) =
           (int)((ulonglong)uVar4 * 2 >> 0x20) * 0x20000000 + 0x40000000 + *(int *)(param_1 + 0xab4)
      ;
    }
  }
  func_0051D27C(piVar6,*piVar8,*piVar1);
  func_0051D27C((int *)(param_1 + 0xab8),*(int *)(param_1 + 0xab4),*piVar6);
LAB_0022b348:
  func_00115C70(local_40,(float *)(param_1 + 0x3d0),(float *)(param_1 + 8));
  fVar2 = DAT_0022b424;
  fVar10 = SQRT(local_40[0] * local_40[0] + local_38 * local_38);
  if (DAT_0022b41c < DAT_0022b418 - fVar10) {
    fVar9 = fVar10 + DAT_0022b41c;
  }
  else {
    fVar9 = DAT_0022b418;
    if (DAT_0022b418 - fVar10 < DAT_0022b420) {
      fVar9 = fVar10 - DAT_0022b41c;
    }
  }
  pfVar7 = (float *)(param_1 + 0xaf8);
  *pfVar7 = DAT_0022b424;
  *(float *)(param_1 + 0xafc) = fVar2;
  *(float *)(param_1 + 0xb00) = fVar9;
  func_004D7F70(pfVar7,*(uint *)(param_1 + 0xab8));
  func_00115C54(pfVar7,pfVar7,(float *)(param_1 + 8));
  func_00115C70(&local_30,pfVar7,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x3dc) = local_30;
  *(undefined4 *)(param_1 + 0x3e0) = uStack_2c;
  *(undefined4 *)(param_1 + 0x3e4) = uStack_28;
  if (*(int *)(param_1 + 0xabc) == 0) {
    func_0065E8B8((undefined4 *)(param_1 + 0x8fc),0x12);
  }
  return;
}

