#include "ghidra_types.h"

extern int func_004BDA28(int *param_1);
extern int func_004C01E4(undefined4 *param_1);
extern int func_004C1418(int *param_1,int param_2);
extern float DAT_004db7f0;
extern float DAT_004db7f4;
extern int DAT_004db7f8;

// USA 004DB79C <- EU 004DB774 (Ghidra, non-matching)
// GLOBAL DAT_004db7f0 float
// GLOBAL DAT_004db7f4 float
// GLOBAL DAT_004db7f8 int

void func_004DB79C(int *param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  func_004C1418(param_1,1);
  func_004BDA28(param_1);
  func_004C01E4(param_1);
  iVar1 = DAT_004db7f8;
  fVar5 = DAT_004db7f4;
  uVar3 = param_1[0x26a] + 0xb60b60;
  param_1[0x26a] = uVar3;
  pfVar2 = (float *)(iVar1 + (uVar3 >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (*pfVar2 + pfVar2[1] * fVar4 * fVar5) * DAT_004db7f0;
  param_1[0x26b] = (int)ALBW_AS_U32(fVar5);
  param_1[0xf5] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf5]) + fVar5));
  return;
}

