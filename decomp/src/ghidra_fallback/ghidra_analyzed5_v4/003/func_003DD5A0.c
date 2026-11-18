#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010A7BC(int *param_1);
extern int func_0010A8D4(int *param_1);
extern int func_003DEA2C(int param_1);
extern int func_003DF9E0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003DFA68(uint *param_1);
extern int DAT_003dd618;
extern undefined4 DAT_003dd61c;
extern uint *DAT_003dd620;
extern int *DAT_003dd624;
extern uint DAT_003dd628;

// USA 003DD5A0 <- EU 003DD580 (Ghidra, non-matching)
// GLOBAL DAT_003dd618 int
// GLOBAL DAT_003dd61c undefined4
// GLOBAL DAT_003dd620 uint *
// GLOBAL DAT_003dd624 int *
// GLOBAL DAT_003dd628 uint

undefined4 func_003DD5A0(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_r1;
  
  iVar1 = DAT_003dd618;
  if (*(char *)(DAT_003dd618 + 2) != '\0') {
    iVar2 = func_003DF9E0(DAT_003dd620,in_r1,DAT_003dd61c,0);
    if (iVar2 != 0) goto LAB_003dd5b8;
    *(undefined1 *)(iVar1 + 1) = 1;
  }
  if (*(char *)(iVar1 + 1) != '\0') {
    func_0010A7BC(DAT_003dd624);
    func_0010A8D4(DAT_003dd624);
  }
  if (*(char *)(iVar1 + 3) != '\0') {
    return func_00104338(DAT_003dd628,0);
  }
  func_003DFA68(DAT_003dd620);
LAB_003dd5b8:
  func_003DEA2C((int)DAT_003dd620);
  *(undefined1 *)(iVar1 + 5) = 0;
  return 0;
}

