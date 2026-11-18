#include "ghidra_types.h"

extern int func_003931EC(undefined4 *param_1,uint param_2);

// USA 0066BF2C <- EU 0066BF04 (Ghidra, non-matching)

void func_0066BF2C(undefined4 *param_1,char param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)*(char *)(param_1 + 1);
  if (iVar1 != -1) {
    iVar2 = param_1[8];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar1 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar3 = *(uint *)(iVar2 + iVar1 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
      uVar3 = *(uint *)(iVar2 + iVar1 * 8 + 4);
      if ((uVar3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar3 >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
    }
  }
  func_003931EC(param_1,(int)param_2);
  iVar2 = (int)*(char *)(param_1 + 1);
  iVar1 = param_1[6];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar1 + iVar2 * 8);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((uVar3 = *(uint *)(iVar1 + iVar2 * 8 + 4), (uVar3 & 1) == 0 || (uVar3 == 0)))) {
    return;
  }
  uVar3 = *(uint *)(iVar1 + iVar2 * 8 + 4);
  if ((uVar3 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar3 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0066bfcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

