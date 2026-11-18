#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00324A1C(int param_1);
extern int func_004CF478(int param_1,int param_2);

// USA 004BFD14 <- EU 004BFCEC (Ghidra, non-matching)

int func_004BFD14(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = func_00324A1C(param_1);
  uVar2 = param_1 + 0x800;
  bVar5 = *(char *)(param_1 + 0x860) == '\0';
  if (bVar5) {
    uVar2 = (uint)*(byte *)(param_1 + 0x85e);
  }
  if (!bVar5 || uVar2 != 0) {
    if (param_1 == -0x410) {
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x471) = 0;
    return iVar1;
  }
  if (*(char *)(param_1 + 0x915) == '\0' || iVar1 == 0) {
    if (*(char *)(param_1 + 0x915) != '\0' || iVar1 != 0) {
      return iVar1;
    }
    *(undefined1 *)(param_1 + 0x915) = 1;
    func_004CF478(*(int *)(param_1 + 0x7a0),0);
    if ((*(int *)(param_1 + 0x7a4) != 0) && (*(char *)(param_1 + 0x919) == '\0')) {
      func_004CF478(*(int *)(param_1 + 0x7a4),0);
    }
    iVar3 = *(int *)(param_1 + 0x78c);
    if (iVar3 == 0) {
      return iVar1;
    }
    iVar4 = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x915) = 0;
    func_004CF478(*(int *)(param_1 + 0x7a0),1);
    if ((*(int *)(param_1 + 0x7a4) != 0) && (*(char *)(param_1 + 0x919) == '\0')) {
      func_004CF478(*(int *)(param_1 + 0x7a4),1);
    }
    iVar3 = *(int *)(param_1 + 0x78c);
    if (iVar3 == 0) {
      return iVar1;
    }
    iVar4 = 1;
  }
  func_00151148(iVar3,iVar4);
  return iVar1;
}

