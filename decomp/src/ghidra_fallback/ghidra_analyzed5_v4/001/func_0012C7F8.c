#include "ghidra_types.h"

extern int func_0051E300(int param_1);

// USA 0012C7F8 <- EU 0012C7F8 (Ghidra, non-matching)

void func_0012C7F8(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = param_1[0x13];
  iVar5 = param_1[0x15];
  while( true ) {
    uVar3 = param_1[0x15];
    piVar4 = (int *)(iVar2 - iVar5);
    if (piVar4 == (int *)((int)param_1 + (0x48 - uVar3))) break;
    iVar2 = func_0051E300((int)piVar4);
    if (iVar2 != 0) {
      (**(code **)(*piVar4 + 0xc))(piVar4);
    }
    iVar2 = *(int *)((int)piVar4 + iVar5 + 4);
  }
  cVar1 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\0') {
    uVar3 = (uint)*(byte *)((int)param_1 + 0xe);
  }
  if (cVar1 == '\0' && uVar3 == 0) {
    return;
  }
  *(char *)(param_1 + 3) = cVar1;
  if (cVar1 == '\x01') {
    iVar2 = (**(code **)(*param_1 + 0x18))(param_1);
    if ((iVar2 != 0) && (*(char *)((int)param_1 + 0xe) != '\x02')) {
      *(undefined1 *)((int)param_1 + 0xe) = 3;
    }
    goto LAB_0012c934;
  }
  if (cVar1 == '\x02') {
    iVar2 = (**(code **)(*param_1 + 0x20))(param_1);
  }
  else {
    if (cVar1 == '\x03') {
      (**(code **)(*param_1 + 0x28))(param_1);
      goto LAB_0012c934;
    }
    if (cVar1 != '\x04') goto LAB_0012c934;
    iVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  }
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x34))(param_1);
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    return;
  }
LAB_0012c934:
  cVar1 = *(char *)((int)param_1 + 0xe);
  if (*(char *)((int)param_1 + 0xd) == cVar1) {
    return;
  }
  if (cVar1 == '\x01') {
    (**(code **)(*param_1 + 0x14))(param_1);
  }
  else if (cVar1 == '\x02') {
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  else if (cVar1 == '\x03') {
    (**(code **)(*param_1 + 0x24))(param_1);
  }
  else if (cVar1 == '\x04') {
    (**(code **)(*param_1 + 0x2c))(param_1);
  }
  *(undefined1 *)((int)param_1 + 0xd) = *(undefined1 *)((int)param_1 + 0xe);
  return;
}

