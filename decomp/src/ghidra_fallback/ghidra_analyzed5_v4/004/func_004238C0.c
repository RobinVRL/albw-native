#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00584B94(int param_1,int param_2);
extern int DAT_00423908;
extern int *DAT_0042390c;
extern float DAT_00423910;

// USA 004238C0 <- EU 004238A0 (Ghidra, non-matching)
// GLOBAL DAT_00423908 int
// GLOBAL DAT_0042390c int *
// GLOBAL DAT_00423910 float

void func_004238C0(int param_1)

{
  bool bVar1;
  
  bVar1 = func_00584B94(*DAT_0042390c,DAT_00423908);
  if (bVar1) {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb2) = 0xd;
    *(undefined2 *)(param_1 + 0xb0) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0xb2) = 0xc;
    *(undefined2 *)(param_1 + 0xb0) = 0;
  }
  func_002317C0((undefined2 *)(param_1 + 0xb0),DAT_00423910);
  return;
}

