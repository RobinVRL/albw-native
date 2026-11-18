#include "ghidra_types.h"

extern int func_00257A40(int param_1,undefined4 param_2);
extern int func_004EBFFC(int param_1,int param_2,float fparam_0);
extern float DAT_0029605c;
extern int *DAT_00296060;

// USA 00295FA0 <- EU 00295FC8 (Ghidra, non-matching)
// GLOBAL DAT_0029605c float
// GLOBAL DAT_00296060 int *

undefined4 func_00295FA0(int param_1)

{
  float fparam_0;
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 0x128) & 8) != 0 || (*(uint *)(param_1 + 0x128) & 0x10) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    iVar2 = *(int *)(param_1 + 0x20);
    for (iVar1 = *(int *)(param_1 + 0x18) - iVar2; iVar1 != (param_1 + 0x14) - iVar2;
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2) {
      if (*(char *)(iVar1 + 0x6a) == '\0') {
        func_00257A40(iVar1,0x3c);
      }
    }
  }
  fparam_0 = DAT_0029605c;
  *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) | 8;
  return func_004EBFFC(*DAT_00296060,0x3c,fparam_0);
}

