#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00231EE4(undefined4 *param_1);
extern int func_004B9A10(undefined4 *param_1,undefined1 param_2);
extern int DAT_0026e1d0;
extern int DAT_0026e1d4;

// USA 0026E134 <- EU 0026E15C (Ghidra, non-matching)
// GLOBAL DAT_0026e1d0 int
// GLOBAL DAT_0026e1d4 int

int * func_0026E134(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  piVar2 = func_004B9A10(param_1,0);
  iVar1 = DAT_0026e1d0;
  piVar2[0xe] = DAT_0026e1d0 + 0x54;
  *piVar2 = iVar1;
  puVar3 = (undefined4 *)func_0010BAB4(0x84);
  puVar4 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = func_00231EE4(puVar3);
  }
  piVar2[0x1d] = (int)puVar4;
  iVar1 = DAT_0026e1d4;
  piVar2[0x1f] = 0;
  piVar2[0x20] = 0;
  piVar2[0x21] = iVar1;
  piVar2[0x22] = iVar1;
  *(undefined1 *)((int)piVar2 + 0x8e) = 1;
  *(undefined1 *)((int)piVar2 + 0xf) = 0;
  piVar2[6] = piVar2[6] | 4;
  return piVar2;
}

