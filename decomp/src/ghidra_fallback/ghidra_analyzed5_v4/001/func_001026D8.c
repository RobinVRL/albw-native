#include "ghidra_types.h"

extern int func_00108250(int *param_1);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern char *DAT_00102788;
extern int *DAT_0010278c;
extern int *DAT_00102790;

// USA 001026D8 <- EU 001026D8 (Ghidra, non-matching)
// GLOBAL DAT_00102788 char *
// GLOBAL DAT_0010278c int *
// GLOBAL DAT_00102790 int *

void func_001026D8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  
  pcVar1 = DAT_00102788;
  if (*DAT_00102788 != '\0') {
    iVar2 = *param_1;
    *param_1 = 0;
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),param_2,param_3);
    }
    iVar2 = param_1[2];
    param_1[2] = 0;
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),param_2,param_3);
    }
    iVar2 = param_1[4];
    param_1[4] = 0;
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),param_2,param_3);
    }
    iVar2 = param_1[7];
    param_1[7] = 0;
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),param_2,param_3);
    }
    iVar2 = param_1[9];
    param_1[9] = 0;
    software_interrupt(0x23);
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),param_2,param_3);
    }
    func_00108250(param_1 + 0xb);
    iVar2 = *DAT_0010278c;
    software_interrupt(0x23);
    iVar3 = *DAT_00102790;
    *DAT_0010278c = iVar3;
                    /* WARNING: Subroutine does not return */
    if (-(iVar2 >> 0x1f) != 0) {
      func_0010C1B8(-(iVar2 >> 0x1f),iVar3,param_3);
    }
    *pcVar1 = '\0';
  }
  return;
}

