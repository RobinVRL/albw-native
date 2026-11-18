#include "ghidra_types.h"

extern int func_00412728(undefined4 *param_1);
extern int DAT_00413100;

// USA 004130D0 <- EU 004130B0 (Ghidra, non-matching)
// GLOBAL DAT_00413100 int

int func_004130D0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = DAT_00413100 + 0x20;
  *param_1 = DAT_00413100;
  param_1[3] = iVar2;
  if (*(char *)((int)param_1 + 0x261) == '\0') {
    *(undefined1 *)(param_1 + 0x98) = 0;
    *(undefined1 *)((int)param_1 + 0x261) = 1;
    param_1[4] = 0;
  }
  puVar1 = func_00412728(param_1 + 3);
  return (int)(puVar1 + -3);
}

