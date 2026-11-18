#include "ghidra_types.h"

extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_0049BEAC(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,undefined1 param_5, undefined4 param_6,undefined4 param_7,int param_8);
extern int DAT_0025d704;

// USA 0025D640 <- EU 0025D668 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:1 byte
// GLOBAL DAT_0025d704 int

int * func_0025D640(undefined4 *param_1,int param_2,int *param_3,undefined4 param_4,
                   undefined4 param_5,int param_6,byte param_7)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = func_0049BEAC(param_1,param_2,param_3,param_4,param_7 ^ 1,0x7fffffff,param_5,param_6);
  iVar2 = DAT_0025d704 + 0x54;
  *piVar1 = DAT_0025d704;
  piVar1[6] = iVar2;
  *(undefined1 *)(piVar1 + 0x23) = 0;
  *(undefined1 *)((int)piVar1 + 0x8d) = 0;
  *(undefined1 *)((int)piVar1 + 0x8e) = 0;
  *(undefined1 *)((int)piVar1 + 0x8f) = 0;
  piVar1[0x24] = 0;
  piVar1[0x25] = 0;
  piVar1[0x26] = 0;
  piVar1[0x27] = 0;
  piVar1[0x28] = 0;
  piVar1[0x29] = 0;
  piVar1[0x2a] = 0;
  piVar1[0x2b] = 0;
  func_00104164(piVar1 + 0x28,0);
  func_00104164(piVar1 + 0x2a,0);
  return piVar1;
}

