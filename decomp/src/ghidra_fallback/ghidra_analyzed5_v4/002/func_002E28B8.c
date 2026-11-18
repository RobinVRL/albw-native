#include "ghidra_types.h"

extern int func_003E300C(byte *param_1,uint param_2,uint param_3);
extern int func_004F0028(undefined4 param_1);

// USA 002E28B8 <- EU 002E2894 (Ghidra, non-matching)

void func_002E28B8(uint *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = func_004F0028(param_2);
  *param_1 = (uVar1 & 3) << 0xb | *param_1 & 0xffffe7ff;
  uVar1 = func_004F0028(param_3);
  *param_1 = (uVar1 & 3) << 0xd | *param_1 & 0xfe001fff | (param_2 & 0x1f) << 0xf |
             (param_3 & 0x1f) << 0x14;
  uVar1 = func_003E300C((byte *)param_1,0x38,0xffffffff);
  param_1[0xe] = uVar1;
  return;
}

