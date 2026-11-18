#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);

// USA 004F5174 <- EU 004F514C (Ghidra, non-matching)

void func_004F5174(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar6 = param_1 + 0x5a8;
  if ((param_2 == 0) || ((*(uint *)(param_1 + 0x5a0) & 0x1000) == 0)) {
    uVar4 = 0;
    if (*(char *)(param_1 + 0x650) != '\0') {
      do {
        piVar2 = (int *)(iVar6 + uVar4 * 0xc);
        if ((*(byte *)(piVar2 + 1) & 1) != 0) {
          func_004CF478(*piVar2,0);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(byte *)(param_1 + 0x650));
    }
    uVar4 = 0;
    if (*(char *)(param_1 + 0x651) != '\0') {
      do {
        func_00151148(*(int *)(iVar6 + uVar4 * 4 + 0x54),0);
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(byte *)(param_1 + 0x651));
    }
    uVar4 = 0;
    if (*(char *)(param_1 + 0x652) != '\0') {
      do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)(iVar6 + iVar1 + 0x70) + 0x61) = 0;
      } while (uVar4 < *(byte *)(param_1 + 0x652));
    }
    uVar4 = 0;
    if (*(char *)(param_1 + 0x653) != '\0') {
      do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)(iVar6 + iVar1 + 0x8c) + 0x61) = 0;
      } while (uVar4 < *(byte *)(param_1 + 0x653));
      return;
    }
  }
  else {
    uVar4 = *(uint *)(param_1 + 0x59c);
    uVar5 = 0;
    if (*(char *)(param_1 + 0x650) != '\0') {
      do {
        piVar2 = (int *)(iVar6 + uVar5 * 0xc);
        if ((*(byte *)(piVar2 + 1) & 1) != 0) {
          func_004CF478(*piVar2,(uint)((uVar4 & 1) != 0));
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(param_1 + 0x650));
    }
    uVar4 = *(uint *)(param_1 + 0x59c);
    uVar5 = 0;
    if (*(char *)(param_1 + 0x651) != '\0') {
      do {
        func_00151148(*(int *)(iVar6 + uVar5 * 4 + 0x54),(uint)((uVar4 & 2) != 0));
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(byte *)(param_1 + 0x651));
    }
    uVar4 = *(uint *)(param_1 + 0x59c);
    uVar5 = 0;
    if (*(char *)(param_1 + 0x652) != '\0') {
      do {
        iVar1 = uVar5 * 4;
        uVar5 = uVar5 + 1;
        *(bool *)(*(int *)(iVar6 + iVar1 + 0x70) + 0x61) = (uVar4 & 4) != 0;
      } while (uVar5 < *(byte *)(param_1 + 0x652));
    }
    if (((*(uint *)(param_1 + 0x5a0) & 0x2000) == 0) || ((*(uint *)(param_1 + 0x59c) & 8) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
    uVar4 = 0;
    if (*(char *)(param_1 + 0x653) != '\0') {
      do {
        iVar1 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        *(undefined1 *)(*(int *)(iVar6 + iVar1 + 0x8c) + 0x61) = uVar3;
      } while (uVar4 < *(byte *)(param_1 + 0x653));
    }
  }
  return;
}

