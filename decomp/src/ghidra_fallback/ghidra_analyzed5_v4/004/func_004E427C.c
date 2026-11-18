#include "ghidra_types.h"

extern int func_004E4788(int *param_1);
extern int func_0066A8D8(undefined4 *param_1,undefined1 param_2);
extern float DAT_004e4354;
extern float DAT_004e4358;
extern float DAT_004e435c;

// USA 004E427C <- EU 004E4254 (Ghidra, non-matching)
// GLOBAL DAT_004e4354 float
// GLOBAL DAT_004e4358 float
// GLOBAL DAT_004e435c float

void func_004E427C(int *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  if ((uint)param_1[0x12a] < (uint)param_1[299]) {
    param_1[0x12a] = param_1[0x12a] + 1;
  }
  fVar1 = DAT_004e4358;
  iVar2 = param_1[0x188];
  if (iVar2 != 0) {
    iVar3 = param_1[299] - param_1[0x12a];
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    fVar4 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = *(float *)(iVar2 + 100) +
            (ALBW_AS_F32(param_1[0x14a]) - *(float *)(iVar2 + 100)) * (DAT_004e4354 / fVar4);
    *(float *)(iVar2 + 100) = fVar4;
    fVar4 = fVar4 * fVar1;
    *(float *)(iVar2 + 0x60) = fVar4;
    *(float *)(iVar2 + 0x58) = fVar4;
    *(undefined1 *)((int)param_1 + 0x671) = 1;
  }
  param_1[0x135] = param_1[0xf4];
  param_1[0x136] = param_1[0xf5];
  param_1[0x137] = param_1[0xf6];
  func_004E4788(param_1);
  iVar2 = *(int *)(param_1[0x11f] + 0x14);
  if (*(char *)(iVar2 + 0x1c) == '\0') {
    if (*(float *)(iVar2 + 0x10) < DAT_004e435c) {
      if (DAT_004e435c < *(float *)(iVar2 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar2 + 8) != *(float *)(iVar2 + 0x14)) {
      return;
    }
    func_0066A8D8(param_1 + 0x121,1);
  }
  return;
}

