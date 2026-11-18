#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002B5F70(int param_1);
extern int func_002B7880(int param_1);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_002B841C(int param_1);
extern int func_002B8568(int param_1,undefined4 param_2);
extern int func_003838A8(int param_1,int param_2);
extern int func_003840A0(int param_1,int param_2);
extern int func_00395134(int *param_1);
extern int func_003AC318(int *param_1);
extern int func_003B2794(int param_1,int param_2);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00687DB0(undefined4 *param_1);
extern int *DAT_002b8388;
extern uint *DAT_002b838c;
extern undefined4 *DAT_002b8390;
extern undefined4 DAT_002b8394;
extern int DAT_002b8398;
extern uint *DAT_002b839c;
extern undefined4 *DAT_002b83a0;
extern undefined4 DAT_002b83a4;
extern float DAT_002b83a8;
extern int DAT_002b83ac;
extern undefined4 *DAT_002b83b0;
extern undefined4 *DAT_002b83b4;
extern float DAT_002b83b8;
extern undefined4 DAT_002b83bc;

// USA 002B7E40 <- EU 002B7E1C (Ghidra, non-matching)
// GLOBAL DAT_002b8388 int *
// GLOBAL DAT_002b838c uint *
// GLOBAL DAT_002b8390 undefined4 *
// GLOBAL DAT_002b8394 undefined4
// GLOBAL DAT_002b8398 int
// GLOBAL DAT_002b839c uint *
// GLOBAL DAT_002b83a0 undefined4 *
// GLOBAL DAT_002b83a4 undefined4
// GLOBAL DAT_002b83a8 float
// GLOBAL DAT_002b83ac int
// GLOBAL DAT_002b83b0 undefined4 *
// GLOBAL DAT_002b83b4 undefined4 *
// GLOBAL DAT_002b83b8 float
// GLOBAL DAT_002b83bc undefined4

void func_002B7E40(int param_1)

