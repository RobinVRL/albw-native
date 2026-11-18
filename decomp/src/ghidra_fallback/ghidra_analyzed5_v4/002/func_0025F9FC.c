#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004A1B00(int param_1);
extern undefined4 DAT_0025fbc4;
extern int DAT_0025fbc8;

// USA 0025F9FC <- EU 0025FA24 (Ghidra, non-matching)
// GLOBAL DAT_0025fbc4 undefined4
// GLOBAL DAT_0025fbc8 int

void func_0025F9FC(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  uVar2 = DAT_0025fbc4;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 0x7c) = DAT_0025fbc4;
    iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 0x14);
    if (*(float *)(iVar5 + 8) != *(float *)(iVar5 + 0x14)) {
      *(float *)(iVar5 + 8) = *(float *)(iVar5 + 0x14);
      *(undefined1 *)(iVar5 + 0x26) = 1;
    }
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x74) + 0x14) + 0x10) = uVar2;
    if (*(int *)(param_1 + 0x24) != 0) {
      func_004A1B00(*(int *)(param_1 + 0x24));
    }
  }
  iVar5 = (int)*(char *)(param_1 + 0x4c);
  if (iVar5 != 2) {
    if (iVar5 != -1) {
      iVar6 = *(int *)(param_1 + 0x68);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + iVar5 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         (uVar3 = *(uint *)(iVar6 + iVar5 * 8 + 4), (uVar3 & 1) != 0 && uVar3 != 0)) {
        uVar3 = *(uint *)(iVar6 + iVar5 * 8 + 4);
        piVar4 = (int *)(*(int *)(param_1 + 0x5c) + ((int)uVar3 >> 1));
        if ((uVar3 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar4);
        }
        (*UNRECOVERED_JUMPTABLE)(piVar4,2);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x4c);
    *(undefined1 *)(param_1 + 0x4c) = 2;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined1 *)(param_1 + 0x4d) = uVar1;
    if (*(int *)(param_1 + 0x58) != 0) {
      if (*(uint *)(param_1 + 0x50) < 3) {
        piVar4 = *(int **)(param_1 + 0x54);
      }
      else {
        piVar4 = (int *)(*(int *)(param_1 + 0x54) + 0x48);
      }
      (**(code **)(*piVar4 + 8))(piVar4);
      local_1c = piVar4[1];
      local_20 = DAT_0025fbc8;
      func_0010BEB4(*(int *)(param_1 + 0x58),&local_20);
    }
    iVar6 = (int)*(char *)(param_1 + 0x4c);
    iVar5 = *(int *)(param_1 + 0x60);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar5 + iVar6 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar3 = *(uint *)(iVar5 + iVar6 * 8 + 4), (uVar3 & 1) != 0 && (uVar3 != 0)))) {
      uVar3 = *(uint *)(iVar5 + iVar6 * 8 + 4);
      if ((uVar3 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x5c) + ((int)uVar3 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x0025fbb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  return;
}

