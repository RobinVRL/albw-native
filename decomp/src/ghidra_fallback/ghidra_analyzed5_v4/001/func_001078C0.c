#include "ghidra_types.h"

extern int func_00109994(int param_1);
extern int func_0010B3C0(int *param_1,int param_2,int param_3);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_0010C864(undefined4 *param_1,float fparam_0);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern void *func_0010E74C();
extern int func_0010F1DC(int *param_1,int *param_2);
extern undefined4 *DAT_00107acc;
extern undefined4 DAT_00107ad0;
extern undefined4 DAT_00107ad4;
extern float DAT_00107ad8;
extern float DAT_00107adc;

// USA 001078C0 <- EU 001078C0 (Ghidra, non-matching)
// GLOBAL DAT_00107acc undefined4 *
// GLOBAL DAT_00107ad0 undefined4
// GLOBAL DAT_00107ad4 undefined4
// GLOBAL DAT_00107ad8 float
// GLOBAL DAT_00107adc float

int * func_001078C0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  float fVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[5] = param_1 + 5;
  param_1[8] = 0xffffffff;
  param_1[10] = param_1 + 9;
  param_1[0xb] = 0;
  puVar1 = DAT_00107acc;
  param_1[9] = param_1 + 9;
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = param_1;
  fVar10 = DAT_00107ad8;
  uVar6 = puVar1[1];
  param_1[0x10] = *puVar1;
  param_1[0x11] = uVar6;
  param_1[0xe] = DAT_00107ad0;
  param_1[0xf] = param_1 + 0xd;
  param_1[0x12] = param_1;
  uVar6 = puVar1[2];
  param_1[0x16] = puVar1[3];
  param_1[0x13] = DAT_00107ad4;
  param_1[0x14] = param_1 + 0x12;
  param_1[0x15] = uVar6;
  puVar1 = func_0010C864(param_1 + 0x17,fVar10);
  puVar1 = func_0010C864(puVar1 + 6,fVar10);
  fVar10 = DAT_00107adc;
  piVar8 = puVar1 + -0x1d;
  puVar1[6] = ALBW_AS_U32(DAT_00107adc);
  puVar1[7] = ALBW_AS_U32(fVar10);
  iVar2 = func_0010CEE0(0x1f80,(int *)0x0,4);
  if (iVar2 != 0) {
    iVar5 = 0;
    iVar7 = 0x5f;
    puVar1[-0x1a] = iVar2;
    do {
      iVar7 = iVar7 + -1;
      *(int *)(iVar2 + iVar5 * 4) = iVar2 + (iVar5 + 0x14) * 4;
      iVar5 = iVar5 + 0x14;
    } while (iVar7 != 0);
    *(undefined4 *)(iVar2 + 0x1db0) = 0;
    puVar1[-0x19] = iVar2;
    func_0010B3EC(piVar8,0x60,iVar2 + 0x1e00);
  }
  iVar2 = func_0010B3C0(piVar8,0,0x60);
  if (iVar2 != 0) {
    if (0 < *piVar8) {
      func_0010E74C((uint *)puVar1[-0x1b] + 0x60,(uint *)puVar1[-0x1b],*piVar8 << 2,fVar10);
    }
    iVar2 = 0;
    do {
      puVar3 = (undefined4 *)puVar1[-0x1a];
      piVar4 = (int *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar1[-0x1a] = *puVar3;
        piVar4 = func_00109994((int)puVar3);
      }
      iVar5 = iVar2 + 1;
      *(int **)(puVar1[-0x1b] + iVar2 * 4) = piVar4;
      iVar2 = iVar5;
    } while (iVar5 < 0x60);
    *piVar8 = *piVar8 + 0x60;
  }
  puVar1[-0x15] = 0x18;
  puVar1[-0x11] = 0x18;
  piVar4 = (int *)puVar1[-0x1b];
  piVar9 = piVar4 + *piVar8;
  for (; piVar4 != piVar9; piVar4 = piVar4 + 1) {
    func_0010F1DC(puVar1 + -0x18,(int *)(puVar1[-0x15] + *piVar4));
    puVar1[-0x16] = puVar1[-0x16] + 1;
  }
  puVar1[5] = puVar1 + -10;
  return piVar8;
}

