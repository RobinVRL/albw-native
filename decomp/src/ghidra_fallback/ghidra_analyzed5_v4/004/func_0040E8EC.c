#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_0040e938;
extern undefined4 *DAT_0040e93c;
extern undefined4 DAT_0040e940;
extern undefined4 DAT_0040e944;

// USA 0040E8EC <- EU 0040E8CC (Ghidra, non-matching)
// GLOBAL DAT_0040e938 uint *
// GLOBAL DAT_0040e93c undefined4 *
// GLOBAL DAT_0040e940 undefined4
// GLOBAL DAT_0040e944 undefined4

undefined4 * func_0040E8EC(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*DAT_0040e938 & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_0040e938), puVar1 = DAT_0040e93c, iVar2 != 0)) {
    *DAT_0040e93c = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0xffffffff;
    *(undefined1 *)(puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 0x15) = 0;
  }
  return DAT_0040e93c;
}

