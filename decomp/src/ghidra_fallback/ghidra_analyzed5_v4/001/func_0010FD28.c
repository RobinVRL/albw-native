#include "ghidra_types.h"

extern int func_0010DA24(int param_1,undefined4 param_2);
extern int DAT_0010fd98;

// USA 0010FD28 <- EU 0010FD28 (Ghidra, non-matching)
// GLOBAL DAT_0010fd98 int

void func_0010FD28(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define auStack_10 ((undefined1 *)(albw_frame + 0x0))
  puVar2 = (uint *)func_0010DA24((int)auStack_10,param_2);
  iVar1 = DAT_0010fd98;
  uVar3 = (*puVar2 ^ *puVar2 >> 0x1e) * DAT_0010fd98 + 1;
  *param_1 = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * iVar1 + 2;
  param_1[1] = uVar3;
  uVar3 = (uVar3 ^ uVar3 >> 0x1e) * iVar1 + 3;
  param_1[2] = uVar3;
  param_1[3] = (uVar3 ^ uVar3 >> 0x1e) * iVar1 + 4;
  return;
}

