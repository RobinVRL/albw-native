/* compilefix: USA 004CD4D4 (EU 4cd4ac), the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/004/func_004CD4D4.c) with one fix: the next
 * queued event's start virtual (+0x10 / +0x18) gets its `this` (the element taken from the list,
 * kept in r0 on ARM as in 004CD960, BOOT_LOG 94); Ghidra printed `(*pcVar4)()`. Game Over ->
 * Continue ended the game-over event, started the next one on the list head and jumped into the
 * heap (user report, frame 152 after loading slot 1). CLASS lost `this` (BOOT_LOG 159d). */
#include "ghidra_types.h"

extern void func_0010F1F8(int *param_1,float fparam_0);
extern int func_0049F634(undefined4 *param_1);
extern int func_0049F688(int param_1);

// USA 004CD4D4 <- EU 004CD4AC (Ghidra, non-matching)

void func_004CD4D4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  float in_s0;
  
  iVar2 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x20);
  iVar1 = *(int *)(param_1 + 0x18) - iVar6;
  iVar3 = *(int *)(iVar1 + iVar6 + 4);
  while (iVar1 != (param_1 + 0x14) - iVar2) {
    if (*(char *)(iVar1 + 0x11) != '\0') {
      func_0010F1F8((int *)(iVar1 + *(int *)(param_1 + 0x20)),in_s0);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
    }
    iVar1 = iVar3 - iVar6;
    iVar3 = *(int *)(iVar3 + 4);
  }
  iVar3 = *(int *)(param_1 + 0x30);
  piVar5 = (int *)(*(int *)(param_1 + 0x28) - iVar3);
  iVar1 = *(int *)((int)piVar5 + iVar3 + 4);
  while (piVar5 != (int *)((param_1 + 0x24) - iVar3)) {
    if (*(char *)((int)piVar5 + 0x11) != '\0') {
      (**(code **)(*piVar5 + 0x20))(piVar5);
      func_0010F1F8((int *)(*(int *)(param_1 + 0x30) + (int)piVar5),in_s0);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    }
    piVar5 = (int *)(iVar1 - iVar3);
    iVar1 = *(int *)(iVar1 + 4);
  }
  piVar5 = *(int **)(param_1 + 0x44);
  if (piVar5 != (int *)0x0) {
    if (*(char *)((int)piVar5 + 0x11) == '\0') {
      return;
    }
    (**(code **)(*piVar5 + 0x20))(piVar5);
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  if (*(int *)(param_1 + 0x2c) < 1) {
    if (*(int *)(param_1 + 0x1c) < 1) {
      return;
    }
    piVar5 = func_0049F688(param_1 + 0x14);
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int)piVar5 - *(int *)(param_1 + 0x20));
    }
    *(int **)(param_1 + 0x44) = piVar5;
    pcVar4 = *(code **)(*piVar5 + 0x10);
  }
  else {
    piVar5 = func_0049F634((undefined4 *)(param_1 + 0x24));
    if (piVar5 != (int *)0x0) {
      piVar5 = (int *)((int)piVar5 - *(int *)(param_1 + 0x30));
    }
    *(int **)(param_1 + 0x44) = piVar5;
    pcVar4 = *(code **)(*piVar5 + 0x18);
  }
  (*(int (*)(int *))pcVar4)(piVar5);   /* this restored */
  if (*(int **)(param_1 + 0x44) != (int *)0x0) {
    *(undefined1 *)(param_1 + 0x10) = 1;
    (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))(*(int **)(param_1 + 0x44));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}

