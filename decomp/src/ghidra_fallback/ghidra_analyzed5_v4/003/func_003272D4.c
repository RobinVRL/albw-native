#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0014D9D8(int param_1,uint *param_2,int param_3);
extern int func_0052107C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_003273c0;
extern int *DAT_003273c4;
extern uint *DAT_003273c8;
extern undefined4 *DAT_003273cc;
extern undefined4 DAT_003273d0;

// USA 003272D4 <- EU 003272B0 (Ghidra, non-matching)
// GLOBAL DAT_003273c0 int *
// GLOBAL DAT_003273c4 int *
// GLOBAL DAT_003273c8 uint *
// GLOBAL DAT_003273cc undefined4 *
// GLOBAL DAT_003273d0 undefined4

bool func_003272D4(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  
  puVar3 = (undefined4 *)func_0052FBA0(*DAT_003273c0 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (((puVar3 == (undefined4 *)0x0) || (iVar4 = func_00588BE4((int)puVar3), iVar4 != *DAT_003273c4)
      ) && ((*(ushort *)(param_2 + 0x20) & 0x7e0) != 0x160)) {
    func_0014D9D8(param_1,(uint *)(param_1 + 0x39c),param_2);
    if (*(int *)(param_1 + 0x4a4) == 0) {
      bVar1 = func_0052107C(param_1);
      iVar4 = 0;
      if (bVar1) {
        iVar4 = *(int *)(param_2 + 0x28);
      }
      if ((bVar1 && iVar4 != 0) && puVar3 != (undefined4 *)0x0) {
        if (((*DAT_003273c8 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_003273c8), iVar4 != 0))
        {
          *DAT_003273cc = DAT_003273d0;
        }
        iVar4 = (**(code **)*puVar3)(puVar3,DAT_003273cc);
        if (iVar4 == 0) {
          puVar3 = (undefined4 *)0x0;
        }
        if (puVar3 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x4a4) = *(undefined4 *)(param_2 + 0x28);
        }
      }
    }
    uVar5 = 1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x5f;
    uVar2 = (undefined1)uVar5;
    if (uVar5 != 0) {
      uVar2 = 1;
    }
    return (bool)uVar2;
  }
  return false;
}

