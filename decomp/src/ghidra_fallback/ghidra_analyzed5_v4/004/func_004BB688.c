#include "ghidra_types.h"

extern int func_0014E138(int param_1,int param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004BBA60(int param_1,uint param_2);
extern int func_004CEAF0(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_00556C14(int param_1);
extern int *DAT_004bb6d8;
extern int *DAT_004bb6dc;

// USA 004BB688 <- EU 004BB660 (Ghidra, non-matching)
// GLOBAL DAT_004bb6d8 int *
// GLOBAL DAT_004bb6dc int *

undefined4 func_004BB688(int param_1,int param_2)

{
  int iVar1;
  uint extraout_r1;
  
  iVar1 = func_00556C14(*DAT_004bb6d8);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x44f) = 1;
  }
  if ((param_2 == 0) && (*(int *)(*DAT_004bb6dc + 0x44) != 0)) {
    func_004BBA60(param_1,extraout_r1);
    func_0043625C(*(int **)(*(int *)(param_1 + 0x444) + 0x14),(undefined4 *)(param_1 + 0x3d0));
    func_004ED9C8(*(int *)(param_1 + 0x444));
    func_004CEAF0(*(int *)(param_1 + 0x43c));
  }
  return func_0014E138(param_1,param_2);
}

