#include "ghidra_types.h"

extern int func_0032FC14(int param_1,undefined4 param_2);
extern int func_0048AC68(uint param_1);
extern int func_00520DF0(int param_1);
extern int func_00520E08(int param_1);
extern int *DAT_0032fbec;

// USA 0032FAFC <- EU 0032FAD8 (Ghidra, non-matching)
// GLOBAL DAT_0032fbec int *

undefined4 func_0032FAFC(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x2f4) != '\x06') {
      func_0032FC14(param_1,6);
    }
  }
  else if (param_2 == 1) {
    if (*(char *)(param_1 + 0x2f4) != '\x03') {
      return 1;
    }
    if (0x77 < *(uint *)(param_1 + 0x2f8)) {
      return 1;
    }
  }
  else {
    if (param_2 != 2) {
      return 1;
    }
    cVar1 = *(char *)(param_1 + 0x2f4);
    if (cVar1 == '\x03') {
      uVar4 = 4;
    }
    else {
      if (cVar1 != '\x04') {
        if (cVar1 != '\x05') {
          return 0;
        }
        iVar3 = func_00520E08(*(int *)(*DAT_0032fbec + 300));
        if (iVar3 == 0) {
          return 0;
        }
        return 1;
      }
      if (*(char *)(param_1 + 0x300) == '\0') {
        return 0;
      }
      iVar3 = func_00520DF0(*(int *)(*DAT_0032fbec + 300));
      if (iVar3 == 0) {
        return 0;
      }
      iVar6 = *(int *)(param_1 + 0x304);
      iVar3 = 0;
      uVar5 = 0;
      do {
        uVar2 = func_0048AC68(*(uint *)(iVar6 + uVar5 * 4));
        uVar5 = uVar5 + 1;
        iVar3 = iVar3 + uVar2;
      } while (uVar5 < 2);
      if (iVar3 == 0) {
        return 1;
      }
      uVar4 = 5;
    }
    func_0032FC14(param_1,uVar4);
  }
  return 0;
}

