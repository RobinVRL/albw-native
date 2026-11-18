#include "ghidra_types.h"

extern int func_00276ED4(int param_1,int param_2);
extern int func_004CDB2C(int param_1,int *param_2);
extern int *DAT_002fd298;
extern int *DAT_002fd29c;
extern int *DAT_002fd2a0;
extern int DAT_002fd2a4;

// USA 002FD11C <- EU 002FD0F8 (Ghidra, non-matching)
// GLOBAL DAT_002fd298 int *
// GLOBAL DAT_002fd29c int *
// GLOBAL DAT_002fd2a0 int *
// GLOBAL DAT_002fd2a4 int

undefined4 func_002FD11C(int *param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = DAT_002fd2a4;
  iVar2 = *DAT_002fd298;
  if ((iVar2 == 0) || (*(char *)((int)param_1 + 0x7d) != '\0')) {
    return 0;
  }
  if ((*(int **)(iVar2 + 0x44) == (int *)0x0) || (*(int **)(iVar2 + 0x44) != param_1)) {
    if (param_2 == 0) {
      return 0;
    }
    iVar3 = func_004CDB2C(iVar2,param_1);
    if (iVar3 == 0) {
      return 0;
    }
    goto switchD_002fd150_caseD_0;
  }
  iVar2 = *DAT_002fd29c;
  switch((char)param_1[0x1f]) {
  default:
    goto switchD_002fd150_caseD_0;
  case '\x01':
  case '\x03':
    if ((param_2 == 0) && (0 < *(int *)(*(int *)(*DAT_002fd2a0 + 0x18) + 0x10c))) {
      return 0;
    }
    if (((char)param_1[0x1f] == '\x01') && (*DAT_002fd29c != 0)) {
      func_00276ED4(*(int *)(*DAT_002fd29c + 0x38),0);
    }
    if (param_2 != 0) goto LAB_002fd230;
LAB_002fd238:
    uVar1 = **(undefined2 **)(iVar3 + 8);
    break;
  case '\x02':
    if ((param_2 == 0) && (0 < *(int *)(*(int *)(*DAT_002fd2a0 + 0x18) + 0x10c))) {
      return 0;
    }
    if (iVar2 != 0) {
      func_00276ED4(*(int *)(iVar2 + 0x38),1);
    }
    if (param_2 == 0) goto LAB_002fd238;
LAB_002fd230:
    uVar1 = 0xf;
    break;
  case '\x04':
    if (iVar2 != 0) {
      func_00276ED4(*(int *)(iVar2 + 0x38),1);
    }
    goto switchD_002fd150_caseD_0;
  }
  *(undefined2 *)((int)param_1 + 0x36) = uVar1;
switchD_002fd150_caseD_0:
  *(undefined1 *)((int)param_1 + 0x7d) = 1;
  *(undefined1 *)((int)param_1 + 0x7e) = 1;
  return 1;
}

