#include "ghidra_types.h"

extern void func_001138EC(undefined4 *param_1,int param_2,float fparam_0);

// USA 00112D70 <- EU 00112D70 (Ghidra, non-matching)

int func_00112D70(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  float in_s0;
  
  uVar4 = (uint)*(byte *)(param_2 + 2);
  switch(param_4) {
  case 0:
  case 1:
    uVar5 = 1;
    break;
  case 2:
  case 4:
  case 5:
    uVar5 = 2;
    break;
  case 3:
  case 6:
  case 0xc:
  case 0xd:
    uVar5 = 4;
    break;
  case 7:
  case 0xe:
    uVar5 = 8;
    break;
  case 8:
  case 9:
    uVar5 = 3;
    break;
  case 10:
    uVar5 = 6;
    break;
  case 0xb:
    uVar5 = 0xc;
    break;
  case 0xf:
    uVar5 = 0x10;
    break;
  default:
    uVar5 = 0;
  }
  func_001138EC(param_1,uVar4,in_s0);
  puVar6 = (undefined4 *)0x0;
  iVar3 = 0;
  do {
    if (param_1[iVar3 * 0x1c + 0x58] == 0) {
      puVar6 = param_1 + iVar3 * 0x1c + 0x58;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xc);
  *(undefined1 *)((int)param_1 + uVar4 + 0x154) = 1;
  *puVar6 = param_3;
  *(char *)(puVar6 + 1) = (char)param_4;
  puVar6[0x10] = uVar4;
  iVar2 = 0xb;
  puVar6[4] = uVar5;
  iVar3 = 0;
  do {
    iVar2 = iVar2 + -1;
    puVar6[iVar3 + 5] = 0;
    iVar1 = iVar3 + 1;
    puVar6[iVar3 + 0x11] = 0xffffffff;
    iVar3 = iVar1;
  } while (iVar2 != 0);
  *param_1 = 0;
  return iVar1;
}

