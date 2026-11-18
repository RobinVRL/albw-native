#include "ghidra_types.h"

extern int func_002551F0(int param_1,int param_2,undefined4 param_3);
extern int func_00255C38(int param_1);
extern int func_00537C14(int param_1,int param_2);
extern int DAT_001ddde4;

// USA 001DDCDC <- EU 001DDCDC (Ghidra, non-matching)
// GLOBAL DAT_001ddde4 int

undefined4 func_001DDCDC(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  switch(param_2) {
  case 0x12:
    uVar4 = 5;
    break;
  case 0x13:
    uVar4 = 6;
    break;
  case 0x14:
    uVar4 = 7;
    break;
  default:
    return 0;
  case 0x17:
    uVar4 = 8;
    break;
  case 0x18:
    uVar4 = 9;
    break;
  case 0x19:
    uVar4 = 10;
  }
  iVar1 = func_00255C38((int)*(char *)(DAT_001ddde4 + param_1));
  iVar2 = param_1 + 0x40c;
  iVar3 = func_00537C14(iVar2,iVar1);
  if (iVar3 != 0) {
    iVar1 = func_00255C38((int)*(char *)(param_1 + 0x6b1));
    iVar3 = func_00537C14(iVar2,iVar1);
    if (iVar3 != 0) {
      return 0;
    }
    func_002551F0(iVar2,iVar1,uVar4);
    return 1;
  }
  func_002551F0(iVar2,iVar1,uVar4);
  return 1;
}

