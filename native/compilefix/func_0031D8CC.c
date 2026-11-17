/* compilefix: func_0031D8CC, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0031D8CC.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_0031d9f0;

// USA 0031D8CC <- EU 0031D8A8 (Ghidra, non-matching)
// GLOBAL DAT_0031d9f0 int

undefined4 func_0031D8CC(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if ((*(char *)(param_1 + 0x14) == '\x03') && (*(char *)(param_1 + 0x169) != '\0')) {
    iVar2 = *(int *)(param_1 + 0x30);
    pcVar3 = *(code **)(iVar2 + 0x18);
    if ((pcVar3 != (code *)0x0) ||
       (((*(uint *)(iVar2 + 0x1c) & 1) != 0 && (*(uint *)(iVar2 + 0x1c) != 0)))) {
      if ((*(uint *)(iVar2 + 0x1c) & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x24) +
                                             ((int)*(uint *)(iVar2 + 0x1c) >> 1)));
      }
      (*(int (*)(int *))pcVar3)(((int *)((int)(*(int *)(param_1 + 0x24)) + ((int)*(uint *)(iVar2 + 0x1c) >> 1))));   /* this restored (pmf_this_fix) */
    }
    uVar1 = *(undefined1 *)(param_1 + 0x14);
    *(undefined1 *)(param_1 + 0x14) = 4;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 0x15) = uVar1;
    if (*(int *)(param_1 + 0x20) != 0) {
      if (*(uint *)(param_1 + 0x18) < 5) {
        piVar6 = *(int **)(param_1 + 0x1c);
      }
      else {
        piVar6 = (int *)(*(int *)(param_1 + 0x1c) + 0x90);
      }
      (**(code **)(*piVar6 + 8))(piVar6);
      local_1c = piVar6[1];
      local_20 = DAT_0031d9f0;
      func_0010BEB4(*(int *)(param_1 + 0x20),&local_20);
    }
    iVar4 = (int)*(char *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0x28);
    pcVar3 = *(code **)(iVar2 + iVar4 * 8);
    if ((pcVar3 != (code *)0x0) ||
       ((uVar5 = *(uint *)(iVar2 + iVar4 * 8 + 4), (uVar5 & 1) != 0 && (uVar5 != 0)))) {
      uVar5 = *(uint *)(iVar2 + iVar4 * 8 + 4);
      if ((uVar5 & 1) != 0) {
        pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x24) + ((int)uVar5 >> 1)));
      }
      (*pcVar3)((int)(*(int *)(param_1 + 0x24)) + ((int)uVar5 >> 1));
    }
    return 1;
  }
  return 0;
}

