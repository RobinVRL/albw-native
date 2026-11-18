#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int DAT_00232ca4;

// USA 00232C04 <- EU 00232C04 (Ghidra, non-matching)
// GLOBAL DAT_00232ca4 int

void func_00232C04(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    iVar3 = param_1 + 0x10 + iVar4 * DAT_00232ca4 * 4;
    iVar1 = *(int *)(iVar3 + 0x88);
    if (param_2 < *(uint *)(iVar3 + 0x80)) {
      iVar1 = iVar1 + param_2 * 0x70;
    }
    if (*(char *)(iVar1 + 0x6c) != '\0') {
      iVar1 = *(int *)(iVar3 + 0x88);
      if (param_2 < *(uint *)(iVar3 + 0x80)) {
        iVar1 = iVar1 + param_2 * 0x70;
      }
      func_0010C0B8(iVar1 + 0x50);
      iVar2 = *(int *)(iVar3 + 0x88);
      if (param_2 < *(uint *)(iVar3 + 0x80)) {
        iVar2 = iVar2 + param_2 * 0x70;
      }
      *(undefined1 *)(iVar2 + 0x6d) = 1;
      iVar2 = *(int *)(iVar3 + 0x88);
      if (param_2 < *(uint *)(iVar3 + 0x80)) {
        iVar2 = iVar2 + param_2 * 0x70;
      }
      *(undefined1 *)(iVar2 + 0x6c) = 0;
      func_0010EEE0(iVar1 + 0x50);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}

