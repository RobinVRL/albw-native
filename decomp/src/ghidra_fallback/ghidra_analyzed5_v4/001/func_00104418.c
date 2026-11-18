#include "ghidra_types.h"

extern int func_0010846C(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_001084D4(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_001044a4;
extern int *DAT_001044a8;
extern int *DAT_001044ac;

// USA 00104418 <- EU 00104418 (Ghidra, non-matching)
// GLOBAL DAT_001044a4 char *
// GLOBAL DAT_001044a8 int *
// GLOBAL DAT_001044ac int *

undefined4 func_00104418(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = DAT_001044a4;
  if (param_1 == 0) {
    iVar3 = *(int *)(DAT_001044a4 + 4);
    if (0 < iVar3) {
      iVar3 = iVar3 + -1;
      *(int *)(DAT_001044a4 + 4) = iVar3;
    }
    piVar2 = DAT_001044a8;
    if ((iVar3 == 0) && (*pcVar1 != '\0')) {
      *pcVar1 = '\0';
      iVar3 = *piVar2;
      if (iVar3 != 0) {
        software_interrupt(0x23);
        iVar3 = -(iVar3 >> 0x1f);
                    /* WARNING: Subroutine does not return */
        if (iVar3 != 0) {
          func_0010C1B8(iVar3,0,param_3);
        }
        *piVar2 = *DAT_001044ac;
      }
    }
  }
  else {
    if (param_1 == 1) {
      return func_0010846C(1,param_2,param_3);
    }
    if (param_1 == 2) {
      return func_001084D4(2,param_2,param_3);
    }
  }
  return 0;
}

