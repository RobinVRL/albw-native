#include "ghidra_types.h"

extern int func_003EA524(int param_1);
extern int func_003F3544(int param_1);
extern int func_003F8470(int param_1,int param_2);

// USA 003F7FB0 <- EU 003F7F90 (Ghidra, non-matching)

undefined4 func_003F7FB0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_2 + 4) < 1) {
    return 0;
  }
  iVar3 = 0;
  if (0 < *(int *)(param_2 + 8)) {
    do {
      iVar4 = *(int *)(param_2 + iVar3 * 4 + 0x10);
      if ((*(int *)(iVar4 + 0x20) == *(int *)(param_2 + 0xc)) && (*(int *)(iVar4 + 0xd4) != 0)) {
        for (iVar1 = *(int *)(iVar4 + 0xdc); iVar1 != 0; iVar1 = func_003EA524(iVar1)) {
        }
        for (iVar1 = *(int *)(iVar4 + 0xe0); iVar1 != 0; iVar1 = func_003EA524(iVar1)) {
        }
        func_003F3544(iVar4 + 0x23c);
        *(undefined4 *)(iVar4 + 0xd4) = 0;
        *(int *)(*(int *)(iVar4 + 0x18) + 4) = *(int *)(*(int *)(iVar4 + 0x18) + 4) + -1;
        *(undefined4 *)(iVar4 + 0x20) = 0xffffffff;
        if (*(int *)(*(int *)(iVar4 + 0x18) + 4) == 0) {
          *(int *)(param_1 + 0x474) = *(int *)(param_1 + 0x474) + -1;
        }
        *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + 1;
        iVar2 = param_1 + *(int *)(iVar4 + 0x14) * 4;
        iVar1 = *(int *)(iVar4 + 0xd0);
        if (*(int *)(iVar2 + 0x20) == iVar4) {
          *(int *)(iVar2 + 0x20) = iVar1;
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0xcc) = 0;
          }
        }
        else {
          if (iVar1 != 0) {
            *(undefined4 *)(iVar1 + 0xcc) = *(undefined4 *)(iVar4 + 0xcc);
          }
          *(undefined4 *)(*(int *)(iVar4 + 0xcc) + 0xd0) = *(undefined4 *)(iVar4 + 0xd0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_2 + 8));
  }
  return func_003F8470(param_1,param_2);
}

