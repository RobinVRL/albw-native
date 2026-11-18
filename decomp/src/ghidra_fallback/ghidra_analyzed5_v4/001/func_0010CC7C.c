#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010CBE8(int param_1);
extern int func_0010CD0C(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5, undefined1 param_6,int param_7);
extern int func_0010EEE0(int param_1);
extern int DAT_0010cd08;

// USA 0010CC7C <- EU 0010CC7C (Ghidra, non-matching)
// GLOBAL DAT_0010cd08 int

int * func_0010CC7C(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = DAT_0010cd08;
  func_0010C0B8(DAT_0010cd08);
  uVar3 = param_2 + 3U & 0xfffffffc;
  if (uVar3 < 0xa9) {
    func_0010EEE0(iVar1);
    return (int *)0x0;
  }
  piVar2 = (int *)0x0;
  if (param_1 != (undefined4 *)0x0) {
    piVar2 = func_0010CD0C(param_1,param_3,0,(int)param_1,uVar3,1,param_4);
  }
  func_0010CBE8((int)piVar2);
  func_0010EEE0(iVar1);
  return piVar2;
}

