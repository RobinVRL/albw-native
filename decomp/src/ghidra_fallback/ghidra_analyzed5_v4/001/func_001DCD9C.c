#include "ghidra_types.h"

extern int func_0028D7DC(int param_1);
extern int func_002914B0(int param_1);
extern int func_00341290(int param_1,int param_2);
extern int func_003459C8(int param_1);
extern int *DAT_001dce40;

// USA 001DCD9C <- EU 001DCD9C (Ghidra, non-matching)
// GLOBAL DAT_001dce40 int *

undefined4 func_001DCD9C(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  
  piVar1 = DAT_001dce40;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar3 = (**(code **)(**(int **)(*DAT_001dce40 + 0x10) + 8))(*(int **)(*DAT_001dce40 + 0x10));
  if (iVar3 != 0) {
    unaff_r4 = 0;
  }
  *(char *)(iVar2 + 0x6be) = (char)iVar3;
  if (iVar3 != 0) {
    do {
      (**(code **)(**(int **)(iVar2 + unaff_r4 * 4 + 0x630) + 0xc))(*(int **)(iVar2 + unaff_r4 * 4 + 0x630));
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < 0x19);
  }
  func_00341290(*(int *)(iVar2 + 0x604),(int)*(char *)(iVar2 + 0x6be));
  iVar3 = func_003459C8(*(int *)(*piVar1 + 0x10));
  if (iVar3 != 0) {
    func_0028D7DC(*(int *)(iVar2 + 0x600) + 0x3c);
    func_0028D7DC(*(int *)(iVar2 + 0x600) + 0x5c);
  }
  return func_002914B0(*(int *)(iVar2 + 0x614));
}

