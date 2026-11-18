#include "ghidra_types.h"

extern int func_003E35DC(undefined4 param_1,undefined4 param_2);
extern int func_003F9A00(uint param_1,undefined4 param_2);
extern int func_005FF314(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_005FF398(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_006003B4(undefined4 *param_1,undefined4 *param_2);
extern undefined4 DAT_003f3830;

// USA 003F3668 <- EU 003F3648 (Ghidra, non-matching)
// GLOBAL DAT_003f3830 undefined4

undefined4 func_003F3668(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(code * *)(albw_frame + 0x0))
  #define auStack_2c ((undefined4 *)(albw_frame + 0x4))
  uVar1 = DAT_003f3830;
  if (*(uint *)(param_1 + 0xc) != 0) {
    func_003F9A00(*(uint *)(param_1 + 0xc),DAT_003f3830);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(uint *)(param_1 + 0x954) != 0) {
    func_003F9A00(*(uint *)(param_1 + 0x954),uVar1);
    *(undefined4 *)(param_1 + 0x954) = 0;
  }
  iVar4 = *(int *)(param_1 + 8);
  func_003E35DC(iVar4,0x2b0);
  if (param_3 == 1) {
    func_006003B4(&local_30,auStack_2c);
    uVar2 = 0x20000;
LAB_003f36ec:
    iVar3 = (*local_30)(uVar2,uVar1,0,0x2b0);
    if (param_2 == 0) {
      func_005FF314(iVar4,iVar3,0x2b0);
    }
    else {
      func_005FF398(param_2,iVar4,iVar3,0x2b0);
    }
  }
  else {
    iVar3 = iVar4;
    if (param_3 == 2) {
      func_006003B4(&local_30,auStack_2c);
      uVar2 = 0x30000;
      goto LAB_003f36ec;
    }
  }
  *(int *)(param_1 + 0xc) = iVar3;
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = *(int *)(param_1 + 0x950);
  uVar2 = func_003E35DC(iVar4,0x24);
  if (param_3 == 1) {
    func_006003B4(&local_30,auStack_2c);
    uVar2 = 0x20000;
  }
  else {
    if (param_3 != 2) goto LAB_003f3778;
    func_006003B4(&local_30,auStack_2c);
    uVar2 = 0x30000;
  }
  iVar3 = (*local_30)(uVar2,uVar1,0,0x24);
  if (param_2 == 0) {
    uVar2 = func_005FF314(iVar4,iVar3,0x24);
    iVar4 = iVar3;
  }
  else {
    uVar2 = func_005FF398(param_2,iVar4,iVar3,0x24);
    iVar4 = iVar3;
  }
LAB_003f3778:
  if (iVar4 != 0) {
    uVar2 = 1;
  }
  *(int *)(param_1 + 0x954) = iVar4;
  if (iVar4 == 0) {
    if (*(uint *)(param_1 + 0xc) != 0) {
      func_003F9A00(*(uint *)(param_1 + 0xc),uVar1);
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    return 0;
  }
  return uVar2;
}

