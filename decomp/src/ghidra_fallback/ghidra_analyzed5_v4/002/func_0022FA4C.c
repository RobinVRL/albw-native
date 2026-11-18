#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001D4AD8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_0022fad8;
extern uint *DAT_0022fadc;
extern undefined4 *DAT_0022fae0;
extern undefined4 DAT_0022fae4;

// USA 0022FA4C <- EU 0022FA4C (Ghidra, non-matching)
// GLOBAL DAT_0022fad8 int *
// GLOBAL DAT_0022fadc uint *
// GLOBAL DAT_0022fae0 undefined4 *
// GLOBAL DAT_0022fae4 undefined4

undefined4 func_0022FA4C(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if ((param_2 == 0) &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_0022fad8 + 0x3dbbc,*(uint *)(param_1 + 0x278)),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_0022fadc & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0022fadc), iVar2 != 0)) {
      *DAT_0022fae0 = DAT_0022fae4;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_0022fae0);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      func_001D4AD8((int)puVar1);
    }
  }
  return 1;
}

