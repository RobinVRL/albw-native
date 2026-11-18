#include "ghidra_types.h"

extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern float DAT_001d773c;
extern float DAT_001d7740;

// USA 001D76D8 <- EU 001D76D8 (Ghidra, non-matching)
// GLOBAL DAT_001d773c float
// GLOBAL DAT_001d7740 float

void func_001D76D8(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = DAT_001d7740;
  fVar1 = *(float *)(param_1 + 0x3e0) - DAT_001d773c;
  *(float *)(param_1 + 0x3e0) = fVar1;
  if (fVar1 <= fVar2) {
    func_0065C988((undefined4 *)(param_1 + 0x4d4),2);
  }
  if (*(char *)(param_1 + 0x424) != '\0') {
    *(float *)(param_1 + 0x3e0) = fVar2;
    func_0065C988((undefined4 *)(param_1 + 0x4d4),2);
  }
  return;
}

