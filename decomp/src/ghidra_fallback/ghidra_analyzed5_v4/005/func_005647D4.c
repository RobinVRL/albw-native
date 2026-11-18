#include "ghidra_types.h"

extern uint DAT_0056488c;
extern uint DAT_00564890;
extern uint DAT_00564894;
extern uint DAT_00564898;
extern uint DAT_0056489c;
extern uint DAT_005648a0;

// USA 005647D4 <- EU 005647AC (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0056488c uint
// GLOBAL DAT_00564890 uint
// GLOBAL DAT_00564894 uint
// GLOBAL DAT_00564898 uint
// GLOBAL DAT_0056489c uint
// GLOBAL DAT_005648a0 uint

uint * func_005647D4(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,
                    int param_7)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  
  uVar1 = DAT_0056488c;
  uVar3 = *(uint *)(param_1 + param_7 * 4 + 0x28);
  if ((uVar3 & 1) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = 0xffffffff;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  uVar1 = DAT_00564890;
  if ((uVar3 & 2) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  uVar1 = DAT_00564894;
  if ((uVar3 & 4) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  uVar1 = DAT_00564898;
  if ((uVar3 & 8) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  uVar1 = DAT_0056489c;
  if ((uVar3 & 0x10) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  uVar1 = DAT_005648a0;
  if ((uVar3 & 0x20) != 0) {
    puVar2 = param_2 + 1;
    *param_2 = param_3 | param_4 << 8 | param_5 << 0x10 | param_6 << 0x18;
    param_2 = param_2 + 2;
    *puVar2 = uVar1;
  }
  return param_2;
}

