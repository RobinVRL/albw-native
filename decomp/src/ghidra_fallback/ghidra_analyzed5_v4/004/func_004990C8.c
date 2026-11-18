#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00410AFC(int param_1,int param_2,uint param_3);
extern int func_00410C0C(int param_1,int param_2,uint param_3);
extern int func_00410CEC(int param_1,byte *param_2);
extern int func_0056ADA8(int param_1);
extern int func_0056AE68(int param_1);

// USA 004990C8 <- EU 004990A0 (Ghidra, non-matching)

undefined4 func_004990C8(int param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  iVar1 = func_00410CEC(param_1 + 8,param_2);
  uVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = func_0056ADA8(param_1 + 0x144);
    iVar1 = func_0010CEE0(uVar2,*(int **)(param_1 + 0x19c),0x20);
    uVar3 = 0;
    *(int *)(param_1 + 0x1a0) = iVar1;
    if ((iVar1 != 0) && (iVar1 = func_00410AFC(param_1 + 8,iVar1,uVar2), iVar1 != 0)) {
      if (*(char *)(param_1 + 0x1a8) != '\0') {
        uVar2 = func_0056AE68(param_1 + 0x144);
        iVar1 = func_0010CEE0(uVar2,*(int **)(param_1 + 0x19c),0x20);
        *(int *)(param_1 + 0x1a4) = iVar1;
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = func_00410C0C(param_1 + 8,iVar1,uVar2);
        if (iVar1 == 0) {
          return 0;
        }
      }
      uVar3 = 1;
    }
  }
  return uVar3;
}

