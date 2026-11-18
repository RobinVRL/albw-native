#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00547724(int *param_1);
extern int func_005821B4(int param_1,int param_2);
extern int *DAT_0043752c;
extern int *DAT_00437530;
extern uint *DAT_00437534;
extern undefined4 *DAT_00437538;
extern undefined4 DAT_0043753c;

// USA 00437438 <- EU 00437418 (Ghidra, non-matching)
// GLOBAL DAT_0043752c int *
// GLOBAL DAT_00437530 int *
// GLOBAL DAT_00437534 uint *
// GLOBAL DAT_00437538 undefined4 *
// GLOBAL DAT_0043753c undefined4

void func_00437438(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1[1] + 0x21) == '\x02') {
    iVar1 = func_005821B4(*DAT_0043752c,(int)*(short *)(param_1 + 0x15));
    uVar2 = (uint)*(short *)(iVar1 + 0x46);
    uVar4 = param_2 - 1;
    bVar6 = uVar4 <= uVar2;
    if (bVar6) {
      uVar4 = param_2 + 1;
    }
    if ((!bVar6 || uVar4 < uVar2) &&
       ((((iVar3 = func_00547724(param_1 + 1), iVar3 != *DAT_00437530 ||
          (*(short *)((int)param_1 + 0x32) == 0)) || (*(short *)(iVar1 + 0x46) < 7)) ||
        (9 < *(short *)(iVar1 + 0x46))))) {
      if (((*DAT_00437534 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_00437534), iVar1 != 0)) {
        *DAT_00437538 = DAT_0043753c;
      }
      if ((param_1 == (undefined4 *)0x0) ||
         (iVar1 = (**(code **)*param_1)(param_1,DAT_00437538), puVar5 = param_1, iVar1 == 0)) {
        puVar5 = (undefined4 *)0x0;
      }
      if (puVar5 != (undefined4 *)0x0) {
        (**(code **)(puVar5[200] + 0x58))(puVar5 + 200,0);
      }
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
  }
  return;
}

