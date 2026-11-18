#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_004cae3c;
extern uint *DAT_004cae40;
extern undefined4 *DAT_004cae44;
extern undefined4 DAT_004cae48;

// USA 004CADD8 <- EU 004CADB0 (Ghidra, non-matching)
// GLOBAL DAT_004cae3c int *
// GLOBAL DAT_004cae40 uint *
// GLOBAL DAT_004cae44 undefined4 *
// GLOBAL DAT_004cae48 undefined4

undefined4 * func_004CADD8(undefined4 param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = (undefined4 *)func_0052FBA0(*DAT_004cae3c + 0x3dbbc,param_2);
    if (((*DAT_004cae40 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_004cae40), iVar2 != 0)) {
      *DAT_004cae44 = DAT_004cae48;
    }
    if ((puVar1 == (undefined4 *)0x0) ||
       (iVar2 = (**(code **)*puVar1)(puVar1,DAT_004cae44), iVar2 == 0)) {
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

