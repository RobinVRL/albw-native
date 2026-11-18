#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0035D864(undefined4 *param_1,uint *param_2,undefined4 param_3,undefined1 param_4);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00606050;
extern int DAT_00606054;
extern undefined4 *DAT_00606058;

// USA 00606028 <- EU 00606000 (Ghidra, non-matching)
// GLOBAL DAT_00606050 undefined4
// GLOBAL DAT_00606054 int
// GLOBAL DAT_00606058 undefined4 *

int * func_00606028(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00606050);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_0035D864(puVar2,param_1,0,5);
    iVar1 = DAT_00606054;
    piVar3[200] = DAT_00606054 + 0xb8;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_00606058);
  }
  return piVar3;
}

