#include "ghidra_types.h"

extern int func_002D5C70(undefined4 *param_1,int *param_2);
extern undefined4 DAT_002de944;
extern undefined4 DAT_002de948;

// USA 002DE8E4 <- EU 002DE8C0 (Ghidra, non-matching)
// GLOBAL DAT_002de944 undefined4
// GLOBAL DAT_002de948 undefined4

undefined4 func_002DE8E4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)func_002D5C70(param_1,param_2);
  uVar1 = DAT_002de948;
  *puVar2 = DAT_002de944;
  puVar2[0x1c] = puVar2[10] + 0x6e4;
  puVar2[0x1d] = 0;
  puVar2[0x1e] = 0;
  puVar2[0x1f] = uVar1;
  puVar2[0x20] = uVar1;
  puVar2[0x21] = uVar1;
  *(undefined1 *)(puVar2 + 0x22) = 0;
  *(undefined1 *)((int)puVar2 + 0x89) = 0;
  *(undefined1 *)((int)puVar2 + 0x8a) = 0;
  *(undefined1 *)((int)puVar2 + 0x8b) = 1;
  *(undefined2 *)(puVar2 + 0x23) = 0xffff;
  *(undefined2 *)((int)puVar2 + 0x8e) = 0xffff;
  *(undefined2 *)(puVar2 + 0x24) = 0xffff;
  puVar2[0x25] = uVar1;
  *(undefined1 *)(puVar2 + 0x26) = 0;
  puVar2[0x27] = 0xffffffff;
  puVar2[0x28] = uVar1;
  puVar2[0x29] = uVar1;
  *(undefined1 *)(puVar2 + 0x2a) = 0;
  return (undefined4)param_1;
}

