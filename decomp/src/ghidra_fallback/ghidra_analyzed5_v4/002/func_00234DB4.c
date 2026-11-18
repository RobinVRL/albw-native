#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004CE768(int param_1,uint param_2);
extern int func_004D392C(undefined4 *param_1,uint *param_2,int param_3);
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00584C14(int param_1,int *param_2);
extern int DAT_00235138;
extern int DAT_0023513c;
extern undefined4 *DAT_00235140;
extern undefined *DAT_00235144;
extern int DAT_00235148;
extern undefined4 *DAT_00235358;
extern int *DAT_00235368;
extern undefined4 DAT_00235378;
extern undefined4 DAT_0023537c;
extern undefined4 DAT_00235380;
extern char s_MapActor_0023512c[];
extern char s_MapActor_SagesPlace_bch_00235340[];
extern char s_VR_Change_0023536c[];
extern char s_animator_0023535c[];
extern char s_aurora_00235384[];
extern char s_cState_Appear_00235158[];
extern char s_cState_Hold_00235168[];
extern char s_cState_Wait_0023514c[];
extern char s_cf_00235340[];

// USA 00234DB4 <- EU 00234DB4 (Ghidra, non-matching)
// GLOBAL DAT_00235138 int
// GLOBAL DAT_0023513c int
// GLOBAL DAT_00235140 undefined4 *
// GLOBAL DAT_00235144 undefined *
// GLOBAL DAT_00235148 int
// GLOBAL DAT_00235358 undefined4 *
// GLOBAL DAT_00235368 int *
// GLOBAL DAT_00235378 undefined4
// GLOBAL DAT_0023537c undefined4
// GLOBAL DAT_00235380 undefined4
// GLOBAL s_cf_00235340 string
// GLOBAL s_MapActor_0023512c string
// GLOBAL s_VR_Change_0023536c string
// GLOBAL s_animator_0023535c string
// GLOBAL s_aurora_00235384 string
// GLOBAL s_cState_Appear_00235158 string
// GLOBAL s_cState_Hold_00235168 string
// GLOBAL s_cState_Wait_0023514c string

