#include "ghidra_types.h"

extern int func_002D3428(int param_1);
extern int *DAT_002d2ac4;

// USA 002D2A74 <- EU 002D2A50 (Ghidra, non-matching)
// GLOBAL DAT_002d2ac4 int *

undefined4 func_002D2A74(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(char *)(*DAT_002d2ac4 + 0x18) == '\x0e' || *(char *)(*DAT_002d2ac4 + 0x18) == '\x14') {
    if (*(int *)(*param_1 + 0x4b0) == 3) {
      if ((char)param_1[0x32] != '\0') goto LAB_002d2aa8;
    }
    else if ((*(int *)(*param_1 + 0x4b0) != 4) || ((char)param_1[0x32] != '\x01'))
    goto LAB_002d2aa8;
    iVar1 = 2;
  }
LAB_002d2aa8:
  *(char *)(param_1 + 9) = (char)(iVar1 + param_2);
  if ((iVar1 + param_2 & 0xff) != param_2) {
    return func_002D3428((int)param_1);
  }
  return 0;
}

