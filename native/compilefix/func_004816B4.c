/* compilefix: func_004816B4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004816B4.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_00171744(uint param_1);
extern int func_001725AC(undefined4 param_1);
extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int *DAT_004817d0;
extern uint DAT_004817d4;
extern undefined4 DAT_004817d8;
extern int DAT_004817dc;
extern int *DAT_004817e0;
extern int *DAT_004817e4;

// USA 004816B4 <- EU 0048168C (Ghidra, non-matching)
// GLOBAL DAT_004817d0 int *
// GLOBAL DAT_004817d4 uint
// GLOBAL DAT_004817d8 undefined4
// GLOBAL DAT_004817dc int
// GLOBAL DAT_004817e0 int *
// GLOBAL DAT_004817e4 int *

undefined4 func_004816B4(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar5;
  code *pcVar6;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_28 ((int *)(albw_frame + 0x18))
  int iVar4;
  
  if ((*(int *)(param_1 + 0x80) != 0) &&
     ((pcVar6 = *(code **)(param_1 + 0x88), pcVar6 != (code *)0x0 ||
      ((*(uint *)(param_1 + 0x8c) & 1) != 0 && *(uint *)(param_1 + 0x8c) != 0)))) {
    if (*(char *)(*DAT_004817d0 + 0x70) == '\0') {
      if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
        pcVar6 = *(code **)(pcVar6 + *(int *)(*DAT_004817d0 + ((int)*(uint *)(param_1 + 0x8c) >> 1))
                           );
      }
      uVar3 = (*(int (*)(int *))pcVar6)(((int *)((int)(*DAT_004817d0) + ((int)*(uint *)(param_1 + 0x8c) >> 1))));   /* this restored (pmf_this_fix) */
      *(uint *)(param_1 + 0x90) = uVar3;
    }
    else {
      uVar3 = *(uint *)(param_1 + 0x90);
    }
    if (uVar3 < DAT_004817d4) {
      iVar4 = func_001725AC(uVar3);
      uVar1 = (undefined2)iVar4;
      iVar4 = func_00171744(*(uint *)(param_1 + 0x90));
      uVar2 = (undefined2)iVar4;
    }
    else {
      uVar1 = (undefined2)DAT_004817d8;
      uVar2 = 99;
    }
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[3] = 0xffffffff;
    local_28[2] = 0;
    local_34 = *(undefined4 *)(*(int *)(param_1 + 0x80) + 0xa8);
    local_38 = DAT_004817dc;
    func_005826A4(*DAT_004817e4,local_28,DAT_004817e0,&local_38);
    if (local_28[0] != 0) {
      *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x60) = uVar1;
      *(undefined2 *)(*(int *)(param_1 + 0x84) + 0x62) = uVar2;
      func_001788DC(*(int *)(param_1 + 0x84),local_28);
      piVar5 = *(int **)(param_1 + 0x80);
      iVar4 = *(int *)(param_1 + 0x84);
      *(undefined2 *)(iVar4 + 0x32) = 0;
      *(undefined1 *)(iVar4 + 0x3d) = 0;
      return (**(code **)(*piVar5 + 0x60))
                (piVar5,*(undefined4 *)(*(int *)(param_1 + 0x84) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x84) + 0x20) >> 1);
    }
  }
  return 0;
}

