#include "ghidra_types.h"

extern int func_00276ED4(int param_1,int param_2);
extern int func_004CDB2C(int param_1,int *param_2);
extern int *DAT_002fd298;
extern int *DAT_002fd29c;
extern undefined4 DAT_002fd2a0;
extern undefined4 DAT_002fd2a4;

// USA 002FD10C <- EU 002FD0E8 (Ghidra, non-matching)
// GLOBAL DAT_002fd298 int *
// GLOBAL DAT_002fd29c int *
// GLOBAL DAT_002fd2a0 undefined4
// GLOBAL DAT_002fd2a4 undefined4

/* WARNING: Removing unreachable block (ram,0x002fd198) */
/* WARNING: Removing unreachable block (ram,0x002fd1ec) */
/* WARNING: Removing unreachable block (ram,0x002fd238) */
/* WARNING: Removing unreachable block (ram,0x002fd208) */

undefined4 func_002FD10C(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x70);
  iVar2 = *DAT_002fd298;
  if ((iVar2 == 0) || (*(char *)((int)piVar1 + 0x7d) != '\0')) {
    return 0;
  }
  if ((*(int **)(iVar2 + 0x44) == (int *)0x0) || (*(int **)(iVar2 + 0x44) != piVar1)) {
    iVar2 = func_004CDB2C(iVar2,piVar1);
    if (iVar2 == 0) {
      return 0;
    }
    goto switchD_002fd150_caseD_0;
  }
  iVar2 = *DAT_002fd29c;
  switch((char)piVar1[0x1f]) {
  default:
    goto switchD_002fd150_caseD_0;
  case '\x01':
  case '\x03':
    if (((char)piVar1[0x1f] == '\x01') && (*DAT_002fd29c != 0)) {
      func_00276ED4(*(int *)(*DAT_002fd29c + 0x38),0);
    }
    break;
  case '\x02':
    if (iVar2 != 0) {
      func_00276ED4(*(int *)(iVar2 + 0x38),1);
    }
    break;
  case '\x04':
    if (iVar2 != 0) {
      func_00276ED4(*(int *)(iVar2 + 0x38),1);
    }
    goto switchD_002fd150_caseD_0;
  }
  *(undefined2 *)((int)piVar1 + 0x36) = 0xf;
switchD_002fd150_caseD_0:
  *(undefined1 *)((int)piVar1 + 0x7d) = 1;
  *(undefined1 *)((int)piVar1 + 0x7e) = 1;
  return 1;
}

