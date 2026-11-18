#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0045E5C4(int param_1);
extern int *DAT_00474e5c;
extern float DAT_00474e60;

// USA 00474DF0 <- EU 00474DC8 (Ghidra, non-matching)
// GLOBAL DAT_00474e5c int *
// GLOBAL DAT_00474e60 float

void func_00474DF0(int param_1)

{
  int iVar1;
  float fparam_0;
  
  func_0045E5C4(*DAT_00474e5c);
  fparam_0 = DAT_00474e60;
  func_002317C0((undefined2 *)(*(int *)(param_1 + 0xfc) + 0x2c),DAT_00474e60);
  iVar1 = *(int *)(param_1 + 0xfc);
  func_00231448(iVar1 + 0x50);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined2 *)(iVar1 + 0x5e) = 4;
  *(undefined2 *)(iVar1 + 0x5c) = 0;
  func_002317C0((undefined2 *)(iVar1 + 0x5c),fparam_0);
  iVar1 = *(int *)(param_1 + 0xfc);
  if (*(char *)(iVar1 + 0x158) != '\0') {
    *(undefined1 *)(iVar1 + 0x158) = 0;
    *(undefined2 *)(iVar1 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    return;
  }
  return;
}

