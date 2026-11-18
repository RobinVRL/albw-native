#include "ghidra_types.h"

extern int func_0065C310(undefined4 *param_1,undefined1 param_2);
extern float DAT_001cd5d4;
extern float DAT_001cd5d8;

// USA 001CD570 <- EU 001CD570 (Ghidra, non-matching)
// GLOBAL DAT_001cd5d4 float
// GLOBAL DAT_001cd5d8 float

void func_001CD570(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_001cd5d8;
  fVar1 = *(float *)(param_1 + 0x3e0) - DAT_001cd5d4;
  *(float *)(param_1 + 0x3e0) = fVar1;
  if (fVar1 <= fVar2) {
    func_0065C310((undefined4 *)(param_1 + 0x4d4),1);
  }
  if (*(char *)(param_1 + 0x424) != '\0') {
    *(float *)(param_1 + 0x3e0) = fVar2;
    func_0065C310((undefined4 *)(param_1 + 0x4d4),1);
  }
  return;
}

