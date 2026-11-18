#include "ghidra_types.h"

extern float DAT_0056a150;
extern float DAT_0056a154;

// USA 0056A148 <- EU 0056A120 (Ghidra, non-matching)
// GLOBAL DAT_0056a150 float
// GLOBAL DAT_0056a154 float

float func_0056A148(char *param_1)

{
  float fVar1;
  
  if ((*param_1 != '\0') || (fVar1 = DAT_0056a150, *(float *)(param_1 + 0x10) != DAT_0056a150)) {
    fVar1 = *(float *)(param_1 + 4) * DAT_0056a154;
  }
  return fVar1;
}

