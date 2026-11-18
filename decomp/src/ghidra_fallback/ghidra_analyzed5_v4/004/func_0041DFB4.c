#include "ghidra_types.h"

extern int func_0040E208(undefined4 *param_1);
extern int func_00419464(undefined4 *param_1);
extern undefined4 DAT_0041dfc8;

// USA 0041DFB4 <- EU 0041DF94 (Ghidra, non-matching)
// GLOBAL DAT_0041dfc8 undefined4

int * func_0041DFB4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)func_0040E208(param_1);
  *puVar1 = DAT_0041dfc8;
  puVar1[0x46] = param_2;
  *(undefined1 *)(puVar1 + 0x47) = 0;
  *(undefined1 *)((int)puVar1 + 0x11d) = 0;
  piVar2 = func_00419464(puVar1 + 0x48);
  return piVar2 + -0x48;
}

