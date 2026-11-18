#include "ghidra_types.h"

extern int func_001FEA74(int param_1,int param_2);
extern int func_001FF5F0(int param_1,int param_2);
extern int func_002C349C(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004F1108(int param_1);

// USA 004B250C <- EU 004B24E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *

void func_004B250C(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  piVar1 = (int *)(param_1 + 0x18a4);
  if (param_2 < 4) {
    piVar1 = piVar1 + param_2;
  }
  iVar4 = *piVar1;
  if (iVar4 != 0) {
    func_001FF5F0(iVar4,param_3);
    if (param_4 == 0) {
      *(undefined1 *)(iVar4 + 0x9e) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x9e) = 1;
      uVar2 = param_5[1];
      uVar3 = param_5[2];
      *(undefined4 *)(iVar4 + 0x34) = *param_5;
      *(undefined4 *)(iVar4 + 0x38) = uVar2;
      *(undefined4 *)(iVar4 + 0x3c) = uVar3;
      uVar2 = param_5[1];
      uVar3 = param_5[2];
      *(undefined4 *)(iVar4 + 0x40) = *param_5;
      *(undefined4 *)(iVar4 + 0x44) = uVar2;
      *(undefined4 *)(iVar4 + 0x48) = uVar3;
    }
    uVar6 = *(uint *)(iVar4 + 0x88);
    piVar1 = (int *)(param_1 + 0x1418);
    if (uVar6 < 0x10) {
      piVar1 = piVar1 + uVar6;
    }
    iVar4 = *piVar1;
    if (iVar4 != 0) {
      func_004CF478(*(int *)(iVar4 + 8),param_3 ^ 1);
      func_002C349C(iVar4,param_3 ^ 1);
      if (param_3 == 0) {
        func_004F1108(iVar4);
      }
      uVar5 = 0;
      if (*(int *)(param_1 + 0x23e0) != 0) {
        do {
          iVar4 = param_1 + 0x1458;
          if (uVar5 < 6) {
            iVar4 = param_1 + 0x1458 + uVar5 * 0x4c;
          }
          if (*(uint *)(iVar4 + 0x40) == uVar6) {
            func_001FEA74(iVar4,param_3 ^ 1);
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(param_1 + 0x23e0));
      }
    }
  }
  return;
}

