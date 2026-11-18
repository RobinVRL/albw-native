#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0066B808(undefined4 *param_1,undefined1 param_2);
extern int DAT_005119ac;
extern int *DAT_005119b0;
extern int DAT_005119b4;
extern float DAT_005119b8;
extern undefined *DAT_005119bc;
extern undefined *DAT_005119c0;
extern undefined *DAT_005119c4;
extern int DAT_005119c8;
extern int DAT_005119d8;
extern char s_cState_Icicle_005119dc[];
extern char s_cState_Wait_005119cc[];

// USA 00511624 <- EU 005115FC (Ghidra, non-matching)
// GLOBAL DAT_005119ac int
// GLOBAL DAT_005119b0 int *
// GLOBAL DAT_005119b4 int
// GLOBAL DAT_005119b8 float
// GLOBAL DAT_005119bc undefined *
// GLOBAL DAT_005119c0 undefined *
// GLOBAL DAT_005119c4 undefined *
// GLOBAL DAT_005119c8 int
// GLOBAL DAT_005119d8 int
// GLOBAL s_cState_Icicle_005119dc string
// GLOBAL s_cState_Wait_005119cc string

int func_00511624(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(uint * *)(albw_frame + 0xc))
  piVar4 = func_00150E40(param_1,param_2);
  piVar2 = DAT_005119b0;
  iVar7 = DAT_005119ac + 0x58;
  *piVar4 = DAT_005119ac;
  piVar4[200] = iVar7;
  iVar7 = *piVar2;
  iVar8 = piVar2[1];
  piVar4[0x104] = (int)piVar4;
  piVar4[0x105] = iVar7;
  piVar4[0x106] = iVar8;
  iVar7 = DAT_005119b4;
  piVar4[0x103] = DAT_005119b4;
  puVar5 = func_0010A794(piVar4 + 0x107);
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[10] = 0;
  iVar8 = piVar2[0xe];
  iVar9 = piVar2[0xf];
  puVar5[9] = iVar7;
  puVar5[0xb] = iVar8;
  puVar5[0xc] = iVar9;
  fVar17 = DAT_005119b8;
  puVar5[0x10] = ALBW_AS_U32(DAT_005119b8);
  iVar7 = func_00100118((int)(puVar5 + 0x17),DAT_005119bc,4,4);
  *(undefined4 *)(iVar7 + 0x10) = 0;
  iVar7 = func_00100118(iVar7 + 0x14,DAT_005119c0,8,4);
  *(undefined1 *)(iVar7 + -0x1d) = 0;
  iVar10 = iVar7 + -0x48c;
  *(undefined1 *)(iVar7 + -0x1c) = 0;
  *(undefined1 *)(iVar7 + -0x1b) = 0;
  *(undefined1 *)(iVar7 + -0x1a) = 0;
  *(uint *)(iVar7 + -4) = param_2[0x13];
  *(bool *)(iVar7 + -0x15) = ALBW_AS_F32(param_2[0x11]) != fVar17;
  *(undefined1 *)(iVar7 + -0x6a) = 2;
  *(int *)(iVar7 + -0x5c) = iVar10;
  iVar8 = func_0010BA78(0x20);
  *(int *)(iVar7 + -0x58) = iVar8;
  *(uint *)(iVar7 + -0x54) = iVar8 + (uint)*(byte *)(iVar7 + -0x6a) * 8;
  iVar9 = 2;
  piVar4 = (int *)(iVar8 + -8);
  do {
    iVar8 = piVar2[0xd];
    iVar9 = iVar9 + -1;
    piVar4[2] = piVar2[0xc];
    piVar4[3] = iVar8;
    iVar8 = piVar2[0xd];
    piVar4[4] = piVar2[0xc];
    piVar4[5] = iVar8;
    piVar4 = piVar4 + 4;
  } while (iVar9 != 0);
  bVar1 = *(byte *)(iVar7 + -0x6a);
  uVar11 = (uint)bVar1;
  piVar4 = (int *)func_0010BA78(uVar11 << 3);
  *(int **)(iVar7 + -0x50) = piVar4;
  if (uVar11 != 0) {
    piVar6 = piVar4 + -2;
    if ((bVar1 & 1) != 0) {
      iVar8 = piVar2[7];
      *piVar4 = piVar2[6];
      piVar4[1] = iVar8;
      piVar6 = piVar4;
    }
    for (iVar8 = (int)uVar11 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
      iVar9 = piVar2[7];
      piVar6[2] = piVar2[6];
      piVar6[3] = iVar9;
      iVar9 = piVar2[7];
      piVar6[4] = piVar2[6];
      piVar6[5] = iVar9;
      piVar6 = piVar6 + 4;
    }
  }
  puVar5 = (undefined4 *)func_0010CEE0(0x50,(int *)0x0,4);
  puVar3 = DAT_005119c4;
  iVar8 = 0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = 2;
    *puVar5 = 0x24;
    iVar8 = func_00100118((int)(puVar5 + 2),puVar3,0x24,2);
  }
  if (iVar8 != 0) {
    *(int *)(iVar7 + -100) = iVar8;
    *(undefined4 *)(iVar7 + -0x68) = 2;
  }
  iVar8 = DAT_005119c8;
  *(undefined4 **)(iVar7 + -0x138) = (undefined4 *)(iVar7 + -0x70);
  iVar9 = DAT_005119d8;
  *(undefined2 *)(iVar8 + iVar10) = 2;
  local_34 = (uint *)s_cState_Wait_005119cc;
  local_38 = iVar9;
  iVar8 = *(int *)(iVar7 + -100);
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_00511874;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_00511874:
  iVar8 = *(int *)(iVar8 + 8);
  if (iVar8 <= (int)uVar11) {
    uVar11 = iVar8 - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar12,local_34,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  piVar4 = *(int **)(iVar7 + -0x58);
  iVar8 = piVar2[3];
  iVar13 = piVar2[4];
  iVar14 = piVar2[5];
  iVar15 = piVar2[6];
  iVar16 = piVar2[7];
  *piVar4 = piVar2[2];
  piVar4[1] = iVar8;
  piVar4 = *(int **)(iVar7 + -0x54);
  *piVar4 = iVar13;
  piVar4[1] = iVar14;
  piVar4 = *(int **)(iVar7 + -0x50);
  *piVar4 = iVar15;
  piVar4[1] = iVar16;
  local_34 = (uint *)s_cState_Icicle_005119dc;
  local_38 = iVar9;
  if (*(uint *)(iVar7 + -0x68) < 2) {
    iVar8 = *(int *)(iVar7 + -100);
  }
  else {
    iVar8 = *(int *)(iVar7 + -100) + 0x24;
  }
  puVar12 = *(uint **)(iVar8 + 4);
  (**(code **)(iVar9 + 8))(&local_38);
  uVar11 = 0;
  do {
    if (*(char *)((int)local_34 + uVar11) == '\0') {
      if ((int)uVar11 < 0x40001) goto LAB_0051192c;
      break;
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 0x40001);
  uVar11 = 0;
LAB_0051192c:
  if (*(int *)(iVar8 + 8) <= (int)uVar11) {
    uVar11 = *(int *)(iVar8 + 8) - 1;
  }
  (**(code **)(local_38 + 8))(&local_38);
  func_0010E3C4(puVar12,local_34,uVar11);
  *(undefined1 *)((int)puVar12 + uVar11) = 0;
  iVar14 = *(int *)(iVar7 + -0x58);
  iVar8 = piVar2[9];
  iVar13 = piVar2[10];
  iVar16 = piVar2[0xb];
  iVar9 = piVar2[7];
  iVar15 = piVar2[6];
  *(int *)(iVar14 + 8) = piVar2[8];
  *(int *)(iVar14 + 0xc) = iVar8;
  iVar8 = *(int *)(iVar7 + -0x54);
  *(int *)(iVar8 + 8) = iVar13;
  *(int *)(iVar8 + 0xc) = iVar16;
  iVar8 = *(int *)(iVar7 + -0x50);
  *(int *)(iVar8 + 8) = iVar15;
  *(int *)(iVar8 + 0xc) = iVar9;
  func_0066B808((undefined4 *)(iVar7 + -0x70),0);
  return iVar10;
}

