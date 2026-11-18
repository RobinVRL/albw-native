#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003AE7F4(int *param_1,int param_2);
extern int func_003AE9AC(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4);
extern int *DAT_00463d7c;
extern undefined4 DAT_00463d80;
extern undefined4 DAT_00463d84;
extern undefined4 DAT_00463d88;
extern undefined4 DAT_00463d8c;

// USA 00463C68 <- EU 00463C40 (Ghidra, non-matching)
// GLOBAL DAT_00463d7c int *
// GLOBAL DAT_00463d80 undefined4
// GLOBAL DAT_00463d84 undefined4
// GLOBAL DAT_00463d88 undefined4
// GLOBAL DAT_00463d8c undefined4

void func_00463C68(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(undefined4 *)(albw_frame + 0x0))
  #define local_5c (*(undefined4 *)(albw_frame + 0x4))
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(undefined4 *)(albw_frame + 0x18))
  #define local_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define local_2c (*(undefined1 *)(albw_frame + 0x34))
  #define local_2b (*(undefined1 *)(albw_frame + 0x35))
  #define local_2a (*(undefined1 *)(albw_frame + 0x36))
  #define local_29 (*(undefined1 *)(albw_frame + 0x37))
  #define local_28 (*(undefined1 *)(albw_frame + 0x38))
  #define local_24 (*(int *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  #define local_1c (*(undefined4 *)(albw_frame + 0x44))
  piVar5 = *(int **)(*DAT_00463d7c + 0x1c0);
  (**(code **)(*piVar5 + 0x28))(piVar5);
  uVar1 = DAT_00463d84;
  local_1c = DAT_00463d80;
  local_20 = DAT_00463d84;
  piVar5 = func_0010B954(0,(int)&local_20,piVar5,-1,0);
  *(int **)(param_1 + 0x148) = piVar5;
  puVar2 = (undefined4 *)func_0010CF28(0x110,piVar5,4);
  piVar5 = (int *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    piVar5 = func_003AE9AC(puVar2,*(int **)(param_1 + 0x148),0x17,0);
  }
  *(int **)(param_1 + 0x134) = piVar5;
  (**(code **)(*piVar5 + 0x14))(piVar5);
  iVar4 = 0;
  iVar3 = 0;
  do {
    *(undefined4 *)(param_1 + 200 + iVar4 * 4) = 0;
    iVar3 = iVar3 + 2;
    *(undefined4 *)(param_1 + 200 + (iVar4 + 1) * 4) = 0;
    iVar4 = iVar4 + 2;
  } while (iVar3 < 0x1a);
  local_60 = uVar1;
  local_5c = DAT_00463d88;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0x20;
  uStack_4c = 0;
  local_44 = 0;
  local_40 = 0;
  local_30 = DAT_00463d8c;
  local_2c = 7;
  local_2b = 4;
  local_24 = param_1 + 0x138;
  local_48 = 0;
  local_3c = 0;
  local_38 = 0;
  local_2a = 0;
  local_34 = uVar1;
  local_29 = 0;
  local_28 = 0;
  func_003AE7F4(*(int **)(param_1 + 0x134),(int)&local_60);
  *(undefined4 *)(param_1 + 0x14c) = 1;
  return;
}

