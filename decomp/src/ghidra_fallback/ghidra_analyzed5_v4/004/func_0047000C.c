#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0014B1D4(int param_1,int param_2,int param_3);
extern int func_001B6D40(int param_1);
extern int func_004277DC(int param_1);
extern int *DAT_0047006c;
extern int *DAT_00470070;

// USA 0047000C <- EU 0046FFE4 (Ghidra, non-matching)
// GLOBAL DAT_0047006c int *
// GLOBAL DAT_00470070 int *

undefined4 func_0047000C(int param_1)

{
  int iVar1;
  int iVar2;
  
  func_001B6D40(param_1);
  if (*DAT_0047006c != 0) {
    func_0014B1D4(*DAT_0047006c,0,1);
  }
  if (*DAT_00470070 != 0) {
    *(undefined1 *)(*DAT_00470070 + 0x65) = 1;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    func_0012C718(iVar1);
  }
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xffffff7f;
  return func_004277DC(*(int *)(param_1 + 0x98));
}

