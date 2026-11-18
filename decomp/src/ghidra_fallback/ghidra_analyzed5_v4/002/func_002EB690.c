#include "ghidra_types.h"

extern int func_002EC1B8(int param_1,int param_2);
extern int func_002F5CD4(int param_1,int param_2);
extern int func_0035EFF8(int *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern float func_00556764(int param_1);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int *DAT_002eb8b8;
extern float DAT_002eb8bc;
extern float DAT_002eb8c0;
extern undefined4 DAT_002eb8c4;
extern uint DAT_002eb8c8;
extern undefined4 DAT_002eb8cc;

// USA 002EB690 <- EU 002EB66C (Ghidra, non-matching)
// GLOBAL DAT_002eb8b8 int *
// GLOBAL DAT_002eb8bc float
// GLOBAL DAT_002eb8c0 float
// GLOBAL DAT_002eb8c4 undefined4
// GLOBAL DAT_002eb8c8 uint
// GLOBAL DAT_002eb8cc undefined4

undefined4 func_002EB690(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  float fVar7;
  bool bVar8;
  float in_s0;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  
  iVar3 = func_002F5CD4(param_1,0);
  iVar4 = func_002F5CD4(param_1,1);
  func_002EC1B8(param_1,1);
  piVar2 = DAT_002eb8b8;
  if (iVar3 == 0 || iVar4 == 0) {
    if (*(char *)(param_1 + 0xd3d) == '\x01') {
      *(undefined1 *)(param_1 + 0xd3d) = 0;
      return func_006640EC((undefined4 *)(param_1 + 0x8c8),10,in_s0);
    }
  }
  else {
    uVar14 = (ulonglong)DAT_002eb8c8;
    uVar15 = CONCAT44(DAT_002eb8cc,DAT_002eb8c4);
    iVar3 = 0;
    fVar12 = DAT_002eb8bc;
    fVar13 = DAT_002eb8c0;
    do {
      uVar6 = 0;
      if (iVar3 == 0) {
        uVar6 = *(uint *)(param_1 + 0xc94);
      }
      else if (iVar3 == 1) {
        uVar6 = *(uint *)(param_1 + 0xc98);
      }
      piVar5 = (int *)func_0052FBA0(*piVar2 + 0x3dbbc,uVar6);
      if (((piVar5 != (int *)0x0) &&
          (fVar9 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(piVar5[0xf4]),
          fVar11 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(piVar5[0xf6]),
          in_s0 = fVar9 * fVar9 + fVar11 * fVar11, in_s0 < fVar12)) &&
         (*(char *)((int)piVar5 + 0x511) == '\0')) {
        fVar9 = func_00556764((int)piVar5);
        *(float *)(param_1 + 0xd4c) = fVar12 + fVar9 * fVar13;
        if (*(char *)(param_1 + 0xd47) == '\0') {
          func_004FC07C(param_1,0x1c,2,0);
          *(undefined1 *)(param_1 + 0xd47) = 1;
        }
        else {
          func_004FC07C(param_1,0x1d,2,0);
          *(undefined1 *)(param_1 + 0xd47) = 0;
        }
        func_0035EFF8(piVar5);
        fVar11 = ALBW_AS_F32(piVar5[0xf7]);
        fVar7 = ALBW_AS_F32(piVar5[0xf8]);
        fVar9 = ALBW_AS_F32(piVar5[0xf9]);
        *(float *)(param_1 + 0xbe0) = fVar9;
        *(float *)(param_1 + 0xbd8) = fVar11;
        *(float *)(param_1 + 0xbdc) = fVar7;
        in_s0 = fVar11 * fVar11 + fVar7 * fVar7 + fVar9 * fVar9;
        if (ALBW_AS_F32(uVar15) < SQRT(in_s0)) {
          fVar10 = ALBW_AS_F32(uVar14) / SQRT(in_s0);
          in_s0 = fVar11 * fVar10;
          *(float *)(param_1 + 0xbd8) = in_s0;
          *(float *)(param_1 + 0xbdc) = fVar7 * fVar10;
          *(float *)(param_1 + 0xbe0) = fVar9 * fVar10;
        }
        *(int *)(param_1 + 0xc1c) = (int)((ulonglong)uVar15 >> 0x20);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 2);
    uVar15 = func_0058AB74(param_1);
    iVar3 = (int)uVar15;
    if (((iVar3 == 0x1c || iVar3 == 0x1d) || iVar3 == 0x1e) &&
       (iVar3 = func_0058A8F0(param_1), iVar3 != 0)) {
      func_004FC07C(param_1,0x18,0xffffffff,0);
    }
  }
  bVar8 = *(char *)(param_1 + 0xc9c) != '\0';
  cVar1 = '\0';
  if (bVar8) {
    cVar1 = *(char *)(param_1 + 0xc9d);
  }
  if (!bVar8 || cVar1 == '\0') {
    return 0;
  }
  return func_006640EC((undefined4 *)(param_1 + 0x8c8),0x13,in_s0);
}