{
  int *piVar1;
  float *pfVar2;
  int iVar3;
  undefined4 *puVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  float *pfVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  ushort uVar13;
  uint in_r12;
  bool bVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 ((uint *)(albw_frame + 0x8))
  #define piStack_80 (*(int * *)(albw_frame + 0x10))
  #define local_7c (*(int *)(albw_frame + 0x14))
  #define local_78 (*(float *)(albw_frame + 0x18))
  #define local_74 (*(float *)(albw_frame + 0x1c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x20))
  #define local_6c (*(float *)(albw_frame + 0x24))
  #define local_68 (*(uint *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  pfVar9 = (float *)(param_1 + 0x97c);
  pfVar2 = (float *)func_00520FC0();
  fVar5 = *pfVar2;
  fVar7 = pfVar2[1];
  *(float *)(param_1 + 0x984) = pfVar2[2];
  *pfVar9 = fVar5;
  *(float *)(param_1 + 0x980) = fVar7;
  iVar3 = func_002B5F70(param_1);
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)func_0052FBA0(*DAT_002b8388 + 0x3dbbc,*(uint *)(param_1 + 0xb10));
    if (((*DAT_002b838c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_002b838c), iVar3 != 0)) {
      *DAT_002b8390 = DAT_002b8394;
    }
    if ((puVar4 == (undefined4 *)0x0) ||
       (iVar3 = (**(code **)*puVar4)(puVar4,DAT_002b8390), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
    }
    if (puVar4 != (undefined4 *)0x0) {
      fVar7 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar4[0xf4]);
      fVar5 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar4[0xf6]);
      fVar7 = fVar7 * fVar7 + fVar5 * fVar5;
      pfVar2 = (float *)func_00520FC0();
      bVar14 = SBORROW4((int)ALBW_AS_U32(fVar7),DAT_002b8398);
      iVar3 = (int)ALBW_AS_U32(fVar7) - DAT_002b8398;
      fVar5 = (ALBW_AS_F32(puVar4[0xf4]) - *pfVar2) * (ALBW_AS_F32(puVar4[0xf4]) - *pfVar2) +
              (ALBW_AS_F32(puVar4[0xf6]) - pfVar2[2]) * (ALBW_AS_F32(puVar4[0xf6]) - pfVar2[2]);
      if (DAT_002b8398 <= (int)ALBW_AS_U32(fVar7)) {
        bVar14 = SBORROW4(DAT_002b8398,(int)ALBW_AS_U32(fVar5));
        iVar3 = DAT_002b8398 - (int)ALBW_AS_U32(fVar5);
      }
      if ((iVar3 < 0 == bVar14) && (*(char *)(param_1 + 0xbc8) != '\x01')) {
        uVar6 = puVar4[0xf5];
        uVar8 = puVar4[0xf6];
        *pfVar9 = ALBW_AS_F32(puVar4[0xf4]);
        *(undefined4 *)(param_1 + 0x980) = uVar6;
        *(undefined4 *)(param_1 + 0x984) = uVar8;
      }
      else if ((fVar7 < fVar5) &&
              (((*(char *)(param_1 + 0xbc8) == '\x01' &&
                (*(char *)(*(int *)(*(int *)(param_1 + 0x93c) + 4) + 0x62) != '\0')) &&
               (iVar3 = func_003B2794(*(int *)(param_1 + 0x93c) + 0x53c,(int)puVar4), iVar3 != 0))))
      {
        uVar6 = puVar4[0xf5];
        uVar8 = puVar4[0xf6];
        *pfVar9 = ALBW_AS_F32(puVar4[0xf4]);
        *(undefined4 *)(param_1 + 0x980) = uVar6;
        *(undefined4 *)(param_1 + 0x984) = uVar8;
        if (((int)ALBW_AS_U32(fVar7) < 0x3f800000) && (*(char *)(param_1 + 0xbc8) == '\x01')) {
          func_003AC318(*(int **)(param_1 + 0x93c));
        }
      }
    }
  }
  uVar13 = *(ushort *)(param_1 + 0xb00) & 3;
  puVar4 = (undefined4 *)func_0052FBA0(*DAT_002b8388 + 0x3dbbc,*(uint *)(param_1 + 0xb18));
  if (((*DAT_002b839c & 1) == 0) && (iVar3 = func_00100174((int *)DAT_002b839c), iVar3 != 0)) {
    *DAT_002b83a0 = DAT_002b83a4;
  }
  if ((puVar4 == (undefined4 *)0x0) ||
     (iVar3 = (**(code **)*puVar4)(puVar4,DAT_002b83a0), iVar3 == 0)) {
    puVar4 = (undefined4 *)0x0;
  }
  fVar5 = DAT_002b83a8;
  puVar10 = (undefined4 *)0x0;
  puVar11 = (undefined4 *)0x0;
  puVar12 = (undefined4 *)0x0;
  if (puVar4 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)func_0052FBA0(*DAT_002b8388 + 0x3dbbc,*(uint *)(param_1 + 0xb1c));
    puVar10 = func_00687DB0(puVar10);
    piVar1 = DAT_002b8388;
    if (puVar10 == (undefined4 *)0x0) {
      *(undefined4 *)(param_1 + 0xb1c) = 0;
      puVar11 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0xb20));
      puVar11 = func_00687DB0(puVar11);
      piVar1 = DAT_002b8388;
      if (puVar11 == (undefined4 *)0x0) {
        *(undefined4 *)(param_1 + 0xb20) = 0;
        puVar12 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,*(uint *)(param_1 + 0xb2c));
        puVar12 = func_00687DB0(puVar12);
        if (puVar12 != (undefined4 *)0x0) {
          uVar6 = puVar12[0xf5];
          uVar8 = puVar12[0xf6];
          *pfVar9 = ALBW_AS_F32(puVar12[0xf4]);
          *(undefined4 *)(param_1 + 0x980) = uVar6;
          *(undefined4 *)(param_1 + 0x984) = uVar8;
          goto LAB_002b8178;
        }
        goto LAB_002b81d8;
      }
      if (*(float *)(param_1 + 0x3d4) + fVar5 < ALBW_AS_F32(puVar11[0xf5])) goto LAB_002b81d8;
      uVar6 = puVar11[0xf5];
      uVar8 = puVar11[0xf6];
      *pfVar9 = ALBW_AS_F32(puVar11[0xf4]);
      *(undefined4 *)(param_1 + 0x980) = uVar6;
      *(undefined4 *)(param_1 + 0x984) = uVar8;
