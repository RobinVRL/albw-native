#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010E294(int *param_1);
extern int func_0010EEE0(int param_1);
extern int func_00491260(undefined4 *param_1);
extern int func_0057EAC0(int param_1);
extern int *DAT_0049f398;

// USA 0049F2C4 <- EU 0049F29C (Ghidra, non-matching)
// GLOBAL DAT_0049f398 int *

int func_0049F2C4(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define auStack_f8 ((undefined4 *)(albw_frame + 0x8))
  piVar1 = DAT_0049f398;
  if ((code *)param_1[0xd] == (code *)0x0) {
    iVar2 = func_0010E294((int *)(*DAT_0049f398 + 0x24));
    if ((param_1[4] == iVar2) && (0 < param_1[5])) {
      iVar4 = param_1[5] + 1;
    }
    else {
      func_0010C0B8((int)(param_1 + 6));
      (**(code **)(*param_1 + 0x44))(param_1);
      iVar4 = 1;
      param_1[4] = iVar2;
    }
    param_1[5] = iVar4;
  }
  else {
    (*(code *)param_1[0xd])(1);
  }
  (**(code **)(*param_1 + 8))(param_1);
  func_00491260(auStack_f8);
  func_0057EAC0((int)auStack_f8);
  if ((code *)param_1[0xd] == (code *)0x0) {
    func_0010E294((int *)(*piVar1 + 0x24));
    iVar2 = param_1[5] + -1;
    param_1[5] = iVar2;
    if (iVar2 == 0) {
      param_1[4] = 0;
      (**(code **)(*param_1 + 0x48))(param_1);
      uVar3 = func_0010EEE0((int)(param_1 + 6));
      return uVar3;
    }
  }
  else {
    iVar2 = (*(code *)param_1[0xd])(0);
  }
  return iVar2;
}

