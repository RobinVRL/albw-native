#include "ghidra_types.h"

extern int func_0012217C(int param_1,int param_2);
extern int *DAT_0034e3bc;

// USA 0034E344 <- EU 0034E320 (Ghidra, non-matching)
// GLOBAL DAT_0034e3bc int *

undefined4 func_0034E344(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\0';
  *(bool *)(param_1 + 0x20) = bVar1;
  if ((-1 < *(short *)(param_1 + 0x29e)) && (*(short *)(param_1 + 0x29e) < 1)) {
    if (*(char *)(param_1 + 0x2a0) != '\0') {
      if (*(char *)(param_1 + 0x2a1) == '\0') {
        if (!bVar1) {
          *(undefined1 *)(param_1 + 0x20) = 1;
          *(undefined1 *)(param_1 + 0x164) = 0;
          *(undefined1 *)(param_1 + 0x2a1) = 1;
          return 0;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x20) = 1;
      }
    }
    *(undefined1 *)(param_1 + 0x2a1) = 0;
  }
  *(undefined1 *)(param_1 + 0x21) = 1;
  if (*(char *)(param_1 + 0x20) != 0) {
    *(undefined1 *)(param_1 + 0x131) = 1;
  }
  *(undefined1 *)(param_1 + 0x136) = 0;
  return func_0012217C(*(int *)(*DAT_0034e3bc + 0x18),(int)*(char *)(param_1 + 0x20));
}

