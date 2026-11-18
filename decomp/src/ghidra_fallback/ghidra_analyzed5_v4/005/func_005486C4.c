#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_00548724;
extern uint *DAT_00548728;
extern undefined4 *DAT_0054872c;
extern undefined4 DAT_00548730;

// USA 005486C4 <- EU 0054869C (Ghidra, non-matching)
// GLOBAL DAT_00548724 int *
// GLOBAL DAT_00548728 uint *
// GLOBAL DAT_0054872c undefined4 *
// GLOBAL DAT_00548730 undefined4

undefined4 * func_005486C4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if ((*(uint *)(param_1 + 0x78) != 0) &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_00548724 + 0x3dbbc,*(uint *)(param_1 + 0x78)),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_00548728 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_00548728), iVar2 != 0)) {
      *DAT_0054872c = DAT_00548730;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_0054872c);
    puVar3 = (undefined4 *)0x0;
    if (iVar2 != 0) {
      puVar3 = puVar1;
    }
    return puVar3;
  }
  return (undefined4 *)0x0;
}

