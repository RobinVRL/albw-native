#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_00102544;
extern int *DAT_00102548;
extern int *DAT_0010254c;

// USA 001024E0 <- EU 001024E0 (Ghidra, non-matching)
// GLOBAL DAT_00102544 char *
// GLOBAL DAT_00102548 int *
// GLOBAL DAT_0010254c int *

void func_001024E0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  
  pcVar1 = DAT_00102544;
  iVar3 = *(int *)(DAT_00102544 + 4);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    *(int *)(DAT_00102544 + 4) = iVar3;
  }
  piVar2 = DAT_00102548;
  if (iVar3 == 0) {
    if (*pcVar1 == '\0') {
      return;
    }
    *pcVar1 = '\0';
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      software_interrupt(0x23);
      iVar3 = -(iVar3 >> 0x1f);
                    /* WARNING: Subroutine does not return */
      if (iVar3 != 0) {
        func_0010C1B8(iVar3,0,param_3);
      }
      *piVar2 = *DAT_0010254c;
    }
    return;
  }
  return;
}

