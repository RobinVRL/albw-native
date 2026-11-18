#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_004195B4(undefined4 *param_1);
extern int DAT_0041b1e0;
extern undefined *DAT_0041b1e4;

// USA 0041B1B8 <- EU 0041B198 (Ghidra, non-matching)
// GLOBAL DAT_0041b1e0 int
// GLOBAL DAT_0041b1e4 undefined *

int func_0041B1B8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_004195B4(param_1);
  iVar2 = DAT_0041b1e0;
  piVar1[0x12] = 0;
  *piVar1 = iVar2;
  piVar1[0x13] = 0;
  piVar1[0x11] = iVar2 + 0x30;
  piVar1[0x3f] = 0;
  piVar1[0x40] = 0;
  iVar2 = func_00100118((int)(piVar1 + 0x41),DAT_0041b1e4,0x340,8);
  return iVar2 + -0x104;
}

