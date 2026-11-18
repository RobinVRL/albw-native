#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014ED58(int param_1);
extern int func_0034CA24(undefined4 *param_1);
extern uint DAT_0027d468;
extern float DAT_0027d46c;
extern float DAT_0027d470;
extern float DAT_0027d474;
extern undefined4 DAT_0027d478;
extern float DAT_0027d47c;

// USA 0027D288 <- EU 0027D2B0 (Ghidra, non-matching)
// GLOBAL DAT_0027d468 uint
// GLOBAL DAT_0027d46c float
// GLOBAL DAT_0027d470 float
// GLOBAL DAT_0027d474 float
// GLOBAL DAT_0027d478 undefined4
// GLOBAL DAT_0027d47c float

void func_0027D288(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  func_0034CA24(*(undefined4 **)(param_1 + 0x4c4));
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x574),param_1 + 0x4b4,DAT_0027d468,0,0);
  bVar6 = false;
  fVar9 = DAT_0027d46c;
  if (**(int **)(param_1 + 0x4c4) != 0) {
    cVar1 = *(char *)((int)*(int **)(param_1 + 0x4c4) + 0x21);
    bVar6 = cVar1 == '\v';
    if ((!bVar6) && (cVar1 == '\x02')) {
      func_0014ED58(*(int *)(param_1 + 0x430));
      *(undefined1 *)(param_1 + 0x5bc) = 1;
      uVar2 = DAT_0027d478;
      *(undefined4 *)(param_1 + 0x5b4) = 0xb4;
      *(undefined4 *)(param_1 + 0x5b8) = uVar2;
      *(undefined4 *)(param_1 + 0x5b0) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x570) + 0x61) = 0;
    }
  }
  if (*(char *)(param_1 + 0x5bc) == '\0') {
    if (!bVar6) {
      fVar7 = *(float *)(param_1 + 0x57c) + DAT_0027d474;
      goto joined_r0x0027d3fc;
    }
    fVar7 = *(float *)(param_1 + 0x57c) - DAT_0027d474;
    fVar8 = DAT_0027d47c;
    if (fVar7 < DAT_0027d47c) goto LAB_0027d3d0;
  }
  else {
    fVar7 = *(float *)(param_1 + 0x57c) - DAT_0027d474;
joined_r0x0027d3fc:
    fVar8 = DAT_0027d470;
    if (fVar7 < DAT_0027d470) goto LAB_0027d3d0;
  }
  fVar8 = fVar7;
  if (fVar9 < fVar7) {
    fVar8 = fVar9;
  }
LAB_0027d3d0:
  *(float *)(param_1 + 0x57c) = fVar8;
  uVar5 = 0;
  if (*(int *)(param_1 + 0x58c) < 1) {
    return;
  }
  do {
    piVar4 = (int *)(param_1 + 0x510);
    if (uVar5 < 0xc) {
      piVar4 = piVar4 + uVar5 * 2;
    }
    iVar3 = *piVar4;
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == piVar4[1])) {
      *(undefined4 *)(iVar3 + 0x34) = *(undefined4 *)(param_1 + 0x57c);
      *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 0x20;
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < *(int *)(param_1 + 0x58c));
  return;
}

