#include "ghidra_types.h"

extern int func_0010873C(uint param_1,undefined4 param_2);
extern int func_001088D4(void);
extern int func_0010893C(void);
extern int DAT_00105368;
extern uint DAT_0010536c;
extern uint DAT_00105370;

// USA 001052FC <- EU 001052FC (Ghidra, non-matching)
// GLOBAL DAT_00105368 int
// GLOBAL DAT_0010536c uint
// GLOBAL DAT_00105370 uint

undefined4 func_001052FC(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
    if (*(char *)(DAT_00105368 + 3) == '\0') {
      return 0;
    }
    *(undefined1 *)(DAT_00105368 + 3) = 0;
    uVar2 = func_0010893C();
    uVar1 = DAT_0010536c;
    if (uVar2 != DAT_0010536c) {
      uVar1 = DAT_00105370;
    }
    if (uVar2 == DAT_0010536c || uVar2 == uVar1) {
      return 0;
    }
    uVar3 = 0x10535c;
  }
  else {
    *(undefined1 *)(DAT_00105368 + 3) = 1;
    uVar2 = func_001088D4();
    uVar3 = 0x105320;
  }
  if (-1 < (int)uVar2) {
    return 0;
  }
  return func_0010873C(uVar2,uVar3);
}

