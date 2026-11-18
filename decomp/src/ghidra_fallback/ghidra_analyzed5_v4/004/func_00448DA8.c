#include "ghidra_types.h"

extern int func_00519D74(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0058D6D0(int param_1);
extern int func_0058D808(int param_1);
extern int func_0058DA7C(int param_1);
extern int func_0058DABC(int param_1);
extern int func_0058DE90(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00448e04;

// USA 00448DA8 <- EU 00448D80 (Ghidra, non-matching)
// GLOBAL DAT_00448e04 int *

void func_00448DA8(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int in_r3;
  
  piVar1 = DAT_00448e04;
  iVar2 = func_0058DABC(*DAT_00448e04);
  if (((iVar2 != 0) &&
      (((iVar2 = func_0058DE90(*piVar1), iVar2 != 0 || (*(char *)(param_1 + 0x293) != '\0')) &&
       (iVar2 = func_0058D6D0(*piVar1), iVar2 != 0)))) &&
     (iVar2 = func_0058D808(*piVar1), iVar2 != 0)) {
    func_00519D74(*piVar1,extraout_r1,in_r2,in_r3);
  }
  iVar2 = func_0058DA7C(*piVar1);
  if (iVar2 != 0) {
    func_0066CC58((undefined4 *)(param_1 + 0x158),6);
  }
  return;
}

