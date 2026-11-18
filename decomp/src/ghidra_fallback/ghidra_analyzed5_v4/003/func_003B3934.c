#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004FA890(int param_1);
extern int func_0058A7D4(void);
extern undefined4 DAT_003b3994;

// USA 003B3934 <- EU 003B3910 (Ghidra, non-matching)
// GLOBAL DAT_003b3994 undefined4

undefined4 func_003B3934(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,4);
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x68,10,1);
  uVar1 = DAT_003b3994;
  iVar4 = *(int *)(param_1 + 0x48);
  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x8dc) + 0x14) + 0x10) = DAT_003b3994;
  *(undefined4 *)(*(int *)(*(int *)(iVar4 + 0x8e0) + 0x14) + 0x10) = uVar1;
  puVar2 = (uint *)func_0058A7D4();
  uVar3 = func_00111A64(puVar2);
  *(short *)(param_1 + 0x60) = (short)((ulonglong)uVar3 * 0xb >> 0x20) + 0x1e;
  return func_004FA890(*(int *)(param_1 + 0x48));
}

