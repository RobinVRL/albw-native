#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_006071b4;
extern undefined4 DAT_006071b8;
extern int DAT_006071bc;
extern undefined4 *DAT_006071c0;

// USA 00607188 <- EU 00607160 (Ghidra, non-matching)
// GLOBAL DAT_006071b4 undefined4
// GLOBAL DAT_006071b8 undefined4
// GLOBAL DAT_006071bc int
// GLOBAL DAT_006071c0 undefined4 *

int * func_00607188(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_006071b4);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,3,DAT_006071b8,0xff);
    iVar3 = DAT_006071bc + 0xb8;
    *piVar2 = DAT_006071bc;
    puVar1 = DAT_006071c0;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}

