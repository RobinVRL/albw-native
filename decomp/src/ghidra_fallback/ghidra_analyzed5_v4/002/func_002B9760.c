#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002B7CAC(int param_1,uint param_2,int param_3);
extern int func_002B7E40(int param_1);
extern int func_002B89F0(int param_1);
extern int func_002D3CD4(int param_1,int param_2,int param_3,int param_4);
extern int func_00383DF8(int param_1,int param_2);
extern int func_0038428C(int param_1,undefined2 param_2,int param_3);
extern int func_00396C1C(int *param_1);
extern int func_003ABB24(int *param_1,uint param_2,int param_3);
extern int func_003B1110(int param_1);
extern int func_003B147C(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EA17C(int param_1,int *param_2,undefined4 *param_3);
extern int func_00520FC0(void);
extern int func_00542E58(int param_1);
extern int func_0055696C(int param_1,int param_2);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0058A7D4(void);
extern float DAT_002b9afc;
extern int *DAT_002b9b00;
extern undefined4 DAT_002b9b04;
extern float DAT_002b9b08;
extern float DAT_002b9b0c;
extern int DAT_002b9e6c;
extern int *DAT_002b9e70;
extern int DAT_002b9e74;
extern int *DAT_002b9e78;
extern int DAT_002b9e7c;
extern char s_SE_PL_INVINCIBILITY_002b9e58[];

// USA 002B9760 <- EU 002B973C (Ghidra, non-matching)
// GLOBAL DAT_002b9afc float
// GLOBAL DAT_002b9b00 int *
// GLOBAL DAT_002b9b04 undefined4
// GLOBAL DAT_002b9b08 float
// GLOBAL DAT_002b9b0c float
// GLOBAL DAT_002b9e6c int
// GLOBAL DAT_002b9e70 int *
// GLOBAL DAT_002b9e74 int
// GLOBAL DAT_002b9e78 int *
// GLOBAL DAT_002b9e7c int
// GLOBAL s_SE_PL_INVINCIBILITY_002b9e58 string

undefined4 func_002B9760(int param_1)

{
  short sVar1;
  char cVar2;
  float *pfVar3;
  float *pfVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(char * *)(albw_frame + 0x4))
  (**(code **)(*(int *)(param_1 + 800) + 0x58))(param_1 + 800,0);
  *(undefined1 *)(param_1 + 0xb3e) = 0;
  fVar14 = DAT_002b9afc;
  *(undefined1 *)(param_1 + 0xb40) = 0;
  piVar10 = DAT_002b9b00;
  *(undefined1 *)(param_1 + 0xb41) = 0;
  *(float *)(param_1 + 0xa5c) = fVar14;
  *(undefined1 *)(param_1 + 0xb43) = 1;
  *(undefined1 *)(param_1 + 0x918) = 1;
  fVar15 = **(float **)(*piVar10 + 0x1c) - *(float *)(param_1 + 0x3d0);
  fVar13 = (*(float **)(*piVar10 + 0x1c))[2] - *(float *)(param_1 + 0x3d8);
  *(float *)(param_1 + 0xa00) = SQRT(fVar15 * fVar15 + fVar13 * fVar13);
  func_004D80A4((float *)(param_1 + 0x958),*(uint *)(param_1 + 1000),fVar14);
  uVar16 = DAT_002b9b04;
  *(undefined4 *)(param_1 + 0x95c) = DAT_002b9b04;
  func_004D80A4((float *)(param_1 + 0x964),*(uint *)(param_1 + 0xa1c),fVar14);
  *(undefined4 *)(param_1 + 0x968) = uVar16;
  uVar17 = CONCAT44(DAT_002b9b08,uVar16);
  pfVar3 = (float *)(param_1 + 0x9e8);
  func_004D80A4(pfVar3,**(uint **)(*piVar10 + 0x24),DAT_002b9b08);
  *(int *)(param_1 + 0x9ec) = (int)uVar17;
  pfVar4 = (float *)func_00520FC0();
  func_00115C54(pfVar3,pfVar3,pfVar4);
  func_004D80A4((float *)(param_1 + 0x994),**(uint **)(*piVar10 + 0x24),fVar14);
  *(int *)(param_1 + 0x998) = (int)uVar17;
  pfVar4 = (float *)func_00520FC0();
  func_00115C70((float *)(param_1 + 0x9a0),(float *)(param_1 + 0x3d0),pfVar4);
  pfVar4 = (float *)func_00520FC0();
  func_00115C70((float *)(param_1 + 0x9ac),pfVar4,(float *)(param_1 + 0x3d0));
  if (*(char *)(param_1 + 0xb45) == '\0') {
    if (*(char *)(param_1 + 0xb46) == '\0') {
      if (*(char *)(param_1 + 0xb47) != '\0') {
        *(undefined1 *)(param_1 + 0xb47) = 0;
        func_003B1110(*(int *)(param_1 + 0x93c) + 8);
      }
    }
    else {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x93c) + 4) + 0x11c))(*(int **)(*(int *)(param_1 + 0x93c) + 4));
    }
  }
  else {
    iVar5 = func_003ABB24(*(int **)(param_1 + 0x93c),1,1);
    if (iVar5 != 0) {
      *(undefined1 *)(param_1 + 0xb45) = 0;
      piVar10 = *(int **)(param_1 + 0x93c);
      local_40 = 0;
      iVar5 = func_003ABB24(piVar10,1,1);
      if (iVar5 != 0) {
        func_003B147C((int *)piVar10[1],local_40,1);
      }
      func_00383DF8(param_1 + 0x8c0,0);
    }
  }
  *(undefined1 *)(param_1 + 0xb46) = 0;
  iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x93c) + 4) + 0x128))(*(int **)(*(int *)(param_1 + 0x93c) + 4));
  if ((iVar5 != 0) && (*(float *)(param_1 + 0x3d4) < *(float *)(param_1 + 0xc) - DAT_002b9b0c)) {
    func_002B89F0(param_1);
    *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x940);
    *(undefined4 *)(param_1 + 0x36c) = *(undefined4 *)(param_1 + 0x944);
    *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_1 + 0x948);
    *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x940);
    *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x944);
    *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x948);
    func_0038428C(param_1 + 0x8c0,0x3c,0);
    iVar5 = *(int *)(param_1 + 0x510);
    *(float *)(iVar5 + 0x48) = fVar14;
    *(float *)(iVar5 + 0x4c) = fVar14;
    *(float *)(iVar5 + 0x50) = fVar14;
    uVar16 = (undefined4)uVar17;
    *(undefined4 *)(param_1 + 0x3dc) = uVar16;
    *(undefined4 *)(param_1 + 0x3e0) = uVar16;
    *(undefined4 *)(param_1 + 0x3e4) = uVar16;
    *(undefined4 *)(param_1 + 0xa2c) = uVar16;
    *(undefined4 *)(param_1 + 0xa30) = uVar16;
    *(undefined4 *)(param_1 + 0xa34) = uVar16;
  }
  cVar2 = func_00542E58(param_1);
  piVar10 = DAT_002b9b00;
  bVar11 = !(bool)cVar2;
  if (bVar11) {
    cVar2 = *(char *)(param_1 + 0xb3c);
  }
  bVar12 = bVar11 && cVar2 == '\0';
  if (bVar11 && cVar2 == '\0') {
    bVar12 = *(char *)(param_1 + 0xb3b) == '\0';
  }
  if (!bVar12) {
    *(undefined1 *)(param_1 + 0x935) = 0;
  }
  bVar11 = func_00556EAC(*piVar10,0x2b);
  if ((((bVar11) || (bVar11 = func_00556EAC(*piVar10,0x2c), bVar11)) ||
      (bVar11 = func_00556EAC(*piVar10,0x2f), bVar11)) ||
     (bVar11 = func_00556EAC(*piVar10,0x2e), bVar11)) {
    puVar6 = (uint *)func_0058A7D4();
    uVar7 = func_00111A64(puVar6);
    if (((uint)((ulonglong)uVar7 * 0x65 >> 0x20) < 8) &&
       (*(char *)(*(int *)(*(int *)(param_1 + 0x93c) + 4) + 0x62) != '\0')) {
      uVar7 = func_0055696C(*piVar10,0x2c);
      iVar5 = *(int *)(param_1 + 0xa00);
      if (uVar7 < 3) {
        if (0x400000 < iVar5 + 0xbfc00000U) goto LAB_002b9b30;
      }
      else if (0xc00000 < iVar5 + 0xbfc00000U) {
        if (0x41000000 < iVar5) {
          func_003B1110(*(int *)(*(int *)(param_1 + 0x93c) + 4));
        }
        goto LAB_002b9b30;
      }
      func_002B7CAC(param_1,2,0);
    }
  }
