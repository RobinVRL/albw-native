#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00509F0C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0020b80c;
extern int *DAT_0020b810;
extern uint *DAT_0020b814;
extern undefined4 *DAT_0020b818;
extern undefined4 DAT_0020b81c;

// USA 0020B768 <- EU 0020B768 (Ghidra, non-matching)
// GLOBAL DAT_0020b80c int *
// GLOBAL DAT_0020b810 int *
// GLOBAL DAT_0020b814 uint *
// GLOBAL DAT_0020b818 undefined4 *
// GLOBAL DAT_0020b81c undefined4

undefined4 func_0020B768(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_0020b80c + 0x3dbbc,param_1);
  if ((puVar1 != (undefined4 *)0x0) && (iVar2 = func_00588BE4((int)puVar1), iVar2 == *DAT_0020b810))
  {
    if (((*DAT_0020b814 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_0020b814), iVar2 != 0)) {
      *DAT_0020b818 = DAT_0020b81c;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_0020b818);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      func_00509F0C((int)puVar1);
      return 1;
    }
  }
  return 0;
}

