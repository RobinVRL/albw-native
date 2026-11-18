#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern int func_0010C0F8(int param_1,int *param_2);
extern int DAT_001082b8;

// USA 00108250 <- EU 00108250 (Ghidra, non-matching)
// GLOBAL DAT_001082b8 int

void func_00108250(int *param_1)

{
  uint uVar1;
  
  uVar1 = param_1[5];
  if (uVar1 != 0) {
    if (param_1[2] != 0) {
      if ((char)param_1[6] == '\0') {
        param_1[2] = 0;
        param_1[3] = 0;
      }
      else {
        software_interrupt(0x20);
        if ((int)uVar1 < 0) {
          func_0010A98C(uVar1);
        }
        func_0010C0F8(DAT_001082b8,param_1);
      }
    }
    if (param_1[5] != 0) {
      software_interrupt(0x23);
      param_1[5] = 0;
    }
  }
  return;
}

