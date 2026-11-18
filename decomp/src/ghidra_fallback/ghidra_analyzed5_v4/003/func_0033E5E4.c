#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0034CA20(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00666090(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0033e6dc;
extern uint *DAT_0033e6e0;
extern undefined4 *DAT_0033e6e4;
extern undefined4 DAT_0033e6e8;

// USA 0033E5E4 <- EU 0033E5C0 (Ghidra, non-matching)
// GLOBAL DAT_0033e6dc int *
// GLOBAL DAT_0033e6e0 uint *
// GLOBAL DAT_0033e6e4 undefined4 *
// GLOBAL DAT_0033e6e8 undefined4

void func_0033E5E4(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_0033e6dc + 0x3dbbc,*(uint *)(param_1 + 0x50));
  puVar4 = (undefined4 *)(param_1 + 0x40c);
  if (puVar2 == (undefined4 *)0x0) {
    func_00666090(puVar4,1);
  }
  else {
    if (((*DAT_0033e6e0 & 1) == 0) && (iVar3 = func_00100174((int *)DAT_0033e6e0), iVar3 != 0)) {
      *DAT_0033e6e4 = DAT_0033e6e8;
    }
    (**(code **)*puVar2)(puVar2,DAT_0033e6e4);
  }
  func_0034CA20(*(undefined4 **)(param_1 + 0x43c));
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x434),param_1 + 0x440,0x1000,0,0);
  if ((**(int **)(param_1 + 0x43c) != 0) &&
     (cVar1 = *(char *)((int)*(int **)(param_1 + 0x43c) + 0x21),
     (cVar1 == '\x02' || cVar1 == '\v') || cVar1 == '\x10')) {
    func_00666090(puVar4,1);
  }
  if (*(uint *)(param_1 + 0x450) < *(uint *)(param_1 + 0x454)) {
    *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) + 1;
  }
  else {
    func_00666090(puVar4,1);
  }
  return;
}

