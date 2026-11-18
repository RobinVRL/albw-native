#include "ghidra_types.h"

extern int func_003521F0(int param_1,undefined4 param_2);
extern int func_004BEB08(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00634834(int param_1,int param_2,undefined1 param_3);
extern undefined4 DAT_004db378;

// USA 004DB210 <- EU 004DB1E8 (Ghidra, non-matching)
// GLOBAL DAT_004db378 undefined4

undefined4 func_004DB210(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x9bc) != '\x01') {
    if (*(char *)(param_1 + 0x9bc) == '\n') {
      uVar2 = func_004BEB08(param_1,param_2);
      return uVar2;
    }
    if (param_2 == 0) {
      *(undefined1 *)(param_1 + 0x919) = 0;
      if (*(int *)(param_1 + 0x7a4) != 0) {
        func_004CF478(*(int *)(param_1 + 0x7a4),1);
      }
      *(undefined1 *)(param_1 + 0x856) = 4;
      *(undefined4 *)(param_1 + 0x8b4) = DAT_004db378;
      *(uint *)(param_1 + 0x8ac) = *(uint *)(param_1 + 0x8ac) | 0x100;
      func_003521F0(param_1 + 0x324,0);
      func_00634834(param_1,0xc,0);
      return 1;
    }
    if (param_2 != 1) {
      return 1;
    }
    uVar1 = *(short *)(param_1 + 0x9ba) + 1;
    *(ushort *)(param_1 + 0x9ba) = uVar1;
    if (uVar1 < 0x8c) {
      return 0;
    }
    return 1;
  }
  switch(param_2) {
  case 0:
    if (*(char *)(param_1 + 0x964) != '\x06') {
      func_00634834(param_1,6,0);
    }
    goto switchD_004db228_default;
  case 1:
    if (*(char *)(param_1 + 0x964) != '\x06') goto switchD_004db228_default;
    iVar3 = 7;
    break;
  case 2:
    if (*(char *)(param_1 + 0x964) == '\t') goto switchD_004db228_default;
    iVar3 = 9;
    break;
  case 3:
    if (*(char *)(param_1 + 0x964) == '\n') goto switchD_004db228_default;
    iVar3 = 10;
    break;
  case 4:
    if (*(char *)(param_1 + 0x964) == '\v') goto switchD_004db228_default;
    iVar3 = 0xb;
    break;
  default:
    goto switchD_004db228_default;
  }
  func_00634834(param_1,iVar3,0);
switchD_004db228_default:
  if (*(char *)(param_1 + 0x9bd) == param_2) {
    return 1;
  }
  return 0;
}

