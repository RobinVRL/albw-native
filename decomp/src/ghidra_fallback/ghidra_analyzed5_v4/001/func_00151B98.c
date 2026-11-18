#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100174(int *param_1);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0052FBDC(int param_1,int param_2,int param_3);
extern int func_00584CC8(int param_1,int *param_2);
extern int func_00657A90(undefined4 *param_1,undefined1 param_2);
extern int DAT_00151f60;
extern undefined4 DAT_00151f64;
extern int DAT_00151f68;
extern int *DAT_00151f6c;
extern uint *DAT_00151f70;
extern undefined4 *DAT_00151f74;
extern undefined4 DAT_00151f78;
extern int DAT_00151f7c;
extern undefined4 *DAT_00151f80;
extern undefined *DAT_00151f84;
extern int DAT_00151f88;
extern char s_cState_Off_00151f8c[];
extern char s_cState_On_00151fac[];
extern char s_m_shadow_00151f98[];
extern char s_m_shine_00151fa4[];

// USA 00151B98 <- EU 00151B98 (Ghidra, non-matching)
// GLOBAL DAT_00151f60 int
// GLOBAL DAT_00151f64 undefined4
// GLOBAL DAT_00151f68 int
// GLOBAL DAT_00151f6c int *
// GLOBAL DAT_00151f70 uint *
// GLOBAL DAT_00151f74 undefined4 *
// GLOBAL DAT_00151f78 undefined4
// GLOBAL DAT_00151f7c int
// GLOBAL DAT_00151f80 undefined4 *
// GLOBAL DAT_00151f84 undefined *
// GLOBAL DAT_00151f88 int
// GLOBAL s_cState_Off_00151f8c string
// GLOBAL s_cState_On_00151fac string
// GLOBAL s_m_shadow_00151f98 string
// GLOBAL s_m_shine_00151fa4 string

undefined4 * func_00151B98(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_40 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(uint * *)(albw_frame + 0x1c))
  piVar3 = func_00150E40(param_1,param_2);
  iVar13 = DAT_00151f60;
  *piVar3 = DAT_00151f60;
  piVar3[200] = iVar13 + 0x54;
  puVar4 = func_0010A794(piVar3 + 0x103);
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[8] = 0;
  puVar4[9] = 0;
  puVar4[10] = 0;
  uVar9 = DAT_00151f64;
  puVar4[0xb] = 0;
  puVar4[0xc] = 0;
  puVar4[0xd] = uVar9;
  puVar4[0xe] = uVar9;
  iVar13 = DAT_00151f68;
  puVar11 = puVar4 + -0x103;
  iVar14 = DAT_00151f68 + 8;
  if (((char)param_2[0x16] != '\0') &&
     (puVar5 = (undefined4 *)
               func_0052FBDC(*DAT_00151f6c + 0x3dbbc,(int)*(short *)((int)param_2 + 0x5a),0),
     puVar5 != (undefined4 *)0x0)) {
    if (((*DAT_00151f70 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00151f70), iVar6 != 0)) {
      *DAT_00151f74 = DAT_00151f78;
    }
    iVar6 = (**(code **)*puVar5)(puVar5,DAT_00151f74);
    if (iVar6 == 0) {
      puVar5 = (undefined4 *)0x0;
    }
    if (puVar5 != (undefined4 *)0x0) {
      puVar4[10] = puVar5[0x14c];
      if ((short)param_2[10] == 1) {
        local_4c = s_m_shadow_00151f98;
        local_50 = iVar14;
        uVar9 = func_00584CC8(puVar4[10],&local_50);
        puVar4[0xb] = uVar9;
        puVar4[0xc] = 0;
      }
      else if ((short)param_2[10] == 2) {
        local_4c = s_m_shine_00151fa4;
        local_50 = iVar14;
        uVar9 = func_00584CC8(puVar4[10],&local_50);
        puVar4[0xb] = uVar9;
        puVar4[0xc] = 1;
      }
      else {
        puVar4[0xb] = 0xffffffff;
        if ((int)puVar4[0xc] < 0) goto LAB_00151cd0;
      }
      uVar9 = **(undefined4 **)(DAT_00151f7c + puVar4[0xc] * 8);
      puVar4[0xe] = uVar9;
      puVar4[0xd] = uVar9;
    }
  }
