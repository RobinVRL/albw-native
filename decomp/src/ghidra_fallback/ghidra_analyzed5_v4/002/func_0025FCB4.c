#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_003529C0(undefined4 *param_1);
extern int func_00498624(undefined4 *param_1);
extern undefined4 DAT_00260078;
extern undefined4 DAT_0026007c;
extern undefined4 DAT_00260080;
extern undefined4 DAT_00260084;
extern undefined4 *DAT_00260088;
extern undefined4 DAT_0026008c;
extern undefined4 DAT_00260090;
extern undefined4 DAT_00260094;
extern undefined4 *DAT_00260098;
extern undefined *DAT_0026009c;
extern int DAT_002600b0;
extern char s_cState_FadeOut_0026022c[];
extern char s_cState_Playing_002600b4[];
extern char s_cState_Sleep_002600a0[];
extern char s_cState_Wait_002600c4[];

// USA 0025FCB4 <- EU 0025FCDC (Ghidra, non-matching)
// GLOBAL DAT_00260078 undefined4
// GLOBAL DAT_0026007c undefined4
// GLOBAL DAT_00260080 undefined4
// GLOBAL DAT_00260084 undefined4
// GLOBAL DAT_00260088 undefined4 *
// GLOBAL DAT_0026008c undefined4
// GLOBAL DAT_00260090 undefined4
// GLOBAL DAT_00260094 undefined4
// GLOBAL DAT_00260098 undefined4 *
// GLOBAL DAT_0026009c undefined *
// GLOBAL DAT_002600b0 int
// GLOBAL s_cState_FadeOut_0026022c string
// GLOBAL s_cState_Playing_002600b4 string
// GLOBAL s_cState_Sleep_002600a0 string
// GLOBAL s_cState_Wait_002600c4 string

