#include "ghidra_types.h"

extern int func_001E4158(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002FCC2C(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_0052F7F4(int param_1);
extern int func_00581D60(int param_1);
extern int *DAT_00137454;

// USA 00137394 <- EU 00137394 (Ghidra, non-matching)
// GLOBAL DAT_00137454 int *

void func_00137394(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x498);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      func_001E4158(param_1,param_2,param_3,param_4);
      func_004CEAF0(*(int *)(param_1 + 0x47c));
      iVar3 = func_0052F7F4(param_1);
      if (iVar3 != 0) {
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
        uVar2 = 2;
        goto LAB_00137438;
      }
    }
    else {
      if (cVar1 == '\x02') {
        func_002FCC2C(param_1);
        uVar2 = 3;
LAB_00137438:
        *(undefined1 *)(param_1 + 0x498) = uVar2;
        return;
      }
      if ((cVar1 == '\x03') &&
         (iVar3 = func_00581D60(*DAT_00137454), *(int *)(param_1 + 0x4b4) != iVar3)) {
        if (*(uint *)(param_1 + 0x4a8) < *(uint *)(param_1 + 0x4ac)) {
          *(uint *)(param_1 + 0x4a8) = *(uint *)(param_1 + 0x4a8) + 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x2d7) = 1;
        }
      }
    }
  }
  return;
}

