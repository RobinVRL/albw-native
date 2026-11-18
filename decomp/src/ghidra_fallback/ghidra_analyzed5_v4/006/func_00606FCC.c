#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00372A1C(undefined4 *param_1,uint *param_2);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern undefined4 DAT_00606fec;
extern int DAT_00606ff0;
extern undefined4 *DAT_00606ff4;

// USA 00606FCC <- EU 00606FA4 (Ghidra, non-matching)
// GLOBAL DAT_00606fec undefined4
// GLOBAL DAT_00606ff0 int
// GLOBAL DAT_00606ff4 undefined4 *

int * func_00606FCC(uint *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)func_0010BAB4(DAT_00606fec);
  piVar3 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar3 = (int *)func_00372A1C(puVar2,param_1);
    iVar1 = DAT_00606ff0;
    piVar3[200] = DAT_00606ff0 + 0xb8;
    *piVar3 = iVar1;
    func_004C03B8((int)piVar3,DAT_00606ff4);
  }
  return piVar3;
}

