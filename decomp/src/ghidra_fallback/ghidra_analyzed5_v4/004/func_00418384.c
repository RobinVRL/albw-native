#include "ghidra_types.h"

extern int func_003DE188(int param_1,float fparam_0);
extern int func_003E0B14(int param_1,int param_2);
extern void func_00418498(int param_1,int param_2);
extern int func_0067F8D4(float *param_1,float param_2,float fparam_0);
extern float DAT_004183c4;

// USA 00418384 <- EU 00418364 (Ghidra, non-matching)
// GLOBAL DAT_004183c4 float

undefined4 func_00418384(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fparam_0;
  
  iVar1 = param_1 + param_2 * 0x10;
  if (*(int *)(iVar1 + 0x20) < *(int *)(iVar1 + 0x1c)) {
    func_00418498(param_1,param_2);
  }
  fparam_0 = DAT_004183c4;
  func_0067F8D4((float *)(iVar1 + 0x14),0.0,DAT_004183c4);
  func_003DE188((int)(char)param_2,fparam_0);
  return func_003E0B14((int)(char)param_2,param_3);
}

