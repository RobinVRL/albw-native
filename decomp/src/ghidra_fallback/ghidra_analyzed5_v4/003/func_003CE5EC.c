#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);
extern int func_003D302C(undefined4 param_1,undefined4 param_2);

// USA 003CE5EC <- EU 003CE5C8 (Ghidra, non-matching)

void func_003CE5EC(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define auStack_1c ((undefined1 *)(albw_frame + 0x4))
  uVar3 = 0;
  iVar1 = (**(code **)(*param_1 + 8))(param_1,*(code **)(*param_1 + 8),0,0,0);
  if (iVar1 < 0) {
    uVar2 = param_1[2];
    if ((uVar2 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar2 & 1) != 0) {
        func_0010C1B8(uVar2,uVar2 & 0xfffffffe,uVar3);
      }
      func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
      param_1[2] = 0;
    }
    if (iVar1 < 0) {
      func_003D302C(iVar1,0x3ce634);
    }
  }
  iVar1 = (**(code **)(*param_1 + 0x34))(param_1,auStack_1c,param_2,0x14,1);
  if (iVar1 < 0) {
    uVar2 = param_1[2];
    if ((uVar2 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((uVar2 & 1) != 0) {
        func_0010C1B8(uVar2,uVar2 & 0xfffffffe,param_2);
      }
      func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
      param_1[2] = 0;
    }
    param_2 = -(iVar1 >> 0x1f);
    if (param_2 != 0) {
      func_003D302C(iVar1,0x3ce698);
    }
  }
  uVar2 = param_1[2];
  if ((uVar2 & 0xfffffffe) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((uVar2 & 1) != 0) {
      func_0010C1B8(uVar2,uVar2 & 0xfffffffe,param_2);
    }
    func_003C8BD8((int *)(param_1[2] & 0xfffffffe));
    param_1[2] = 0;
  }
  return;
}

