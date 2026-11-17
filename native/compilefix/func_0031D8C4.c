/* compilefix: func_0031D8C4, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0031D8C4.c) with `this` restored in 1
 * member-function-pointer call(s) by tools/pmf_this_fix.py (BOOT_LOG 140): this = BASE + (adj >> 1).
 * Further arguments of those calls are as Ghidra printed them. */
#include "ghidra_types.h"

extern int func_0010BEB4(int param_1,int *param_2);
extern int DAT_0031d9f0;

// USA 0031D8C4 <- EU 0031D8A0 (Ghidra, non-matching)
// GLOBAL DAT_0031d9f0 int

undefined4 func_0031D8C4(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  iVar2 = *(int *)(param_1 + 0xf4);
  if ((*(char *)(iVar2 + 0x14) == '\x03') && (*(char *)(iVar2 + 0x169) != '\0')) {
    iVar3 = *(int *)(iVar2 + 0x30);
    pcVar4 = *(code **)(iVar3 + 0x18);
    if ((pcVar4 != (code *)0x0) ||
       (((*(uint *)(iVar3 + 0x1c) & 1) != 0 && (*(uint *)(iVar3 + 0x1c) != 0)))) {
      if ((*(uint *)(iVar3 + 0x1c) & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(iVar2 + 0x24) +
                                             ((int)*(uint *)(iVar3 + 0x1c) >> 1)));
      }
      (*(int (*)(int *))pcVar4)(((int *)((int)(*(int *)(iVar2 + 0x24)) + ((int)*(uint *)(iVar3 + 0x1c) >> 1))));   /* this restored (pmf_this_fix) */
    }
    uVar1 = *(undefined1 *)(iVar2 + 0x14);
    *(undefined1 *)(iVar2 + 0x14) = 4;
    *(undefined4 *)(iVar2 + 0x10) = 0;
    *(undefined1 *)(iVar2 + 0x15) = uVar1;
    if (*(int *)(iVar2 + 0x20) != 0) {
      if (*(uint *)(iVar2 + 0x18) < 5) {
        piVar7 = *(int **)(iVar2 + 0x1c);
      }
      else {
        piVar7 = (int *)(*(int *)(iVar2 + 0x1c) + 0x90);
      }
      (**(code **)(*piVar7 + 8))(piVar7);
      iStack_1c = piVar7[1];
      iStack_20 = DAT_0031d9f0;
      func_0010BEB4(*(int *)(iVar2 + 0x20),&iStack_20);
    }
    iVar5 = (int)*(char *)(iVar2 + 0x14);
    iVar3 = *(int *)(iVar2 + 0x28);
    pcVar4 = *(code **)(iVar3 + iVar5 * 8);
    if ((pcVar4 != (code *)0x0) ||
       ((uVar6 = *(uint *)(iVar3 + iVar5 * 8 + 4), (uVar6 & 1) != 0 && (uVar6 != 0)))) {
      uVar6 = *(uint *)(iVar3 + iVar5 * 8 + 4);
      if ((uVar6 & 1) != 0) {
        pcVar4 = *(code **)(pcVar4 + *(int *)(*(int *)(iVar2 + 0x24) + ((int)uVar6 >> 1)));
      }
      (*pcVar4)((int)(*(int *)(iVar2 + 0x24)) + ((int)uVar6 >> 1));
    }
    return 1;
  }
  return 0;
}

