#include "ghidra_types.h"

extern int func_003FD92C(undefined4 *param_1);
extern undefined4 DAT_00168254;
extern undefined4 DAT_00168258;
extern undefined4 DAT_0016825c;

// USA 00168204 <- EU 00168204 (Ghidra, non-matching)
// GLOBAL DAT_00168254 undefined4
// GLOBAL DAT_00168258 undefined4
// GLOBAL DAT_0016825c undefined4

int func_00168204(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  puVar3 = func_003FD92C(param_1);
  uVar2 = DAT_00168258;
  uVar1 = DAT_00168254;
  puVar3[5] = DAT_00168254;
  puVar3[6] = uVar1;
  puVar3[7] = uVar2;
  puVar3[8] = uVar1;
  puVar3[9] = 0;
  uVar1 = DAT_0016825c;
  *(undefined1 *)(puVar3 + 10) = 0;
  puVar3[0xc] = uVar1;
  *(undefined1 *)(puVar3 + 0xd) = 1;
  *(undefined1 *)((int)puVar3 + 0x35) = 0;
  return (int)puVar3;
}