undefined4 * func_0025FCB4(undefined4 *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  *param_1 = DAT_00260078;
  puVar2 = func_003529C0(param_1 + 1);
  puVar2[-1] = DAT_0026007c;
  puVar2[0x10] = 0;
  puVar2 = func_0010A794(puVar2 + 0x11);
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  uVar11 = DAT_00260084;
  uVar10 = DAT_00260080;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = uVar10;
  puVar2[0xf] = uVar11;
  func_001119F4(puVar2 + 0x10,DAT_00260088);
  uVar12 = DAT_00260094;
  uVar11 = DAT_00260090;
  puVar2[0xf] = DAT_0026008c;
  puVar2[0x1c] = uVar11;
  puVar2[0x1d] = uVar11;
  puVar2[0x1e] = uVar12;
  puVar2[0x1f] = uVar11;
  puVar2[0x20] = uVar11;
  puVar2[0x21] = uVar11;
  puVar2[0x22] = uVar11;
  puVar2[0x23] = uVar10;
  puVar2[0x24] = uVar11;
  puVar3 = func_00498624(puVar2 + 0x25);
  *(undefined1 *)(puVar3 + 0x2e) = 0;
  *(undefined1 *)((int)puVar3 + 0xb9) = 0;
  *(undefined1 *)((int)puVar3 + -0x8e) = 4;
  puVar3[-0x20] = puVar3 + -0x37;
  iVar4 = func_0010BA78(0x40);
  puVar3[-0x1f] = iVar4;
  puVar2 = DAT_00260098;
  puVar3[-0x1e] = iVar4 + (uint)*(byte *)((int)puVar3 + -0x8e) * 8;
  iVar7 = 4;
  puVar5 = (undefined4 *)(iVar4 + -8);
  do {
    uVar10 = puVar2[0x13];
    iVar7 = iVar7 + -1;
    puVar5[2] = puVar2[0x12];
    puVar5[3] = uVar10;
    uVar10 = puVar2[0x13];
    puVar5[4] = puVar2[0x12];
    puVar5[5] = uVar10;
    puVar5 = puVar5 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + -0x8e);
  uVar8 = (uint)bVar1;
  puVar5 = (undefined4 *)func_0010BA78(uVar8 << 3);
  puVar3[-0x1d] = puVar5;
  if (uVar8 != 0) {
    puVar6 = puVar5 + -2;
    if ((bVar1 & 1) != 0) {
      uVar10 = puVar2[5];
      *puVar5 = puVar2[4];
      puVar5[1] = uVar10;
      puVar6 = puVar5;
    }
    for (iVar4 = (int)uVar8 >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
      uVar10 = puVar2[5];
      puVar6[2] = puVar2[4];
      puVar6[3] = uVar10;
      uVar10 = puVar2[5];
      puVar6[4] = puVar2[4];
      puVar6[5] = uVar10;
      puVar6 = puVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar4 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0x24;
    puVar5[1] = 4;
    iVar4 = func_00100118((int)(puVar5 + 2),DAT_0026009c,0x24,4);
  }
  if (iVar4 != 0) {
    puVar3[-0x22] = iVar4;
    puVar3[-0x23] = 4;
  }
  iVar4 = DAT_002600b0;
  local_34 = (uint *)s_cState_Sleep_002600a0;
  local_38 = DAT_002600b0;
  iVar7 = puVar3[-0x22];
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(DAT_002600b0 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0025ff04;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0025ff04:
  iVar7 = *(int *)(iVar7 + 8);
  if (iVar7 <= (int)uVar8) {
    uVar8 = iVar7 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  puVar5 = (undefined4 *)puVar3[-0x1f];
  uVar10 = puVar2[1];
  uVar11 = puVar2[2];
  uVar12 = puVar2[3];
  uVar13 = puVar2[4];
  uVar14 = puVar2[5];
  *puVar5 = *puVar2;
  puVar5[1] = uVar10;
  puVar5 = (undefined4 *)puVar3[-0x1e];
  *puVar5 = uVar11;
  puVar5[1] = uVar12;
  puVar5 = (undefined4 *)puVar3[-0x1d];
  *puVar5 = uVar13;
  puVar5[1] = uVar14;
  local_34 = (uint *)s_cState_Playing_002600b4;
  local_38 = iVar4;
  if ((uint)puVar3[-0x23] < 2) {
    iVar7 = puVar3[-0x22];
  }
  else {
    iVar7 = puVar3[-0x22] + 0x24;
  }
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0025ffb4;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0025ffb4:
  if (*(int *)(iVar7 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar7 = puVar3[-0x1f];
  uVar10 = puVar2[8];
  uVar11 = puVar2[4];
  uVar12 = puVar2[7];
  uVar13 = puVar2[9];
  uVar14 = puVar2[5];
  *(undefined4 *)(iVar7 + 8) = puVar2[6];
  *(undefined4 *)(iVar7 + 0xc) = uVar12;
  iVar7 = puVar3[-0x1e];
  *(undefined4 *)(iVar7 + 8) = uVar10;
  *(undefined4 *)(iVar7 + 0xc) = uVar13;
  iVar7 = puVar3[-0x1d];
  *(undefined4 *)(iVar7 + 8) = uVar11;
  *(undefined4 *)(iVar7 + 0xc) = uVar14;
  local_34 = (uint *)s_cState_Wait_002600c4;
  local_38 = iVar4;
  if ((uint)puVar3[-0x23] < 3) {
    iVar7 = puVar3[-0x22];
  }
  else {
    iVar7 = puVar3[-0x22] + 0x48;
  }
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_002600dc;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_002600dc:
  if (*(int *)(iVar7 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar7 = puVar3[-0x1f];
  uVar10 = puVar2[0xb];
  uVar11 = puVar2[5];
  uVar12 = puVar2[0xc];
  uVar13 = puVar2[4];
  uVar14 = puVar2[0xd];
  *(undefined4 *)(iVar7 + 0x10) = puVar2[10];
  *(undefined4 *)(iVar7 + 0x14) = uVar10;
  iVar7 = puVar3[-0x1e];
  *(undefined4 *)(iVar7 + 0x10) = uVar12;
  *(undefined4 *)(iVar7 + 0x14) = uVar14;
  iVar7 = puVar3[-0x1d];
  *(undefined4 *)(iVar7 + 0x10) = uVar13;
  *(undefined4 *)(iVar7 + 0x14) = uVar11;
  local_34 = (uint *)s_cState_FadeOut_0026022c;
  local_38 = iVar4;
  if ((uint)puVar3[-0x23] < 4) {
    iVar7 = puVar3[-0x22];
  }
  else {
    iVar7 = puVar3[-0x22] + 0x6c;
  }
  puVar9 = *(uint **)(iVar7 + 4);
  (**(code **)(iVar4 + 8))(&local_38);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_34 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_002601b0;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_002601b0:
  if (*(int *)(iVar7 + 8) <= (int)uVar8) {
    uVar8 = *(int *)(iVar7 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar9,local_34,uVar8);
  *(undefined1 *)((int)puVar9 + uVar8) = 0;
  iVar4 = puVar3[-0x1f];
  uVar10 = puVar2[0x10];
  uVar14 = puVar2[0x11];
  uVar11 = puVar2[4];
  uVar13 = puVar2[5];
  uVar12 = puVar2[0xf];
  *(undefined4 *)(iVar4 + 0x18) = puVar2[0xe];
  *(undefined4 *)(iVar4 + 0x1c) = uVar12;
  iVar4 = puVar3[-0x1e];
  *(undefined4 *)(iVar4 + 0x18) = uVar10;
  *(undefined4 *)(iVar4 + 0x1c) = uVar14;
  iVar4 = puVar3[-0x1d];
  *(undefined4 *)(iVar4 + 0x18) = uVar11;
  *(undefined4 *)(iVar4 + 0x1c) = uVar13;
  return puVar3 + -0x37;
}

