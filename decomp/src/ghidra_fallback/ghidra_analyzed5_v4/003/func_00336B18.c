#include "ghidra_types.h"

extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern float DAT_00336d88;

// USA 00336B18 <- EU 00336AF4 (Ghidra, non-matching)
// GLOBAL DAT_00336d88 float

void func_00336B18(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar6;
  float *pfVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint in_fpscr;
  float fVar11;
  ulonglong uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  piVar9 = *(int **)(param_1 + 0x428);
  pfVar7 = &local_28;
  uVar1 = *(uint *)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8 + 4);
  pcVar5 = *(code **)(*(int *)(param_1 + 0x430) + *(char *)(param_1 + 0x418) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(int *)((int)piVar9 + ((int)uVar1 >> 1)));
  }
  (*pcVar5)((int)((int)piVar9) + ((int)uVar1 >> 1));
  iVar6 = *(int *)(param_1 + 0x424);
  iVar2 = *(int *)(param_1 + 0x414) + 1;
  *(int *)(param_1 + 0x414) = iVar2;
  if (iVar6 != 0) {
    fVar11 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar6,1,fVar11);
  }
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(DAT_00336d88);
  iVar2 = *(int *)(*(int *)(param_1 + 0x444) + 0xc);
  piVar10 = (int *)(param_1 + 0x440);
  if (DAT_00336d88 < *(float *)(*(int *)(*(int *)(param_1 + 0x444) + 0x14) + 0x10)) {
    local_28 = *(float *)(param_1 + 0x3d0);
    uStack_24 = *(undefined4 *)(param_1 + 0x3d4);
    uStack_20 = *(undefined4 *)(param_1 + 0x3d8);
    iVar2 = *(int *)(param_1 + 0x440);
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    func_004D8AEC((float *)(iVar2 + 0x80),*(uint *)(param_1 + 1000),&local_28);
    func_004CEAF0(*piVar10);
    func_00169A80(*(int **)(param_1 + 0x444),extraout_r1,pfVar7,piVar9);
    uVar8 = 0;
    func_00168E9C(*(int **)(param_1 + 0x444),*piVar10,(int *)0x0);
    func_00169A80(*(int **)(param_1 + 0x448),extraout_r1_00,uVar8,piVar9);
    func_00168E9C(*(int **)(param_1 + 0x448),*piVar10,(int *)0x0);
    iVar3 = *(int *)(param_1 + 0x444);
    iVar2 = *(int *)(iVar3 + 0x14);
    iVar6 = *(int *)(iVar3 + 0xc);
    piVar9 = (int *)(uint)*(byte *)(iVar2 + 0x1c);
    if (piVar9 == (int *)0x0) {
      fVar11 = ALBW_AS_F32(uVar12);
      if (*(float *)(iVar2 + 0x10) < fVar11) {
        if (fVar11 < *(float *)(iVar2 + 8)) goto LAB_00336c68;
      }
      else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) goto LAB_00336c68;
      *(float *)(*(int *)(iVar3 + 0x14) + 0x10) = fVar11;
    }
  }
LAB_00336c68:
  func_00169A80(*(int **)(param_1 + 0x44c),iVar2,iVar6,piVar9);
  uVar8 = 0;
  func_00168E9C(*(int **)(param_1 + 0x44c),*(int *)(param_1 + 0x440),(int *)0x0);
  uVar1 = 0;
  do {
    piVar10 = (int *)(param_1 + 0x450);
    if (uVar1 < 7) {
      piVar10 = piVar10 + uVar1;
    }
    if (ALBW_AS_F32(uVar12) < *(float *)(*(int *)(*piVar10 + 0x14) + 0x10)) {
      puVar4 = (undefined4 *)(param_1 + 0x450);
      if (uVar1 < 7) {
        puVar4 = puVar4 + uVar1;
      }
      func_00169A80((int *)*puVar4,*(undefined4 *)(*piVar10 + 0xc),uVar8,piVar9);
      puVar4 = (undefined4 *)(param_1 + 0x450);
      if (uVar1 < 7) {
        puVar4 = puVar4 + uVar1;
      }
      uVar8 = 0;
      func_00168E9C((int *)*puVar4,*(int *)(param_1 + 0x440),(int *)0x0);
      piVar10 = (int *)(param_1 + 0x450);
      if (uVar1 < 7) {
        piVar10 = piVar10 + uVar1;
      }
      iVar2 = *(int *)(*piVar10 + 0x14);
      if (*(char *)(iVar2 + 0x1c) == '\0') {
        fVar11 = ALBW_AS_F32(uVar12);
        if (*(float *)(iVar2 + 0x10) < fVar11) {
          if (*(float *)(iVar2 + 8) <= fVar11) goto LAB_00336d54;
        }
        else if (*(float *)(iVar2 + 8) == *(float *)(iVar2 + 0x14)) {
LAB_00336d54:
          piVar10 = (int *)(param_1 + 0x450);
          if (uVar1 < 7) {
            piVar10 = piVar10 + uVar1;
          }
          *(float *)(*(int *)(*piVar10 + 0x14) + 0x10) = fVar11;
        }
      }
    }
    uVar1 = uVar1 + 1;
    if (6 < (int)uVar1) {
      return;
    }
  } while( true );
}

