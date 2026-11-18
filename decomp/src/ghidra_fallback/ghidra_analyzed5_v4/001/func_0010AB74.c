#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_0010AAAC(int *param_1,undefined4 param_2,int param_3,undefined2 param_4,undefined2 param_5, undefined1 *param_6);
extern undefined1 *DAT_0010ac14;
extern uint DAT_0010ac18;
extern int DAT_0010ac1c;
extern undefined1 *DAT_0010ac20;

// USA 0010AB74 <- EU 0010AB74 (Ghidra, non-matching)
// GLOBAL DAT_0010ac14 undefined1 *
// GLOBAL DAT_0010ac18 uint
// GLOBAL DAT_0010ac1c int
// GLOBAL DAT_0010ac20 undefined1 *

void func_0010AB74(void)

{
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  puVar1 = DAT_0010ac14;
  *DAT_0010ac14 = 0;
  if (puVar1[2] != '\0') {
    uVar4 = DAT_0010ac18;
    if ((*(int **)(puVar1 + 8) != (int *)0x0) && (puVar1[1] == '\0')) {
      uVar4 = func_0010AAAC(*(int **)(puVar1 + 8),*(undefined4 *)(puVar1 + 0x18),
                            *(int *)(puVar1 + 0x1c),*(undefined2 *)(puVar1 + 4),
                            *(undefined2 *)(puVar1 + 6),DAT_0010ac20);
    }
    if ((int)uVar4 < 0) {
      func_0010873C(uVar4,0x10abc8);
    }
    iVar2 = DAT_0010ac1c;
    iVar5 = 0;
    do {
      pcVar3 = *(code **)(iVar2 + iVar5 * 4);
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)();
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 8);
    puVar1[2] = 0;
  }
  return;
}

