#include "ghidra_types.h"

extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_0021fd88;
extern int *DAT_0021fd8c;
extern undefined4 DAT_0021fd90;

// USA 0021FD20 <- EU 0021FD20 (Ghidra, non-matching)
// GLOBAL DAT_0021fd88 int *
// GLOBAL DAT_0021fd8c int *
// GLOBAL DAT_0021fd90 undefined4

undefined4 func_0021FD20(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0052FBA0(*DAT_0021fd88 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((iVar1 == 0) || (iVar1 = func_00588BE4(iVar1), iVar1 != *DAT_0021fd8c)) {
    uVar2 = DAT_0021fd90;
    *(undefined4 *)(param_1 + 0xa6c) = 0x3c;
    *(undefined4 *)(param_1 + 0xa70) = uVar2;
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

