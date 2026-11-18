#include "ghidra_types.h"

extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_002E1BB4(undefined4 *param_1,undefined2 param_2);
extern undefined4 DAT_003288dc;
extern undefined4 DAT_003288e0;
extern undefined4 DAT_003288e4;
extern int DAT_003288e8;

// USA 003288A0 <- EU 0032887C (Ghidra, non-matching)
// GLOBAL DAT_003288dc undefined4
// GLOBAL DAT_003288e0 undefined4
// GLOBAL DAT_003288e4 undefined4
// GLOBAL DAT_003288e8 int

int func_003288A0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = func_0010DA7C(param_1,0,3);
  uVar2 = DAT_003288e4;
  *puVar4 = DAT_003288dc;
  puVar4[4] = param_2;
  *(undefined1 *)(puVar4 + 5) = 0;
  uVar1 = DAT_003288e0;
  puVar4[6] = 0;
  puVar4[7] = uVar2;
  puVar4[8] = uVar1;
  iVar3 = DAT_003288e8;
  puVar4[9] = uVar1;
  puVar4[10] = 0;
  *(undefined1 *)(puVar4 + 0xb) = 0;
  puVar4 = func_002E1BB4(puVar4 + 0xc,*(undefined2 *)(iVar3 + 0x2a));
  return (int)(puVar4 + -0xc);
}

