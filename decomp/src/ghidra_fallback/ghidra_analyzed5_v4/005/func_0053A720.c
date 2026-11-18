#include "ghidra_types.h"

extern int func_00564A78(int param_1,int *param_2);
extern undefined DAT_0053a774;
extern int DAT_0053a77c;
extern int DAT_0053a780;

// USA 0053A720 <- EU 0053A6F8 (Ghidra, non-matching)
// GLOBAL DAT_0053a774 undefined
// GLOBAL DAT_0053a77c int
// GLOBAL DAT_0053a780 int

bool func_0053A720(int param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined * *)(albw_frame + 0xc))
  local_14 = &DAT_0053a774;
  local_18 = DAT_0053a77c;
  uVar1 = func_00564A78(*(int *)(param_1 + 0x40c),&local_18);
  iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar1 * 0x30;
  fVar3 = *(float *)(iVar2 + 0xc) - *param_2;
  fVar4 = *(float *)(iVar2 + 0x2c) - param_2[2];
  return (int)ALBW_AS_U32((fVar3 * fVar3 + fVar4 * fVar4)) <= DAT_0053a780;
}

