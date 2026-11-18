#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0010DEB0(undefined4 *param_1);
extern int func_0010FC68(undefined4 *param_1);
extern int func_0010FC88(int param_1,int param_2,int param_3,int param_4,uint param_5,undefined4 param_6);
extern int DAT_0010f618;
extern int DAT_0010f61c;

// USA 0010F240 <- EU 0010F240 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 uint
// PARAM param_7 Stack[0x8]:4 int
// GLOBAL DAT_0010f618 int
// GLOBAL DAT_0010f61c int

int func_0010F240(int param_1,undefined4 *param_2,int param_3,int param_4,int param_5,uint param_6,
                 int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(int *)(albw_frame + 0x4))
  #define auStack_78 ((undefined1 *)(albw_frame + 0x8))
  #define local_74 (*(undefined4 *)(albw_frame + 0xc))
  #define local_70 (*(uint *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(int *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(uint *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(undefined4 *)(albw_frame + 0x2c))
  #define auStack_50 ((undefined1 *)(albw_frame + 0x30))
  #define local_48 (*(int *)(albw_frame + 0x38))
  #define local_40 (*(int *)(albw_frame + 0x40))
  #define local_38 (*(int *)(albw_frame + 0x48))
  #define local_30 (*(int *)(albw_frame + 0x50))
  iVar1 = (**(code **)*param_2)(param_2,&local_7c,0,0,auStack_78,0x28);
  if (iVar1 < 0) {
    return iVar1;
  }
  if (local_7c != 0x28) {
    return DAT_0010f618;
  }
  iVar2 = 0;
  iVar1 = param_3 * 0x20;
  if (param_7 != 0) {
    iVar2 = (**(code **)*param_2)(param_2,&local_80,0,0,auStack_50,0x28);
    uVar3 = 0xffffffff;
    if (((iVar2 < 0) || (local_80 != 0x28)) ||
       (iVar2 = local_38 + local_30 + local_48 + local_40, iVar2 < 0)) goto LAB_0010f318;
  }
  uVar3 = iVar1 + param_4 * 0x18 + iVar2;
LAB_0010f318:
  if (param_6 < uVar3) {
    return DAT_0010f61c;
  }
  if (param_7 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = local_74;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(uint *)(param_1 + 0x74) = local_70;
    *(int *)(param_1 + 0x78) = param_1;
    *(undefined4 *)(param_1 + 0x8c) = local_6c;
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(int *)(param_1 + 0x84) = local_68;
    *(int *)(param_1 + 0x88) = param_1;
    *(undefined4 *)(param_1 + 0x9c) = local_64;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(uint *)(param_1 + 0x94) = local_60;
    *(int *)(param_1 + 0x98) = param_1;
    *(undefined4 *)(param_1 + 0xac) = local_5c;
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(int *)(param_1 + 0xa4) = local_58;
    *(int *)(param_1 + 0xa8) = param_1;
  }
  else {
    iVar2 = (**(code **)*param_2)(param_2,&local_7c,0x28,0,param_5,local_70);
    if (iVar2 < 0) {
      return iVar2;
    }
    local_80 = param_5;
    iVar6 = local_70 + param_5;
    iVar4 = local_7c + 0x28;
    iVar2 = (**(code **)*param_2)(param_2,&local_7c,iVar4,iVar4 >> 0x1f,iVar6,local_68);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar5 = local_68 + iVar6;
    iVar4 = iVar4 + local_7c;
    iVar2 = (**(code **)*param_2)(param_2,&local_7c,iVar4,iVar4 >> 0x1f,iVar5,local_60);
    if (iVar2 < 0) {
      return iVar2;
    }
    iVar7 = local_60 + iVar5;
    iVar2 = (**(code **)*param_2)
                      (param_2,&local_7c,iVar4 + local_7c,iVar4 + local_7c >> 0x1f,iVar7,local_58);
    if (iVar2 < 0) {
      return iVar2;
    }
    param_5 = local_58 + iVar7;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(int *)(param_1 + 0x70) = local_80;
    *(uint *)(param_1 + 0x74) = local_70;
    *(int *)(param_1 + 0x7c) = param_1;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(int *)(param_1 + 0x84) = local_68;
    *(int *)(param_1 + 0x80) = iVar6;
    *(int *)(param_1 + 0x8c) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(uint *)(param_1 + 0x94) = local_60;
    *(int *)(param_1 + 0x90) = iVar5;
    *(int *)(param_1 + 0x9c) = param_1;
    *(undefined4 *)(param_1 + 0xa8) = 0;
    *(int *)(param_1 + 0xa4) = local_58;
    *(int *)(param_1 + 0xa0) = iVar7;
    *(int *)(param_1 + 0xac) = param_1;
  }
  *(int *)(param_1 + 0x2c) = param_1 + 0x70;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x28) = local_70 >> 2;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(int *)(param_1 + 0x3c) = param_1 + 0x80;
  *(int *)(param_1 + 0x38) = local_68;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(int *)(param_1 + 0x54) = param_1 + 0x90;
  *(int *)(param_1 + 100) = param_1 + 0xa0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(uint *)(param_1 + 0x50) = local_60 >> 2;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(int *)(param_1 + 0x60) = local_58;
  func_0010FC88(param_1 + 0xb8,0x20,param_5,iVar1,4,0);
  func_0010DEB0((undefined4 *)(param_1 + 0xe8));
  func_0010FC88(param_1 + 0xf4,0x18,param_5 + iVar1,param_4 * 0x18,4,0);
  func_0010DEB0((undefined4 *)(param_1 + 0x124));
  *(undefined4 *)(param_1 + 0xb0) = local_54;
  iVar1 = func_0010FC68((undefined4 *)(param_1 + 4));
  if (iVar1 < 0) {
    func_0010AC24(iVar1,0x10f5c8);
  }
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2;
  if (iVar2 == 0) {
    iVar1 = 2;
  }
  if (iVar2 < 0) {
    if (iVar1 < -8) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  else if (0 < iVar2) {
    if (iVar1 < 9) {
      iVar1 = 3;
    }
    else {
      iVar1 = 4;
    }
  }
  *(undefined4 **)(param_1 + iVar1 * 4 + 0xc) = param_2;
  *(undefined4 **)(param_1 + 8) = param_2;
  return 0;
}

