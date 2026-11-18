#include "ghidra_types.h"

extern int func_00293DC0(int param_1,int param_2,int param_3);

// USA 0029669C <- EU 002966C4 (Ghidra, non-matching)

undefined4 func_0029669C(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0x3c) != 0) {
    iVar3 = *(int *)(param_1 + 0x40);
    for (iVar2 = *(int *)(param_1 + 0x38) - iVar3; iVar2 != (param_1 + 0x34) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if ((*(uint *)(iVar2 + 0x38) & 8) != 0) {
        cVar1 = *(char *)(param_1 + 0x1a4);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0xac);
        }
        goto joined_r0x0029671c;
      }
    }
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    iVar3 = *(int *)(param_1 + 0x30);
    for (iVar2 = *(int *)(param_1 + 0x28) - iVar3; iVar2 != (param_1 + 0x24) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if ((*(uint *)(iVar2 + 0x38) & 8) != 0) {
        cVar1 = *(char *)(param_1 + 0x1a4);
        if (*(int *)(iVar2 + 0xc) == 0) {
          iVar2 = -1;
        }
        else {
          iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0xac);
        }
joined_r0x0029671c:
        if (cVar1 == '\0') {
          return 0;
        }
        return func_00293DC0(param_1,iVar2,0);
      }
    }
  }
  return 0;
}

