#include "ghidra_types.h"

extern int func_0048CF5C(undefined4 *param_1);
extern undefined4 DAT_00493eac;
extern undefined4 DAT_00493eb0;

// USA 00493EAC <- EU 00493E84 (Ghidra, non-matching)
// GLOBAL DAT_00493eac undefined4
// GLOBAL DAT_00493eb0 undefined4

undefined4 func_00493EAC(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0048CF5C(param_1);
  uVar1 = DAT_00493eac;
  *puVar2 = DAT_00493eb0;
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined1 *)((int)puVar2 + 9) = 0;
  puVar2[3] = uVar1;
  return (undefined4)param_1;
}

