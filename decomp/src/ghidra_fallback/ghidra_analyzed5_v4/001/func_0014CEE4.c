#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0049FE74(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0014cf68;
extern undefined *DAT_0014cf6c;

// USA 0014CEE4 <- EU 0014CEE4 (Ghidra, non-matching)
// GLOBAL DAT_0014cf68 undefined4
// GLOBAL DAT_0014cf6c undefined *

undefined4 func_0014CEE4(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = func_0049FE74(param_1,param_2,(int)"TaskRender" /* EU 0014CF5C */);
  *puVar1 = DAT_0014cf68;
  *(undefined1 *)(puVar1 + 0x6b) = 0;
  puVar1[0x6c] = 0;
  puVar1[0x6d] = 0;
  puVar1[0x6e] = 0;
  puVar1[0x6f] = 0;
  puVar1[0x70] = 0;
  puVar1[0x71] = 0;
  puVar1[0x72] = 0;
  puVar1[0x73] = 0;
  puVar1[0x74] = 0;
  if (puVar1 + 0x75 != (undefined4 *)0x0) {
    puVar1[0x71] = puVar1 + 0x75;
    puVar1[0x72] = 3;
  }
  *(undefined1 *)(puVar1 + 0x84) = 0;
  *(undefined1 *)((int)puVar1 + 0x211) = 0;
  puVar1[0x85] = 0;
  iVar2 = func_00100118((int)(puVar1 + 0x86),DAT_0014cf6c,4,3);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  return (undefined4)param_1;
}

