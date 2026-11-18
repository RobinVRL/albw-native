#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0040E208(undefined4 *param_1);
extern int func_00416E34(undefined4 *param_1);
extern int func_0041B1B8(undefined4 *param_1);
extern undefined4 DAT_0040f154;
extern int DAT_0040f158;
extern undefined *DAT_0040f15c;
extern int DAT_0040f160;

// USA 0040F100 <- EU 0040F0E0 (Ghidra, non-matching)
// GLOBAL DAT_0040f154 undefined4
// GLOBAL DAT_0040f158 int
// GLOBAL DAT_0040f15c undefined *
// GLOBAL DAT_0040f160 int

undefined4 * func_0040F100(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)func_0040E208(param_1);
  *puVar1 = DAT_0040f154;
  iVar2 = func_0041B1B8(puVar1 + 0x45);
  iVar2 = func_00416E34((undefined4 *)(iVar2 + 0x1c98));
  *(undefined4 *)(DAT_0040f158 + iVar2 + -0x1dac) = param_2;
  iVar2 = func_00100118(iVar2 + 0xc3c,DAT_0040f15c,0x10,4);
  puVar1 = (undefined4 *)(iVar2 + -0x29e8);
  iVar2 = DAT_0040f160 + 2;
  iVar3 = DAT_0040f160 + 6;
  *(undefined1 *)(DAT_0040f160 + (int)puVar1) = 0;
  *(undefined4 *)(iVar2 + (int)puVar1) = 0;
  *(undefined4 *)(iVar3 + (int)puVar1) = 0;
  return puVar1;
}

