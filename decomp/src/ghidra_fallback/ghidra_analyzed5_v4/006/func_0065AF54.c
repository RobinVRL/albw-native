#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_0065b06c;

// USA 0065AF54 <- EU 0065AF2C (Ghidra, non-matching)
// GLOBAL DAT_0065b06c int

int func_0065AF54(undefined4 *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  int iVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar2 = (int)*(char *)(param_1 + 1);
  if (iVar2 != -1) {
    iVar4 = param_1[8];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar2 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar6 = *(uint *)(iVar4 + iVar2 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
      uVar6 = *(uint *)(iVar4 + iVar2 * 8 + 4);
      if ((uVar6 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar6 >> 1)));
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
      piVar5 = (int *)(param_1[3] + *(char *)(param_1 + 1) * 0x24);
    }
    else {
      piVar5 = (int *)param_1[3];
    }
    (**(code **)(*piVar5 + 8))(piVar5);
    local_1c = piVar5[1];
    local_20 = DAT_0065b06c;
    func_0010BEB4(param_1[4],&local_20);
  }
  iVar4 = (int)*(char *)(param_1 + 1);
  iVar2 = param_1[6];
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar4 * 8);
  if ((UNRECOVERED_JUMPTABLE == (code *)0x0) &&
     ((uVar6 = *(uint *)(iVar2 + iVar4 * 8 + 4), (uVar6 & 1) == 0 || (uVar6 == 0)))) {
    return iVar2;
  }
  uVar6 = *(uint *)(iVar2 + iVar4 * 8 + 4);
  if ((uVar6 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1[5] + ((int)uVar6 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x0065b060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)();
  return uVar3;
}

