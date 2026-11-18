#include "ghidra_types.h"

extern int func_0010961C(int param_1);
extern int func_00109698(int param_1);
extern int *DAT_003aa308;

// USA 003AA2D4 <- EU 003AA2B0 (Ghidra, non-matching)
// GLOBAL DAT_003aa308 int *

void func_003AA2D4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x134;
  func_0010961C(iVar2);
  puVar1 = *(undefined4 **)(param_1 + 0x17c);
  if (puVar1 != (undefined4 *)0x0) {
    (**(code **)*puVar1)(puVar1,iVar2,0);
  }
  *(undefined4 *)(param_1 + 0x178) = 0;
  func_00109698(iVar2);
  if (*DAT_003aa308 != 0) {
    *(undefined1 *)(*DAT_003aa308 + 0x66) = 0;
  }
  return;
}

