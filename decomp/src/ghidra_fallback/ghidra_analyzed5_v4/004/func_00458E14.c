#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern int func_0019AC24(int param_1,int param_2);
extern int func_002937AC(int param_1,int param_2);
extern int func_002939A4(int param_1,int param_2,int *param_3);
extern int func_002DFCD8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002DFCEC(int param_1);
extern int func_00457510(int param_1);
extern int func_004576CC(int param_1,uint param_2,int param_3,undefined4 param_4);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_0047FD30(int param_1,int *param_2);
extern int func_0047FE10(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00547480(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_00459124;
extern int *DAT_00459128;
extern int DAT_0045912c;
extern int *DAT_00459130;
extern int *DAT_0045914c;
extern int DAT_00459150;
extern int *DAT_00459154;
extern char s_SE_S_BACK_00459158[];
extern char s_SE_S_CHANGE_NAME_DECIDE_00459134[];

// GLOBAL DAT_00459124 int *
// GLOBAL DAT_00459128 int *
// GLOBAL DAT_0045912c int
// GLOBAL DAT_00459130 int *
// GLOBAL DAT_0045914c int *
// GLOBAL DAT_00459150 int
// GLOBAL DAT_00459154 int *
// GLOBAL s_SE_S_BACK_00459158 string
// GLOBAL s_SE_S_CHANGE_NAME_DECIDE_00459134 string
// USA 00458E14 <- EU 00458DF0 (Ghidra, function missing from the decomp table)

undefined4 func_00458E14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 extraout_r1;
  undefined4 uVar9;
  bool bVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define iStack_30 (*(int *)(albw_frame + 0x0))
  #define pcStack_2c (*(char * *)(albw_frame + 0x4))
  func_0045918C(param_1);
  iVar2 = DAT_0045912c;
  piVar1 = DAT_00459128;
  piVar8 = DAT_00459124;
  if (*(char *)(param_1 + 0x224) != '\0') {
    uVar4 = *(uint *)(*DAT_00459124 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20);
    if ((uVar4 & 1) != 0) {
      return func_00459388(param_1);
    }
    if ((uVar4 & 2) != 0) {
      func_004576CC(param_1,7,0,param_4);
      return func_00459388(param_1);
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x1d8) + 0xa9) != '\0') {
    func_00166C00(*DAT_00459130,0);
    pcStack_2c = s_SE_S_CHANGE_NAME_DECIDE_00459134;
    iStack_30 = iVar2;
    uVar9 = 0;
    func_00587F74(*DAT_0045914c,&iStack_30,0);
    func_002DFCD8(*piVar1,extraout_r1,uVar9,param_4);
  }
  iVar3 = DAT_00459150;
  if (*(char *)(param_1 + 0x218) == '\0') {
    iVar5 = func_00547480(*piVar1);
    if (iVar5 == 0) {
      if (*(char *)(param_1 + 0x218) == '\0') goto LAB_00458fc0;
    }
    else {
      (**(code **)(*(int *)(param_1 + 0x21c) + 8))(param_1 + 0x21c);
      func_0019AC24(*piVar8,*(int *)(param_1 + 0x220));
      *(undefined1 *)(param_1 + 0x218) = 1;
    }
  }
  iVar6 = *piVar8;
  bVar10 = *(char *)(iVar6 + 0x672) != '\0';
  iVar5 = 0;
  if (bVar10) {
    iVar5 = *(int *)(iVar6 + 0x7b8);
  }
  if (bVar10 && iVar5 != -1) {
    *(int *)(param_1 + 0x220) = *(int *)(iVar6 + 0x7b8) + *(int *)(iVar6 + 0xa78);
    piVar7 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar7 = piVar7 + *(uint *)(param_1 + 0x214);
    }
    func_0047FD30(*(int *)(*piVar7 + 0xfc),(int *)(param_1 + 0x21c));
  }
  if (((*(char *)(param_1 + 0x218) != '\0') && (*(char *)(*(int *)(param_1 + 0x1d8) + 0x6c) == '\0')
      ) && (*(char *)(*piVar8 + 0x671) == '\0')) {
    *(undefined1 *)(param_1 + 0x224) = 1;
    func_00166C00(*DAT_00459130,1);
    *(undefined1 *)(param_1 + 0x218) = 0;
    func_002DFCEC(*piVar1);
  }
LAB_00458fc0:
  piVar1 = DAT_00459154;
  if (*(char *)(*(int *)(param_1 + 0x1dc) + 0x8c) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x1e0) + 0x8c) != '\0') {
      func_00457510(param_1);
      piVar8 = (int *)(param_1 + 0x1e4);
      if (*(uint *)(param_1 + 0x214) < 3) {
        piVar8 = piVar8 + *(uint *)(param_1 + 0x214);
      }
      func_0047FE10(*(int *)(*piVar8 + 0xfc));
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\a');
      pcStack_2c = s_SE_S_BACK_00459158;
      iStack_30 = iVar2;
      return func_00533078(*(undefined4 *)(param_1 + 0x1e0),&iStack_30,0);
    }
    if (*(char *)(param_1 + 0x224) != '\0') {
      if ((*(uint *)(*piVar8 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x220000) != 0) {
        uVar4 = *(int *)(param_1 + 0x210) + 1;
        if (7 < (int)uVar4) {
          uVar4 = 5;
        }
        func_004576CC(param_1,uVar4,1,param_4);
      }
      if ((*(uint *)(*piVar8 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 0x110000) != 0) {
        uVar4 = *(int *)(param_1 + 0x210) - 1;
        if ((int)uVar4 < 5) {
          uVar4 = 7;
        }
        return func_004576CC(param_1,uVar4,1,param_4);
      }
    }
  }
  else {
    if (*(char *)(param_1 + 0x234) != '\0') {
      func_002937AC(*DAT_00459154 + 0x9cc,*(int *)(param_1 + 0x214));
    }
    iStack_30 = iVar3;
    pcStack_2c = *(char **)(param_1 + 0x220);
    func_002939A4(*piVar1 + 0x9cc,*(int *)(param_1 + 0x214),&iStack_30);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\b');
  }
  return 0;
}

