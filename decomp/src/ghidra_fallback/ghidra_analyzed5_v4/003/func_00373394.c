#include "ghidra_types.h"

extern int func_001E6AB4(int param_1);
extern int func_004CDDEC(int param_1,int *param_2,int param_3);
extern int func_00667258(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00373420;
extern int *DAT_00373424;

// USA 00373394 <- EU 00373370 (Ghidra, non-matching)
// GLOBAL DAT_00373420 int *
// GLOBAL DAT_00373424 int *

undefined4 func_00373394(int *param_1)

{
  char cVar1;
  int iVar2;
  
  func_001E6AB4((int)param_1);
  iVar2 = *DAT_00373420;
  if ((*(char *)(iVar2 + 0x70) == '\x05') && (*(char *)(iVar2 + 0x2e2) <= *(char *)(iVar2 + 0x2e3)))
  {
    if ((char)param_1[0x264] == '\0') {
      cVar1 = func_004CDDEC(*DAT_00373424,param_1 + 0x26f,0);
      if (cVar1 != '\0') {
        return func_00667258(param_1 + 0x263,3);
      }
    }
    else if (((char)param_1[0x264] == '\x03') &&
            (iVar2 = (**(code **)(*param_1 + 0xbc))(param_1), iVar2 != 0)) {
      func_00667258(param_1 + 0x263,4);
    }
  }
  return 0;
}

