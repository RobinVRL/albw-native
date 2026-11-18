#include "ghidra_types.h"

extern int func_00583B1C(int param_1);
extern int func_00625250(int param_1,int param_2,undefined1 param_3);

// USA 0030FF14 <- EU 0030FEF0 (Ghidra, non-matching)

undefined4 func_0030FF14(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0xae8) == '\0' && *(int *)(param_1 + 0x960) == 1) {
    switch(*(undefined4 *)(param_1 + 0xad8)) {
    default:
      uVar4 = 0;
      break;
    case 3:
      uVar4 = 1;
      break;
    case 4:
      uVar4 = 2;
      break;
    case 6:
      uVar4 = 3;
      break;
    case 7:
      uVar4 = 4;
      break;
    case 8:
      uVar4 = 5;
      break;
    case 9:
      uVar4 = 6;
      break;
    case 10:
      uVar4 = 7;
      break;
    case 0xb:
      uVar4 = 8;
    }
  }
  else {
    if (*(int *)(param_1 + 0x960) != 0xd7 || *(char *)(param_1 + 0xae8) != '\0') goto LAB_0030ffbc;
    switch(*(undefined4 *)(param_1 + 0xad8)) {
    default:
      iVar3 = 0;
      break;
    case 3:
      iVar3 = 1;
      break;
    case 4:
      iVar3 = 2;
      break;
    case 6:
      iVar3 = 3;
      break;
    case 7:
      iVar3 = 4;
      break;
    case 8:
      iVar3 = 5;
      break;
    case 9:
      iVar3 = 6;
      break;
    case 10:
      iVar3 = 7;
      break;
    case 0xb:
      iVar3 = 8;
    }
    uVar4 = iVar3 + 9;
  }
  puVar2 = (undefined4 *)(param_1 + 0xa7c);
  if (uVar4 < 0x12) {
    puVar2 = (undefined4 *)(param_1 + 0xa7c + uVar4 * 4);
  }
  *(undefined4 *)(param_1 + 0xac4) = *puVar2;
LAB_0030ffbc:
  iVar3 = func_00583B1C(param_1);
  if (iVar3 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xac4) = 0;
  if (*(char *)(param_1 + 0xae8) != '\x01') {
    switch(*(undefined4 *)(param_1 + 0xad8)) {
    default:
      uVar1 = 0x50;
      break;
    case 3:
      uVar1 = 0x53;
      break;
    case 4:
      uVar1 = 0x55;
      break;
    case 6:
      uVar1 = 0x54;
      break;
    case 7:
      uVar1 = 0x4e;
      break;
    case 8:
      uVar1 = 0x51;
      break;
    case 9:
      uVar1 = 0x4d;
      break;
    case 10:
      uVar1 = 0x4f;
      break;
    case 0xb:
      uVar1 = 0x52;
    }
    *(undefined1 *)(param_1 + 0xae0) = uVar1;
    return func_00625250(param_1,0xd,0);
  }
  *(undefined1 *)(param_1 + 0xae0) = 0x56;
  return func_00625250(param_1,8,0);
}

