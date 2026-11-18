#include "ghidra_types.h"

extern int func_001501C8(int param_1,int param_2);
extern int func_0035227C(int param_1,undefined4 param_2);

// USA 001E548C <- EU 001E548C (Ghidra, non-matching)

void func_001E548C(int param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x2d0) != 0) && (*(char *)(*(int *)(param_1 + 0x2d0) + 0x23) == '\x01')) {
    uVar2 = 0;
    if (0 < *(int *)(param_1 + 0x604)) {
      do {
        if (uVar2 < *(uint *)(param_1 + 0x604)) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x60c) + uVar2 * 4);
        }
        else {
          iVar1 = 0;
        }
        func_001501C8(param_1,iVar1);
        if (uVar2 < *(uint *)(param_1 + 0x610)) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x618) + uVar2 * 4);
        }
        else {
          iVar1 = 0;
        }
        func_0035227C(iVar1 + 4,(uint)*(byte *)(param_1 + 0x392));
        uVar2 = uVar2 + 1;
      } while ((int)uVar2 < *(int *)(param_1 + 0x604));
    }
  }
  return;
}

