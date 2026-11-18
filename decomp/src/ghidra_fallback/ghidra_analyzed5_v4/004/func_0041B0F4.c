#include "ghidra_types.h"

extern int func_001080CC(int param_1);
extern int func_0041497C(int param_1);
extern int func_004196AC(int *param_1,int param_2);

// USA 0041B0F4 <- EU 0041B0D4 (Ghidra, non-matching)

undefined4 func_0041B0F4(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    *(undefined1 *)(param_1 + 0x52) = 1;
    uVar2 = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      do {
        iVar3 = param_1 + uVar2 * 0x340;
        iVar1 = *(int *)(iVar3 + 0x104);
        if (iVar1 != 0) {
          func_004196AC(*(int **)(param_1 + 100),iVar1);
          *(undefined4 *)(iVar3 + 0x104) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xfc));
    }
    uVar2 = 0;
    if (*(int *)(param_1 + 0xfc) != 0) {
      do {
        iVar1 = param_1 + uVar2 * 0x340;
        iVar3 = *(int *)(iVar1 + 0x134);
        if (iVar3 != 0) {
          func_0041497C(iVar3);
          *(undefined4 *)(iVar1 + 0x134) = 0;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(uint *)(param_1 + 0xfc));
    }
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0xc) = 0;
    *(undefined1 *)(param_1 + 0x50) = 0;
    return func_001080CC(param_1);
  }
  return 0;
}

