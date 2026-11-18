#include "ghidra_types.h"

extern int func_00296BD0(int param_1,int param_2);
extern int func_00296D28(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_00539024(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4);
extern int func_00540A78(int param_1,int *param_2);
extern int func_00689024(undefined4 *param_1);

// USA 004E9CD4 <- EU 004E9CAC (Ghidra, non-matching)

int func_004E9CD4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_r2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define aiStack_58 ((int *)(albw_frame + 0x8))
  func_00689024(aiStack_58);
  iVar1 = func_00539024(*(undefined4 *)(param_1 + 0x50),(int)aiStack_58,in_r2,in_r3);
  iVar2 = 0;
  if ((iVar1 != 0) && (iVar2 = func_00540A78(*(int *)(param_1 + 0x4c),aiStack_58), iVar2 == 0)) {
    func_00296BD0(*(int *)(param_1 + 0x4c),0xf);
    func_00296D28(*(int *)(param_1 + 0x4c),aiStack_58,in_r2,in_r3);
    iVar2 = *(int *)(param_1 + 0x50);
  }
  return iVar2;
}

