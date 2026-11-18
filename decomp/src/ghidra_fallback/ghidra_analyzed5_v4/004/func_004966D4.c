#include "ghidra_types.h"

extern int func_0010E0E0(int *param_1);
extern int func_0010E15C(int *param_1);
extern int func_005FF6E4(int param_1);
extern int DAT_00496704;
extern undefined4 *DAT_00496708;

// USA 004966D4 <- EU 004966AC (Ghidra, non-matching)
// GLOBAL DAT_00496704 int
// GLOBAL DAT_00496708 undefined4 *

void func_004966D4(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int extraout_r1;
  
  iVar2 = func_005FF6E4(DAT_00496704);
  param_1[0x28] = iVar2;
  software_interrupt(0x28);
  param_1[0x2c] = iVar2;
  param_1[0x2d] = extraout_r1;
  puVar1 = DAT_00496708;
  software_interrupt(0x28);
  param_1[0x2e] = iVar2;
  param_1[0x2f] = extraout_r1;
  func_0010E0E0((int *)*puVar1);
  (**(code **)(*param_1 + 0x6c))(param_1);
  func_0010E15C((int *)*puVar1);
  do {
    (**(code **)(*param_1 + 100))(param_1);
  } while( true );
}

