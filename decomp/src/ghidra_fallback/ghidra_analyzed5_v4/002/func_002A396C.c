#include "ghidra_types.h"

extern int func_002A45FC(int param_1,int param_2);
extern int func_004FB4E0(int param_1,float fparam_0);
extern float DAT_002a3988;
extern undefined4 DAT_002a398c;

// USA 002A396C <- EU 002A3948 (Ghidra, non-matching)
// GLOBAL DAT_002a3988 float
// GLOBAL DAT_002a398c undefined4

void func_002A396C(int param_1)

{
  undefined4 uVar1;
  
  func_002A45FC(param_1,0);
  func_004FB4E0(param_1,DAT_002a3988);
  uVar1 = DAT_002a398c;
  *(undefined4 *)(param_1 + 0xb64) = 1;
  *(undefined4 *)(param_1 + 0xb68) = uVar1;
  *(undefined4 *)(param_1 + 0xb60) = 0;
  *(undefined1 *)(param_1 + 0xb78) = 0;
  return;
}

