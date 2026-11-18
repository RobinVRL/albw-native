#include "ghidra_types.h"

extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D39C(int *param_1,int param_2,int param_3);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_0065A840(undefined4 *param_1,undefined1 param_2);

// USA 001A75E4 <- EU 001A75E4 (Ghidra, non-matching)

void func_001A75E4(int param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar1);
  fVar1 = func_0058AC38(param_1);
  fVar2 = func_0058AA40(param_1);
  func_0051D39C((int *)(param_1 + 1000),*(int *)(param_1 + 0x920),(int)(fVar1 - fVar2));
  if ((int)(fVar1 - fVar2) == 0) {
    func_0065A840((undefined4 *)(param_1 + 0x8bc),3);
  }
  return;
}

