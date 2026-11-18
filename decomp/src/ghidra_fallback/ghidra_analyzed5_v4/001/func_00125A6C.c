#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004FB0A4(int param_1,float fparam_0);
extern float DAT_00125bc4;
extern int DAT_00125bc8;

// USA 00125A6C <- EU 00125A6C (Ghidra, non-matching)
// GLOBAL DAT_00125bc4 float
// GLOBAL DAT_00125bc8 int

void func_00125A6C(int param_1)

{
  undefined1 uVar1;
  float fparam_0;
  int iVar2;
  uint uVar3;
  int *piVar4;
  code *UNRECOVERED_JUMPTABLE;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  fparam_0 = DAT_00125bc4;
  *(undefined1 *)(param_1 + 0x858) = 0;
  func_004FB0A4(param_1,fparam_0);
  iVar2 = (int)*(char *)(param_1 + 0x8c0);
  if (iVar2 != 3) {
    if (iVar2 != -1) {
      iVar5 = *(int *)(param_1 + 0x8dc);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + iVar2 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         (uVar3 = *(uint *)(iVar5 + iVar2 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
        uVar3 = *(uint *)(iVar5 + iVar2 * 8 + 4);
        piVar4 = (int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar3 >> 1));
        if ((uVar3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar4);
        }
        (*UNRECOVERED_JUMPTABLE)(piVar4,3);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x8c0);
    *(undefined1 *)(param_1 + 0x8c0) = 3;
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    *(undefined1 *)(param_1 + 0x8c1) = uVar1;
    if (*(int *)(param_1 + 0x8cc) != 0) {
      if (*(uint *)(param_1 + 0x8c4) < 4) {
        piVar4 = *(int **)(param_1 + 0x8c8);
      }
      else {
        piVar4 = (int *)(*(int *)(param_1 + 0x8c8) + 0x6c);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_1c = piVar4[1];
      local_20 = DAT_00125bc8;
      func_0010BEB4(*(int *)(param_1 + 0x8cc),&local_20);
    }
    iVar5 = (int)*(char *)(param_1 + 0x8c0);
    iVar2 = *(int *)(param_1 + 0x8d4);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + iVar5 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar3 = *(uint *)(iVar2 + iVar5 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
      uVar3 = *(uint *)(iVar2 + iVar5 * 8 + 4);
      if ((uVar3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x00125bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

