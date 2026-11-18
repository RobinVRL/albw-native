#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00339CC4(undefined4 *param_1,uint *param_2,int param_3,undefined4 param_4, undefined1 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00606180;
extern undefined4 DAT_00606184;
extern int DAT_00606188;
extern undefined4 *DAT_0060618c;

// USA 00606154 <- EU 0060612C (Ghidra, non-matching)
// GLOBAL DAT_00606180 undefined4
// GLOBAL DAT_00606184 undefined4
// GLOBAL DAT_00606188 int
// GLOBAL DAT_0060618c undefined4 *

int * func_00606154(uint *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0010BAB4(DAT_00606180);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_00339CC4(puVar1,param_1,4,DAT_00606184,0xff);
    iVar3 = DAT_00606188 + 0xb8;
    *piVar2 = DAT_00606188;
    puVar1 = DAT_0060618c;
    piVar2[200] = iVar3;
    func_004C03B8((int)piVar2,puVar1);
  }
  return piVar2;
}

