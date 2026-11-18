#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern undefined4 *DAT_0043d8dc;
extern float DAT_0043d8e0;

// USA 0043D898 <- EU 0043D878 (Ghidra, non-matching)
// GLOBAL DAT_0043d8dc undefined4 *
// GLOBAL DAT_0043d8e0 float

void func_0043D898(int param_1)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(param_1 + 0x1c);
  puVar1 = DAT_0043d8dc;
  *(undefined2 *)(param_1 + 0x136) = 0x11;
  *(undefined2 *)(param_1 + 0x134) = 0;
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  *(int *)(param_1 + 400) = param_1;
  *(undefined4 *)(param_1 + 0x194) = uVar3;
  *(undefined4 *)(param_1 + 0x198) = uVar4;
  puVar2 = (undefined2 *)(param_1 + 0x134);
  *(undefined2 **)(param_1 + 0x178) = puVar2;
  *(int *)(param_1 + 0x180) = param_1 + 0x18c;
  if (puVar2 != (undefined2 *)0x0) {
    func_002317C0(puVar2,DAT_0043d8e0);
  }
  *(undefined1 *)(param_1 + 0x188) = 1;
  return;
}

