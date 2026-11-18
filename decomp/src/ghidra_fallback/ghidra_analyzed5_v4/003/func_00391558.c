// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_004BD508(void);
extern int func_00668058(undefined4 *param_1,undefined1 param_2);

// USA 00391558 <- EU 00391534 (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)

undefined4 func_00391558(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  
  switch(*(undefined1 *)(param_1 + 0x424)) {
  case 0:
    uVar2 = 1;
    break;
  case 1:
    bVar1 = func_004BD508();
    if (bVar1) {
      uVar2 = 6;
      break;
    }
  case 2:
    uVar2 = 3;
    break;
  case 3:
    uVar2 = 4;
    *(undefined4 *)(param_1 + 0x4cc) = 0x28;
    break;
  case 4:
    uVar2 = 5;
    break;
  default:
    return 0;
  case 6:
    uVar2 = 7;
    *(undefined4 *)(param_1 + 0x4cc) = 0x3c;
    break;
  case 7:
    uVar2 = 8;
    break;
  case 8:
    uVar2 = 9;
    break;
  case 9:
    uVar2 = 10;
  }
  func_00668058((undefined4 *)(param_1 + 0x420),uVar2);
  return 1;
}

