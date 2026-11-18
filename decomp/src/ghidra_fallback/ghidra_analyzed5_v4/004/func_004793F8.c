// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0031B6A0(int param_1,int param_2,int param_3);
extern int func_0047A8C4(undefined4 param_1);
extern int func_00556AA8();
extern int *DAT_0047951c;

// USA 004793F8 <- EU 004793D0 (Ghidra, non-matching)
// GLOBAL DAT_0047951c int *

void func_004793F8(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 0x298) = 0xf;
  iVar5 = *DAT_0047951c;
  cVar1 = *(char *)(*(int *)(param_1 + 500) + 0xe4);
  iVar2 = func_00556AA8(iVar5,2);
  uVar3 = func_0047A8C4(iVar2);
  if (-1 < (int)uVar3) {
    piVar4 = (int *)(param_1 + 0x118);
    if (uVar3 < 0x14) {
      piVar4 = piVar4 + uVar3;
    }
    if (*(char *)(*piVar4 + 0xe1) != '\0') {
      piVar4 = (int *)(param_1 + 0x118);
      if (uVar3 < 0x14) {
        piVar4 = piVar4 + uVar3;
      }
      iVar2 = *(int *)(param_1 + 500);
      cVar1 = *(char *)(*piVar4 + 0xe0);
      func_0031B6A0(iVar2 + 0x60,(int)cVar1,0);
      *(char *)(iVar2 + 0xe4) = cVar1;
      goto LAB_0047947c;
    }
  }
  if (cVar1 != -1) {
    iVar2 = *(int *)(param_1 + 500);
    func_0031B6A0(iVar2 + 0x60,-1,0);
    *(undefined1 *)(iVar2 + 0xe4) = 0xff;
  }
LAB_0047947c:
  cVar1 = *(char *)(*(int *)(param_1 + 0x1f8) + 0xe4);
  iVar2 = func_00556AA8(iVar5,1);
  uVar3 = func_0047A8C4(iVar2);
  if (-1 < (int)uVar3) {
    piVar4 = (int *)(param_1 + 0x118);
    if (uVar3 < 0x14) {
      piVar4 = piVar4 + uVar3;
    }
    if (*(char *)(*piVar4 + 0xe1) != '\0') {
      piVar4 = (int *)(param_1 + 0x118);
      if (uVar3 < 0x14) {
        piVar4 = piVar4 + uVar3;
      }
      iVar2 = *(int *)(param_1 + 0x1f8);
      cVar1 = *(char *)(*piVar4 + 0xe0);
      func_0031B6A0(iVar2 + 0x60,(int)cVar1,0);
      *(char *)(iVar2 + 0xe4) = cVar1;
      return;
    }
  }
  if (cVar1 == -1) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1f8);
  func_0031B6A0(iVar2 + 0x60,-1,0);
  *(undefined1 *)(iVar2 + 0xe4) = 0xff;
  return;
}

