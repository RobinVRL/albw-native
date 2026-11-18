#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0043fc34;

// USA 0043FBE8 <- EU 0043FBC8 (Ghidra, non-matching)
// GLOBAL DAT_0043fc34 float

void func_0043FBE8(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_0043fc34;
  iVar1 = *(int *)(param_1 + 0x16c);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined2 *)(iVar1 + 0xb2) = 5;
    *(undefined2 *)(iVar1 + 0xb0) = 0;
    *(undefined4 *)(iVar1 + 0xc4) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined2 *)(iVar1 + 0xbe) = 8;
    *(undefined2 *)(iVar1 + 0xbc) = 0;
    func_002317C0((undefined2 *)(iVar1 + 0xb0),fparam_0);
    func_002317C0((undefined2 *)(iVar1 + 0xbc),fparam_0);
    return;
  }
  return;
}

