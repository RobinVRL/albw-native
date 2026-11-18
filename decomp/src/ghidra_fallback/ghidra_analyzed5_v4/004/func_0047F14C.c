#include "ghidra_types.h"

extern int func_0012E708(int param_1,int param_2);
extern int func_001B6C04(int param_1);
extern int func_00376774(int param_1,uint param_2);
extern int func_003A0D68(int param_1);
extern int *DAT_0047f1a0;

// USA 0047F14C <- EU 0047F124 (Ghidra, non-matching)
// GLOBAL DAT_0047f1a0 int *

undefined4 func_0047F14C(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0xa6) = 1;
  iVar2 = *(int *)(param_1 + 0x54);
  for (iVar1 = *(int *)(param_1 + 0x4c); iVar1 = iVar1 - iVar2,
      iVar1 != (param_1 + 0x48) - *(int *)(param_1 + 0x54); iVar1 = *(int *)(iVar1 + iVar2 + 4)) {
    *(undefined1 *)(iVar1 + 0xe) = 1;
  }
  func_001B6C04(param_1);
  func_00376774(*(int *)(param_1 + 0x110),0);
  func_00376774(*(int *)(param_1 + 0x114),1);
  func_003A0D68(*(int *)(param_1 + 0x10c));
  return func_0012E708(*DAT_0047f1a0,1);
}

