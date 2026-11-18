#include "ghidra_types.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a4248;

// USA 001A41FC <- EU 001A41FC (Ghidra, non-matching)
// GLOBAL DAT_001a4248 float

void func_001A41FC(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = *(float *)(param_1 + 0x8f0) * DAT_001a4248;
  *(float *)(param_1 + 0x8f0) = fparam_0;
  func_0014FAFC(param_1,*(uint *)(param_1 + 1000),fparam_0);
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

