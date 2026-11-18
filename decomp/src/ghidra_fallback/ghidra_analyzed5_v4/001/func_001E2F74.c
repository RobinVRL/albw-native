#include "ghidra_types.h"

extern int func_00556EAC(int param_1,int param_2);
extern int *DAT_001e3098;

// USA 001E2F74 <- EU 001E2F74 (Ghidra, non-matching)
// GLOBAL DAT_001e3098 int *

void func_001E2F74(int param_1)

{
  char cVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x71f) != '\0') {
    if (*(char *)(param_1 + 0x71f) != '\x01') {
      return;
    }
    if (*(short *)(param_1 + 0x71c) == 0) {
      *(undefined1 *)(param_1 + 0x71f) = 2;
      return;
    }
    sVar3 = *(short *)(param_1 + 0x71c) + -1;
LAB_001e2fac:
    *(short *)(param_1 + 0x71c) = sVar3;
    return;
  }
  iVar4 = *DAT_001e3098;
  if (iVar4 == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x71e);
  if (cVar1 == '\0') {
    bVar2 = func_00556EAC(iVar4,0x38);
    if (!bVar2) {
      return;
    }
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        return;
      }
      bVar2 = func_00556EAC(iVar4,0x3b);
      if (!bVar2) {
        return;
      }
      sVar3 = 100;
      *(undefined1 *)(param_1 + 0x71f) = 1;
      goto LAB_001e2fac;
    }
    bVar2 = func_00556EAC(iVar4,0x9c);
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x71f) = 1;
      *(undefined2 *)(param_1 + 0x71c) = 0x12;
      return;
    }
    bVar2 = func_00556EAC(iVar4,0x34);
    if (!bVar2) {
      bVar2 = func_00556EAC(iVar4,0xa4);
      if (!bVar2) {
        return;
      }
      *(undefined1 *)(param_1 + 0x71f) = 1;
      *(undefined2 *)(param_1 + 0x71c) = 8;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x71f) = 1;
  *(undefined2 *)(param_1 + 0x71c) = 0x23;
  return;
}

