#include "ghidra_types.h"

extern int func_0010BA60(undefined4 *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern undefined4 *DAT_0037de50;
extern undefined4 *DAT_0037de54;
extern undefined4 DAT_0037de58;
extern float DAT_0037de5c;
extern float *DAT_0037de60;

// USA 0037DCFC <- EU 0037DCD8 (Ghidra, non-matching)
// GLOBAL DAT_0037de50 undefined4 *
// GLOBAL DAT_0037de54 undefined4 *
// GLOBAL DAT_0037de58 undefined4
// GLOBAL DAT_0037de5c float
// GLOBAL DAT_0037de60 float *

void func_0037DCFC(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  float fVar2;
  float *pfVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  bool bVar12;
  float fVar13;
  
  uVar7 = *(uint *)(param_1 + 0x10);
  uVar4 = 0;
  if (0 < (int)uVar7) {
    do {
      if (uVar4 < uVar7) {
        iVar6 = *(int *)(*(int *)(param_1 + 0x18) + uVar4 * 4);
      }
      else {
        iVar6 = 0;
      }
      bVar12 = *(int *)(iVar6 + 0x14) == param_2;
      if (bVar12) {
        iVar6 = *(int *)(iVar6 + 0x18);
      }
      if (bVar12 && iVar6 == param_3) goto LAB_0037de0c;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (int)uVar7);
  }
  puVar5 = (undefined4 *)func_0010BAB4(0x4c);
  if (puVar5 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    puVar10 = func_0010BA60(puVar5);
    puVar1 = DAT_0037de50;
    puVar10[4] = puVar5;
    puVar10[5] = 0;
    puVar10[6] = 0;
    uVar8 = puVar1[1];
    puVar10[7] = *puVar1;
    puVar10[8] = uVar8;
    uVar8 = DAT_0037de54[1];
    puVar10[9] = *DAT_0037de54;
    puVar10[10] = uVar8;
  }
  puVar10[5] = param_2;
  puVar10[6] = param_3;
  func_00115C70((float *)(puVar10 + 0xb),(float *)(param_3 + 0x18),(float *)(param_2 + 0x18));
  puVar10[0xc] = DAT_0037de58;
  fVar13 = func_00115DC8((float *)(puVar10 + 0xb));
  fVar2 = DAT_0037de5c;
  puVar10[0x11] = ALBW_AS_U32(fVar13);
  puVar10[0x12] = ALBW_AS_U32(fVar2 / fVar13);
  uVar9 = *(undefined4 *)(param_3 + 0x20);
  uVar8 = *(undefined4 *)(param_2 + 0x20);
  uVar11 = *(undefined4 *)(param_3 + 0x18);
  puVar10[7] = *(undefined4 *)(param_2 + 0x18);
  puVar10[8] = uVar8;
  puVar10[10] = uVar9;
  pfVar3 = DAT_0037de60;
  puVar10[9] = uVar11;
  func_00115E10((float *)(puVar10 + 0xe),pfVar3,(float *)(puVar10 + 0xb));
  func_00115DC8((float *)(puVar10 + 0xe));
  if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
    *(undefined4 **)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x10) * 4) = puVar10;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
LAB_0037de0c:
  uVar4 = *(uint *)(param_3 + 0x94);
  uVar7 = 0;
  if (0 < (int)uVar4) {
    do {
      if (uVar7 < uVar4) {
        iVar6 = *(int *)(*(int *)(param_3 + 0x9c) + uVar7 * 4);
      }
      else {
        iVar6 = 0;
      }
      func_0037DCFC(param_1,param_3,iVar6);
      uVar4 = *(uint *)(param_3 + 0x94);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar4);
  }
  return;
}

