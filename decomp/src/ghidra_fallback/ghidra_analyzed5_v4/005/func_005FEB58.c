#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00602630(void);
extern int *DAT_005feb98;
extern uint DAT_005feb9c;
extern undefined4 *DAT_005feba0;

// USA 005FEB58 <- EU 005FEB30 (Ghidra, non-matching)
// GLOBAL DAT_005feb98 int *
// GLOBAL DAT_005feb9c uint
// GLOBAL DAT_005feba0 undefined4 *

undefined4 func_005FEB58(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  uVar2 = DAT_005feb9c;
  piVar1 = DAT_005feb98;
  *DAT_005feb98 = (int)param_1;
  func_00110490(param_1,uVar2);
  puVar3 = func_00602630();
  *(undefined4 **)(*piVar1 + 0x800) = puVar3;
  if (puVar3 != (undefined4 *)0x0) {
    piVar1[1] = 1;
    return 0;
  }
  if ((code *)*DAT_005feba0 != (code *)0x0) {
    (*(code *)*DAT_005feba0)(0x10000,0x100,0);
  }
  *piVar1 = 0;
  return 0xffffffff;
}

