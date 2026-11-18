#include "ghidra_types.h"

extern int func_004964F8(uint param_1,int *param_2,int param_3,int param_4,undefined8 param_5);
extern int func_005FEF2C(int param_1,undefined4 param_2,int param_3);
extern int func_005FF5DC(uint param_1);
extern int DAT_00496198;

// USA 00496160 <- EU 00496138 (Ghidra, non-matching)
// GLOBAL DAT_00496198 int

undefined4 func_00496160(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  int iVar2;
  
  iVar1 = DAT_00496198;
  func_005FEF2C(DAT_00496198,param_2,param_3);
  iVar2 = 0;
  func_004964F8(*(uint *)(param_1 + *(int *)(param_1 + 0x124) * 4 + 0xcc),(int *)(param_1 + 0xd4),0,
                0,0x500);
  func_005FEF2C(iVar1,extraout_r1,iVar2);
  return func_005FF5DC(*(uint *)(param_1 + *(int *)(param_1 + 0x124) * 4 + 0xcc));
}

