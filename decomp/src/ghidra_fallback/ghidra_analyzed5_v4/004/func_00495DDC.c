#include "ghidra_types.h"

extern int func_0048AB2C(void);
extern int func_0048B0A0(int param_1,int param_2);
extern int func_00492780(int param_1,int param_2);
extern int func_00494F50(int param_1,undefined4 param_2);
extern int func_00495028(int param_1,undefined4 *param_2);
extern int func_00495090(int param_1);
extern int func_004952C0(int param_1,undefined4 param_2);
extern int *DAT_00495e20;
extern undefined4 *DAT_00495e24;

// USA 00495DDC <- EU 00495DB4 (Ghidra, non-matching)
// GLOBAL DAT_00495e20 int *
// GLOBAL DAT_00495e24 undefined4 *

undefined4 func_00495DDC(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *DAT_00495e20;
  func_00492780(param_1 + 4,param_2);
  func_0048B0A0(param_1 + 0xb0,param_1 + 4);
  (**(code **)(*(int *)(param_1 + 0xb0) + 0x10))(param_1 + 0xb0,param_1 + 0xb4);
  func_004952C0(iVar1,param_1 + 0xb0);
  func_00494F50(iVar1,param_1 + 4);
  func_00495028(iVar1,DAT_00495e24);
  func_0048AB2C();
  return func_00495090(iVar1);
}

