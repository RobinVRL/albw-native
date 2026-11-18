#include "ghidra_types.h"

extern int func_00296B84(int param_1,int *param_2,int param_3);
extern int func_00297298(int param_1,int param_2);
extern int func_004EC4FC(int param_1,int param_2,int param_3);
extern int func_0051B888(int param_1,int param_2);
extern int func_0051BAEC(int param_1);
extern int func_0051C048(int param_1);
extern int func_0051C2C4(int param_1);
extern int func_00540848(int param_1,int *param_2);
extern int func_00540A70(int param_1,int *param_2);
extern int func_0058791C(int param_1,int *param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0058DEA4(int param_1);
extern int DAT_00171afc;
extern int *DAT_00171b00;
extern int *DAT_00171b04;
extern int DAT_00171b08;
extern char s_SE_S_RACE_GOAL_00171b0c[];
extern char s_SE_S_TIME_UP_00171b1c[];

// USA 001718C8 <- EU 001718C8 (Ghidra, non-matching)
// GLOBAL DAT_00171afc int
// GLOBAL DAT_00171b00 int *
// GLOBAL DAT_00171b04 int *
// GLOBAL DAT_00171b08 int
// GLOBAL s_SE_S_RACE_GOAL_00171b0c string
// GLOBAL s_SE_S_TIME_UP_00171b1c string

void func_001718C8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(char * *)(albw_frame + 0x14))
  #define local_28 (*(int *)(albw_frame + 0x18))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  iVar3 = DAT_00171b08;
  piVar2 = DAT_00171b04;
  piVar1 = DAT_00171b00;
  iVar6 = DAT_00171afc;
  if (param_2 != 0) {
    if (param_2 == 1) {
      func_0051C2C4(*DAT_00171b04);
      local_2c = s_SE_S_RACE_GOAL_00171b0c;
      local_30 = iVar3;
      iVar5 = func_0058791C(*piVar1,&local_30);
      if (iVar5 != 1) {
        local_34 = s_SE_S_TIME_UP_00171b1c;
        local_38 = iVar3;
        func_00587F74(*piVar1,&local_38,0);
        local_34 = *(char **)(iVar6 + 0xc);
        local_38 = iVar3;
        iVar5 = func_00540848(*piVar1,&local_38);
        if (iVar5 != 0) {
          local_24 = *(undefined4 *)(iVar6 + 0xc);
          local_28 = iVar3;
          func_00296B84(*piVar1,&local_28,0xf);
          func_004EC4FC(*piVar1,0x1e,0);
        }
      }
      func_0051B888(*piVar2,1);
    }
    else if (param_2 == 4) {
      local_34 = *(char **)(DAT_00171afc + 0xc);
      local_38 = DAT_00171b08;
      iVar6 = func_00540A70(*DAT_00171b00,&local_38);
      if (iVar6 != 0) {
        func_00297298(*piVar1,0xf);
        func_004EC4FC(*piVar1,0x1e,1);
      }
      *(undefined1 *)(param_1 + 0x2eb) = 1;
    }
    goto LAB_00171ad0;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0x70);
  if (uVar4 < 8) {
    uVar7 = 0;
    if (((uint)*(byte *)(param_1 + 0x34) & 1 << uVar4) != 0) goto LAB_00171934;
LAB_00171950:
    if (uVar4 < 9) {
      *(undefined4 *)(param_1 + uVar4 * 4 + 0x10) = *(undefined4 *)(param_1 + 0x2c8);
      if (uVar4 < 8) {
        *(byte *)(param_1 + 0x34) = *(byte *)(param_1 + 0x34) | (byte)(1 << uVar4);
      }
      else {
        *(byte *)(param_1 + 0x36) = *(byte *)(param_1 + 0x36) | (byte)(1 << (uVar4 - 8 & 0xff));
      }
    }
    *(undefined1 *)(param_1 + 0x2e0) = 1;
  }
  else {
    uVar7 = uVar4 - 8;
    if (((uint)*(byte *)(param_1 + 0x36) & 1 << (uVar7 & 0xff)) == 0) goto LAB_00171950;
LAB_00171934:
    if (uVar4 < 9) {
      uVar7 = param_1 + uVar4 * 4;
    }
    if (uVar4 < 9) {
      uVar7 = *(uint *)(uVar7 + 0x10);
    }
    else {
      uVar7 = 0;
    }
    if (*(uint *)(param_1 + 0x2c8) < uVar7) goto LAB_00171950;
  }
  local_34 = *(char **)(iVar6 + 0xc);
  local_38 = iVar3;
  iVar6 = func_00540A70(*piVar1,&local_38);
  if (iVar6 != 0) {
    func_00297298(*piVar1,0xf);
    func_004EC4FC(*piVar1,0x1e,1);
  }
LAB_00171ad0:
  func_0051C048(*piVar2);
  iVar6 = func_0058DEA4(*piVar2);
  if (iVar6 != 0) {
    func_0051BAEC(*piVar2);
  }
  *(undefined1 *)(param_1 + 0x2ea) = 0;
  return;
}

