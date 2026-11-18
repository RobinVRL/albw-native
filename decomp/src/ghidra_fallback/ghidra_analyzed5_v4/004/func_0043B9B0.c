#include "ghidra_types.h"

extern int func_0012C85C(int *param_1,uint param_2);
extern int func_0051E300(int param_1);
extern int func_00581C5C(int param_1);
extern int *DAT_0043ba48;

// USA 0043B9B0 <- EU 0043B990 (Ghidra, non-matching)
// GLOBAL DAT_0043ba48 int *

undefined4 func_0043B9B0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((char)param_1[0x23] != '\0') {
    if (*DAT_0043ba48 == 0) {
      return 0;
    }
    if (((*(char *)((int)param_1 + 0xd) == '\0') && (*(char *)((int)param_1 + 0xe) == '\0')) &&
       (iVar1 = func_00581C5C(*DAT_0043ba48), iVar1 != 0)) {
      *(undefined1 *)((int)param_1 + 0xe) = 1;
      *(undefined1 *)(param_1 + 0x23) = 0;
    }
  }
  iVar1 = param_1[0x13];
  iVar3 = param_1[0x15];
  while( true ) {
    piVar2 = (int *)(iVar1 - iVar3);
    if (piVar2 == (int *)((int)param_1 + (0x48 - param_1[0x15]))) break;
    iVar1 = func_0051E300((int)piVar2);
    if (iVar1 != 0) {
      (**(code **)(*piVar2 + 0xc))(piVar2);
    }
    iVar1 = *(int *)((int)piVar2 + iVar3 + 4);
  }
  return func_0012C85C(param_1,param_1[0x15]);
}

