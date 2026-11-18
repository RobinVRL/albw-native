#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002ACC68(undefined4 *param_1);
extern int func_002B64F0(int param_1,uint param_2,float fparam_0,float fparam_1);
extern int func_002B6898(int param_1,int *param_2);
extern int func_002B6B0C(int param_1,undefined4 param_2,uint *param_3,float *param_4,int *param_5, float fparam_0);
extern int func_002B6DEC(int param_1,undefined4 param_2,uint *param_3,float fparam_0);
extern int func_002B8B34(int param_1,uint *param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_00542E58(int param_1);
extern int func_0055DDB4(int param_1,int param_2);
extern int func_0068C690(float *param_1);
extern uint DAT_002b5a04;
extern uint DAT_002b5a08;
extern float DAT_002b5a0c;
extern float DAT_002b5a10;
extern float DAT_002b5a14;
extern float DAT_002b5a18;
extern float DAT_002b5a1c;
extern undefined4 *DAT_002b5a20;
extern int *DAT_002b5a24;
extern float DAT_002b5a28;
extern int DAT_002b5a2c;
extern int DAT_002b5a30;
extern int DAT_002b5a34;
extern int DAT_002b5d60;
extern int DAT_002b5d64;
extern undefined4 *DAT_002b5d68;
extern undefined4 *DAT_002b5d6c;
extern undefined4 *DAT_002b5d70;
extern uint *DAT_002b5d74;
extern undefined4 *DAT_002b5d78;
extern undefined4 DAT_002b5d7c;
extern undefined4 *DAT_002b5d80;
extern undefined4 *DAT_002b5d84;
extern int *DAT_002b5d88;
extern float DAT_002b5d8c;
extern undefined4 *DAT_002b5d90;

// USA 002B5638 <- EU 002B5614 (Ghidra, non-matching)
// GLOBAL DAT_002b5a04 uint
// GLOBAL DAT_002b5a08 uint
// GLOBAL DAT_002b5a0c float
// GLOBAL DAT_002b5a10 float
// GLOBAL DAT_002b5a14 float
// GLOBAL DAT_002b5a18 float
// GLOBAL DAT_002b5a1c float
// GLOBAL DAT_002b5a20 undefined4 *
// GLOBAL DAT_002b5a24 int *
// GLOBAL DAT_002b5a28 float
// GLOBAL DAT_002b5a2c int
// GLOBAL DAT_002b5a30 int
// GLOBAL DAT_002b5a34 int
// GLOBAL DAT_002b5d60 int
// GLOBAL DAT_002b5d64 int
// GLOBAL DAT_002b5d68 undefined4 *
// GLOBAL DAT_002b5d6c undefined4 *
// GLOBAL DAT_002b5d70 undefined4 *
// GLOBAL DAT_002b5d74 uint *
// GLOBAL DAT_002b5d78 undefined4 *
// GLOBAL DAT_002b5d7c undefined4
// GLOBAL DAT_002b5d80 undefined4 *
// GLOBAL DAT_002b5d84 undefined4 *
// GLOBAL DAT_002b5d88 int *
// GLOBAL DAT_002b5d8c float
// GLOBAL DAT_002b5d90 undefined4 *

/* WARNING: Variable defined which should be unmapped: objStack_a0 */

undefined4 func_002B5638(int param_1,uint *param_2)

{
  bool bVar1;
  char cVar2;
  ushort uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  float *pfVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  undefined8 uVar16;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define objStack_a0 ((uint *)(albw_frame + 0x0))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(float *)(albw_frame + 0x20))
  #define local_7c (*(float *)(albw_frame + 0x24))
  #define local_78 (*(float *)(albw_frame + 0x28))
  #define local_74 (*(float *)(albw_frame + 0x2c))
  #define local_70 (*(float *)(albw_frame + 0x30))
  #define local_6c (*(float *)(albw_frame + 0x34))
  #define local_68 (*(float *)(albw_frame + 0x38))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define fStack_60 (*(float *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_54 (*(int *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(float *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  uVar6 = DAT_002b5a04;
  if ((*(char *)(param_1 + 0xb3b) != '\0') &&
     (*(undefined1 *)(param_1 + 0x935) = 0, *(char *)(param_1 + 0xb38) != '\0')) {
    puVar4 = (uint *)func_00520FC0();
    uVar11 = *puVar4;
    objStack_a0[1] = puVar4[1];
    uVar5 = puVar4[2];
    objStack_a0[0] = uVar6;
    if (((int)uVar11 < 0x41000001) && (objStack_a0[0] = uVar11, 0xc0ffffff < uVar11)) {
      objStack_a0[0] = DAT_002b5a08;
    }
    objStack_a0[2] = uVar6;
    if (((int)uVar5 < 0x41000001) && (objStack_a0[2] = uVar5, 0xc0ffffff < uVar5)) {
      objStack_a0[2] = DAT_002b5a08;
    }
    func_00115C70((float *)objStack_a0,(float *)objStack_a0,(float *)(param_1 + 0x3d0));
    uVar6 = func_0068C690((float *)objStack_a0);
LAB_002b56cc:
    *param_2 = uVar6;
    return 0;
  }
  fVar15 = DAT_002b5a0c;
  uVar16 = CONCAT44(DAT_002b5a10,uVar6);
  if (*(char *)(param_1 + 0xb3c) == '\0') {
    if (*(char *)(param_1 + 0xb3a) != '\0') {
      *(undefined1 *)(param_1 + 0x935) = 0;
      iVar7 = func_002B8B34(param_1,param_2);
      if (iVar7 != 0) {
        return 0;
      }
      goto LAB_002b5804;
    }
LAB_002b5810:
    if (((*(char *)(param_1 + 0xb39) != '\0') && (*(char *)(param_1 + 0xb38) == '\0')) &&
       (*(char *)(param_1 + 0x935) == '\0')) {
      objStack_a0[0] = *(uint *)(param_1 + 0x964);
      objStack_a0[1] = *(uint *)(param_1 + 0x968);
      objStack_a0[2] = *(uint *)(param_1 + 0x96c);
      func_00115C54((float *)objStack_a0,(float *)objStack_a0,(float *)(param_1 + 0x9b8));
      uVar6 = func_0068C690((float *)objStack_a0);
      *param_2 = uVar6;
    }
  }
  else {
    if (*(int *)(param_1 + 0x3d4) < 0x40000000) {
      bVar1 = false;
      fVar12 = DAT_002b5a14;
      if (*(float *)(param_1 + 0x9ac) < DAT_002b5a0c) {
        iVar7 = func_002B64F0(param_1,0xc0000000,DAT_002b5a10,DAT_002b5a14);
        if (iVar7 != 0) {
          bVar1 = true;
          *param_2 = 0xc0000000;
        }
      }
      else {
        iVar7 = func_002B64F0(param_1,0x40000000,DAT_002b5a10,DAT_002b5a14);
        if (iVar7 != 0) {
          bVar1 = true;
          *param_2 = 0x40000000;
        }
      }
      fVar13 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
      if (*(float *)(param_1 + 0x9b4) < fVar15) {
        iVar7 = func_002B64F0(param_1,0x80000000,fVar13,fVar12);
        if (iVar7 != 0) {
          uVar6 = 0x80000000;
          goto LAB_002b56cc;
        }
      }
      else {
        iVar7 = func_002B64F0(param_1,0,fVar13,fVar12);
        if (iVar7 != 0) {
          *param_2 = 0;
          return 0;
        }
      }
      if (bVar1) {
        return 0;
      }
    }
LAB_002b5804:
    if (*(char *)(param_1 + 0xb3a) == '\0') goto LAB_002b5810;
  }
  fVar12 = DAT_002b5a18;
  if ((*(char *)(param_1 + 0xb41) == '\0') ||
     (bVar1 = func_00542E58(param_1), piVar10 = DAT_002b5a24, bVar1)) {
    *(undefined2 *)(param_1 + 0xb06) = 0;
  }
  else {
    func_004D80A4(&local_6c,**(uint **)(*DAT_002b5a24 + 0x24),*(float *)(param_1 + 0xa04));
    local_68 = fVar15;
    pfVar8 = (float *)func_00520FC0();
    func_00115C54(&local_6c,&local_6c,pfVar8);
    func_004D80A4(&local_78,**(int **)(*piVar10 + 0x24) + 0x40000000,fVar12);
    local_74 = fVar15;
    func_00115C70(&local_84,(float *)(param_1 + 0x3d0),&local_6c);
    fVar13 = *(float *)(param_1 + 0xa04);
    if (fVar13 <= fVar15) {
      fVar13 = DAT_002b5a28;
      pfVar8 = (float *)func_00520FC0();
      local_6c = *pfVar8;
      local_68 = pfVar8[1];
      local_64 = pfVar8[2];
    }
    cVar2 = *(char *)(param_1 + 0xb39);
    bVar1 = cVar2 == '\0';
    if (bVar1) {
      cVar2 = *(char *)(param_1 + 0xb38);
    }
    iVar7 = DAT_002b5a2c;
    if (!bVar1 || cVar2 != '\0') {
      iVar7 = DAT_002b5a30;
    }
    if (*(float *)(param_1 + 0xa04) <= fVar15) {
      iVar9 = func_0055DDB4(param_1 + 0xbc8,(uint)*(byte *)(DAT_002b5d60 + param_1));
      if (((iVar9 == 0) &&
          (iVar9 = func_0055DDB4(param_1 + 0xbc8,(uint)*(byte *)(DAT_002b5d64 + param_1)),
          iVar9 == 0)) ||
         (uVar3 = *(short *)(param_1 + 0xb06) + 1, *(ushort *)(param_1 + 0xb06) = uVar3, 299 < uVar3
         )) goto LAB_002b58a0;
      iVar9 = func_0068C690(&local_84);
      func_004D80A4(&fStack_60,iVar9 + iVar7,fVar13);
      piVar10 = *(int **)(*(int *)(param_1 + 0x93c) + 4);
      local_5c = fVar15;
      if ((piVar10 == (int *)(*(int *)(param_1 + 0x93c) + 8)) &&
         (piVar10 = (int *)(**(code **)(*piVar10 + 0xd4))(piVar10), 9 < *piVar10)) {
        *(undefined1 *)(param_1 + 0xb47) = 1;
      }
    }
    else {
      pfVar8 = (float *)func_00520FC0();
      func_00115C70(&local_4c,&local_6c,pfVar8);
      if (DAT_002b5a34 <=
          (int)ALBW_AS_U32((local_4c * *(float *)(param_1 + 0x9a0) + local_48 * *(float *)(param_1 + 0x9a4) +
               local_44 * *(float *)(param_1 + 0x9a8)))) {
        if (local_78 * local_84 + local_74 * local_80 + local_70 * local_7c <= fVar15) {
          iVar9 = func_0068C690(&local_84);
          func_004D80A4(&fStack_60,iVar9 - iVar7,fVar13);
          local_5c = fVar15;
        }
        else {
          iVar9 = func_0068C690(&local_84);
          func_004D80A4(&fStack_60,iVar9 + iVar7,fVar13);
          local_5c = fVar15;
        }
      }
    }
    func_00115C54(&fStack_60,&fStack_60,&local_6c);
    func_00115C70(&local_84,&fStack_60,(float *)(param_1 + 0x3d0));
    uVar6 = func_0068C690(&local_84);
    *param_2 = uVar6;
  }
LAB_002b58a0:
  uVar14 = CONCAT44(fVar15,DAT_002b5a1c);
  objStack_a0[0] = 0;
  objStack_a0[1] = 0;
  iVar7 = func_002B6B0C(param_1,*DAT_002b5a20,param_2,(float *)0x0,(int *)0x0,DAT_002b5a1c);
  if (iVar7 == 0) {
    objStack_a0[0] = 0;
    objStack_a0[1] = 0;
    iVar7 = func_002B6B0C(param_1,*DAT_002b5d68,param_2,(float *)0x0,(int *)0x0,ALBW_AS_F32(uVar16));
    if (iVar7 == 0) {
      if (*(int *)(*(int *)(param_1 + 0x93c) + 4) != *(int *)(param_1 + 0x93c) + 0x53c) {
        objStack_a0[0] = 0;
        objStack_a0[1] = 0;
        iVar7 = func_002B6B0C(param_1,*DAT_002b5d6c,param_2,(float *)0x0,(int *)0x0,ALBW_AS_F32(uVar14));
        if (iVar7 != 0) goto LAB_002b5bf0;
      }
      func_002B6898(param_1,(int *)param_2);
    }
  }
LAB_002b5bf0:
  fVar15 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
  local_50 = ALBW_AS_F32(((ulonglong)uVar14 >> 0x20));
  local_54 = 0;
  objStack_a0[1] = 0;
  objStack_a0[0] = (uint)&local_54;
  iVar7 = func_002B6B0C(param_1,*DAT_002b5d70,param_2,&local_50,&local_54,ALBW_AS_F32(uVar14));
  uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
  if (((iVar7 != 0) && ((*DAT_002b5d74 & 1) == 0)) &&
     (iVar7 = func_00100174((int *)DAT_002b5d74), iVar7 != 0)) {
    *DAT_002b5d78 = DAT_002b5d7c;
  }
  objStack_a0[1] = 0;
  objStack_a0[0] = (uint)&local_54;
  iVar7 = func_002B6B0C(param_1,*DAT_002b5d80,param_2,&local_50,&local_54,fVar12);
  if (iVar7 != 0) {
    if (*(char *)(param_1 + 0xbc8) == '\x01') {
      *(int *)(param_1 + 0xa20) = local_54;
      *(int *)(param_1 + 1000) = local_54;
    }
    *(undefined1 *)(param_1 + 0xb46) = 1;
  }
  objStack_a0[0] = 0;
  objStack_a0[1] = 0;
  func_002B6B0C(param_1,*DAT_002b5d84,param_2,(float *)0x0,(int *)0x0,fVar15);
  if (*(char *)(*DAT_002b5d88 + 0x18) != '\a' || *(int *)(*DAT_002b5d88 + 0x1c) != 3) {
    return 0;
  }
  func_004D80A4((float *)objStack_a0,*param_2,DAT_002b5d8c);
  objStack_a0[1] = uVar6;
  func_00115C54((float *)objStack_a0,(float *)objStack_a0,(float *)(param_1 + 0x3d0));
  cVar2 = func_002ACC68(objStack_a0);
  bVar1 = !(bool)cVar2;
  if (bVar1) {
    cVar2 = *(char *)(param_1 + 0xb37);
  }
  if (!bVar1 || cVar2 != '\0') {
    *param_2 = *param_2 + 0x40000000;
  }
  return func_002B6DEC(param_1,*DAT_002b5d90,param_2,fVar15);
}

