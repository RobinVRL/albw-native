#include "ghidra_types.h"

extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int *DAT_0034b4c4;

// USA 0034B458 <- EU 0034B434 (Ghidra, non-matching)
// GLOBAL DAT_0034b4c4 int *

void func_0034B458(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = DAT_0034b4c4;
  if ((*(char *)(param_1 + 0x325) != '\0') && (*(char *)(param_1 + 0x324) == '\0')) {
    iVar3 = 0;
    do {
      if (*(short *)(param_1 + 0x5e + iVar3 * 6) < 1) {
        return;
      }
      iVar2 = func_0052FBDC(*piVar1 + 0x3dbbc,(int)*(short *)(param_1 + iVar3 * 6 + 0x5e),0);
      if (iVar2 != 0) {
        *(undefined4 *)(param_1 + 800) = *(undefined4 *)(iVar2 + 0x2cc);
        *(undefined1 *)(param_1 + 0x324) = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0x60);
  }
  return;
}

