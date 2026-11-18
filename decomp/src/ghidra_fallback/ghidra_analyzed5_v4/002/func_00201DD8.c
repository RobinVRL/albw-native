#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern undefined4 func_0065D120(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_00201ff4;
extern float DAT_00201ff8;
extern int *DAT_00201ffc;
extern int DAT_00202000;
extern int DAT_00202004;
extern uint DAT_00202008;
extern int DAT_0020200c;
extern float DAT_00202010;

// USA 00201DD8 <- EU 00201DD8 (Ghidra, non-matching)
// GLOBAL DAT_00201ff4 int *
// GLOBAL DAT_00201ff8 float
// GLOBAL DAT_00201ffc int *
// GLOBAL DAT_00202000 int
// GLOBAL DAT_00202004 int
// GLOBAL DAT_00202008 uint
// GLOBAL DAT_0020200c int
// GLOBAL DAT_00202010 float

void func_00201DD8(int param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  iVar2 = func_00588BE4(param_1);
  piVar6 = (int *)(param_1 + 0x8d8);
  fVar8 = DAT_00201ff8;
  if (iVar2 == *DAT_00201ff4) {
    if (*DAT_00201ffc != 0) {
      func_00115C70(&local_24,*(float **)(*DAT_00201ffc + 0x1c),(float *)(param_1 + 0x3d0));
      local_30 = local_24;
      uStack_2c = uStack_20;
      uStack_28 = uStack_1c;
      iVar2 = func_0068C690(&local_30);
      *(int *)(param_1 + 0x8d4) = iVar2;
    }
    func_0051D27C(piVar6,*(int *)(param_1 + 0x8d4),DAT_00202000);
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8d8),fVar8);
    *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8d8);
  }
  else {
    if (*(char *)(param_1 + 0x914) == '\0') {
      bVar1 = func_0051D27C(piVar6,*(int *)(param_1 + 0x8d4),DAT_0020200c);
      if (bVar1) {
        puVar3 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar3);
        *(int *)(param_1 + 0x8d4) =
             (int)((ulonglong)uVar5 * 0x40000000 >> 0x20) + -0x20000000 + *(int *)(param_1 + 0x8d8);
      }
    }
    else {
      bVar1 = func_0051D27C(piVar6,*(int *)(param_1 + 0x8d4),DAT_00202004);
      if (bVar1) {
        puVar3 = (uint *)func_0058A7D4();
        uVar5 = DAT_00202008;
        uVar4 = func_00111A64(puVar3);
        *(int *)(param_1 + 0x8d4) =
             ((int)((ulonglong)uVar5 * (ulonglong)uVar4 >> 0x20) - ((int)uVar5 >> 1)) +
             *(int *)(param_1 + 0x8d8);
      }
    }
    fVar7 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8);
    fVar9 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
    fVar10 = *(float *)(param_1 + 0x3d4) - *(float *)(param_1 + 0xc);
    if ((int)ALBW_AS_U32(SQRT(fVar7 * fVar7 + fVar10 * fVar10 + fVar9 * fVar9)) < 0x3fc00000) {
      if (*(char *)(param_1 + 0x914) != '\0') {
        *(undefined1 *)(param_1 + 0x914) = 0;
      }
    }
    else if (*(char *)(param_1 + 0x914) == '\0') {
      func_00115C70(&local_24,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
      local_30 = local_24;
      uStack_2c = uStack_20;
      uStack_28 = uStack_1c;
      iVar2 = func_0068C690(&local_30);
      *(int *)(param_1 + 0x8d4) = iVar2;
      *(undefined1 *)(param_1 + 0x914) = 1;
    }
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8d8),DAT_00202010);
    func_0051D2CC((int *)(param_1 + 1000),0,fVar8);
  }
  if (*(uint *)(param_1 + 0x8bc) < *(uint *)(param_1 + 0x8c0)) {
    *(uint *)(param_1 + 0x8bc) = *(uint *)(param_1 + 0x8bc) + 1;
  }
  else {
    func_0065D120((undefined4 *)(param_1 + 0x8dc),3,fVar8);
  }
  return;
}

