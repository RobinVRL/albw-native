#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002506A8(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int *DAT_006760a8;
extern uint *DAT_006760ac;
extern undefined4 *DAT_006760b0;
extern undefined4 DAT_006760b4;

// USA 00676010 <- EU 00675FE8 (Ghidra, non-matching)
// GLOBAL DAT_006760a8 int *
// GLOBAL DAT_006760ac uint *
// GLOBAL DAT_006760b0 undefined4 *
// GLOBAL DAT_006760b4 undefined4

undefined4 func_00676010(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  func_00588C14(iVar3,0,1);
  if ((*(uint *)(iVar3 + 0x4e4) != 0) &&
     (puVar1 = (undefined4 *)func_0052FBA0(*DAT_006760a8 + 0x3dbbc,*(uint *)(iVar3 + 0x4e4)),
     puVar1 != (undefined4 *)0x0)) {
    if (((*DAT_006760ac & 1) == 0) && (iVar2 = func_00100174((int *)DAT_006760ac), iVar2 != 0)) {
      *DAT_006760b0 = DAT_006760b4;
    }
    iVar2 = (**(code **)*puVar1)(puVar1,DAT_006760b0);
    if (iVar2 == 0) {
      puVar1 = (undefined4 *)0x0;
    }
    if (puVar1 != (undefined4 *)0x0) {
      func_002506A8((int)puVar1,*(int *)(iVar3 + 0x4a0));
    }
  }
  if (*(char *)(iVar3 + 0x477) == '\0') {
    *(undefined1 *)(iVar3 + 0x477) = 1;
  }
  return func_00588C14(iVar3,0,1);
}

