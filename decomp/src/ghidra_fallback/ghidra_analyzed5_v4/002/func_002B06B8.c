#include "ghidra_types.h"

extern float DAT_002b0720;
extern float DAT_002b0724;

// USA 002B06B8 <- EU 002B0694 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:2 ushort
// GLOBAL DAT_002b0720 float
// GLOBAL DAT_002b0724 float

undefined4 func_002B06B8(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5,
                  undefined1 param_6,ushort param_7,float fparam_0,float fparam_1)

{
  bool bVar1;
  float fVar2;
  undefined1 uVar3;
  
  *(undefined1 *)(param_1 + 0x245) = param_2;
  if (param_4 < 0) {
    uVar3 = 4;
  }
  else {
    uVar3 = (undefined1)param_4;
  }
  *(undefined1 *)(param_1 + 0x246) = param_3;
  *(undefined1 *)(param_1 + 0x248) = uVar3;
  fVar2 = DAT_002b0720;
  bVar1 = fparam_0 < DAT_002b0720;
  *(ushort *)(param_1 + 0x254) = *(ushort *)(param_1 + 0x254) | param_7;
  if (param_5 < 1) {
    uVar3 = 0xc;
  }
  else {
    uVar3 = (undefined1)param_5;
  }
  *(undefined1 *)(param_1 + 0x24a) = param_6;
  if (bVar1) {
    fparam_0 = DAT_002b0724;
  }
  *(undefined1 *)(param_1 + 0x247) = uVar3;
  *(float *)(param_1 + 0x24c) = fparam_0;
  if (fparam_1 < fVar2) {
    fparam_1 = fVar2;
  }
  *(float *)(param_1 + 0x250) = fparam_1;
  *(bool *)(param_1 + 0x24b) = *(char *)(param_1 + 0x248) == '\0';
  return (undefined4)param_1;
}

