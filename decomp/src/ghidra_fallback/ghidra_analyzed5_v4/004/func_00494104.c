#include "ghidra_types.h"

extern int func_0011EACC(int param_1);
extern int func_0011EDA4(int param_1);
extern int func_0011F054(void *param_1,undefined4 param_2);
extern int func_0011F168(int param_1);
extern undefined4 *DAT_00494148;
extern undefined4 DAT_0049414c;
extern undefined4 DAT_00494150;

// USA 00494104 <- EU 004940DC (Ghidra, non-matching)
// GLOBAL DAT_00494148 undefined4 *
// GLOBAL DAT_0049414c undefined4
// GLOBAL DAT_00494150 undefined4

int func_00494104(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  
  uVar3 = DAT_00494150;
  uVar2 = DAT_0049414c;
  puVar1 = DAT_00494148;
  *DAT_00494148 = param_3;
  func_0011F054(uVar3,uVar2);
  piVar4 = func_0011EDA4(param_2);
  *(int **)(param_1 + 4) = piVar4;
  uVar5 = func_0011EACC((int)piVar4);
  if ((int)uVar5 < 0) {
    func_0011F168(*(int *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  else {
    *(uint *)(param_1 + 8) = uVar5;
  }
  func_0011F054(0,0);
  *puVar1 = 0;
  return ((int)uVar5 >> 0x1f) + 1;
}

