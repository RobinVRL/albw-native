#include "ghidra_types.h"

extern int func_0017A7AC(int param_1,undefined4 param_2,int param_3);
extern int func_00294F6C(int param_1);
extern int func_00297298(int param_1,int param_2);
extern int func_00540368(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0017ab7c;
extern int *DAT_0017ab80;

// USA 0017AAE0 <- EU 0017AAE0 (Ghidra, non-matching)
// GLOBAL DAT_0017ab7c int *
// GLOBAL DAT_0017ab80 int *

undefined4 func_0017AAE0(int param_1)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  
  iVar3 = func_00588BE4(param_1);
  piVar1 = DAT_0017ab80;
  if (iVar3 == *DAT_0017ab7c) {
    if (*(char *)(param_1 + 0x988) == '\0') {
      iVar3 = func_00540368(*DAT_0017ab80,0x40);
      if (iVar3 == 0) {
        iVar3 = 0x3c;
      }
      else {
        iVar3 = 0x1e;
      }
      func_00297298(*piVar1,iVar3);
      func_00294F6C(*piVar1);
      *(int *)(param_1 + 0x98c) = iVar3 + 0x32;
    }
    bVar2 = *(char *)(param_1 + 0x988) + 1;
    *(byte *)(param_1 + 0x988) = bVar2;
    if (*(int *)(param_1 + 0x98c) < (int)(uint)bVar2) {
      return func_0017A7AC(param_1,6,0);
    }
  }
  return 0;
}

