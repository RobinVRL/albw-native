#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern undefined4 DAT_00367438;
extern undefined4 DAT_0036743c;
extern undefined4 DAT_00367440;

// USA 003673F4 <- EU 003673D0 (Ghidra, non-matching)
// GLOBAL DAT_00367438 undefined4
// GLOBAL DAT_0036743c undefined4
// GLOBAL DAT_00367440 undefined4

undefined4 * func_003673F4(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = func_0010DA7C(param_1,0,param_2);
  *puVar2 = DAT_0036743c;
  *(undefined2 *)(puVar2 + 4) = 0x1e;
  *(undefined2 *)((int)puVar2 + 0x12) = 2;
  *(undefined2 *)(puVar2 + 5) = 0x1e;
  uVar1 = DAT_00367438;
  *(undefined1 *)((int)puVar2 + 0x16) = 0;
  *(undefined1 *)((int)puVar2 + 0x17) = 3;
  puVar2[6] = uVar1;
  puVar2[7] = uVar1;
  uVar1 = DAT_00367440;
  puVar2[8] = DAT_00367440;
  puVar2[9] = uVar1;
  puVar2[10] = uVar1;
  puVar2[0xb] = uVar1;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  return puVar2;
}

