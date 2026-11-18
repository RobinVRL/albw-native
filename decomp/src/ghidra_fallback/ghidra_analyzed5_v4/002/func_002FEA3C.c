#include "ghidra_types.h"

extern int func_0010E15C(int *param_1);
extern int func_005FF418(uint param_1,undefined4 param_2,uint param_3);
extern int func_005FFDC0(void);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern undefined4 *DAT_002fea74;

// USA 002FEA3C <- EU 002FEA18 (Ghidra, non-matching)
// GLOBAL DAT_002fea74 undefined4 *

void func_002FEA3C(int param_1,int param_2)

{
  undefined4 extraout_r1;
  uint in_r2;
  
  *(int *)(param_1 + 0x40) = param_2;
  if (param_2 == 0) {
    func_005FFDC0();
  }
  func_006003D8(0x208,(int *)(param_1 + (uint)*(byte *)(param_1 + 0x44) * 4 + 0x30));
  func_005FF418(*(uint *)(param_1 + 0x24),extraout_r1,in_r2);
  func_0010E15C((int *)*DAT_002fea74);
  *(undefined1 *)(param_1 + 0x46) = 0;
  *(undefined1 *)(param_1 + 0x47) = 1;
  *(char *)(param_1 + 0x44) = '\x01' - *(char *)(param_1 + 0x44);
  return;
}

