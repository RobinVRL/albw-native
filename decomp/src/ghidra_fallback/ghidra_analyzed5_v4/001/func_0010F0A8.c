#include "ghidra_types.h"

extern int func_0010F1DC(int *param_1,int *param_2);
extern void func_0010F1F8(int *param_1,float fparam_0);

// USA 0010F0A8 <- EU 0010F0A8 (Ghidra, non-matching)

void func_0010F0A8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float in_s0;
  
  iVar1 = *(int *)(param_1 + 0x7c);
  do {
    uVar2 = iVar1 - *(int *)(param_1 + 0x84);
    if (uVar2 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) {
      func_0010F1DC((int *)(param_1 + 0x78),(int *)(param_2 + *(int *)(param_1 + 0x84)));
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
LAB_0010f124:
      iVar4 = *(int *)(param_1 + 0x84);
      iVar1 = *(int *)(param_1 + 0x7c) - iVar4;
      while( true ) {
        iVar3 = iVar1;
        if (iVar3 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) {
          return;
        }
        iVar1 = *(int *)(iVar3 + iVar4 + 4) - iVar4;
        if (iVar1 == (param_1 + 0x78) - *(int *)(param_1 + 0x84)) break;
        if (*(int *)(iVar3 + 8) + *(int *)(iVar3 + 0xc) + 0x10 + iVar3 == iVar1) {
          *(int *)(iVar3 + 8) =
               *(int *)(iVar3 + 8) + *(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 8) + 0x10;
          func_0010F1F8((int *)(*(int *)(param_1 + 0x84) + iVar1),in_s0);
          *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
          iVar1 = iVar3;
        }
      }
      return;
    }
    if (param_2 < uVar2) {
      func_0010F1DC((int *)(uVar2 + *(int *)(param_1 + 0x84)),
                    (int *)(param_2 + *(int *)(param_1 + 0x84)));
      *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
      goto LAB_0010f124;
    }
    iVar1 = *(int *)(uVar2 + *(int *)(param_1 + 0x84) + 4);
  } while( true );
}

