#include "ghidra_types.h"

extern int func_00296D28(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_0053900C(undefined4 param_1,int *param_2,int param_3);
extern int func_00689024(undefined4 *param_1);

// USA 004EB524 <- EU 004EB4FC (Ghidra, non-matching)

undefined4 func_004EB524(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  func_00689024(aiStack_58);
  iVar1 = func_0053900C(*(undefined4 *)(param_1 + 0x50),aiStack_58,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    func_00296D28(*(int *)(param_1 + 0x4c),aiStack_58,param_2,in_r3);
    uVar2 = *(undefined4 *)(param_1 + 0x50);
  }
  return uVar2;
}

