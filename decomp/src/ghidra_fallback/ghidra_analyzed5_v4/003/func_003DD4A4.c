#include "ghidra_types.h"

extern int func_00104338(uint param_1,int param_2);
extern int func_0010A7BC(int *param_1);
extern int func_0010A8D4(int *param_1);
extern int func_003DEA2C(int param_1);
extern int func_003DF9E0(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003DFA68(uint *param_1);
extern int DAT_003dd56c;
extern undefined4 DAT_003dd570;
extern uint *DAT_003dd574;
extern int *DAT_003dd578;
extern uint DAT_003dd57c;

// USA 003DD4A4 <- EU 003DD484 (Ghidra, non-matching)
// GLOBAL DAT_003dd56c int
// GLOBAL DAT_003dd570 undefined4
// GLOBAL DAT_003dd574 uint *
// GLOBAL DAT_003dd578 int *
// GLOBAL DAT_003dd57c uint

int func_003DD4A4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_r1;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  undefined8 uVar5;
  
  iVar3 = DAT_003dd56c;
  if (*(char *)(DAT_003dd56c + 2) != '\0') {
    uVar1 = func_003DF9E0(DAT_003dd574,in_r1,DAT_003dd570,0);
    if (uVar1 != 0) {
      software_interrupt(0x28);
      uVar2 = func_003DEA2C((int)DAT_003dd574);
      *(undefined1 *)(iVar3 + 5) = 0;
      software_interrupt(0x28);
      iVar3 = extraout_r1_00 - (extraout_r1 + (uint)(uVar2 < uVar1));
      param_1[1] = iVar3;
      *param_1 = uVar2 - uVar1;
      return iVar3;
    }
    *(undefined1 *)(iVar3 + 1) = 1;
  }
  if (*(char *)(iVar3 + 1) != '\0') {
    func_0010A7BC(DAT_003dd578);
    func_0010A8D4(DAT_003dd578);
  }
  if (*(char *)(iVar3 + 3) == '\0') {
    uVar5 = func_003DFA68(DAT_003dd574);
    software_interrupt(0x28);
    uVar1 = func_003DEA2C((int)DAT_003dd574);
    *(undefined1 *)(iVar3 + 5) = 0;
    software_interrupt(0x28);
    iVar3 = uVar1 - (uint)uVar5;
    *param_1 = iVar3;
    param_1[1] = extraout_r1_01 - ((int)((ulonglong)uVar5 >> 0x20) + (uint)(uVar1 < (uint)uVar5));
    return iVar3;
  }
  uVar4 = func_00104338(DAT_003dd57c,0);
  return uVar4;
}

