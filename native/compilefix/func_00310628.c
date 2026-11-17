/* compilefix: func_00310628, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_00310628.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_00512EE4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
extern int DAT_003107dc;
extern int *DAT_003107e0;
extern int DAT_003107e4;

// USA 00310628 <- EU 00310604 (Ghidra, non-matching)
// GLOBAL DAT_003107dc int
// GLOBAL DAT_003107e0 int *
// GLOBAL DAT_003107e4 int

void func_00310628(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  bool bVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar4 = (int)((ulonglong)((longlong)DAT_003107dc * (longlong)*(int *)(param_1 + 0x960)) >> 0x20);
  if ((*(int *)(param_1 + 0x960) + ((iVar4 >> 4) - (iVar4 >> 0x1f)) * -0x28 == 0) &&
     (0 < *(int *)(param_1 + 0xad0))) {
    uVar2 = *(uint *)(param_1 + 0xacc);
    bVar7 = uVar2 < 10;
    if ((int)uVar2 < 10) {
      puVar5 = (undefined4 *)(param_1 + 0x98c);
      if (bVar7) {
        uVar2 = uVar2 * 3;
      }
      if (bVar7) {
        puVar5 = puVar5 + uVar2;
      }
      func_00512EE4(*(undefined4 **)(*DAT_003107e0 + 0x1c),puVar5,*(undefined4 *)(param_1 + 0x2cc));
      *(int *)(param_1 + 0xacc) = *(int *)(param_1 + 0xacc) + 1;
      *(int *)(param_1 + 0xad0) = *(int *)(param_1 + 0xad0) + -1;
    }
  }
  if ((*(int *)(param_1 + 0xad0) < 1) || (9 < *(int *)(param_1 + 0xacc))) {
    iVar4 = (int)*(char *)(param_1 + 0x964);
    if (iVar4 != -1) {
      iVar6 = *(int *)(param_1 + 0x980);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + iVar4 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         ((uVar2 = *(uint *)(iVar6 + iVar4 * 8 + 4), (uVar2 & 1) != 0 && (uVar2 != 0)))) {
        uVar2 = *(uint *)(iVar6 + iVar4 * 8 + 4);
        piVar3 = (int *)(*(int *)(param_1 + 0x974) + ((int)uVar2 >> 1));
        if ((uVar2 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar3);
        }
        (*UNRECOVERED_JUMPTABLE)(piVar3,0xc);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x964);
    *(undefined1 *)(param_1 + 0x964) = 0xc;
    *(undefined4 *)(param_1 + 0x960) = 0;
    *(undefined1 *)(param_1 + 0x965) = uVar1;
    if (*(int *)(param_1 + 0x970) != 0) {
      if (*(uint *)(param_1 + 0x968) < 0xd) {
        piVar3 = *(int **)(param_1 + 0x96c);
      }
      else {
        piVar3 = (int *)(*(int *)(param_1 + 0x96c) + 0x1b0);
      }
      (**(code **)(*piVar3 + 8))(piVar3);
      local_1c = piVar3[1];
      local_20 = DAT_003107e4;
      func_0010BEB4(*(int *)(param_1 + 0x970),&local_20);
    }
    iVar6 = (int)*(char *)(param_1 + 0x964);
    iVar4 = *(int *)(param_1 + 0x978);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar4 + iVar6 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar2 = *(uint *)(iVar4 + iVar6 * 8 + 4), (uVar2 & 1) != 0 && (uVar2 != 0)))) {
      uVar2 = *(uint *)(iVar4 + iVar6 * 8 + 4);
      if ((uVar2 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x974) + ((int)uVar2 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x003107d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(*(int *)(param_1 + 0x974)) + ((int)uVar2 >> 1))));   /* this restored (pmf_this_fix) */
      return;
    }
  }
  return;
}