LAB_002b8178:
      iVar3 = func_00395134((int *)(param_1 + 0xb48));
      if ((iVar3 != 0) &&
         (fVar7 = *(float *)(param_1 + 0x3d0) - *pfVar9,
         fVar15 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x984),
         (int)ALBW_AS_U32((fVar7 * fVar7 + fVar15 * fVar15)) <= DAT_002b83ac)) {
        func_002B7CAC(param_1,0xd,0);
      }
      if (puVar4 == (undefined4 *)0x0) goto LAB_002b81d8;
    }
    else {
      if (ALBW_AS_F32(puVar10[0xf5]) <= *(float *)(param_1 + 0x3d4) + fVar5) {
        uVar6 = puVar10[0xf5];
        uVar8 = puVar10[0xf6];
        *pfVar9 = ALBW_AS_F32(puVar10[0xf4]);
        *(undefined4 *)(param_1 + 0x980) = uVar6;
        *(undefined4 *)(param_1 + 0x984) = uVar8;
        goto LAB_002b8178;
      }
LAB_002b81d8:
      if ((uVar13 == 3) &&
         (puVar4 = func_002B8568(param_1,*DAT_002b83b0), puVar4 != (undefined4 *)0x0)) {
        *(undefined4 *)(param_1 + 0xb18) = puVar4[0xb3];
      }
    }
    if (puVar10 != (undefined4 *)0x0) goto LAB_002b8218;
  }
  else if (*(char *)(puVar4 + 0x13a) == '\0') {
    uVar6 = puVar4[0xf5];
    uVar8 = puVar4[0xf6];
    *pfVar9 = ALBW_AS_F32(puVar4[0xf4]);
    *(undefined4 *)(param_1 + 0x980) = uVar6;
    *(undefined4 *)(param_1 + 0x984) = uVar8;
    goto LAB_002b8178;
  }
  puVar4 = func_002B841C(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0xb1c) = puVar4[0xb3];
  }
LAB_002b8218:
  if ((puVar11 == (undefined4 *)0x0) &&
     (puVar4 = func_002B7880(param_1), puVar4 != (undefined4 *)0x0)) {
    *(undefined4 *)(param_1 + 0xb20) = puVar4[0xb3];
  }
  if (((puVar12 == (undefined4 *)0x0 && uVar13 == 2) &&
      (puVar4 = func_002B8568(param_1,*DAT_002b83b4), puVar4 != (undefined4 *)0x0)) &&
     ((int)ALBW_AS_U32((ALBW_AS_F32(puVar4[0xf5]) - *(float *)(param_1 + 0x3d4))) < 0x3f800001)) {
    *(undefined4 *)(param_1 + 0xb2c) = puVar4[0xb3];
  }
  bVar14 = func_003840A0(param_1 + 0x8c0,0x87);
  if ((bVar14) &&
     (iVar3 = *(int *)(*(int *)(param_1 + 0x8dc) + 0x14), *(char *)(iVar3 + 0x1c) == '\0')) {
    if (*(float *)(iVar3 + 0x10) < DAT_002b83b8) {
      if (DAT_002b83b8 < *(float *)(iVar3 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar3 + 8) != *(float *)(iVar3 + 0x14)) {
      return;
    }
    if (*(char *)(param_1 + 0xbc8) == '\x01') {
      fVar7 = DAT_002b83b8;
      iVar3 = func_003838A8(param_1 + 0x8c0,
                            (int)(short)**(undefined4 **)(*(int *)(param_1 + 0x8e0) + 0x14));
      bVar14 = func_003840A0(param_1 + 0x8c0,iVar3);
      if (!bVar14) {
        piStack_80 = &local_7c;
        local_88[1] = 3;
        local_34 = 10;
        local_30 = 0;
        local_88[0] = 1;
        local_70 = DAT_002b83bc;
        local_68 = in_r12 | 0xff;
        local_7c = iVar3;
        local_78 = fVar7;
        local_74 = fVar5;
        local_6c = fVar5;
        func_0016898C(*(int *)(param_1 + 0x8dc),local_88);
      }
    }
  }
  return;
}

