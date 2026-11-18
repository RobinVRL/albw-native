#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00431F28(int param_1,int param_2);
extern int func_0043227C(undefined4 *param_1);
extern int func_004A8EB4(int param_1);
extern undefined4 DAT_004edc70;

// USA 004EDC5C <- EU 004EDC34 (Ghidra, non-matching)
// GLOBAL DAT_004edc70 undefined4

undefined4 func_004EDC5C(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = func_004A8EB4(param_2);
  puVar2 = (undefined4 *)func_0010BAB4(DAT_004edc70);
  puVar3 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = func_0043227C(puVar2);
  }
  *(undefined4 **)(param_1 + 0x10) = puVar3;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return func_00431F28((int)puVar3,iVar1);
}

