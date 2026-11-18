#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0010F0A8(int param_1,uint param_2);

// USA 0049C208 <- EU 0049C1E0 (Ghidra, non-matching)

int func_0049C208(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1);
  if (iVar1 != 0) {
    piVar5 = (int *)0x0;
    if ((param_1[0x1c] & 1U) != 0) {
      func_0010C0B8((int)(param_1 + 0x15));
      piVar5 = param_1 + 0x15;
    }
    for (iVar1 = param_1[0x23]; iVar1 = iVar1 - param_1[0x25],
        iVar1 != (int)param_1 + (0x88 - param_1[0x25]); iVar1 = *(int *)(iVar1 + param_1[0x25] + 4))
    {
      if (*(int *)(iVar1 + 0xc) + 0x10 + iVar1 == param_2) {
        uVar4 = *(int *)(iVar1 + 8) - param_3;
        if (uVar4 < 0x10) {
          iVar2 = *(int *)(iVar1 + 0xc);
        }
        else {
          *(int *)(iVar1 + 8) = param_3;
          puVar3 = (undefined4 *)(*(int *)(iVar1 + 0xc) + 0x10 + iVar1 + param_3);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
            puVar3[3] = 0;
          }
          puVar3[2] = uVar4 - 0x10;
          func_0010F0A8((int)param_1,(uint)puVar3);
          iVar2 = *(int *)(iVar1 + 0xc);
        }
        if (piVar5 != (int *)0x0) {
          func_0010EEE0((int)piVar5);
        }
        return iVar1 + iVar2 + 0x10;
      }
    }
    if (piVar5 != (int *)0x0) {
      func_0010EEE0((int)piVar5);
    }
  }
  return 0;
}

