#include "ghidra_types.h"

extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_00584CA8(int param_1,int param_2,int param_3);
extern float DAT_004d10e0;
extern float DAT_004d10e4;
extern float DAT_004d10e8;

// USA 004D1064 <- EU 004D103C (Ghidra, non-matching)
// GLOBAL DAT_004d10e0 float
// GLOBAL DAT_004d10e4 float
// GLOBAL DAT_004d10e8 float

void func_004D1064(int param_1,float fparam_0)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  uVar3 = VectorFloatToUnsigned(fparam_0 * DAT_004d10e0,3);
  fVar4 = (DAT_004d10e4 - fparam_0) * DAT_004d10e8;
  puVar1 = (undefined4 *)func_00584CA8(*(int *)(param_1 + 0x478),*(int *)(param_1 + 0x49c),3);
  local_20 = CONCAT13((char)uVar3,(int3)*puVar1);
  func_004CF5DC(*(int *)(param_1 + 0x478),*(int *)(param_1 + 0x49c),3,&local_20);
  iVar2 = **(int **)(*(int *)(param_1 + 0x478) + 0x20) + *(int *)(param_1 + 0x49c) * 0x154;
  *(undefined4 *)(iVar2 + 0x110) = *(undefined4 *)(iVar2 + 0x110);
  *(float *)(iVar2 + 0x114) = fVar4;
  return;
}

