// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_002046C8(int param_1,float *param_2,int param_3,float fparam_0);
extern int func_00521100(int param_1,float fparam_0);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00205024;
extern float DAT_00205028;
extern int DAT_0020502c;
extern float DAT_00205030;
extern int DAT_00205034;

// USA 00204F78 <- EU 00204F78 (Ghidra, non-matching)
// GLOBAL DAT_00205024 float
// GLOBAL DAT_00205028 float
// GLOBAL DAT_0020502c int
// GLOBAL DAT_00205030 float
// GLOBAL DAT_00205034 int

void func_00204F78(int param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 0x8bc);
  fVar2 = fVar2 + (DAT_00205024 - fVar2) * DAT_00205028;
  *(float *)(param_1 + 0x8bc) = fVar2;
  func_002046C8(param_1,(float *)(param_1 + 8),*(int *)(DAT_0020502c + 4),fVar2);
  if (*(uint *)(param_1 + 0x8d4) < *(uint *)(param_1 + 0x8d8)) {
    *(uint *)(param_1 + 0x8d4) = *(uint *)(param_1 + 0x8d4) + 1;
  }
  else {
    iVar1 = func_00521100(param_1,DAT_00205030);
    if ((iVar1 != 0) &&
       (fVar2 = *(float *)(param_1 + 8) - *(float *)(param_1 + 0x3d0),
       fVar3 = *(float *)(param_1 + 0x10) - *(float *)(param_1 + 0x3d8),
       (int)ALBW_AS_U32((fVar2 * fVar2 + fVar3 * fVar3)) < DAT_00205034)) {
      func_0065D3A8((undefined4 *)(param_1 + 0x8f0),4);
    }
  }
  return;
}

