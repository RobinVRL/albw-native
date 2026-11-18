#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_004D2F20(int param_1);
extern int func_004EDC9C(undefined4 *param_1);
extern undefined *DAT_004d39bc;
extern int DAT_004d39c0;
extern undefined4 DAT_004d39c4;

// USA 004D392C <- EU 004D3904 (Ghidra, non-matching)
// GLOBAL DAT_004d39bc undefined *
// GLOBAL DAT_004d39c0 int
// GLOBAL DAT_004d39c4 undefined4

int * func_004D392C(undefined4 *param_1,uint *param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  
  piVar2 = func_00150E40(param_1,param_2);
  piVar2[0x103] = 0;
  piVar2[0x104] = 10;
  piVar2[0x105] = 0;
  if (piVar2 + 0x106 != (int *)0x0) {
    piVar2[0x105] = (int)(piVar2 + 0x106);
  }
  iVar3 = func_00100118((int)(piVar2 + 0x106),DAT_004d39bc,0x1c,10);
  piVar2 = (int *)(iVar3 + -0x418);
  iVar6 = DAT_004d39c0 + 0x54;
  *piVar2 = DAT_004d39c0;
  *(int *)(iVar3 + -0xf8) = iVar6;
  *(undefined4 *)(iVar3 + 0x118) = 0;
  *(undefined4 *)(iVar3 + 0x11c) = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  uVar1 = DAT_004d39c4;
  *(undefined4 **)(iVar3 + 0x120) = puVar5;
  *(undefined4 *)(iVar3 + 0x124) = uVar1;
  *(undefined4 *)(iVar3 + 0x128) = *(undefined4 *)(param_3 + 4);
  *(undefined4 *)(iVar3 + 300) = 0;
  *(undefined1 *)(iVar3 + 0x130) = 0;
  func_004D2F20((int)piVar2);
  *(bool *)(iVar3 + 0x130) = (char)param_2[0x16] != '\0';
  return piVar2;
}

