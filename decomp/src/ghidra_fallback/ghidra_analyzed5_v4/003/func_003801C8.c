#include "ghidra_types.h"

extern int func_0038063C(int param_1);
extern int func_003818A4(int param_1);
extern int func_00520FC0(void);
extern int func_00588BE4(int param_1);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00380314;
extern int DAT_00380318;
extern int *DAT_0038031c;
extern float DAT_00380320;
extern float DAT_00380324;
extern float DAT_00380328;
extern undefined4 DAT_0038032c;
extern undefined4 DAT_00380330;
extern undefined4 DAT_00380334;

// USA 003801C8 <- EU 003801A4 (Ghidra, non-matching)
// GLOBAL DAT_00380314 int *
// GLOBAL DAT_00380318 int
// GLOBAL DAT_0038031c int *
// GLOBAL DAT_00380320 float
// GLOBAL DAT_00380324 float
// GLOBAL DAT_00380328 float
// GLOBAL DAT_0038032c undefined4
// GLOBAL DAT_00380330 undefined4
// GLOBAL DAT_00380334 undefined4

undefined4 func_003801C8(int param_1)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (*(uint *)(param_1 + 0xae8) < *(uint *)(param_1 + 0xaec)) {
    *(uint *)(param_1 + 0xae8) = *(uint *)(param_1 + 0xae8) + 1;
  }
  else {
    iVar2 = func_00588BE4(param_1);
    piVar1 = DAT_00380314;
    if (iVar2 != *DAT_00380314) {
      *(undefined1 *)(param_1 + 0xb2c) = 0;
    }
    if (*(int *)(param_1 + 0xb10) < DAT_00380318) {
      iVar2 = func_0038063C(param_1);
      if (iVar2 == 0) {
        return func_006678C0((undefined4 *)(param_1 + 0xa48),2);
      }
      iVar2 = func_00588BE4(param_1);
      if (iVar2 != *piVar1) {
        return func_006678C0((undefined4 *)(param_1 + 0xa48),7);
      }
    }
  }
  iVar2 = func_00588BE4(param_1);
  fVar5 = DAT_00380328;
  iVar4 = *DAT_0038031c;
  *(undefined4 *)(param_1 + 0xb04) = DAT_0038032c;
  fVar9 = DAT_00380320;
  if (iVar2 == iVar4) {
    fVar9 = DAT_00380324;
  }
  fVar8 = fVar9 + fVar5;
  fVar9 = fVar9 - fVar5;
  pfVar3 = (float *)func_00520FC0();
  fVar7 = *pfVar3 - *(float *)(param_1 + 0xa84);
  fVar5 = pfVar3[2] - *(float *)(param_1 + 0xa8c);
  uVar6 = DAT_00380330;
  if ((fVar7 * fVar7 + fVar5 * fVar5 < fVar9 * fVar9) ||
     (pfVar3 = (float *)func_00520FC0(), fVar5 = *pfVar3 - *(float *)(param_1 + 0xa84),
     fVar9 = pfVar3[2] - *(float *)(param_1 + 0xa8c), uVar6 = DAT_00380334,
     fVar8 * fVar8 < fVar5 * fVar5 + fVar9 * fVar9)) {
    *(undefined4 *)(param_1 + 0xb04) = uVar6;
  }
  return func_003818A4(param_1);
}

