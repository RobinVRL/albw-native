#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00105C64(undefined4 *param_1,byte *param_2);
extern undefined4 DAT_001020bc;
extern undefined *DAT_001020c0;

// USA 00102070 <- EU 00102070 (Ghidra, non-matching)
// GLOBAL DAT_001020bc undefined4
// GLOBAL DAT_001020c0 undefined *

undefined4 * func_00102070(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = func_00105C64(param_1,param_2);
  *puVar2 = DAT_001020bc;
  puVar1 = DAT_001020c0;
  puVar2[0x5a] = 7;
  iVar3 = func_00100118((int)(puVar2 + 0x5b),puVar1,0xc,2);
  *(undefined1 *)(iVar3 + 0x1c) = 0;
  *(undefined1 *)(iVar3 + 0x1d) = 0;
  *(undefined1 *)(iVar3 + 0x1e) = 0;
  *(undefined1 *)(iVar3 + 0x1f) = 0;
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined1 *)(iVar3 + 0x24) = 0;
  return (undefined4 *)(iVar3 + -0x16c);
}

