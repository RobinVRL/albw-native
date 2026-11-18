#include "ghidra_types.h"

extern int func_00588BF0(int param_1,int param_2);
extern int func_00659024(undefined4 *param_1,undefined1 param_2);
extern float DAT_0017791c;
extern float DAT_00177920;

// USA 00177878 <- EU 00177878 (Ghidra, non-matching)
// GLOBAL DAT_0017791c float
// GLOBAL DAT_00177920 float

void func_00177878(int param_1)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = DAT_0017791c;
  if (DAT_0017791c < *(float *)(param_1 + 0x4b4)) {
    fVar2 = *(float *)(param_1 + 0x4b4) - DAT_00177920;
    *(float *)(param_1 + 0x4b4) = fVar2;
    if (fVar3 < fVar2) {
      fVar3 = fVar2;
    }
    *(float *)(param_1 + 0x4b4) = fVar3;
  }
  if (((*(short *)(param_1 + 0x36) == 0) ||
      ((*(char *)(param_1 + 0x4b1) == '\0' && (bVar1 = func_00588BF0(param_1,0), bVar1)))) ||
     ((*(char *)(param_1 + 0x4b1) == '\x01' && (bVar1 = func_00588BF0(param_1,0), !bVar1)))) {
    func_00659024((undefined4 *)(param_1 + 0x40c),1);
  }
  return;
}

