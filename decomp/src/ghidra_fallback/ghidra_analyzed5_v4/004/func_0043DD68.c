#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern undefined4 *DAT_0043ddb0;
extern float DAT_0043ddb4;

// USA 0043DD68 <- EU 0043DD48 (Ghidra, non-matching)
// GLOBAL DAT_0043ddb0 undefined4 *
// GLOBAL DAT_0043ddb4 float

void func_0043DD68(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float in_s0;
  
  func_0012C790(*(int *)(param_1 + 0x144));
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x136) = 0x10;
  puVar1 = DAT_0043ddb0;
  *(undefined2 *)(param_1 + 0x134) = 0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(int *)(param_1 + 400) = param_1;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  puVar2 = (undefined2 *)(param_1 + 0x134);
  *(undefined2 **)(param_1 + 0x178) = puVar2;
  if (puVar2 != (undefined2 *)0x0) {
    in_s0 = DAT_0043ddb4;
  }
  *(int *)(param_1 + 0x180) = param_1 + 0x18c;
  if (puVar2 != (undefined2 *)0x0) {
    func_002317C0(puVar2,in_s0);
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}

