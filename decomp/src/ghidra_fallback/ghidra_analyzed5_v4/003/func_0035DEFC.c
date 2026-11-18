#include "ghidra_types.h"

extern int func_0037425C(int param_1);
extern int func_004BE114(int * param_1,int param_2,int param_3,int param_4,undefined4 param_5);
extern int func_004C03B8(int param_1,undefined4 *param_2);
extern int func_006538F0(undefined4 *param_1,uint *param_2,undefined1 param_3);
extern int DAT_0035df8c;
extern undefined4 DAT_0035df90;
extern undefined4 DAT_0035df94;
extern undefined4 DAT_0035df98;
extern undefined4 *DAT_0035df9c;

// USA 0035DEFC <- EU 0035DED8 (Ghidra, non-matching)
// GLOBAL DAT_0035df8c int
// GLOBAL DAT_0035df90 undefined4
// GLOBAL DAT_0035df94 undefined4
// GLOBAL DAT_0035df98 undefined4
// GLOBAL DAT_0035df9c undefined4 *

int * func_0035DEFC(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)func_006538F0(param_1,param_2,1);
  piVar2[0x276] = 0;
  *(undefined2 *)(piVar2 + 0x277) = 0;
  *(undefined2 *)((int)piVar2 + 0x9de) = 0xffff;
  *(undefined2 *)(piVar2 + 0x278) = 0xffff;
  *(undefined2 *)((int)piVar2 + 0x9e2) = 0xffff;
  *(undefined2 *)(piVar2 + 0x279) = 0xffff;
  *(undefined1 *)((int)piVar2 + 0x9e6) = 0;
  *(undefined1 *)((int)piVar2 + 0x9e7) = 0;
  iVar1 = DAT_0035df8c;
  *(undefined1 *)(piVar2 + 0x27a) = 0;
  *(undefined1 *)((int)piVar2 + 0x9e9) = 0;
  *(undefined1 *)((int)piVar2 + 0x9ea) = 0;
  piVar2[200] = iVar1 + 0xbc;
  *piVar2 = iVar1;
  func_004BE114(piVar2,3,0,0,DAT_0035df98);
  func_0037425C((int)piVar2);
  piVar2[0x22b] = piVar2[0x22b] & 0xffffffdf;
  func_004C03B8((int)piVar2,DAT_0035df9c);
  return piVar2;
}

