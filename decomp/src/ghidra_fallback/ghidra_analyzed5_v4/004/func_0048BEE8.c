#include "ghidra_types.h"

extern int func_00101434(void);
extern int func_003D37F4(void);
extern int func_003D48E8(void);
extern int func_003D52C4(int *param_1,int param_2);
extern int func_003D55A8(void);
extern int func_003D5684(undefined4 *param_1,undefined4 param_2);
extern undefined4 DAT_0048bf8c;
extern int DAT_0048bf90;

// USA 0048BEE8 <- EU 0048BEC0 (Ghidra, non-matching)
// GLOBAL DAT_0048bf8c undefined4
// GLOBAL DAT_0048bf90 int

undefined4 * func_0048BEE8(undefined4 *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[4] = param_2;
  iVar3 = DAT_0048bf90;
  *param_1 = DAT_0048bf8c;
  param_1[0x56f] = 0;
  param_1[0x574] = 0;
  param_1[0x577] = 0;
  *(undefined4 *)(iVar3 + (int)param_1) = 0;
  *(undefined4 *)(iVar3 + 0x40 + (int)param_1) = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  func_00101434();
  if (param_1 + 5 == (undefined4 *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    uVar2 = func_003D55A8();
    piVar1 = func_003D5684(param_1 + 5,uVar2);
  }
  puVar4 = param_1 + 0x15;
  param_1[0x56f] = piVar1;
  if (puVar4 != (undefined4 *)0x0) {
    piVar1 = (int *)func_003D37F4();
    param_1[0x17] = 0xffffffff;
    param_1[0x18] = 0xffffffff;
    *puVar4 = piVar1;
    param_1[0x16] = 0xffffffff;
  }
  piVar5 = param_1 + 0x19;
  if (piVar5 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  param_1[0x574] = puVar4;
  if (piVar5 != (int *)0x0) {
    iVar3 = func_003D48E8();
    piVar1 = func_003D52C4(piVar5,iVar3);
  }
  param_1[0x577] = piVar1;
  return param_1;
}

