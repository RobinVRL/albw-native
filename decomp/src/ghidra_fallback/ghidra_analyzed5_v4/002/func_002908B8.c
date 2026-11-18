#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010DBBC(int param_1,int *param_2,int param_3,float fparam_0);
extern int func_0028C8EC(int param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern undefined4 func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_0052E920(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0053F7CC(int param_1);
extern int DAT_00290e90;
extern int DAT_00290e94;
extern float DAT_00290e98;
extern float DAT_00290e9c;
extern float DAT_00290ea0;
extern float DAT_00290ea4;
extern float DAT_00290ea8;
extern float DAT_00290eac;
extern float DAT_00290eb0;
extern float DAT_00290eb4;
extern int *DAT_00290eb8;
extern uint *DAT_00290ebc;
extern undefined4 *DAT_00290ec0;
extern undefined4 DAT_00290ec4;
extern int DAT_00290ec8;
extern uint DAT_00290ecc;

// USA 002908B8 <- EU 002908E0 (Ghidra, non-matching)
// GLOBAL DAT_00290e90 int
// GLOBAL DAT_00290e94 int
// GLOBAL DAT_00290e98 float
// GLOBAL DAT_00290e9c float
// GLOBAL DAT_00290ea0 float
// GLOBAL DAT_00290ea4 float
// GLOBAL DAT_00290ea8 float
// GLOBAL DAT_00290eac float
// GLOBAL DAT_00290eb0 float
// GLOBAL DAT_00290eb4 float
// GLOBAL DAT_00290eb8 int *
// GLOBAL DAT_00290ebc uint *
// GLOBAL DAT_00290ec0 undefined4 *
// GLOBAL DAT_00290ec4 undefined4
// GLOBAL DAT_00290ec8 int
// GLOBAL DAT_00290ecc uint

/* WARNING: Variable defined which should be unmapped: objStack_68 */

undefined4 func_002908B8(int param_1)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  short sVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  byte *pbVar13;
  float fVar14;
  float fVar15;
  longlong lVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define objStack_68 ((uint *)(albw_frame + 0x8))
  #define local_60 (*(short *)(albw_frame + 0x10))
  #define local_5e (*(short *)(albw_frame + 0x12))
  #define local_5c (*(byte *)(albw_frame + 0x14))
  #define local_5b (*(byte *)(albw_frame + 0x15))
  #define local_58 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  iVar6 = *(int *)(param_1 + 0x48);
  sVar3 = *(short *)(iVar6 + 4);
  uVar11 = (uint)sVar3;
  if (uVar11 == 0xfffffffe) {
    return 0;
  }
  local_60 = *(short *)(param_1 + 0x42);
  pbVar13 = (byte *)(DAT_00290e90 + uVar11 * 0x10);
  local_5c = *(byte *)(DAT_00290e90 + local_60 * 0x10);
  bVar2 = *pbVar13;
  local_58 = *(undefined4 *)(iVar6 + 8);
  uStack_54 = *(undefined4 *)(iVar6 + 0xc);
  uStack_50 = *(undefined4 *)(iVar6 + 0x10);
  uStack_4c = *(undefined4 *)(iVar6 + 0x14);
  uStack_48 = *(undefined4 *)(iVar6 + 0x18);
  uStack_44 = *(undefined4 *)(iVar6 + 0x1c);
  uStack_40 = *(undefined4 *)(iVar6 + 0x20);
  uStack_3c = *(undefined4 *)(iVar6 + 0x24);
  local_5e = sVar3;
  local_5b = bVar2;
  if (local_5c != bVar2) {
    (**(code **)(**(int **)(param_1 + 0x48) + 8))(*(int **)(param_1 + 0x48));
    piVar7 = (int *)(DAT_00290e94 + (uint)*pbVar13 * 8);
    piVar9 = (int *)(param_1 + (piVar7[1] >> 1));
    if ((piVar7[1] & 1U) == 0) {
      pcVar8 = (code *)*piVar7;
    }
    else {
      pcVar8 = *(code **)(*piVar9 + *piVar7);
    }
    (*pcVar8)(piVar9);
  }
  uVar5 = 0xff;
  if (uVar11 == 0x58 || uVar11 == 0x59) {
    if ((*(char *)(param_1 + 0xc9) == '\0') && (*(int *)(*(int *)(param_1 + 0x10) + 0x434) != 0)) {
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0x84) = 0xff;
    }
  }
  if (((*(char *)(param_1 + 0x7c) != '\0') || ((*(uint *)(pbVar13 + 4) & 0x200) != 0)) ||
     ((*(char *)(param_1 + 0xc9) != '\0' && (bVar2 == 0)))) goto LAB_00290b7c;
  if (((uVar11 < 2) && (*(int *)(*(int *)(param_1 + 0x10) + 0x620) == 0)) &&
     (*(int *)(*(int *)(param_1 + 0x10) + 0x434) != 0)) {
switchD_00290a30_caseD_2:
    *(undefined1 *)(param_1 + 0x84) = 0;
    goto switchD_00290a30_caseD_8;
  }
  if ((*(uint *)(pbVar13 + 4) & 0x400) == 0) goto switchD_00290a30_caseD_8;
  switch(bVar2) {
  case 2:
    goto switchD_00290a30_caseD_2;
  case 3:
    *(undefined1 *)(param_1 + 0x84) = 1;
    goto switchD_00290a30_caseD_8;
  case 4:
    *(undefined1 *)(param_1 + 0x84) = 8;
    goto switchD_00290a30_caseD_8;
  case 5:
    uVar5 = 4;
    break;
  case 6:
    uVar5 = 6;
    break;
  case 7:
    uVar5 = 10;
    break;
  default:
    goto switchD_00290a30_caseD_8;
  case 10:
    uVar5 = 3;
    break;
  case 0xb:
    uVar5 = 0xb;
    break;
  case 0xc:
    uVar5 = 7;
    break;
  case 0xd:
    uVar5 = 9;
    break;
  case 0x17:
    if (uVar11 == 0x9c) {
      uVar5 = 0xc;
    }
    else if (uVar11 == 0x9d) {
      uVar5 = 0xd;
    }
    else if (uVar11 == 0xa1 || uVar11 == 0xa2) {
      uVar5 = 0xf;
    }
    else if (uVar11 == 0xa4) {
      uVar5 = 2;
    }
    else if (uVar11 == 0xa6) {
      uVar5 = 0x10;
    }
    else if (uVar11 == 0xa7) {
      uVar5 = 0x11;
    }
    else {
      if (uVar11 != 0x9e && uVar11 != 0x9f) goto switchD_00290a30_caseD_8;
      switch(local_58) {
      case 0:
        uVar5 = 0x12;
        break;
      case 1:
        uVar5 = 0x13;
        break;
      case 2:
        uVar5 = 0x14;
        break;
      case 3:
        uVar5 = 0x15;
        break;
      case 4:
        uVar5 = 0x16;
        break;
      default:
        goto switchD_00290a30_caseD_8;
      }
    }
    break;
  case 0x18:
    uVar5 = *(undefined1 *)(param_1 + 0x160);
  }
LAB_00290b7c:
  *(undefined1 *)(param_1 + 0x84) = uVar5;
switchD_00290a30_caseD_8:
  if ((*(char *)(param_1 + 0xc5) != '\0' && uVar11 != 0) && (uVar11 != 1)) {
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  uVar12 = (uint)*(short *)(pbVar13 + 2);
  if (uVar12 == 0) {
    uVar12 = func_0053F7CC(param_1);
    if (uVar12 == 3) {
      *(undefined1 *)(param_1 + 0xc4) = 0;
    }
  }
  else if ((uVar12 == 0x12) && (*(short *)(*(int *)(param_1 + 0x18) + 0x52) == 0x12)) {
    uVar12 = 0xfffffffe;
  }
  fVar17 = DAT_00290e98;
  if (uVar11 == 1) {
    fVar15 = DAT_00290eb0;
    if (*(int *)(*(int *)(param_1 + 0x10) + 0x5b0) == 0x3f800000) {
      fVar15 = DAT_00290eb4;
    }
    fVar14 = *(float *)(*(int *)(param_1 + 0x14) + 0x24);
    fVar15 = fVar15 * fVar14;
    uVar12 = **(uint **)(*(int *)(param_1 + 0x48) + 0x44);
    if (uVar12 != 0) {
      piVar7 = (int *)func_0052FBA0(*DAT_00290eb8 + 0x3dbbc,uVar12);
      if (((*DAT_00290ebc & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00290ebc), iVar6 != 0)) {
        *DAT_00290ec0 = DAT_00290ec4;
      }
      if ((piVar7 == (int *)0x0) || (iVar6 = (**(code **)*piVar7)(piVar7,DAT_00290ec0), iVar6 == 0))
      {
        piVar7 = (int *)0x0;
      }
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 0x60))(piVar7);
        fVar15 = fVar14 * fVar15;
      }
    }
    if (DAT_00290ec8 < (int)ALBW_AS_U32(fVar15)) {
      uVar12 = 10;
    }
    else {
      uVar12 = 7;
    }
  }
  sVar4 = *(short *)(param_1 + 0x42);
  lVar16 = (ulonglong)(uint)ALBW_AS_U32(DAT_00290e9c) << 0x20;
  fVar15 = DAT_00290e9c;
  if ((*pbVar13 != 2 && sVar4 != 0x11) && (fVar15 = DAT_00290ea0, sVar4 != 0x84 && sVar4 != 0x88)) {
    fVar14 = DAT_00290ea4;
    if (uVar11 != 5) {
      fVar14 = fVar17;
    }
    fVar15 = fVar14;
    if (((uVar11 != 5 && uVar11 != 0x17) && (fVar15 = DAT_00290ea8, uVar11 != 0x4b)) &&
       (fVar15 = fVar14, uVar11 != 0x51)) {
      fVar15 = DAT_00290eac;
    }
  }
  bVar1 = fVar15 != DAT_00290e9c;
  if (*(char *)(param_1 + 0xc5) == '\0') {
    objStack_68[0] = (uint)fVar15;
    lVar16 = CONCAT44(DAT_00290e9c,objStack_68[0]);
    iVar6 = *(int *)(param_1 + 0x18);
    func_0028D580((uint *)(iVar6 + 0x3c),uVar12,1,bVar1,objStack_68[0]);
    objStack_68[0] = (uint)lVar16;
  }
  else {
    objStack_68[0] = (uint)fVar15;
    iVar6 = *(int *)(param_1 + 0x18);
  }
  piVar7 = (int *)(uint)bVar1;
  fVar17 = ALBW_AS_F32(((ulonglong)lVar16 >> 0x20));
  uVar10 = 1;
  func_0028D580((uint *)(iVar6 + 0x5c),uVar12,1,bVar1,objStack_68[0]);
  if (((*(uint *)(pbVar13 + 4) & 8) != 0) &&
     (iVar6 = func_0052E920(*(int *)(param_1 + 0x10),uVar11), iVar6 != 0)) {
    objStack_68[0] = 6;
    piVar7 = (int *)(uint)bVar1;
    uVar10 = 1;
    func_0028D580((uint *)(*(int *)(param_1 + 0x18) + 0x3c),0x59,1,bVar1,6);
  }
  func_0028C8EC(*(int *)(param_1 + 0x18),0,uVar10,piVar7);
  (**(code **)(**(int **)(param_1 + 0x48) + 0x10))(*(int **)(param_1 + 0x48),&local_60);
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar3;
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x344) != 0) {
    (**(code **)(*(int *)(pbVar13 + 8) + 8))(pbVar13 + 8);
    objStack_68[1] = *(uint *)(pbVar13 + 0xc);
    objStack_68[0] = DAT_00290ecc;
    func_0010DBBC(*(int *)(param_1 + 0x10) + 0x324,(int *)objStack_68,2,fVar17);
  }
  return 1;
}

