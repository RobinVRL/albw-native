#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00602bc8;
extern undefined4 DAT_00602bcc;
extern int DAT_00602bd0;
extern undefined4 *DAT_00602bd4;

// USA 00602B90 <- EU 00602B68 (Ghidra, non-matching)
// GLOBAL DAT_00602bc8 undefined4
// GLOBAL DAT_00602bcc undefined4
// GLOBAL DAT_00602bd0 int
// GLOBAL DAT_00602bd4 undefined4 *

int * func_00602B90(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00602bc8);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,2,DAT_00602bcc,0xff);
    iVar3 = DAT_00602bd0 + 0xb8;
    *piVar2 = DAT_00602bd0;
    puVar1 = DAT_00602bd4;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
    piVar2[0x22b] = piVar2[0x22b] | 0x10;
  }
  return piVar2;
}

