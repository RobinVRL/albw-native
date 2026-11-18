#include "ghidra_types.h"

extern int func_006652A4(undefined4 *param_1,undefined1 param_2);

// USA 00319FA8 <- EU 00319F84 (Ghidra, non-matching)

undefined4 func_00319FA8(int param_1,int param_2)

{
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x424) == '\x06') {
      if (*(char *)(param_1 + 0x7c4) != '\0') {
        return 1;
      }
    }
    else {
      func_006652A4((undefined4 *)(param_1 + 0x420),6);
      *(undefined1 *)(param_1 + 0x7c4) = 0;
    }
  }
  else if (param_2 == 1) {
    if (*(char *)(param_1 + 0x424) == '\a') {
      if (*(char *)(param_1 + 0x7c4) != '\0') {
        func_006652A4((undefined4 *)(param_1 + 0x420),3);
        return 1;
      }
    }
    else {
      func_006652A4((undefined4 *)(param_1 + 0x420),7);
      *(undefined1 *)(param_1 + 0x7c4) = 0;
    }
  }
  else if (param_2 == 2) {
    if ((*(char *)(param_1 + 0x424) == '\x02') || (*(char *)(param_1 + 0x424) == '\x04')) {
      if (*(char *)(param_1 + 0x7c4) != '\0') {
        func_006652A4((undefined4 *)(param_1 + 0x420),8);
        return 1;
      }
    }
    else {
      func_006652A4((undefined4 *)(param_1 + 0x420),2);
      *(undefined1 *)(param_1 + 0x7c4) = 0;
    }
  }
  return 0;
}

