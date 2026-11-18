#include "ghidra_types.h"

extern int func_001139F8(int param_1);
extern uint DAT_00561bf0;
extern uint DAT_00561bf4;
extern uint DAT_00561bf8;
extern uint DAT_00561bfc;
extern uint DAT_00561c00;
extern int DAT_00561c04;
extern uint DAT_00561c08;

// USA 00561B30 <- EU 00561B08 (Ghidra, non-matching)
// GLOBAL DAT_00561bf0 uint
// GLOBAL DAT_00561bf4 uint
// GLOBAL DAT_00561bf8 uint
// GLOBAL DAT_00561bfc uint
// GLOBAL DAT_00561c00 uint
// GLOBAL DAT_00561c04 int
// GLOBAL DAT_00561c08 uint

uint * func_00561B30(int *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  
  uVar1 = DAT_00561bf0;
  uVar6 = DAT_00561bf0 & 0xfffffffe;
  if (param_4 != 0) {
    *param_2 = 1;
    param_2[1] = uVar1;
    param_2[2] = 1;
    param_2[3] = uVar6;
    param_2 = param_2 + 4;
  }
  uVar2 = DAT_00561bf4;
  if ((param_3 & 1) != 0) {
    if (*(byte *)(param_1 + 1) == 0) {
      uVar4 = 2;
    }
    else {
      uVar4 = 0;
    }
    *param_2 = uVar4 | (uint)*(byte *)(param_1 + 1) << 0x10;
    param_2[1] = uVar2;
    uVar4 = func_001139F8(*param_1);
    uVar2 = DAT_00561bf8;
    puVar5 = param_2 + 3;
    param_2[2] = uVar4 >> 3;
    param_2 = param_2 + 4;
    *puVar5 = uVar2;
  }
  uVar2 = DAT_00561bfc;
  if ((param_3 & 6) != 0) {
    *param_2 = (uint)*(byte *)(param_1 + 10);
    param_2[1] = uVar2;
    uVar4 = func_001139F8(param_1[9]);
    uVar2 = DAT_00561c00;
    puVar5 = param_2 + 3;
    param_2[2] = uVar4 >> 3;
    param_2 = param_2 + 4;
    *puVar5 = uVar2;
  }
  uVar2 = DAT_00561c08;
  iVar3 = DAT_00561c04;
  *param_2 = param_1[0x10] | DAT_00561c04 + param_1[0x11] * 0x1000 | 0x1000000U;
  param_2[1] = uVar2;
  param_2[2] = iVar3 + param_1[0x11] * 0x1000 | 0x1000000U | param_1[0x10];
  param_2[3] = uVar2 - 0xb0;
  param_2[4] = 1;
  param_2[5] = uVar1;
  param_2[6] = 1;
  param_2[7] = uVar6;
  return param_2 + 8;
}

