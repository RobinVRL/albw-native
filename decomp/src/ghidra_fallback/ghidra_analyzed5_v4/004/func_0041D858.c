#include "ghidra_types.h"

extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_003E67D8(int param_1,uint param_2);
extern int func_003E69B8(int *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_003E6C04(int param_1,int param_2,int param_3);
extern int func_0041D908(int param_1,undefined4 param_2,int param_3);

// USA 0041D858 <- EU 0041D838 (Ghidra, non-matching)

bool func_0041D858(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  
  func_0041D908((int)param_1,param_2,param_3);
  func_003E67D8(*param_1,3);
  piVar1 = func_003E6C04(*param_1,0x18,4);
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    piVar1[4] = 0;
    piVar1[5] = 0;
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = (int)(piVar1 + 3);
    piVar1[4] = (int)(piVar1 + 3);
    *(undefined1 *)(piVar1 + 5) = 1;
    func_003E69B8(piVar1 + 2,(undefined4 *)piVar1[3],piVar1 + 3);
    func_00112364(param_1 + 1,(int)(param_1 + 2),piVar1);
  }
  return piVar1 != (int *)0x0;
}

