#include "ghidra_types.h"

extern int func_001E4158(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_002FCC2C(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_00581D60(int param_1);
extern int *DAT_001739ac;

// USA 001738EC <- EU 001738EC (Ghidra, non-matching)
// GLOBAL DAT_001739ac int *

void func_001738EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x498);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      func_001E4158(param_1,param_2,param_3,param_4);
      func_004CEAF0(*(int *)(param_1 + 0x47c));
      if (*(uint *)(param_1 + 0x4a4) <= *(uint *)(param_1 + 0x4a0)) {
        *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
        *(undefined1 *)(param_1 + 0x494) = 1;
        func_002FCC2C(param_1);
        *(undefined1 *)(param_1 + 0x498) = 2;
        return;
      }
      *(uint *)(param_1 + 0x4a0) = *(uint *)(param_1 + 0x4a0) + 1;
    }
    else if (cVar1 == '\x02') {
      func_001E4158(param_1,param_2,param_3,param_4);
      func_004CEAF0(*(int *)(param_1 + 0x47c));
      iVar2 = func_00581D60(*DAT_001739ac);
      if (*(int *)(param_1 + 0x4b8) != iVar2) {
        if (*(uint *)(param_1 + 0x4ac) < *(uint *)(param_1 + 0x4b0)) {
          *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) + 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x2d7) = 1;
        }
      }
    }
  }
  return;
}

