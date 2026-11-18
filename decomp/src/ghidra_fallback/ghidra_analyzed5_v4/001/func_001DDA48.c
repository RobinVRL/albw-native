#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001ddae0;
extern uint *DAT_001ddae4;
extern undefined4 *DAT_001ddae8;
extern undefined4 DAT_001ddaec;

// USA 001DDA48 <- EU 001DDA48 (Ghidra, non-matching)
// GLOBAL DAT_001ddae0 int *
// GLOBAL DAT_001ddae4 uint *
// GLOBAL DAT_001ddae8 undefined4 *
// GLOBAL DAT_001ddaec undefined4

undefined4 func_001DDA48(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_001ddae0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((*DAT_001ddae4 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001ddae4), iVar2 != 0)) {
    *DAT_001ddae8 = DAT_001ddaec;
  }
  if ((puVar1 != (undefined4 *)0x0) &&
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_001ddae8), iVar2 != 0)) {
    *(undefined4 *)(param_1 + 0x720) = *(undefined4 *)(param_2 + 0x14);
    return 1;
  }
  return 0;
}