LAB_002b9b30:
  func_002B7E40(param_1);
  if (*(short *)(param_1 + 0xafc) != 0) {
    *(short *)(param_1 + 0xafc) = *(short *)(param_1 + 0xafc) + -1;
  }
  sVar1 = *(short *)(param_1 + 0xaf0);
  if (((sVar1 != 0) && (*(short *)(param_1 + 0xaf0) = sVar1 + -1, sVar1 == 1)) &&
     (*(char *)(param_1 + 0xbc8) == '\x01')) {
    *(undefined1 *)(param_1 + 0x936) = 1;
    piVar8 = *(int **)(*(int *)(param_1 + 0x93c) + 4);
    (**(code **)(*piVar8 + 0x138))(piVar8,0,1);
  }
  if (*(short *)(param_1 + 0xb04) != 0) {
    *(short *)(param_1 + 0xb04) = *(short *)(param_1 + 0xb04) + -1;
  }
  if (*(short *)(param_1 + 0xafe) != 0) {
    *(short *)(param_1 + 0xafe) = *(short *)(param_1 + 0xafe) + -1;
  }
  if (*(short *)(param_1 + 0xb02) != 0) {
    *(short *)(param_1 + 0xb02) = *(short *)(param_1 + 0xb02) + -1;
  }
  *(short *)(param_1 + 0xb00) = *(short *)(param_1 + 0xb00) + 1;
  if (*(short *)(param_1 + 0xaf8) != 0) {
    *(short *)(param_1 + 0xaf8) = *(short *)(param_1 + 0xaf8) + -1;
  }
  if (*(short *)(param_1 + 0xafa) != 0) {
    *(short *)(param_1 + 0xafa) = *(short *)(param_1 + 0xafa) + -1;
  }
  if (*(short *)(param_1 + 0xaf4) != 0) {
    *(short *)(param_1 + 0xaf4) = *(short *)(param_1 + 0xaf4) + -1;
  }
  if (*(short *)(param_1 + 0xaf6) != 0) {
    *(short *)(param_1 + 0xaf6) = *(short *)(param_1 + 0xaf6) + -1;
  }
  local_40 = 0;
  func_002D3CD4(param_1 + 0xa6c,param_1 + 0xaa8,0,0);
  func_00396C1C((int *)(param_1 + 0xb48));
  if (*(int *)(param_1 + 0xe04) == 0) {
    uVar7 = *(uint *)(param_1 + 0x59c) | 0x80;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x59c) & 0xffffff7f;
  }
  *(uint *)(param_1 + 0x59c) = uVar7;
  iVar5 = DAT_002b9e6c;
  if (*(char *)(param_1 + 0xb42) != '\0') {
    if (*(float *)(param_1 + 0xa7c) <= ALBW_AS_F32(uVar17)) {
      *(undefined1 *)(param_1 + 0xb42) = 0;
      *(undefined1 *)(param_1 + 0xaa5) = 0;
    }
    local_3c = s_SE_PL_INVINCIBILITY_002b9e58;
    local_40 = iVar5;
    func_004EA17C(*DAT_002b9e70,&local_40,(undefined4 *)0x0);
  }
  bVar11 = func_00556EAC(*piVar10,0x56);
  if ((bVar11) || (bVar11 = func_00556EAC(*piVar10,0x57), bVar11)) {
    *(undefined1 *)(param_1 + 0xb40) = 1;
    *(undefined1 *)(param_1 + 0xb41) = 1;
    *(int *)(param_1 + 0xa04) = (int)((ulonglong)uVar17 >> 0x20);
  }
  bVar11 = func_00556EAC(*piVar10,0x38);
  if ((bVar11) || (bVar11 = func_00556EAC(*piVar10,0x37), bVar11)) {
    iVar9 = *(int *)(param_1 + 0xa00);
    bVar11 = SBORROW4(iVar9,DAT_002b9e74);
    iVar5 = iVar9 - DAT_002b9e74;
    if (DAT_002b9e74 <= iVar9) {
      bVar11 = SBORROW4(DAT_002b9e74 + 0x800000,iVar9);
      iVar5 = (DAT_002b9e74 + 0x800000) - iVar9;
    }
    if (iVar5 < 0 == bVar11) {
      *(undefined1 *)(param_1 + 0xb40) = 1;
      *(undefined1 *)(param_1 + 0xb41) = 1;
      *(int *)(param_1 + 0xa04) = (int)uVar17;
    }
  }
  uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (((*(char *)(*DAT_002b9e78 + 0x18) != '\a' || *(int *)(*DAT_002b9e78 + 0x1c) != 2) &&
      (fVar14 = *pfVar3 - *(float *)(param_1 + 0x3d0),
      fVar13 = *(float *)(param_1 + 0x9f0) - *(float *)(param_1 + 0x3d8),
      (int)ALBW_AS_U32((fVar14 * fVar14 + fVar13 * fVar13)) <= DAT_002b9e7c)) &&
     ((bVar11 = func_00556EAC(*piVar10,0x53), bVar11 ||
      (bVar11 = func_00556EAC(*piVar10,0x54), bVar11)))) {
    if (*(char *)(param_1 + 0xe00) == '\r') {
      *(undefined1 *)(param_1 + 0xb40) = 1;
      *(undefined1 *)(param_1 + 0xb41) = 1;
      *(undefined4 *)(param_1 + 0xa04) = uVar16;
    }
    else if (*(char *)(*(int *)(*(int *)(param_1 + 0x93c) + 4) + 0x62) != '\0') {
      puVar6 = (uint *)func_0058A7D4();
      uVar7 = func_00111A64(puVar6);
      if ((uint)((ulonglong)uVar7 * 0x65 >> 0x20) < 0x51) {
        func_002B7CAC(param_1,2,0);
      }
    }
  }
  if (((*(char *)(param_1 + 0xb42) == '\0') && (*(char *)(param_1 + 0xb40) != '\0')) &&
     (piVar10 = *(int **)(*(int *)(param_1 + 0x93c) + 4),
     piVar10 != (int *)(*(int *)(param_1 + 0x93c) + 8))) {
                    /* WARNING: Could not recover jumptable at 0x002b9e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*piVar10 + 0x110))(piVar10);
  }
  return 0;
}

