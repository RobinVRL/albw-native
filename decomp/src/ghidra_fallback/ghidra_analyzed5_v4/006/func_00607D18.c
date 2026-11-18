#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00607d44;
extern undefined4 DAT_00607d48;
extern int DAT_00607d4c;
extern undefined4 *DAT_00607d50;

// USA 00607D18 <- EU 00607CF0 (Ghidra, non-matching)
// GLOBAL DAT_00607d44 undefined4
// GLOBAL DAT_00607d48 undefined4
// GLOBAL DAT_00607d4c int
// GLOBAL DAT_00607d50 undefined4 *

int * func_00607D18(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00607d44);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,3,DAT_00607d48,0xff);
    iVar3 = DAT_00607d4c + 0xb8;
    *piVar2 = DAT_00607d4c;
    puVar1 = DAT_00607d50;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}

