#include "ghidra_types.h"

extern int func_00257A40(int param_1,undefined4 param_2);
extern int func_004EBFFC(int param_1,int param_2,float fparam_0);
extern float DAT_0029605c;
extern int *DAT_00296060;

// USA 00295F98 <- EU 00295FC0 (Ghidra, non-matching)
// GLOBAL DAT_0029605c float
// GLOBAL DAT_00296060 int *

undefined4 func_00295F98(int param_1)

{
  float fparam_0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x4c);
  if ((*(uint *)(iVar1 + 0x128) & 8) != 0 || (*(uint *)(iVar1 + 0x128) & 0x10) != 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0x1c) != 0) {
    iVar3 = *(int *)(iVar1 + 0x20);
    for (iVar2 = *(int *)(iVar1 + 0x18) - iVar3; iVar2 != (iVar1 + 0x14) - iVar3;
        iVar2 = *(int *)(iVar2 + iVar3 + 4) - iVar3) {
      if (*(char *)(iVar2 + 0x6a) == '\0') {
        func_00257A40(iVar2,0x3c);
      }
    }
  }
  fparam_0 = DAT_0029605c;
  *(uint *)(iVar1 + 0x128) = *(uint *)(iVar1 + 0x128) | 8;
  return func_004EBFFC(*DAT_00296060,0x3c,fparam_0);
}

