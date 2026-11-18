#include "ghidra_types.h"

extern int func_00521058(void);
extern float func_00521298(int param_1);
extern float DAT_00589f80;
extern float DAT_00589f84;
extern float DAT_00589f88;

// USA 00589F28 <- EU 00589F00 (Ghidra, non-matching)
// GLOBAL DAT_00589f80 float
// GLOBAL DAT_00589f84 float
// GLOBAL DAT_00589f88 float

undefined4 func_00589F28(int param_1,float fparam_0)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  
  iVar1 = func_00521058();
  fVar3 = *(float *)(iVar1 + 4) - (*(float *)(param_1 + 0x908) + fparam_0);
  fVar4 = DAT_00589f80;
  if (*(char *)(param_1 + 0x8d8) != '\0') {
    fVar4 = DAT_00589f84;
  }
  if (((fVar3 <= fVar4) || (0x3fffffff < (int)ALBW_AS_U32(fVar3))) ||
     (fVar4 = func_00521298(param_1), DAT_00589f88 <= fVar4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

