#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);

// USA 005194F4 <- EU 005194CC (Ghidra, non-matching)

undefined4 func_005194F4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int in_r3;
  bool bVar3;
  
  if (*(int *)(param_1 + 0x80) != 0) {
    bVar3 = *(char *)(*(int *)(param_1 + 0x80) + 0x16c) != '\0';
    iVar2 = 0;
    if (bVar3) {
      iVar2 = *(int *)(param_1 + 0xd4);
    }
    if (bVar3 && iVar2 != 0) {
      cVar1 = *(char *)(iVar2 + 0xd);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(iVar2 + 0xe);
      }
      if (!bVar3 || cVar1 != '\0') {
        func_0012C790(iVar2);
        return func_001B6B38(*(int **)(param_1 + 0xd4),extraout_r1,in_r2,in_r3);
      }
    }
  }
  return 0;
}

