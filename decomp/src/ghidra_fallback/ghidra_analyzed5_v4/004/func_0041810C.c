#include "ghidra_types.h"

extern void func_00418498(int param_1,int param_2);
extern int func_0067F8D4(float *param_1,float param_2,float fparam_0);
extern float DAT_00418158;
extern uint DAT_0041815c;

// USA 0041810C <- EU 004180EC (Ghidra, non-matching)
// GLOBAL DAT_00418158 float
// GLOBAL DAT_0041815c uint

undefined4 func_0041810C(int param_1,int param_2,int param_3)

{
  int iVar1;
  float fparam_0;
  
  iVar1 = param_1 + param_2 * 0x10;
  if (param_3 == 0) {
    fparam_0 = DAT_00418158;
    func_00418498(param_1,param_2);
    if (*(int *)(iVar1 + 0x1c) <= *(int *)(iVar1 + 0x20)) {
      return func_0067F8D4((float *)(iVar1 + 0x14),0.0,fparam_0);
    }
  }
  else {
    func_0067F8D4((float *)(iVar1 + 0x14),
                  ALBW_AS_F32(((ulonglong)(param_3 + 4) * (ulonglong)DAT_0041815c >> 0x22)),DAT_00418158);
  }
  return 0;
}

