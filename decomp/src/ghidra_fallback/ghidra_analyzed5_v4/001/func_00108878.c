#include "ghidra_types.h"

extern int func_0010BB00(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_001088cc;
extern int *DAT_001088d0;

// USA 00108878 <- EU 00108878 (Ghidra, non-matching)
// GLOBAL DAT_001088cc undefined4
// GLOBAL DAT_001088d0 int *

int func_00108878(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar3 + 0x80) = DAT_001088cc;
  func_0010BB00((undefined4 *)(iVar3 + 0x84),param_2);
  piVar1 = DAT_001088d0;
  *(undefined4 *)(iVar3 + 0x8c) = param_3;
  *(undefined4 *)(iVar3 + 0x90) = param_4;
  iVar2 = *piVar1;
  software_interrupt(0x32);
  if (-1 < iVar2) {
    *param_1 = *(undefined4 *)(iVar3 + 0x8c);
    iVar2 = *(int *)(iVar3 + 0x84);
  }
  return iVar2;
}

