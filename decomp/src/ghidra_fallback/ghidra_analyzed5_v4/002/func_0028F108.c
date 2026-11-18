#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_0028f17c;
extern int DAT_0028f180;

// USA 0028F108 <- EU 0028F130 (Ghidra, non-matching)
// GLOBAL DAT_0028f17c undefined4
// GLOBAL DAT_0028f180 int

undefined4 * func_0028F108(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar3 = DAT_0028f17c;
  puVar2[0x1c] = 0;
  *puVar2 = uVar3;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  *(undefined1 *)(puVar2 + 0x1f) = 0;
  *(undefined1 *)((int)puVar2 + 0x7d) = 0;
  *(undefined2 *)(puVar2 + 0x20) = 0xffff;
  iVar1 = DAT_0028f180;
  puVar2[0x21] = 0;
  puVar2[0x22] = 0;
  uVar3 = *(undefined4 *)(iVar1 + 4);
  puVar2[0x24] = 0;
  puVar2[0x23] = uVar3;
  return puVar2;
}

