#include "ghidra_types.h"

extern int func_0040E208(undefined4 *param_1);
extern int func_0041C6E8(undefined4 *param_1);
extern undefined4 DAT_00410640;

// USA 0041062C <- EU 0041060C (Ghidra, non-matching)
// GLOBAL DAT_00410640 undefined4

int func_0041062C(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0040E208(param_1);
  *puVar1 = DAT_00410640;
  puVar1[0x46] = param_2;
  *(undefined1 *)(puVar1 + 0x47) = 0;
  *(undefined1 *)((int)puVar1 + 0x11d) = 0;
  iVar2 = func_0041C6E8(puVar1 + 0x49);
  return iVar2 + -0x124;
}