int func_00234DB4(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(uint * *)(albw_frame + 0x4))
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define local_80 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define local_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  iVar2 = DAT_00235138;
  local_8c = (uint *)s_MapActor_0023512c;
  local_90 = DAT_00235138;
  piVar3 = func_004D392C(param_1,param_2,(int)&local_90);
  iVar5 = DAT_0023513c;
  *piVar3 = DAT_0023513c;
  piVar3[200] = iVar5 + 0x54;
  piVar3[0x153] = 0;
  puVar4 = func_0010A794(piVar3 + 0x154);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar10 = puVar4 + -0x154;
  puVar4[9] = 0;
  func_004CE768(puVar4[-8],1);
  (**(code **)(*(int *)puVar4[-8] + 0x10))((int *)puVar4[-8],0x20);
  *(undefined1 *)((int)puVar4 + 6) = 3;
  puVar4[5] = puVar10;
  iVar5 = func_0010BA78(0x30);
  puVar4[6] = iVar5;
  puVar8 = DAT_00235140;
  puVar4[7] = iVar5 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar9 = 3;
  puVar6 = (undefined4 *)(iVar5 + -8);
  do {
    uVar13 = puVar8[0xf];
    iVar9 = iVar9 + -1;
    puVar6[2] = puVar8[0xe];
    puVar6[3] = uVar13;
    uVar13 = puVar8[0xf];
    puVar6[4] = puVar8[0xe];
    puVar6[5] = uVar13;
    puVar6 = puVar6 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar11 = (uint)bVar1;
  puVar6 = (undefined4 *)func_0010BA78(uVar11 << 3);
  puVar4[8] = puVar6;
  if (uVar11 != 0) {
    puVar7 = puVar6 + -2;
    if ((bVar1 & 1) != 0) {
      uVar13 = puVar8[5];
      *puVar6 = puVar8[4];
      puVar6[1] = uVar13;
      puVar7 = puVar6;
    }
    for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar13 = puVar8[5];
      puVar7[2] = puVar8[4];
      puVar7[3] = uVar13;
      uVar13 = puVar8[5];
      puVar7[4] = puVar8[4];
      puVar7[5] = uVar13;
      puVar7 = puVar7 + 4;
    }
  }
  puVar6 = (undefined4 *)func_0010CEE0(0x74,(int *)0x0,4);
  iVar5 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = 0x24;
    puVar6[1] = 3;
    iVar5 = func_00100118((int)(puVar6 + 2),DAT_00235144,0x24,3);
  }
  if (iVar5 != 0) {
    puVar4[2] = 3;
    puVar4[3] = iVar5;
  }
  iVar5 = DAT_00235148;
  puVar4[-0x7f] = puVar4;
  *(undefined2 *)(iVar5 + (int)puVar10) = 3;
  local_8c = (uint *)s_cState_Wait_0023514c;
  local_90 = iVar2;
  iVar5 = puVar4[3];
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar2 + 8))(&local_90);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_8c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00234fb0;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00234fb0:
  iVar5 = *(int *)(iVar5 + 8);
  if (iVar5 <= (int)uVar11) {
    uVar11 = iVar5 - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar12,local_8c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  puVar6 = (undefined4 *)puVar4[6];
  uVar13 = puVar8[1];
  uVar14 = puVar8[2];
  uVar15 = puVar8[3];
  uVar16 = puVar8[4];
  uVar17 = puVar8[5];
  *puVar6 = *puVar8;
  puVar6[1] = uVar13;
  puVar6 = (undefined4 *)puVar4[7];
  *puVar6 = uVar14;
  puVar6[1] = uVar15;
  puVar6 = (undefined4 *)puVar4[8];
  *puVar6 = uVar16;
  puVar6[1] = uVar17;
  local_8c = (uint *)s_cState_Appear_00235158;
  local_90 = iVar2;
  if ((uint)puVar4[2] < 2) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x24;
  }
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar2 + 8))(&local_90);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_8c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0023506c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0023506c:
  if (*(int *)(iVar5 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar12,local_8c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar5 = puVar4[6];
  uVar13 = puVar8[4];
  uVar14 = puVar8[5];
  uVar15 = puVar8[8];
  uVar16 = puVar8[7];
  uVar17 = puVar8[9];
  *(undefined4 *)(iVar5 + 8) = puVar8[6];
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar17;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 8) = uVar13;
  *(undefined4 *)(iVar5 + 0xc) = uVar14;
  local_8c = (uint *)s_cState_Hold_00235168;
  local_90 = iVar2;
  if ((uint)puVar4[2] < 3) {
    iVar5 = puVar4[3];
  }
  else {
    iVar5 = puVar4[3] + 0x48;
  }
  puVar12 = *(uint **)(iVar5 + 4);
  (**(code **)(iVar2 + 8))(&local_90);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_8c + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00235180;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00235180:
  if (*(int *)(iVar5 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar5 + 8) - 1;
  }
  (**(code **)(local_90 + 8))(&local_90);
  func_0010E3C4(puVar12,local_8c,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar5 = puVar4[6];
  uVar14 = puVar8[0xc];
  uVar13 = puVar8[4];
  uVar15 = puVar8[0xb];
  uVar16 = puVar8[0xd];
  uVar17 = puVar8[5];
  *(undefined4 *)(iVar5 + 0x10) = puVar8[10];
  *(undefined4 *)(iVar5 + 0x14) = uVar15;
  iVar5 = puVar4[7];
  *(undefined4 *)(iVar5 + 0x10) = uVar14;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = puVar4[8];
  *(undefined4 *)(iVar5 + 0x10) = uVar13;
  *(undefined4 *)(iVar5 + 0x14) = uVar17;
  local_8c = (uint *)s_MapActor_SagesPlace_bch_00235340;
  local_90 = iVar2;
  puVar8 = func_00504CC0(*DAT_00235358,&local_90,0xffffffff);
  iVar5 = puVar4[-0xa0];
  puVar6 = (undefined4 *)func_0010BAB4(0xa8);
  piVar3 = DAT_00235368;
  if (puVar6 == (undefined4 *)0x0) {
    puVar4[-1] = 0;
  }
  else {
    if (iVar5 == 0) {
      local_8c = (uint *)s_animator_0023535c;
    }
    else {
      (**(code **)(*DAT_00235368 + 8))(DAT_00235368);
      local_8c = (uint *)piVar3[1];
    }
    local_90 = iVar2;
    puVar6 = func_0016A2FC(puVar6,1,&local_90,1);
    puVar4[-1] = puVar6;
  }
  local_8c = (uint *)s_VR_Change_0023536c;
  local_90 = iVar2;
  func_00169608((uint *)puVar4[-1],0,&local_90,(int)puVar8);
  uVar11 = puVar4[-8];
  func_0016A02C(puVar4[-1],-1,(int *)0xffffffff,uVar11);
  local_80 = &local_7c;
  local_88[1] = 3;
  local_34 = 10;
  local_30 = 0;
  local_88[0] = 1;
  local_7c = 0;
  local_78 = DAT_0023537c;
  local_74 = DAT_00235378;
  local_70 = DAT_00235380;
  local_68 = uVar11 | 0xff;
  local_6c = DAT_00235378;
  func_0016898C(puVar4[-1],local_88);
  local_8c = (uint *)s_aurora_00235384;
  local_90 = iVar2;
  uVar11 = func_00584C14(puVar4[-8],&local_90);
  puVar4[9] = uVar11;
  puVar4[-0x9c] = puVar4[-0x9c] | 2;
  return (int)puVar10;
}

