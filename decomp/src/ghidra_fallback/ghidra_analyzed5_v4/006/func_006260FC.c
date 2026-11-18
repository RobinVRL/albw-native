#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);

// USA 006260FC <- EU 006260D4 (Ghidra, non-matching)

void func_006260FC(int param_1,int param_2,undefined1 param_3)

{
  uint uVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x964) != param_2) {
    *(undefined1 *)(param_1 + 0x988) = param_3;
    iVar2 = (int)*(char *)(param_1 + 0x964);
    if (iVar2 != -1) {
      iVar3 = *(int *)(param_1 + 0x980);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + iVar2 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         (uVar1 = *(uint *)(iVar3 + iVar2 * 8 + 4), (uVar1 & 1) != 0 && uVar1 != 0)) {
        uVar1 = *(uint *)(iVar3 + iVar2 * 8 + 4);
        if ((uVar1 & 1) != 0) {
          UNRECOVERED_JUMPTABLE =
               *(code **)(UNRECOVERED_JUMPTABLE +
                         *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
        }
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    func_003931EC((undefined4 *)(param_1 + 0x960),(int)(char)param_2);
    iVar2 = *(int *)(param_1 + 0x978);
    iVar3 = (int)*(char *)(param_1 + 0x964);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar3 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar1 = *(uint *)(iVar2 + iVar3 * 8 + 4), (uVar1 & 1) != 0 && (uVar1 != 0)))) {
      uVar1 = *(uint *)(iVar2 + iVar3 * 8 + 4);
      if ((uVar1 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar1 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x006261bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

