// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001E4D1C(ushort *param_1,int param_2,char param_3,float *param_4,int param_5);
extern int func_0023934C(int param_1);
extern int func_002AF82C(undefined4 param_1);
extern int func_002AF83C(undefined4 param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CE68C(int param_1,uint param_2,int param_3);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00556914(int param_1);
extern int func_00556B54(int param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00239150;
extern undefined4 DAT_00239154;
extern float DAT_00239158;
extern undefined4 DAT_0023915c;
extern int DAT_00239160;
extern uint DAT_00239164;
extern undefined4 DAT_0023932c;

// USA 00238DD4 <- EU 00238DD4 (Ghidra, non-matching)
// GLOBAL DAT_00239150 int *
// GLOBAL DAT_00239154 undefined4
// GLOBAL DAT_00239158 float
// GLOBAL DAT_0023915c undefined4
// GLOBAL DAT_00239160 int
// GLOBAL DAT_00239164 uint
// GLOBAL DAT_0023932c undefined4

/* WARNING: Variable defined which should be unmapped: objStack_90 */

undefined4 func_00238DD4(undefined1 *param_1,char *param_2,float *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  float *pfVar12;
  float *pfVar13;
  bool bVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_90 ((uint *)(albw_frame + 0x0))
  #define afStack_60 ((float *)(albw_frame + 0x30))
  objStack_90[0] = 1;
  iVar8 = func_001E4D1C((ushort *)(param_1 + 0x98),(int)*param_2,
                        (byte)((uint)*(undefined4 *)(*(int *)(param_1 + 0xcc) + 0x38) >> 0x1c),
                        param_3,1);
  piVar5 = DAT_00239150;
  if (iVar8 != 0) {
    bVar7 = func_00556B54(*DAT_00239150);
    if (!bVar7) {
      *param_1 = 2;
      return 0;
    }
    *(undefined4 *)(param_1 + 0x88) = 5;
    *param_1 = 1;
    return 0;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -1;
  }
  iVar8 = func_00556914(*piVar5);
  fVar15 = DAT_00239158;
  uVar10 = DAT_00239154;
  if (iVar8 == 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x44) = 1;
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x80) + 0x44) = 0;
  }
  uVar6 = DAT_0023915c;
  if (*(short *)(param_1 + 0x98) == 0) {
    if ((**(int **)(param_1 + 0xd0) != 0) && (*(int *)(param_1 + 0x88) == 0)) {
      pfVar12 = *(float **)(*piVar5 + 0x20);
      bVar7 = false;
      if (*pfVar12 == fVar15) {
        bVar7 = pfVar12[1] == fVar15;
      }
      bVar14 = false;
      if (bVar7) {
        bVar14 = pfVar12[2] == fVar15;
      }
      if (!bVar14) {
        *(undefined4 *)(param_1 + 0x88) = 0x14;
        *(undefined4 *)(param_1 + 100) = uVar10;
        param_1[0xd5] = 1;
      }
    }
  }
  else {
    param_1[0xd5] = 1;
    *(undefined4 *)(param_1 + 100) = uVar6;
    objStack_90[0] = (uint)ALBW_AS_U32(fVar15);
    func_00115C70((float *)objStack_90,*(float **)(*piVar5 + 0x1c),param_3);
    iVar8 = func_0068C690((float *)objStack_90);
    *(int *)(param_1 + 0x70) = iVar8;
  }
  switch(*param_2) {
  case '\x01':
  case '\r':
    *param_1 = 6;
    goto LAB_00238f88;
  case '\x02':
    func_004CE68C(*(int *)(param_1 + 0xc),0,*(int *)(param_1 + 0x9c));
    uVar10 = (**(code **)(**(int **)(param_1 + 0xc) + 0x10))(*(int **)(param_1 + 0xc),0xc5);
    puVar11 = (undefined1 *)func_002AF82C(uVar10);
    uVar1 = puVar11[3];
    uVar2 = puVar11[2];
    uVar3 = puVar11[1];
    uVar4 = *puVar11;
    iVar8 = *(int *)(param_1 + 0x9c);
    *(undefined1 *)(iVar8 + 0x3d) = 1;
    *(uint *)(iVar8 + 0x39) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
    puVar11 = (undefined1 *)func_002AF83C(iVar8);
    uVar1 = puVar11[2];
    uVar2 = puVar11[3];
    uVar3 = puVar11[1];
    uVar4 = *puVar11;
    iVar8 = *(int *)(param_1 + 0x9c);
    *(undefined1 *)(iVar8 + 0x42) = 1;
    *(uint *)(iVar8 + 0x3e) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar1,uVar2)));
    func_004CE68C(*(int *)(param_1 + 8),0,*(int *)(param_1 + 0xa0));
    uVar10 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),0xc5);
    puVar11 = (undefined1 *)func_002AF82C(uVar10);
    uVar1 = puVar11[3];
    uVar2 = puVar11[2];
    uVar3 = puVar11[1];
    uVar4 = *puVar11;
    iVar8 = *(int *)(param_1 + 0xa0);
    *(undefined1 *)(iVar8 + 0x3d) = 1;
    *(uint *)(iVar8 + 0x39) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
    puVar11 = (undefined1 *)func_002AF83C(iVar8);
    uVar10 = DAT_0023932c;
    uVar1 = puVar11[3];
    uVar2 = puVar11[2];
    uVar3 = puVar11[1];
    uVar4 = *puVar11;
    iVar8 = *(int *)(param_1 + 0xa0);
    *(undefined1 *)(iVar8 + 0x42) = 1;
    *(uint *)(iVar8 + 0x3e) = CONCAT13(uVar4,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
    *(undefined4 *)(param_1 + 0x90) = 0x78;
    *(undefined4 *)(param_1 + 0x94) = uVar10;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *param_1 = 4;
    break;
  case '\x06':
  case '\x0f':
    *param_1 = 2;
LAB_00238f88:
    param_1[0xd5] = 0;
    break;
  case '\a':
  case '\b':
  case '\t':
  case '\v':
  case '\f':
    if ((uint)(*(int *)(param_1 + 100) + DAT_00239160) < DAT_00239164) {
      if (*param_2 == '\x11') {
        if (*(int *)(param_1 + 0x88) != 0) break;
        pfVar12 = *(float **)(*piVar5 + 0x20);
        bVar7 = false;
        if (*pfVar12 == fVar15) {
          bVar7 = pfVar12[1] == fVar15;
        }
        bVar14 = false;
        if (bVar7) {
          bVar14 = pfVar12[2] == fVar15;
        }
        if (bVar14) break;
      }
      *(undefined4 *)(param_1 + 0x88) = 0x3c;
      param_1[0xd5] = 1;
      *(undefined4 *)(param_1 + 100) = uVar10;
      func_00115C70((float *)objStack_90,*(float **)(*piVar5 + 0x1c),(float *)(param_1 + 0x10));
      iVar8 = func_0068C690((float *)objStack_90);
      *(int *)(param_1 + 0x70) = iVar8;
    }
  }
  if (param_1[0xd5] == '\0') {
    return 0;
  }
  uVar9 = func_0023934C((int)param_1);
  bVar7 = uVar9 == 0;
  if (bVar7) {
    uVar9 = (uint)*(ushort *)(param_1 + 0x98);
  }
  if (bVar7 && uVar9 == 0) {
    param_1[0xd5] = 0;
  }
  iVar8 = *(int *)(param_1 + 0xc);
  pfVar12 = (float *)(iVar8 + 0x80);
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  iVar8 = *(int *)(param_1 + 8);
  pfVar13 = (float *)(iVar8 + 0x80);
  *(uint *)(iVar8 + 0x164) = *(uint *)(iVar8 + 0x164) | 0x40000000;
  func_004D8AEC(pfVar13,*(uint *)(param_1 + 0x70),param_3);
  func_004D8AEC(pfVar12,*(uint *)(param_1 + 0x70),param_3);
  func_00491E80((float *)objStack_90,*(uint *)(param_1 + 0x74),0,0);
  func_001157FC(pfVar13,pfVar13,(float *)objStack_90);
  func_00491E80(afStack_60,0,*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70),0);
  func_001157FC(pfVar13,pfVar13,afStack_60);
  func_00491E80((float *)objStack_90,*(uint *)(param_1 + 0x74),0,0);
  func_001157FC(pfVar12,pfVar12,(float *)objStack_90);
  func_00491E80(afStack_60,0,*(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x70),0);
  func_001157FC(pfVar12,pfVar12,afStack_60);
  func_004CEAF0(*(int *)(param_1 + 0xc));
  return func_004CEAF0(*(int *)(param_1 + 8));
}

