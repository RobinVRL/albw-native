#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0018EB94(int param_1);
extern int func_001AFCB4(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001b0c38;
extern uint *DAT_001b0c3c;
extern undefined4 *DAT_001b0c40;
extern undefined4 DAT_001b0c44;

// USA 001B0B98 <- EU 001B0B98 [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b0c38 int *
// GLOBAL DAT_001b0c3c uint *
// GLOBAL DAT_001b0c40 undefined4 *
// GLOBAL DAT_001b0c44 undefined4

undefined4 func_001B0B98(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 != 4) {
    return 0;
  }
  func_001AFCB4(param_1);
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_001b0c38 + 0x3dbbc,param_1[0x286]);
  if (((*DAT_001b0c3c & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001b0c3c), iVar2 != 0)) {
    *DAT_001b0c40 = DAT_001b0c44;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_001b0c40), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    return func_0018EB94((int)puVar1);
  }
  return 0;
}

