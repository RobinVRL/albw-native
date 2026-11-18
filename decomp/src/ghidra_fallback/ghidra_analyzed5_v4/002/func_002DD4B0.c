#include "ghidra_types.h"

extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern undefined DAT_00000006;

// USA 002DD4B0 <- EU 002DD48C (Ghidra, non-matching)
// GLOBAL DAT_00000006 undefined

undefined4 func_002DD4B0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)&DAT_00000006;
  iVar3 = *(int *)(param_1 + 0x4c);
  if (*(short *)(iVar3 + 0x52) == 0xac) {
    piVar2 = (int *)0x0;
  }
  func_0028D580((uint *)(iVar3 + 0x3c),param_2,1,1,(uint)piVar2);
  uVar1 = 1;
  func_0028D580((uint *)(iVar3 + 0x5c),param_2,1,1,(uint)piVar2);
  if (param_2 == 0xa2) {
LAB_002dd520:
    return func_0028C8EC(*(int *)(param_1 + 0x4c),8,uVar1,piVar2);
  }
  if (param_2 < 0xa3) {
    if (param_2 == 0x9f) {
      return func_0028C8EC(*(int *)(param_1 + 0x4c),0,uVar1,piVar2);
    }
    if (param_2 < 0xa0) {
      if (param_2 == 0x96) {
LAB_002dd568:
        return func_0028C8EC(*(int *)(param_1 + 0x4c),1,uVar1,piVar2);
      }
      if (param_2 == 0x9e) {
        return func_0028C8EC(*(int *)(param_1 + 0x4c),7,uVar1,piVar2);
      }
    }
    else {
      if (param_2 == 0xa0) goto LAB_002dd568;
      if (param_2 == 0xa1) goto LAB_002dd520;
    }
  }
  else {
    if (param_2 == 0xa7 || param_2 == 0xac) {
      return func_0028C8EC(*(int *)(param_1 + 0x4c),2,uVar1,piVar2);
    }
    if (param_2 == 0xad || param_2 == 0xae) {
      return func_0028C8EC(*(int *)(param_1 + 0x4c),9,uVar1,piVar2);
    }
  }
  return 0;
}

