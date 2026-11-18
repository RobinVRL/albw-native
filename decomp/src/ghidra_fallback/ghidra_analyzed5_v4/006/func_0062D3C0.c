#include "ghidra_types.h"

extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0062CF64(int param_1,int param_2,undefined1 param_3);
extern int DAT_0062d3d4;
extern float DAT_0062d3d8;

// USA 0062D3C0 <- EU 0062D398 (Ghidra, non-matching)
// GLOBAL DAT_0062d3d4 int
// GLOBAL DAT_0062d3d8 float

void func_0062D3C0(int param_1)

{
  int iVar1;
  
  iVar1 = func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x818),DAT_0062d3d4,0x7fffffff,
                        DAT_0062d3d8);
  if (iVar1 != 0) {
    func_0062CF64(param_1,*(int *)(param_1 + 0x984),0);
  }
  return;
}

