#include "ghidra_types.h"

extern int func_0014D594(int param_1);
extern int func_0014D630(int param_1);
extern int func_00520E34(int param_1);
extern int func_0061D008(int param_1,int param_2,undefined1 param_3);
extern int *DAT_00245c9c;
extern int *DAT_00245ca0;

// USA 00245BE8 <- EU 00245BE8 (Ghidra, non-matching)
// GLOBAL DAT_00245c9c int *
// GLOBAL DAT_00245ca0 int *

undefined4 func_00245BE8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *DAT_00245c9c;
  if (param_2 == 0) {
    iVar1 = *(int *)(iVar1 + 300);
    if (*(char *)(param_1 + 0x991) == '\0') {
      func_0014D594(iVar1);
      *(undefined1 *)(param_1 + 0x991) = 1;
    }
    else {
      iVar1 = func_00520E34(iVar1);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x991) = 0;
        return 1;
      }
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        if (*DAT_00245ca0 != 0) {
          *(undefined4 *)(*DAT_00245ca0 + 0x51c) = 0;
        }
        func_0014D630(*(int *)(iVar1 + 300));
      }
      return 1;
    }
    if (*(char *)(param_1 + 0x964) != '\x05') {
      func_0061D008(param_1,5,0);
    }
  }
  return 0;
}

