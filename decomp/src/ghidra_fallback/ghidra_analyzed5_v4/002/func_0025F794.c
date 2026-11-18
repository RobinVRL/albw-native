#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF5B0(int param_1,int param_2,int param_3,int param_4);
extern int func_004D02E8(int param_1,int param_2);
extern int *DAT_0025f998;
extern uint *DAT_0025f99c;
extern undefined4 *DAT_0025f9a0;
extern undefined4 DAT_0025f9a4;
extern float DAT_0025f9a8;
extern undefined4 DAT_0025f9ac;
extern float DAT_0025f9b0;
extern uint *DAT_0025f9b4;
extern undefined4 DAT_0025f9b8;
extern undefined4 *DAT_0025f9bc;
extern float DAT_0025f9c0;

// USA 0025F794 <- EU 0025F7BC (Ghidra, non-matching)
// GLOBAL DAT_0025f998 int *
// GLOBAL DAT_0025f99c uint *
// GLOBAL DAT_0025f9a0 undefined4 *
// GLOBAL DAT_0025f9a4 undefined4
// GLOBAL DAT_0025f9a8 float
// GLOBAL DAT_0025f9ac undefined4
// GLOBAL DAT_0025f9b0 float
// GLOBAL DAT_0025f9b4 uint *
// GLOBAL DAT_0025f9b8 undefined4
// GLOBAL DAT_0025f9bc undefined4 *
// GLOBAL DAT_0025f9c0 float

undefined4 func_0025F794(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int *piVar5;
  uint in_fpscr;
  float fVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  func_00169A80(*(int **)(param_1 + 0x78),param_2,param_3,param_4);
  uVar4 = 0;
  func_00168E9C(*(int **)(param_1 + 0x78),*(int *)(param_1 + 0x6c),(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x74),extraout_r1,uVar4,param_4);
  func_00168E9C(*(int **)(param_1 + 0x74),*(int *)(param_1 + 0x6c),(int *)0x0);
  func_004CEAF0(*(int *)(param_1 + 0x6c));
  piVar5 = *(int **)(*DAT_0025f998 + 0x28d4);
  if (((*DAT_0025f99c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0025f99c), iVar2 != 0)) {
    *DAT_0025f9a0 = DAT_0025f9a4;
  }
  if ((piVar5 == (int *)0x0) ||
     (iVar2 = (**(code **)(*piVar5 + 8))(piVar5,DAT_0025f9a0), iVar2 == 0)) {
    piVar5 = (int *)0x0;
  }
  fVar10 = DAT_0025f9b0;
  uVar4 = DAT_0025f9ac;
  fVar9 = DAT_0025f9a8;
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  pfVar3 = (float *)(iVar2 + 0x80);
  *pfVar3 = fVar10;
  *(float *)(iVar2 + 0x84) = fVar9;
  *(float *)(iVar2 + 0x88) = fVar9;
  *(float *)(iVar2 + 0x90) = fVar9;
  *(float *)(iVar2 + 0x94) = fVar10;
  *(float *)(iVar2 + 0x98) = fVar9;
  *(float *)(iVar2 + 0xa0) = fVar9;
  *(float *)(iVar2 + 0xa4) = fVar9;
  *(float *)(iVar2 + 0xa8) = fVar10;
  *(float *)(iVar2 + 0x8c) = fVar9;
  *(float *)(iVar2 + 0x9c) = fVar9;
  *(undefined4 *)(iVar2 + 0xac) = uVar4;
  func_001157FC(pfVar3,(float *)(piVar5 + 0x48),pfVar3);
  if (((*DAT_0025f9b4 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_0025f9b4), puVar1 = DAT_0025f9bc, uVar4 = DAT_0025f9b8,
     iVar2 != 0)) {
    *DAT_0025f9bc = DAT_0025f9b8;
    puVar1[1] = uVar4;
    puVar1[2] = ALBW_AS_U32(fVar10);
  }
  iVar2 = *(int *)(param_1 + 0x70);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  puVar1 = DAT_0025f9bc;
  *(undefined4 *)(iVar2 + 0x74) = *DAT_0025f9bc;
  *(undefined4 *)(iVar2 + 0x78) = puVar1[1];
  *(undefined4 *)(iVar2 + 0x7c) = puVar1[2];
  func_004CEAF0(*(int *)(param_1 + 0x70));
  func_004D02E8(*(int *)(param_1 + 0x70),1);
  fVar6 = *(float *)(param_1 + 0x7c) * DAT_0025f9c0;
  uVar7 = (uint)fVar6;
  fVar8 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar8;
  if (fVar8 != fVar6) {
    fVar10 = fVar9;
  }
  if (fVar6 <= fVar10 && (fVar8 != fVar6 && fVar9 != fVar6)) {
    uVar7 = uVar7 - 1;
  }
  return func_004CF5B0(*(int *)(param_1 + 0x70),0,0,uVar7 & 0xff);
}

