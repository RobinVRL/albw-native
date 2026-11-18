#include "ghidra_types.h"

extern int func_0027B0A8(undefined4 param_1);
extern int func_004AD1F4(int param_1,int param_2,int param_3);
extern undefined4 DAT_0016e9c4;
extern int *DAT_0016e9c8;
extern int *DAT_0016e9cc;

// USA 0016E95C <- EU 0016E95C (Ghidra, non-matching)
// GLOBAL DAT_0016e9c4 undefined4
// GLOBAL DAT_0016e9c8 int *
// GLOBAL DAT_0016e9cc int *

undefined4 func_0016E95C(int param_1)

{
  char cVar1;
  
  *(undefined4 *)(param_1 + 0x3f8) = DAT_0016e9c4;
  if (*(char *)(param_1 + 0x3fe) != '\0') {
    func_0027B0A8((int)(short)*(undefined4 *)(param_1 + 0x3c0));
    *(undefined1 *)(param_1 + 0x3fe) = 0;
    cVar1 = *(char *)(*DAT_0016e9c8 + 0x18);
    if ((cVar1 == '\v' || cVar1 == '\x11') || cVar1 == '\x14') {
      return func_004AD1F4(*DAT_0016e9cc,(int)*(short *)(param_1 + 0x46),1);
    }
  }
  return 0;
}

