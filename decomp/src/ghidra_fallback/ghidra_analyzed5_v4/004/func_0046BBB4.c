#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_0046bc3c;

// GLOBAL DAT_0046bc3c float
// USA 0046BBB4 <- EU 0046BBB4 (Ghidra, function missing from the decomp table)

void func_0046BBB4(int param_1)

{
  int iVar1;
  float fparam_0;
  
  fparam_0 = DAT_0046bc3c;
  iVar1 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar1 + 0x48) == '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar1 + 0x2c),fparam_0);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar1 + 0x48) != '\0') {
    *(undefined2 *)(iVar1 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar1 + 0x20),fparam_0);
    *(undefined1 *)(iVar1 + 0x48) = 0;
  }
  func_00231448(iVar1 + 0x2c);
  *(undefined1 *)(iVar1 + 0x49) = 0;
  return;
}