LAB_00151cd0:
  puVar4[5] = puVar11;
  *(undefined1 *)((int)puVar4 + 6) = 2;
  iVar6 = func_0010BA78(0x20);
  puVar5 = DAT_00151f80;
  puVar4[6] = iVar6;
  puVar4[7] = iVar6 + (uint)*(byte *)((int)puVar4 + 6) * 8;
  iVar10 = 2;
  puVar7 = (undefined4 *)(iVar6 + -8);
  do {
    uVar9 = puVar5[0xb];
    iVar10 = iVar10 + -1;
    puVar7[2] = puVar5[10];
    puVar7[3] = uVar9;
    uVar9 = puVar5[0xb];
    puVar7[4] = puVar5[10];
    puVar7[5] = uVar9;
    puVar7 = puVar7 + 4;
  } while (iVar10 != 0);
  bVar1 = *(byte *)((int)puVar4 + 6);
  uVar12 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar12 << 3);
  puVar4[8] = puVar7;
  if (uVar12 != 0) {
    puVar8 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar9 = puVar5[5];
      *puVar7 = puVar5[4];
      puVar7[1] = uVar9;
      puVar8 = puVar7;
    }
    for (iVar6 = (int)uVar12 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
      uVar9 = puVar5[5];
      puVar8[2] = puVar5[4];
      puVar8[3] = uVar9;
      uVar9 = puVar5[5];
      puVar8[4] = puVar5[4];
      puVar8[5] = uVar9;
      puVar8 = puVar8 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  iVar6 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 2;
    iVar6 = func_00100118((int)(puVar7 + 2),DAT_00151f84,0x24,2);
  }
  if (iVar6 != 0) {
    puVar4[2] = 2;
    puVar4[3] = iVar6;
  }
  iVar6 = DAT_00151f88;
  puVar4[-0x2e] = puVar4;
  *(undefined2 *)(iVar6 + (int)puVar11) = 2;
  local_34 = (uint *)s_cState_Off_00151f8c;
  iVar6 = puVar4[3];
  puVar15 = *(uint **)(iVar6 + 4);
  local_40 = puVar4;
  local_38 = iVar14;
  (**(code **)(iVar13 + 0x10))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00151eac;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00151eac:
  iVar6 = *(int *)(iVar6 + 8);
  if (iVar6 <= (int)uVar12) {
    uVar12 = iVar6 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  puVar7 = (undefined4 *)puVar4[6];
  uVar9 = puVar5[1];
  uVar16 = puVar5[2];
  uVar17 = puVar5[3];
  uVar18 = puVar5[4];
  uVar19 = puVar5[5];
  *puVar7 = *puVar5;
  puVar7[1] = uVar9;
  puVar7 = (undefined4 *)puVar4[7];
  *puVar7 = uVar16;
  puVar7[1] = uVar17;
  puVar7 = (undefined4 *)puVar4[8];
  *puVar7 = uVar18;
  puVar7[1] = uVar19;
  local_34 = (uint *)s_cState_On_00151fac;
  uVar12 = puVar4[2];
  if (uVar12 < 2) {
    iVar6 = puVar4[3];
    uVar2 = uVar12;
  }
  else {
    iVar6 = iVar14;
    uVar2 = puVar4[3];
  }
  if (1 < uVar12) {
    iVar6 = uVar2 + 0x24;
  }
  puVar15 = *(uint **)(iVar6 + 4);
  local_38 = iVar14;
  (**(code **)(iVar13 + 0x10))(&local_38);
  uVar12 = 0;
  do {
    if (*(char *)((int)local_34 + uVar12) == '\0') {
      if ((int)uVar12 < 0x40001) goto LAB_00151fc4;
      break;
    }
    uVar12 = uVar12 + 1;
  } while ((int)uVar12 < 0x40001);
  uVar12 = 0;
LAB_00151fc4:
  if (*(int *)(iVar6 + 8) <= (int)uVar12) {
    uVar12 = *(int *)(iVar6 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar15,local_34,uVar12);
  *(undefined1 *)((int)puVar15 + uVar12) = 0;
  uVar9 = puVar5[8];
  uVar19 = puVar5[9];
  uVar16 = puVar5[4];
  uVar18 = puVar5[5];
  iVar13 = puVar4[6];
  uVar17 = puVar5[7];
  *(undefined4 *)(iVar13 + 8) = puVar5[6];
  *(undefined4 *)(iVar13 + 0xc) = uVar17;
  iVar13 = puVar4[7];
  *(undefined4 *)(iVar13 + 8) = uVar9;
  *(undefined4 *)(iVar13 + 0xc) = uVar19;
  iVar13 = puVar4[8];
  *(undefined4 *)(iVar13 + 8) = uVar16;
  *(undefined4 *)(iVar13 + 0xc) = uVar18;
  func_00657A90(local_40,0);
  return puVar11;
}

