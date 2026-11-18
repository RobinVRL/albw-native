#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_00442b50;

// USA 00442AE8 <- EU 00442AC8 (Ghidra, non-matching)
// GLOBAL DAT_00442b50 float

void func_00442AE8(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_00442b50;
  iVar1 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar1 + 0x48) != '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  func_00231448(iVar1 + 0x2c);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar1 + 0x48) == '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar1 + 0x2c),fparam_0);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  return;
}

