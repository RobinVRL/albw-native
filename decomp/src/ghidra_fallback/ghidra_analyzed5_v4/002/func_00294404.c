#include "ghidra_types.h"

extern int func_00258520(int param_1,int param_2);
extern int func_00293DC0(int param_1,int param_2,int param_3);
extern int func_00297140(int param_1,int *param_2);
extern int func_00587FCC(int param_1,int *param_2);
extern int *DAT_002944e8;

// USA 00294404 <- EU 0029442C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_002944e8 int *

int func_00294404(int param_1,int *param_2,int param_3,int *param_4,int param_5)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x1a4) != '\0') {
    if ((param_3 != 0 || param_4 != (int *)0x0) || param_5 != 0) {
      iVar1 = func_00297140(param_1,param_2);
      if (iVar1 != 0) {
        if ((param_4 != (int *)0x0) && (*(char *)(iVar1 + 100) == '\0')) {
          *(undefined1 *)(iVar1 + 0x68) = 1;
        }
        if ((param_5 != 0) && (*(char *)(iVar1 + 100) == '\0')) {
          *(undefined1 *)(iVar1 + 0x69) = 1;
        }
        func_00258520(iVar1,param_3);
      }
      return iVar1;
    }
    iVar1 = func_00587FCC(*DAT_002944e8,param_2);
    if ((iVar1 != -1) && (*(char *)(param_1 + 0x1a4) != '\0')) {
      iVar1 = func_00293DC0(param_1,iVar1,0);
      return iVar1;
    }
  }
  return 0;
}

