#include "ghidra_types.h"

extern int func_0041F54C(int param_1,uint *param_2,int param_3);
extern int func_0041F5A8(int param_1,uint *param_2,undefined1 param_3);
extern int func_0041F6CC(int param_1,uint *param_2);
extern int func_0041F6F8(int param_1,uint *param_2,undefined1 param_3);
extern int func_0056F468(undefined4 param_1,undefined4 *param_2);
extern uint DAT_0040113c;

// USA 004010C8 <- EU 004010A8 (Ghidra, non-matching)
// GLOBAL DAT_0040113c uint

uint * func_004010C8(int param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  uint *puVar3;
  
  bVar1 = *(byte *)(param_1 + 0x30);
  if (bVar1 != 0) {
    puVar3 = (uint *)func_0041F6CC(param_1,param_2);
    if (*(byte *)(param_1 + 0x32) < *(byte *)(param_1 + 0x31)) {
      puVar3 = (uint *)func_0041F5A8(param_1,puVar3,*(byte *)(param_1 + 0x31));
    }
    if (*(byte *)(param_1 + 0x34) < *(byte *)(param_1 + 0x33)) {
      puVar3 = (uint *)func_0041F6F8(param_1,puVar3,0);
    }
    uVar2 = DAT_0040113c;
    *puVar3 = *(uint *)(param_1 + 0x624);
    puVar3[1] = uVar2;
    puVar3 = func_0041F54C(param_1,puVar3 + 2,(uint)bVar1);
    puVar3 = func_0056F468(param_1,puVar3);
    return puVar3;
  }
  return param_2;
}

