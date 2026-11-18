#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_00656794(undefined4 *param_1,undefined1 param_2);
extern int DAT_00127300;
extern float DAT_00127304;

// USA 00127284 <- EU 00127284 (Ghidra, non-matching)
// GLOBAL DAT_00127300 int
// GLOBAL DAT_00127304 float

undefined4 func_00127284(int param_1)

{
  int iVar1;
  float fparam_0;
  
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x8e0),DAT_00127300,0x7fffffff,
                DAT_00127304);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_004FABDC(param_1,0,0xffffffff,0);
  }
  if (*(int *)(param_1 + 0x8bc) == *(int *)(param_1 + 0x8e8)) {
    func_00656794((undefined4 *)(param_1 + 0x8bc),1);
  }
  fparam_0 = func_004F898C();
  return func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
}

