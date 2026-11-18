#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern uint *DAT_003dce7c;
extern undefined4 *DAT_003dce80;
extern undefined4 DAT_003dce84;
extern undefined4 DAT_003dce88;

// USA 003DCE04 <- EU 003DCDE4 (Ghidra, non-matching)
// GLOBAL DAT_003dce7c uint *
// GLOBAL DAT_003dce80 undefined4 *
// GLOBAL DAT_003dce84 undefined4
// GLOBAL DAT_003dce88 undefined4

undefined4 * func_003DCE04(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (((*DAT_003dce7c & 1) == 0) &&
     (iVar2 = func_00100174((int *)DAT_003dce7c), puVar1 = DAT_003dce80, iVar2 != 0)) {
    *DAT_003dce80 = 0;
    puVar1[1] = 0;
    puVar1[4] = 0;
    *(undefined1 *)(puVar1 + 5) = 1;
    puVar1[6] = 0;
    *(undefined1 *)(puVar1 + 7) = 1;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0xffffffff;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
    *(undefined1 *)((int)puVar1 + 0xe) = 0;
    *(undefined1 *)(puVar1 + 2) = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
  }
  return DAT_003dce80;
}

