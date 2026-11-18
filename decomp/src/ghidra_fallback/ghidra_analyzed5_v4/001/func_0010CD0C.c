#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010DF58(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,undefined1 param_6 ,int param_7);
extern int func_0010EEE0(int param_1);
extern int DAT_0010cdb4;

// USA 0010CD0C <- EU 0010CD0C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 undefined1
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0010cdb4 int

int * func_0010CD0C(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5,
                   undefined1 param_6,int param_7)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = func_0010DF58(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  iVar2 = DAT_0010cdb4 + 0x6c;
  *piVar1 = DAT_0010cdb4;
  piVar1[6] = iVar2;
  *(undefined1 *)(piVar1 + 0x1d) = 0;
  piVar3 = piVar1 + 0x1e;
  piVar1[0x1f] = (int)piVar3;
  piVar1[0x20] = 0;
  piVar1[0x21] = -1;
  *piVar3 = (int)piVar3;
  piVar1[0x23] = (int)(piVar1 + 0x22);
  piVar1[0x24] = 0;
  piVar1[0x22] = (int)(piVar1 + 0x22);
  piVar1[0x25] = -1;
  piVar3 = (int *)0x0;
  if ((piVar1[0x1c] & 1U) != 0) {
    func_0010C0B8((int)(piVar1 + 0x15));
    piVar3 = piVar1 + 0x15;
  }
  piVar1[0x21] = 0;
  piVar1[0x25] = 0;
  if (piVar3 != (int *)0x0) {
    func_0010EEE0((int)piVar3);
  }
  return piVar1;
}

