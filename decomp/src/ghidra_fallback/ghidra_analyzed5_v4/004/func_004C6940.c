#include "ghidra_types.h"

extern int func_001DDCD4(int param_1,undefined4 param_2);
extern int func_002E21C0(int param_1);
extern int func_003707B0(int param_1,undefined4 param_2);
extern int func_005568E8(int param_1);
extern int *DAT_004c69b0;

// USA 004C6940 <- EU 004C6918 (Ghidra, non-matching)
// GLOBAL DAT_004c69b0 int *

int func_004C6940(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_004c69b0;
  switch(param_3) {
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x17:
  case 0x18:
  case 0x19:
    iVar2 = func_005568E8(*DAT_004c69b0);
    if (param_2 == iVar2) {
      iVar2 = func_001DDCD4(*piVar1,param_3);
      return iVar2;
    }
    if (*(int *)(param_1 + 0x51c) != 0) {
      iVar2 = func_003707B0(*(int *)(param_1 + 0x51c),param_3);
      if (iVar2 != 0) {
        func_002E21C0(*(int *)(param_1 + 0x5b0));
      }
      return iVar2;
    }
    break;
  default:
  }
  return 0;
}

