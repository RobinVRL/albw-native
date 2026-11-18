// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00394FD0(int *param_1);
extern int func_00395E88(int *param_1);
extern int func_00396260(int *param_1);
extern int func_003963B8(int *param_1);
extern int func_00396534(int *param_1);
extern int func_00396678(int *param_1);
extern int func_00396834(int *param_1);
extern int func_00396AC0(int param_1,undefined4 param_2);
extern int func_00396E9C(int *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00542E14(void);
extern int func_005430D4(int param_1);
extern int func_00556AA8();
extern int func_00556EAC(int param_1,int param_2);
extern int func_0055C658(int *param_1);
extern int func_0055DE50(undefined4 param_1,int param_2);
extern int func_0055DE80(undefined4 param_1,int param_2);
extern int func_0058A7D4(void);
extern int DAT_00395934;
extern int *DAT_00395938;
extern int DAT_0039593c;
extern undefined4 DAT_00395940;
extern float DAT_00395944;
extern float DAT_00395948;
extern undefined4 DAT_0039594c;
extern undefined4 DAT_00395950;
extern undefined4 DAT_00395954;
extern float DAT_00395e60;

// USA 003953EC <- EU 003953C8 (Ghidra, non-matching)
// GLOBAL DAT_00395934 int
// GLOBAL DAT_00395938 int *
// GLOBAL DAT_0039593c int
// GLOBAL DAT_00395940 undefined4
// GLOBAL DAT_00395944 float
// GLOBAL DAT_00395948 float
// GLOBAL DAT_0039594c undefined4
// GLOBAL DAT_00395950 undefined4
// GLOBAL DAT_00395954 undefined4
// GLOBAL DAT_00395e60 float

undefined4 func_003953EC(int *param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_74 (*(undefined8 *)(albw_frame + 0xc))
  #define fStack_6c (*(float *)(albw_frame + 0x14))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define local_60 (*(float *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x24))
  #define local_58 (*(float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x2c))
  #define local_50 (*(float *)(albw_frame + 0x30))
  piVar1 = DAT_00395938;
  iVar3 = *DAT_00395938;
  if (*(int *)(*param_1 + 0xa00) < DAT_00395934) {
    func_00556AA8(iVar3,2);
    func_00556AA8(*piVar1,1);
    iVar3 = func_003963B8(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = func_00396E9C(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((0x50 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
       (iVar3 = func_00396534(param_1), iVar3 != 0)) {
      return 0;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((0x5a < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
       (iVar3 = func_00396834(param_1), iVar3 != 0)) {
      return 0;
    }
    bVar2 = func_00556EAC(*piVar1,0x31);
    if (bVar2) {
      *(undefined1 *)(param_1 + 5) = 2;
      *(undefined1 *)((int)param_1 + 0x12) = 1;
    }
    iVar3 = func_00394FD0(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = *param_1;
    bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
    if ((bVar2) || (bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), bVar2)) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1f) goto LAB_00395d24;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if (0x14 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) {
LAB_00395584:
      return func_00395E88(param_1);
    }
    iVar3 = *param_1;
    bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
    if ((!bVar2) && (bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), !bVar2))
    goto LAB_00395584;
    goto LAB_00395574;
  }
  uVar7 = CONCAT44(DAT_00395950,DAT_00395940);
  uVar10 = CONCAT44(DAT_00395954,DAT_0039594c);
  if (*(int *)(*param_1 + 0xa00) < DAT_0039593c) {
    fVar11 = DAT_00395944;
    fVar9 = DAT_00395948;
    func_00556AA8(iVar3,2);
    func_00556AA8(*piVar1,1);
    iVar3 = func_003963B8(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = func_00396E9C(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((0x50 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
       (iVar3 = func_00396534(param_1), iVar3 != 0)) {
      return 0;
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((0x5a < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
       (iVar3 = func_00396834(param_1), iVar3 != 0)) {
      return 0;
    }
    bVar2 = func_00556EAC(*piVar1,0x31);
    if (bVar2) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(undefined1 *)((int)param_1 + 0x12) = 1;
      func_00115C70(&local_64,(float *)(*param_1 + 0x3d0),*(float **)(*piVar1 + 0x1c));
      fVar8 = local_60;
      func_004D80A4(&local_58,**(uint **)(*piVar1 + 0x24),fVar11);
      local_54 = fVar9;
      if ((local_64 * local_58 + fVar8 * fVar9 + local_5c * local_50 <= ALBW_AS_F32(uVar7)) &&
         (iVar3 = func_00396678(param_1), iVar3 != 0)) {
        return 0;
      }
    }
    fVar11 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
    iVar3 = func_00542E14();
    if (iVar3 != 0) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar11,3);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
        iVar3 = func_005430D4(*param_1);
        if (iVar3 != 0) goto LAB_00395830;
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1e) goto LAB_00395830;
        iVar3 = func_00396678(param_1);
joined_r0x00395bbc:
        if (iVar3 != 0) {
          return 0;
        }
        goto LAB_00395830;
      }
    }
    iVar3 = func_00394FD0(param_1);
    if (iVar3 != 0) {
      return 0;
    }
    iVar3 = func_0055C658(param_1);
    if (iVar3 != 0) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * ALBW_AS_F32(uVar10),3);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
        puVar4 = (uint *)func_0058A7D4();
        uVar5 = func_00111A64(puVar4);
        if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x32) {
LAB_00395830:
          *(undefined1 *)((int)param_1 + 0x13) = 1;
          *(undefined1 *)(param_1 + 5) = 2;
          *(undefined1 *)((int)param_1 + 0x12) = 1;
          return 0;
        }
        iVar3 = func_00396678(param_1);
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
    fVar9 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
    bVar2 = func_00556EAC(*piVar1,0x37);
    if ((bVar2) || (bVar2 = func_00556EAC(*piVar1,0x38), bVar2)) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar11,3);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
        *(undefined1 *)(param_1 + 5) = 1;
        iVar3 = func_00396678(param_1);
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
    iVar3 = *param_1;
    bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
    if ((bVar2) || (bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), bVar2)) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1f) {
LAB_00395d24:
        return func_00396AC0((int)param_1,5);
      }
    }
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar9,3);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
      iVar3 = *param_1;
      bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
      if ((bVar2) || (bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), bVar2))
      {
LAB_00395574:
        *(undefined1 *)((int)param_1 + 0x13) = 5;
        return 0;
      }
    }
    if (*(char *)(*(int *)(*param_1 + 0x8bc) + 2) != '\0') {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar9,3);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
