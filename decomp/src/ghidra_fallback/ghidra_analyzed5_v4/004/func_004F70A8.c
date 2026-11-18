// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_002B2018(int *param_1);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004F499C(int param_1,int param_2);
extern int func_004F6B28(int param_1);
extern int func_004F8660(int *param_1,int param_2,int param_3,int param_4);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern int func_004FBD44(undefined4 *param_1,uint *param_2,int param_3,int param_4);
extern int func_00520EE4(int param_1);
extern int func_005210AC();
extern int func_00542B24(int param_1);
extern float func_00581B58(int param_1,int param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_004f75fc;
extern float DAT_004f7600;
extern float DAT_004f7604;
extern undefined4 *DAT_004f7608;
extern int DAT_004f760c;
extern int *DAT_004f7610;
extern int *DAT_004f7614;

// USA 004F70A8 <- EU 004F7080 (Ghidra, non-matching)
// GLOBAL DAT_004f75fc int *
// GLOBAL DAT_004f7600 float
// GLOBAL DAT_004f7604 float
// GLOBAL DAT_004f7608 undefined4 *
// GLOBAL DAT_004f760c int
// GLOBAL DAT_004f7610 int *
// GLOBAL DAT_004f7614 int *

/* WARNING: Variable defined which should be unmapped: objStack_28 */

undefined4 func_004F70A8(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  short sVar9;
  int *piVar10;
  ushort *puVar11;
  uint in_fpscr;
  float in_s0;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  *(undefined1 *)((int)param_1 + 0x656) = *(undefined1 *)((int)param_1 + 0x657);
  *(undefined1 *)((int)param_1 + 0x657) = 0;
  func_004F6B28((int)param_1);
  piVar3 = DAT_004f75fc;
  if ((param_1[0x167] & 0x3000U) != 0) {
    if (((*DAT_004f75fc == 0) || (2 < (int)*(char *)(*DAT_004f75fc + 0x18) - 0x18U)) &&
       ((char)param_1[0x137] != '\0' && (char)param_1[0x137] != '\t')) {
      func_004F499C((int)param_1,~((uint)param_1[0x167] >> 0xd) & 1);
      return 0;
    }
    func_004F499C((int)param_1,0);
    return 0;
  }
  func_0034CA24((undefined4 *)param_1[0x10f]);
  bVar4 = false;
  iVar2 = param_1[0x142];
  uVar6 = param_1[0x168];
  if ((uVar6 & 0x180000) != 0) {
    param_1[0x168] = uVar6 & 0xffe7ffff;
    if ((((param_1[0x167] & 0x80U) != 0) || (*(char *)(param_1[0x144] + 4) != '\0')) &&
       ((param_1[0xe8] != 0 && (uVar1 = *(ushort *)(param_1[0xe8] + 0x2e), (uVar1 & 0xff) != 0)))) {
      func_004FBD44(param_1,(uint *)param_1[0x10f],(uint)((uVar1 & 0xff) == 2),
                    (uVar6 & 0x100000) >> 0x14);
      bVar4 = true;
      *(undefined1 *)((int)param_1 + 0x4b5) = 0;
      goto LAB_004f7300;
    }
  }
  *(undefined1 *)((int)param_1 + 0x4b5) = 0;
  if (((char)param_1[0x227] == '\0') &&
     (((((param_1[0x167] & 0x80U) != 0 && (*(char *)(param_1[0x144] + 4) == '\0')) &&
       ((uint)param_1[0x19a] <= (uint)param_1[0x199])) ||
      (uVar6 = func_00542B24(param_1[0x144]), uVar6 != 0)))) {
    if ((param_1[0x168] & 8U) == 0) {
      objStack_28[1] = param_1[0xe8];
      *(undefined1 *)(param_1 + 0x12d) = 0;
      param_1[300] = objStack_28[1];
      objStack_28[0] = param_1[0x111];
      func_0014E2A0((int)param_1,param_1[0x10c],param_1[0x110],param_1[0x161],objStack_28[0],
                    objStack_28[1]);
      if ((*(int *)param_1[0x10f] == 0) && (param_1[0x10d] != 0)) {
        objStack_28[1] = param_1[299];
        objStack_28[0] = param_1[0x111];
        if (objStack_28[1] == 0) {
          objStack_28[1] = param_1[0xe8];
        }
        param_1[300] = objStack_28[1];
        *(undefined1 *)(param_1 + 0x12d) = 1;
        func_0014E2A0((int)param_1,param_1[0x10d],param_1[0x110],param_1[0x161],objStack_28[0],
                      objStack_28[1]);
      }
    }
    else {
      if (param_1[0x10d] != 0) {
        objStack_28[1] = param_1[299];
        objStack_28[0] = param_1[0x111];
        if (objStack_28[1] == 0) {
          objStack_28[1] = param_1[0xe8];
        }
        param_1[300] = objStack_28[1];
        *(undefined1 *)(param_1 + 0x12d) = 1;
        func_0014E2A0((int)param_1,param_1[0x10d],param_1[0x110],param_1[0x161],objStack_28[0],
                      objStack_28[1]);
      }
      if (*(int *)param_1[0x10f] == 0) {
        objStack_28[1] = param_1[0xe8];
        objStack_28[0] = param_1[0x111];
        *(undefined1 *)(param_1 + 0x12d) = 0;
        param_1[300] = objStack_28[1];
        func_0014E2A0((int)param_1,param_1[0x10c],param_1[0x110],param_1[0x161],objStack_28[0],
                      objStack_28[1]);
      }
    }
    bVar4 = true;
  }
LAB_004f7300:
  if ((short)param_1[0x142] < 1) {
    puVar7 = (undefined4 *)param_1[0x10e];
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = 0;
      in_s0 = DAT_004f7600;
      puVar7[1] = ALBW_AS_U32(DAT_004f7600);
    }
    param_1[0x168] = param_1[0x168] & 0xfdffffff;
  }
  if ((bVar4) && (piVar10 = (int *)param_1[0x10f], *piVar10 != 0)) {
    if (((param_1[0x167] & 0x20000000U) != 0) &&
       (((uVar6 = (uint)*(char *)((int)piVar10 + 0x21), uVar6 == 9 || uVar6 == 10 &&
         (param_1[0xe8] != 0)) && (uVar6 < 0x13)))) {
      puVar11 = (ushort *)(param_1[0xe8] + 0xe);
      if (uVar6 < 0x12) {
        puVar11 = puVar11 + uVar6;
      }
      if ((*puVar11 & 0xff) == 2) {
        *(short *)(piVar10 + 0xc) = (short)piVar10[0xc] + 4;
      }
    }
    uVar1 = *(ushort *)(param_1[0x10f] + 0x30);
    if (uVar1 != 0) {
      (**(code **)(*param_1 + 0x54))(param_1);
      fVar12 = (float)VectorUnsignedToFloat((uint)uVar1,(byte)(in_fpscr >> 0x15) & 3);
      uVar6 = VectorFloatToUnsigned(in_s0 * fVar12,3);
      sVar5 = (short)uVar6;
      if (((uVar6 & 0xffff) == 0) && (in_s0 * fVar12 != DAT_004f7604)) {
        sVar5 = 1;
      }
      *(short *)(param_1[0x10f] + 0x30) = sVar5;
      sVar9 = (short)param_1[0x142];
      sVar5 = sVar9 - sVar5;
      if (sVar5 < -0x40) {
        sVar9 = -0x40;
      }
      *(short *)(param_1 + 0x142) = sVar5;
      if (sVar5 < -0x40) {
        *(short *)(param_1 + 0x142) = sVar9;
      }
    }
  }
  iVar8 = *piVar3;
  if (((iVar8 == 0) || (*(char *)(iVar8 + 0x18) != '\t')) || (*(int *)(iVar8 + 0x1c) != 2)) {
    param_1[0x168] = param_1[0x168] & 0xffffffbf;
    iVar8 = func_005210AC((int)param_1,(int *)objStack_28);
    if (((iVar8 == 0) && (*(char *)(param_1[0x144] + 4) == '\0')) &&
       (fVar12 = func_00581B58(*DAT_004f7608,(int)(short)param_1[0x15],objStack_28[0]),
       DAT_004f760c < (int)ALBW_AS_U32(fVar12))) {
      param_1[0x168] = param_1[0x168] | 0x40;
    }
  }
  if ((*(char *)(param_1[0x144] + 4) == '\0') && (0 < (short)param_1[0x142])) {
    if ((param_1[0x169] & 0x40U) == 0) {
      iVar8 = func_00520EE4((int)param_1);
      if (((iVar8 != 0) && ((char)param_1[0x1ff] == '\0')) &&
         ((iVar8 = func_00588BE4((int)param_1), iVar8 != *DAT_004f7610 &&
          ((iVar8 = func_00588BE4((int)param_1), iVar8 != *DAT_004f7614 &&
           (*(undefined1 *)(param_1 + 0x137) = 0, (param_1[0x167] & 0x3000U) == 0)))))) {
        *(undefined1 *)(param_1 + 0x1e0) = 0xff;
        func_004F8660(param_1,0,0,0);
        param_1[0x167] = param_1[0x167] | 0x2000;
        *(undefined2 *)(param_1 + 0x142) = 0;
        return 0;
      }
    }
    else if ((param_1[0x167] & 0x3000U) == 0) {
      *(undefined1 *)(param_1 + 0x1e0) = 0xff;
      func_004F8660(param_1,0,0,0);
      param_1[0x167] = param_1[0x167] | 0x2000;
      return 0;
    }
  }
  if (0 < (short)iVar2) {
    func_004F8998(param_1,1,(char *)0x0);
  }
  bVar4 = func_002B2018((int *)param_1[0x144]);
  if ((((bVar4) || ((param_1[0x167] & 0x4000U) != 0)) || ((param_1[0x168] & 0x10000000U) != 0)) &&
     ((param_1[0x167] & 0x8000U) != 0)) {
    *(undefined1 *)((int)param_1 + 0x657) = 1;
  }
  return 1;
}

