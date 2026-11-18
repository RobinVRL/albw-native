#include "ghidra_types.h"

extern int func_0010A8D4(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_00112364(int *param_1,int param_2,int *param_3);
extern int func_00676328(int *param_1,undefined4 param_2);

// USA 0040F1C4 <- EU 0040F1A4 (Ghidra, non-matching)

undefined4 func_0040F1C4(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  func_0010C0C0((int *)(param_1 + 0x2c));
  func_0010A8D4((int *)(param_2 + 0xc));
  *(undefined1 *)(param_2 + 0x14) = 1;
  piVar1 = (int *)(param_1 + param_3 * 0xc);
  func_00112364(piVar1,(int)(piVar1 + 1),(int *)(param_2 + 4));
  func_00676328((int *)(param_1 + 0x38),0);
  return func_0010C160((int *)(param_1 + 0x2c));
}

