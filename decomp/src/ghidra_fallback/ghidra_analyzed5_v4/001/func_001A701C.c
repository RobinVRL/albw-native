#include "ghidra_types.h"

extern float func_001A786C(int param_1,int param_2);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0058A8F0(int param_1);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);
extern float DAT_001a708c;

// USA 001A701C <- EU 001A701C (Ghidra, non-matching)
// GLOBAL DAT_001a708c float

void func_001A701C(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fparam_0);
  func_001A786C(param_1,1);
  if (*(float *)(param_1 + 0x928) == DAT_001a708c) {
    *(undefined1 *)(*(int *)(param_1 + 0x8e4) + 0x61) = 0;
  }
  iVar1 = func_0058A8F0(param_1);
  if (iVar1 != 0) {
    func_0065A840((undefined4 *)(param_1 + 0x8bc),0);
  }
  return;
}

