#include "ghidra_types.h"

extern int func_002551F0(int param_1,int param_2,undefined4 param_3);
extern int func_00255C38(int param_1);
extern int func_00537C14(int param_1,int param_2);
extern int DAT_001ddde4;

// USA 001DDCD4 <- EU 001DDCD4 (Ghidra, non-matching)
// GLOBAL DAT_001ddde4 int

undefined4 func_001DDCD4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = *(int *)(param_1 + 0x10);
  switch(param_2) {
  case 0x12:
    uVar5 = 5;
    break;
  case 0x13:
    uVar5 = 6;
    break;
  case 0x14:
    uVar5 = 7;
    break;
  default:
    return 0;
  case 0x17:
    uVar5 = 8;
    break;
  case 0x18:
    uVar5 = 9;
    break;
  case 0x19:
    uVar5 = 10;
  }
  iVar2 = func_00255C38((int)*(char *)(DAT_001ddde4 + iVar1));
  iVar3 = iVar1 + 0x40c;
  iVar4 = func_00537C14(iVar3,iVar2);
  if (iVar4 != 0) {
    iVar1 = func_00255C38((int)*(char *)(iVar1 + 0x6b1));
    iVar2 = func_00537C14(iVar3,iVar1);
    if (iVar2 != 0) {
      return 0;
    }
    func_002551F0(iVar3,iVar1,uVar5);
    return 1;
  }
  func_002551F0(iVar3,iVar2,uVar5);
  return 1;
}

