#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_006679d8;

// USA 006678C0 <- EU 00667898 (Ghidra, non-matching)
// GLOBAL DAT_006679d8 int

void func_006678C0(undefined4 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  int iVar3;
  int *piVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar2 = (int)*(char *)(param_1 + 1);
  if (iVar2 != -1) {
    iVar3 = param_1[8];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + iVar2 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar5 = *(uint *)(iVar3 + iVar2 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
      uVar5 = *(uint *)(iVar3 + iVar2 * 8 + 4);
      if ((uVar5 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar5 >> 1)));
      }
      (*UNRECOVERED_JUMPTABLE)();
    }
  }
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = 0;
  *(undefined1 *)((int)param_1 + 5) = uVar1;
  if (param_1[4] != 0) {
    if ((uint)(int)*(char *)(param_1 + 1) < (uint)param_1[2]) {
      piVar4 = (int *)(param_1[3] + *(char *)(param_1 + 1) * 0x24);
    }
    else {
      piVar4 = (int *)param_1[3];
    }
    (**(code **)(*piVar4 + 8))(piVar4);
    local_1c = piVar4[1];
    local_20 = DAT_006679d8;
    func_0010BEB4(param_1[4],&local_20);
  }
  iVar3 = (int)*(char *)(param_1 + 1);
  iVar2 = param_1[6];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar3 * 8);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((uVar5 = *(uint *)(iVar2 + iVar3 * 8 + 4), (uVar5 & 1) == 0 || (uVar5 == 0)))) {
    return;
  }
  uVar5 = *(uint *)(iVar2 + iVar3 * 8 + 4);
  if ((uVar5 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar5 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x006679cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

