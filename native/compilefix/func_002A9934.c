/* compilefix: func_002A9934, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002A9934.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern undefined4 DAT_002a9a8c;
extern int DAT_002a9a90;

// USA 002A9934 <- EU 002A9910 (Ghidra, non-matching)
// GLOBAL DAT_002a9a8c undefined4
// GLOBAL DAT_002a9a90 int

void func_002A9934(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  uVar2 = DAT_002a9a8c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_002a9a8c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar2;
  *(undefined4 *)(param_1 + 0x3e4) = uVar2;
  if (*(char *)(param_1 + 0x8ff) == '\0') {
    func_004FC07C(param_1,7,0xffffffff,0);
  }
  iVar3 = (int)*(char *)(param_1 + 0x8c0);
  if (iVar3 != 3) {
    if (iVar3 != -1) {
      iVar6 = *(int *)(param_1 + 0x8dc);
      UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + iVar3 * 8);
      if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
         (uVar4 = *(uint *)(iVar6 + iVar3 * 8 + 4), (uVar4 & 1) != 0 && uVar4 != 0)) {
        uVar4 = *(uint *)(iVar6 + iVar3 * 8 + 4);
        piVar5 = (int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar4 >> 1));
        if ((uVar4 & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *piVar5);
        }
        (*UNRECOVERED_JUMPTABLE)(piVar5,3);
      }
    }
    uVar1 = *(undefined1 *)(param_1 + 0x8c0);
    *(undefined1 *)(param_1 + 0x8c0) = 3;
    *(undefined4 *)(param_1 + 0x8bc) = 0;
    *(undefined1 *)(param_1 + 0x8c1) = uVar1;
    if (*(int *)(param_1 + 0x8cc) != 0) {
      if (*(uint *)(param_1 + 0x8c4) < 4) {
        piVar5 = *(int **)(param_1 + 0x8c8);
      }
      else {
        piVar5 = (int *)(*(int *)(param_1 + 0x8c8) + 0x6c);
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      local_1c = piVar5[1];
      local_20 = DAT_002a9a90;
      func_0010BEB4(*(int *)(param_1 + 0x8cc),&local_20);
    }
    iVar6 = (int)*(char *)(param_1 + 0x8c0);
    iVar3 = *(int *)(param_1 + 0x8d4);
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + iVar6 * 8);
    if ((UNRECOVERED_JUMPTABLE != (code *)0x0) ||
       ((uVar4 = *(uint *)(iVar3 + iVar6 * 8 + 4), (uVar4 & 1) != 0 && (uVar4 != 0)))) {
      uVar4 = *(uint *)(iVar3 + iVar6 * 8 + 4);
      if ((uVar4 & 1) != 0) {
        UNRECOVERED_JUMPTABLE =
             *(code **)(UNRECOVERED_JUMPTABLE +
                       *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar4 >> 1)));
      }
                    /* WARNING: Could not recover jumptable at 0x002a9a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(int (*)(int *))UNRECOVERED_JUMPTABLE)(((int *)((int)(*(int *)(param_1 + 0x8d0)) + ((int)uVar4 >> 1))));   /* this restored (pmf_this_fix) */
      return;
    }
  }
  return;
}