LAB_003959d8:
        *(undefined1 *)((int)param_1 + 0x13) = 0xc;
        return 0;
      }
    }
    return func_00396260(param_1);
  }
  fVar11 = DAT_00395944;
  fVar9 = DAT_00395948;
  func_00556AA8(iVar3,2);
  func_00556AA8(*piVar1,1);
  iVar3 = func_003963B8(param_1);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = func_00396E9C(param_1);
  if (iVar3 != 0) {
    return 0;
  }
  puVar4 = (uint *)func_0058A7D4();
  uVar5 = func_00111A64(puVar4);
  if ((0x50 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
     (iVar3 = func_00396534(param_1), iVar3 != 0)) {
    return 0;
  }
  puVar4 = (uint *)func_0058A7D4();
  uVar5 = func_00111A64(puVar4);
  if ((0x5a < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) &&
     (iVar3 = func_00396834(param_1), iVar3 != 0)) {
    return 0;
  }
  bVar2 = func_00556EAC(*piVar1,0x31);
  if (bVar2) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)((int)param_1 + 0x12) = 1;
    func_00115C70((float *)&local_74,(float *)(*param_1 + 0x3d0),*(float **)(*piVar1 + 0x1c));
    func_004D80A4(&local_64,**(uint **)(*piVar1 + 0x24),fVar11);
    local_60 = fVar9;
    if ((ALBW_AS_F32(local_74) * local_64 + ALBW_AS_F32(((ulonglong)local_74 >> 0x20)) * fVar9 +
         fStack_6c * local_5c <= ALBW_AS_F32(uVar7)) && (iVar3 = func_00396678(param_1), iVar3 != 0)) {
      return 0;
    }
  }
  fVar11 = ALBW_AS_F32(((ulonglong)uVar7 >> 0x20));
  iVar3 = func_00542E14();
  if (iVar3 != 0) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar11,3);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
      iVar3 = func_005430D4(*param_1);
      if (iVar3 != 0) goto LAB_00395830;
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1e) goto LAB_00395830;
      iVar3 = func_00396678(param_1);
      goto joined_r0x00395bbc;
    }
  }
  iVar3 = func_00394FD0(param_1);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = func_0055C658(param_1);
  if (iVar3 != 0) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * ALBW_AS_F32(uVar10),3);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
      puVar4 = (uint *)func_0058A7D4();
      uVar5 = func_00111A64(puVar4);
      if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x32) goto LAB_00395830;
      iVar3 = func_00396678(param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  fVar9 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
  bVar2 = func_00556EAC(*piVar1,0x37);
  if ((bVar2) || (bVar2 = func_00556EAC(*piVar1,0x38), bVar2)) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar11,3);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
      *(undefined1 *)(param_1 + 5) = 1;
      iVar3 = func_00396678(param_1);
      if (iVar3 != 0) {
        return 0;
      }
    }
  }
  iVar3 = *param_1;
  bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
  if ((bVar2) || (bVar2 = func_0055DE80(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), bVar2)) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) < 0x1f) goto LAB_00395d24;
  }
  puVar4 = (uint *)func_0058A7D4();
  uVar5 = func_00111A64(puVar4);
  uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar9,3);
  if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) {
    iVar3 = *param_1;
    bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1488));
    if ((bVar2) || (bVar2 = func_0055DE50(iVar3 + 0xbc8,(uint)*(byte *)(iVar3 + 0x1489)), bVar2))
    goto LAB_00395574;
  }
  if (*(char *)(*(int *)(*param_1 + 0x8bc) + 2) != '\0') {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * fVar9,3);
    if ((uint)((ulonglong)uVar5 * 0x65 >> 0x20) <= uVar6) goto LAB_003959d8;
  }
  iVar3 = func_005430D4(*param_1);
  if (iVar3 != 0) {
    puVar4 = (uint *)func_0058A7D4();
    uVar5 = func_00111A64(puVar4);
    uVar6 = VectorFloatToUnsigned(ALBW_AS_F32(param_1[1]) * DAT_00395e60,3);
    if (uVar6 < (uint)((ulonglong)uVar5 * 0x65 >> 0x20)) goto LAB_00395e30;
  }
  iVar3 = func_00396678(param_1);
  if (iVar3 != 0) {
    return 0;
  }
LAB_00395e30:
  *(undefined1 *)((int)param_1 + 0x13) = 1;
  return 0;
}

