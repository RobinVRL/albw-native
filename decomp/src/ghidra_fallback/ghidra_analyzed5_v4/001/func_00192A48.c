#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00192934(int param_1,undefined4 param_2,uint param_3);
extern int func_004CF478(int param_1,int param_2);
extern undefined4 DAT_00192b04;

// USA 00192A48 <- EU 00192A48 (Ghidra, non-matching)
// GLOBAL DAT_00192b04 undefined4

void func_00192A48(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  uVar2 = param_2;
  if (*(char *)(param_1 + 0x410) == '\x01') {
    param_3 = 0;
    func_004CF478(*(int *)(param_1 + 0x40c),1);
    func_00151148(*(int *)(param_1 + 0x428),1);
    uVar2 = extraout_r1;
  }
  uVar1 = DAT_00192b04;
  switch(param_2) {
  case 0:
    func_00192934(param_1,uVar2,param_3);
    break;
  case 1:
    func_004CF478(*(int *)(param_1 + 0x40c),0);
    func_00151148(*(int *)(param_1 + 0x428),0);
    break;
  case 2:
    func_00192934(param_1,uVar2,param_3);
    *(undefined1 *)(param_1 + 0x445) = 1;
    break;
  case 4:
    *(undefined4 *)(param_1 + 0x3dc) = DAT_00192b04;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  }
  *(char *)(param_1 + 0x410) = (char)param_2;
  return;
}

