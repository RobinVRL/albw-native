#include "ghidra_types.h"

extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern float DAT_00214958;
extern float DAT_0021495c;
extern float DAT_00214960;

// USA 002148C8 <- EU 002148C8 (Ghidra, non-matching)
// GLOBAL DAT_00214958 float
// GLOBAL DAT_0021495c float
// GLOBAL DAT_00214960 float

void func_002148C8(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (*(char *)(param_1 + 0x8c1) != '\a' && *(char *)(param_1 + 0x8c1) != '\v') {
    fVar1 = func_0058AA40(param_1);
    *(int *)(param_1 + 0xaf4) = (int)fVar1;
    fVar2 = func_0058AC38(param_1);
    fVar1 = DAT_00214958;
    fVar2 = DAT_00214960 / (fVar2 * DAT_00214958);
    fVar3 = DAT_0021495c * fVar2 * DAT_0021495c;
    *(float *)(param_1 + 0xa44) = -(fVar2 * fVar2 * DAT_0021495c);
    *(float *)(param_1 + 0xa48) = fVar3;
    *(undefined4 *)(param_1 + 0xad4) = 2;
    *(float *)(param_1 + 0xad8) = fVar1;
    *(undefined4 *)(param_1 + 0xad0) = 0;
  }
  return;
}

