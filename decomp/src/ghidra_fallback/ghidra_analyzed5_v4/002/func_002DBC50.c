#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_0052E334(int param_1,float *param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054C998(int param_1,int param_2);
extern int func_0058571C(int param_1,float *param_2,undefined4 param_3,uint param_4);
extern int *DAT_002dc16c;
extern int DAT_002dc170;
extern uint *DAT_002dc174;
extern uint *DAT_002dc178;
extern undefined4 DAT_002dc17c;
extern undefined4 DAT_002dc180;
extern undefined4 *DAT_002dc184;
extern undefined DAT_002dc188;
extern float DAT_002dc19c;
extern int *DAT_002dc1a0;
extern undefined4 *DAT_002dc1a4;
extern char s_MSE_PV_NOT_MOVE_002dc18b[];
extern undefined4 _DAT_002dc188;

// USA 002DBC50 <- EU 002DBC2C (Ghidra, non-matching)
// GLOBAL DAT_002dc16c int *
// GLOBAL DAT_002dc170 int
// GLOBAL DAT_002dc174 uint *
// GLOBAL DAT_002dc178 uint *
// GLOBAL DAT_002dc17c undefined4
// GLOBAL DAT_002dc180 undefined4
// GLOBAL DAT_002dc184 undefined4 *
// GLOBAL DAT_002dc188 undefined
// GLOBAL DAT_002dc19c float
// GLOBAL DAT_002dc1a0 int *
// GLOBAL DAT_002dc1a4 undefined4 *
// GLOBAL s_MSE_PV_NOT_MOVE_002dc18b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002DBC50(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint *puVar1;
  uint *puVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  float *pfVar9;
  uint extraout_r1_02;
  uint extraout_r1_03;
  uint uVar10;
  uint extraout_r1_04;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define local_2c (*(float *)(albw_frame + 0x24))
  fVar3 = DAT_002dc19c;
  uVar13 = DAT_002dc180;
  uVar11 = DAT_002dc17c;
  puVar2 = DAT_002dc178;
  puVar1 = DAT_002dc174;
  iVar7 = DAT_002dc170;
  piVar8 = DAT_002dc16c;
  iVar4 = *DAT_002dc16c;
  iVar12 = *(short *)(param_2 + 2) + -0x6b;
  switch(iVar12) {
  case 0:
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    uVar10 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = uVar10;
    if (uVar10 != 0) {
      puVar6 = (undefined4 *)func_0052FBA0(iVar4 + 0x3dbbc,uVar10);
      if (((*puVar2 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_002dc178), iVar4 != 0)) {
        *DAT_002dc184 = uVar13;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar4 = (**(code **)*puVar6)(puVar6,DAT_002dc184), iVar4 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        if (*(char *)(param_2 + 0x1c) != '\0') {
          local_4c = *(float *)(param_2 + 0x14);
          local_50 = *(float *)(param_2 + 0x10);
          local_48 = *(float *)(param_2 + 0x18);
          pfVar9 = *(float **)(param_1 + 0x30);
          if (iVar7 <= (int)ALBW_AS_U32(SQRT((*pfVar9 - local_50) * (*pfVar9 - local_50) +
                                 (pfVar9[2] - local_48) * (pfVar9[2] - local_48)))) {
            iVar7 = func_004D80EC(pfVar9,&local_50,**(int **)(param_1 + 0x3c));
            uVar15 = func_00114608(_DAT_002dc188,extraout_r1);
            *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
          }
        }
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
        uVar11 = *(undefined4 *)(param_2 + 0x14);
        uVar13 = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0x7c) = uVar11;
        *(undefined4 *)(param_1 + 0x80) = uVar13;
        func_0052E334(*(int *)(param_1 + 0x28),&local_40);
        *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x80) - local_38;
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x78) - local_40;
        *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x7c) - ALBW_AS_F32(local_3c);
      }
    }
    break;
  case 3:
    iVar7 = func_0054C998(*(int *)(param_1 + 0x48),**(int **)(param_1 + 0x3c));
    **(int **)(param_1 + 0x3c) = iVar7;
    return 0;
  case 4:
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    *(undefined1 *)(param_1 + 0x9c) = 0;
    local_3c = s_MSE_PV_NOT_MOVE_002dc18b + 1;
    local_40 = fVar3;
    pfVar9 = (float *)0x0;
    func_004EAF8C(*DAT_002dc1a0,(int *)&local_40,0);
    uVar10 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = uVar10;
    if (uVar10 == 0) goto LAB_002dbfe8;
    puVar6 = (undefined4 *)func_0052FBA0(*piVar8 + 0x3dbbc,uVar10);
    if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_002dc174), iVar4 != 0)) {
      *DAT_002dc1a4 = uVar11;
    }
    if (puVar6 == (undefined4 *)0x0) {
LAB_002dbe9c:
      puVar6 = (undefined4 *)0x0;
    }
    else {
      pfVar9 = *(float **)*puVar6;
      iVar4 = (*(code *)pfVar9)(puVar6,DAT_002dc1a4);
      if (iVar4 == 0) goto LAB_002dbe9c;
    }
    if (puVar6 == (undefined4 *)0x0) {
      local_4c = *(float *)(param_2 + 0x14);
      local_50 = *(float *)(param_2 + 0x10);
      local_48 = *(float *)(param_2 + 0x18);
      pfVar5 = *(float **)(param_1 + 0x30);
      if (iVar7 <= (int)ALBW_AS_U32(SQRT((*pfVar5 - local_50) * (*pfVar5 - local_50) +
                             (pfVar5[2] - local_48) * (pfVar5[2] - local_48)))) {
        pfVar9 = (float *)**(undefined4 **)(param_1 + 0x3c);
        iVar7 = func_004D80EC(pfVar5,&local_50,(int)pfVar9);
        uVar15 = func_00114608(_DAT_002dc188,extraout_r1_01);
        *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
      }
    }
    else {
      pfVar9 = *(float **)(param_1 + 0x30);
      local_34 = *pfVar9;
      local_30 = pfVar9[1];
      local_2c = pfVar9[2];
      pfVar9 = &local_38;
      local_38 = **(float **)(param_1 + 0x3c);
      param_4 = *(int **)(param_2 + 0xc);
      func_0058571C((int)puVar6,&local_34,pfVar9,(uint)param_4);
      *(float *)(param_1 + 0x58) = local_38;
      *(float *)(param_1 + 0x78) = local_34;
      *(float *)(param_1 + 0x7c) = local_30;
      *(float *)(param_1 + 0x80) = local_2c;
      local_4c = *(float *)(param_2 + 0x14);
      local_50 = *(float *)(param_2 + 0x10);
      local_48 = *(float *)(param_2 + 0x18);
      pfVar5 = *(float **)(param_1 + 0x30);
      if (iVar7 <= (int)ALBW_AS_U32(SQRT((*pfVar5 - local_50) * (*pfVar5 - local_50) +
                             (pfVar5[2] - local_48) * (pfVar5[2] - local_48)))) {
        pfVar9 = (float *)**(undefined4 **)(param_1 + 0x3c);
        iVar7 = func_004D80EC(pfVar5,&local_50,(int)pfVar9);
        uVar15 = func_00114608(_DAT_002dc188,extraout_r1_00);
        *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
      }
      *(undefined1 *)(param_1 + 0x9c) = 1;
    }
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
LAB_002dbfe8:
    return func_0028C8EC(*(int *)(param_1 + 0x4c),2,pfVar9,param_4);
  case 5:
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,iVar12,param_4);
    uVar10 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = uVar10;
    if (uVar10 != 0) {
      puVar6 = (undefined4 *)func_0052FBA0(*piVar8 + 0x3dbbc,uVar10);
      if (((*puVar1 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002dc174), iVar7 != 0)) {
        *DAT_002dc1a4 = uVar11;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002dc1a4), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 == (undefined4 *)0x0) {
        if (*(char *)(param_2 + 0x1c) != '\0') {
          local_48 = *(float *)(param_2 + 0x10);
          local_44 = *(float *)(param_2 + 0x14);
          local_40 = *(float *)(param_2 + 0x18);
          iVar7 = func_004D80EC(*(float **)(param_1 + 0x30),&local_48,**(int **)(param_1 + 0x3c));
          uVar15 = func_00114608(_DAT_002dc188,extraout_r1_03);
          *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
          *(float *)(param_1 + 0x90) = local_48;
          *(float *)(param_1 + 0x94) = local_44;
          *(float *)(param_1 + 0x98) = local_40;
          uVar11 = *(undefined4 *)(param_2 + 0x14);
          uVar13 = *(undefined4 *)(param_2 + 0x18);
          *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(param_1 + 0x7c) = uVar11;
          *(undefined4 *)(param_1 + 0x80) = uVar13;
        }
      }
      else {
        pfVar9 = *(float **)(param_1 + 0x30);
        local_48 = *pfVar9;
        local_44 = pfVar9[1];
        local_40 = pfVar9[2];
        local_4c = **(float **)(param_1 + 0x3c);
        func_0058571C((int)puVar6,&local_48,&local_4c,*(uint *)(param_2 + 0xc));
        *(float *)(param_1 + 0x58) = local_4c;
        *(float *)(param_1 + 0x78) = local_48;
        *(float *)(param_1 + 0x7c) = local_44;
        *(float *)(param_1 + 0x80) = local_40;
        local_38 = *(float *)(param_2 + 0x10);
        local_34 = *(float *)(param_2 + 0x14);
        local_30 = *(float *)(param_2 + 0x18);
        iVar7 = func_004D80EC(*(float **)(param_1 + 0x30),&local_38,**(int **)(param_1 + 0x3c));
        uVar15 = func_00114608(_DAT_002dc188,extraout_r1_02);
        *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
        *(float *)(param_1 + 0x90) = local_38;
        *(float *)(param_1 + 0x94) = local_34;
        *(float *)(param_1 + 0x98) = local_30;
        *(undefined1 *)(param_1 + 0x9c) = 1;
      }
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
      return 0;
    }
    break;
  case 6:
    func_0028C8EC(*(int *)(param_1 + 0x4c),2,iVar12,param_4);
    func_0052E334(*(int *)(param_1 + 0x28),&local_50);
    *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x90) - local_50;
    *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x94) - local_4c;
    *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x98) - local_48;
    return 0;
  case 7:
    *(undefined4 *)(param_1 + 0xa0) = 0;
    *(undefined4 *)(param_1 + 0x58) = **(undefined4 **)(param_1 + 0x3c);
    uVar10 = *(uint *)(param_2 + 8);
    *(uint *)(param_1 + 0x70) = uVar10;
    if (uVar10 != 0) {
      puVar6 = (undefined4 *)func_0052FBA0(iVar4 + 0x3dbbc,uVar10);
      if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002dc178), iVar7 != 0)) {
        *DAT_002dc184 = uVar13;
      }
      if ((puVar6 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar6)(puVar6,DAT_002dc184), iVar7 == 0)) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 != (undefined4 *)0x0) {
        local_40 = *(float *)(param_2 + 0x10);
        local_3c = *(char **)(param_2 + 0x14);
        local_38 = *(float *)(param_2 + 0x18);
        iVar7 = func_004D80EC(*(float **)(param_1 + 0x30),&local_40,**(int **)(param_1 + 0x3c));
        uVar15 = func_00114608(_DAT_002dc188,extraout_r1_04);
        *(uint *)(param_1 + 0x58) = (int)uVar15 + iVar7 & 0xe0000000;
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(param_2 + 0xc);
        uVar11 = *(undefined4 *)(param_2 + 0x14);
        uVar14 = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0x7c) = uVar11;
        *(undefined4 *)(param_1 + 0x80) = uVar14;
        func_0052E334(*(int *)(param_1 + 0x28),&local_4c);
        *(float *)(param_1 + 0x8c) = *(float *)(param_1 + 0x80) - local_44;
        *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x78) - local_4c;
        *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x7c) - local_48;
      }
      piVar8 = (int *)func_0052FBA0(*piVar8 + 0x3dbbc,*(uint *)(param_1 + 0x70));
      if (((*puVar2 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_002dc178), iVar7 != 0)) {
        *DAT_002dc184 = uVar13;
      }
      if ((piVar8 == (int *)0x0) || (iVar7 = (**(code **)*piVar8)(piVar8,DAT_002dc184), iVar7 == 0))
      {
        piVar8 = (int *)0x0;
      }
      if (piVar8 != (int *)0x0) {
        iVar7 = *(int *)(param_1 + 0x2c);
        local_48 = *(float *)(iVar7 + 0x28);
        local_44 = *(float *)(iVar7 + 0x2c);
        local_40 = *(float *)(iVar7 + 0x30);
        local_3c = *(char **)(iVar7 + 0x34);
        local_38 = *(float *)(iVar7 + 0x38);
        local_34 = *(float *)(param_1 + 0x74);
        return (**(code **)(*piVar8 + 0x50))(piVar8,&local_48);
      }
    }
  }
  return 0;
}

