#include "ghidra_types.h"

extern int func_003E1224(int param_1,int param_2);
extern int func_003E145C(int param_1,ushort param_2);
extern int func_003E147C(int param_1,ushort param_2);
extern int func_003E15CC(int param_1,undefined1 param_2);
extern int DAT_00413ea8;

// USA 00413DF8 <- EU 00413DD8 (Ghidra, non-matching)
// GLOBAL DAT_00413ea8 int

void func_00413DF8(int param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  *(undefined1 *)(param_1 + 0x50) = *param_2;
  iVar1 = DAT_00413ea8;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar4 = *(int *)(param_1 + iVar5 * 4);
      if (iVar4 != 0) {
        func_003E145C(iVar4,1);
        uVar3 = 1;
        switch(*(undefined1 *)(param_1 + 0x50)) {
        case 0:
          uVar3 = 0;
          break;
        case 3:
          uVar3 = 2;
        }
        func_003E147C(iVar4,uVar3);
        func_003E1224(iVar4,*(int *)(param_2 + 8));
        uVar2 = 0;
        if (*(char *)(iVar1 + 2) == '\0') {
          uVar2 = 2;
        }
        else if (*(char *)(iVar1 + 2) == '\x01') {
          uVar2 = 1;
        }
        func_003E15CC(iVar4,uVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(param_1 + 8));
  }
  *(undefined1 *)(param_1 + 0x17) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  return;
}

