#include "ghidra_types.h"

extern int func_00502768(undefined4 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4);
extern undefined4 DAT_002307d4;

// USA 00230740 <- EU 00230740 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 undefined1
// GLOBAL DAT_002307d4 undefined4

undefined4 *
func_00230740(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  puVar1 = func_00502768(param_1,param_2,param_4,param_5);
  *puVar1 = DAT_002307d4;
  puVar2 = puVar1 + 0xd;
  puVar1[0xc] = param_3;
  puVar4 = puVar1 + 0x13;
  puVar1[0xe] = puVar2;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *puVar2 = puVar2;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar3 = 0;
    iVar5 = 7;
    puVar1[0x10] = puVar4;
    do {
      iVar5 = iVar5 + -1;
      puVar4[iVar3] = puVar4 + iVar3 + 3;
      iVar3 = iVar3 + 3;
    } while (iVar5 != 0);
    puVar1[0x28] = 0;
    puVar1[0x11] = puVar4;
    puVar1[0x12] = 8;
  }
  return puVar1;
}

