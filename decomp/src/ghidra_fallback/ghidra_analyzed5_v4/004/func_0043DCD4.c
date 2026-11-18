#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0043CE2C(int param_1);
extern void func_0043D1D4(int param_1,float fparam_0);
extern undefined4 *DAT_0043dd00;
extern float DAT_0043dd04;

// USA 0043DCD4 <- EU 0043DCB4 (Ghidra, non-matching)
// GLOBAL DAT_0043dd00 undefined4 *
// GLOBAL DAT_0043dd04 float

void func_0043DCD4(int param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float in_s0;
  float fparam_0;
  
  func_0043CE2C(param_1);
  func_0043D1D4(param_1,in_s0);
  uVar2 = *DAT_0043dd00;
  uVar3 = DAT_0043dd00[1];
  *(int *)(param_1 + 400) = param_1;
  *(undefined4 *)(param_1 + 0x194) = uVar2;
  *(undefined4 *)(param_1 + 0x198) = uVar3;
  puVar1 = (undefined2 *)(param_1 + 0x134);
  *(undefined2 **)(param_1 + 0x178) = puVar1;
  if (puVar1 != (undefined2 *)0x0) {
    fparam_0 = DAT_0043dd04;
  }
  *(int *)(param_1 + 0x180) = param_1 + 0x18c;
  if (puVar1 != (undefined2 *)0x0) {
    func_002317C0(puVar1,fparam_0);
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}

