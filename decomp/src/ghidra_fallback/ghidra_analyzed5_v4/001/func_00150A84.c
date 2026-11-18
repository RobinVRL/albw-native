#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0010F1DC(int *param_1,int *param_2);
extern int func_0014E670(int param_1,undefined4 param_2,int *param_3,int param_4,int param_5);
extern int func_0014F0F8(int *param_1,int *param_2,undefined1 *param_3);
extern int func_0019A014(int param_1,int *param_2);
extern int func_0019A4C4(int param_1,undefined4 param_2);
extern int func_001DF8F8(int param_1,int *param_2);
extern int func_0025B6A8(int param_1,int param_2);
extern int func_00297574(int param_1,int param_2);
extern int func_00297674(int param_1,int param_2);
extern int func_005881C8(int param_1,int *param_2,uint param_3);
extern int DAT_00150c74;
extern int DAT_00150c78;
extern int *DAT_00150c7c;

// USA 00150A84 <- EU 00150A84 (Ghidra, non-matching)
// GLOBAL DAT_00150c74 int
// GLOBAL DAT_00150c78 int
// GLOBAL DAT_00150c7c int *

undefined4 func_00150A84(int *param_1,int *param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(uint * *)(albw_frame + 0x10))
  #define local_6c (*(int *)(albw_frame + 0x14))
  #define local_68 ((uint *)(albw_frame + 0x18))
  #define uStack_29 (*(undefined1 *)(albw_frame + 0x57))
  #define local_28 ((char *)(albw_frame + 0x58))
  local_6c = 0x40;
  uStack_29 = 0;
  local_74 = DAT_00150c74;
  local_70 = local_68;
  (**(code **)(*param_2 + 8))(param_2);
  uVar6 = 0;
  do {
    if (*(char *)(param_2[1] + uVar6) == '\0') {
      if ((int)uVar6 < 0x40001) goto LAB_00150b00;
      break;
    }
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 0x40001);
  uVar6 = 0;
LAB_00150b00:
  if (local_6c <= (int)uVar6) {
    uVar6 = local_6c - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(local_68,(uint *)param_2[1],uVar6);
  local_74 = DAT_00150c78;
  *(undefined1 *)((int)local_68 + uVar6) = 0;
  local_28[0] = '\0';
  iVar3 = func_0014F0F8(param_1,&local_74,local_28);
  piVar2 = DAT_00150c7c;
  if (iVar3 == 0) {
    return 0;
  }
  iVar3 = func_005881C8(*DAT_00150c7c,&local_74,0x10000000);
  if (iVar3 != 0) {
    uVar4 = func_0014E670((int)param_1,&local_74,param_2,(int)local_28[0],param_3);
    return uVar4;
  }
  iVar3 = param_1[0xfc];
  uVar4 = 0;
  bVar1 = false;
  if (iVar3 == 0) {
    iVar3 = func_00297674(*piVar2,(int)param_1);
    param_1[0xfc] = iVar3;
    if (iVar3 == 0) {
      return 0;
    }
    func_0019A4C4(iVar3,param_1 + 0xf4);
    iVar3 = param_1[0xfc];
    bVar1 = true;
    if (iVar3 == 0) {
      return 0;
    }
  }
  piVar5 = func_0019A014(iVar3,&local_74);
  if (piVar5 == (int *)0x0) {
    if (bVar1) {
      func_00297574(*piVar2,param_1[0xfc]);
      param_1[0xfc] = 0;
    }
  }
  else {
    if (bVar1) {
      func_0010F1DC(param_1 + 0xfe,(int *)(param_1[0x101] + param_1[0xfc]));
      param_1[0x100] = param_1[0x100] + 1;
    }
    if (local_28[0] != '\0') {
      func_001DF8F8((int)piVar5,param_2);
    }
    if (param_3 != 0) {
      func_0025B6A8(param_3,(int)piVar5);
    }
    uVar4 = 1;
  }
  return uVar4;
}

