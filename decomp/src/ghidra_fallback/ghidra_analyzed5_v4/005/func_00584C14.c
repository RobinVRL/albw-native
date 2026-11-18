#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);

// USA 00584C14 <- EU 00584BEC (Ghidra, non-matching)

uint func_00584C14(int param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  (**(code **)(*param_2 + 8))(param_2);
  puVar1 = (uint *)param_2[1];
  uVar2 = func_00103CBC((char *)puVar1);
  uVar2 = func_00564ABC((short *)(iVar5 + 0x88),puVar1,uVar2);
  if (uVar2 != 0xffff) {
    uVar4 = *(uint *)(param_1 + 0x5c);
    uVar3 = 0;
    if (0 < (int)uVar4) {
      do {
        if (uVar3 < uVar4) {
          iVar5 = *(int *)(*(int *)(param_1 + 100) + uVar3 * 4);
        }
        else {
          iVar5 = 0;
        }
        if (*(ushort *)(*(int *)(iVar5 + 0x90) + 4) == uVar2) {
          return uVar3;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < (int)uVar4);
    }
  }
  return 0xffffffff;
}

