#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_00141D9C(int *param_1,int param_2);
extern int func_001424F0(int param_1,int param_2);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_001505D0(int param_1);
extern int func_001506F8(int param_1);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_002C2D00(int *param_1);
extern int func_0037C4E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_00435714(undefined4 *param_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EE484(undefined4 *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern undefined4 uRam00143064;
extern undefined4 uRam00143068;
extern int *DAT_00143024;
extern int DAT_00143028;
extern int DAT_0014302c;
extern int DAT_00143030;
extern undefined4 DAT_00143034;
extern float DAT_00143038;
extern float DAT_0014303c;
extern int *DAT_00143040;
extern int *DAT_00143044;
extern int *DAT_00143048;
extern float DAT_0014304c;
extern uint DAT_00143050;
extern uint DAT_00143054;
extern uint *DAT_00143058;
extern undefined4 *DAT_0014305c;
extern undefined4 DAT_00143060;

// USA 00142BE8 <- EU 00142BE8 (Ghidra, non-matching)
// GLOBAL DAT_00143024 int *
// GLOBAL DAT_00143028 int
// GLOBAL DAT_0014302c int
// GLOBAL DAT_00143030 int
// GLOBAL DAT_00143034 undefined4
// GLOBAL DAT_00143038 float
// GLOBAL DAT_0014303c float
// GLOBAL DAT_00143040 int *
// GLOBAL DAT_00143044 int *
// GLOBAL DAT_00143048 int *
// GLOBAL DAT_0014304c float
// GLOBAL DAT_00143050 uint
// GLOBAL DAT_00143054 uint
// GLOBAL DAT_00143058 uint *
// GLOBAL DAT_0014305c undefined4 *
// GLOBAL DAT_00143060 undefined4
// GLOBAL UNK_00143064 undefined4
// GLOBAL UNK_00143068 uint

/* WARNING: Variable defined which should be unmapped: objStack_78 */

int func_00142BE8(undefined4 *param_1,uint *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int unaff_r6;
  int iVar10;
  int iVar11;
  float fVar12;
  undefined4 uVar13;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_78 ((uint *)(albw_frame + 0x8))
  #define local_3c (*(undefined4 *)(albw_frame + 0x44))
  #define auStack_38 ((uint *)(albw_frame + 0x48))
  piVar5 = func_00150E40(param_1,param_2);
  piVar1 = DAT_00143024;
  piVar5[0x104] = DAT_00143028;
  iVar9 = *piVar1;
  iVar10 = piVar1[1];
  piVar5[0x105] = (int)(piVar5 + 0x103);
  piVar5[0x106] = iVar9;
  piVar5[0x107] = iVar10;
  iVar9 = DAT_0014302c;
  piVar5[0x103] = DAT_0014302c + 0xbc;
  piVar5[200] = iVar9 + 0x58;
  *piVar5 = iVar9;
  iVar9 = piVar1[2];
  iVar10 = piVar1[3];
  piVar5[0x109] = (int)piVar5;
  piVar5[0x10a] = iVar9;
  piVar5[0x10b] = iVar10;
  iVar9 = DAT_00143030;
  piVar5[0x108] = DAT_00143030;
  iVar10 = piVar1[4];
  iVar11 = piVar1[5];
  piVar5[0x10c] = iVar9;
  piVar5[0x10d] = (int)piVar5;
  piVar5[0x10e] = iVar10;
  piVar5[0x10f] = iVar11;
  iVar9 = func_0037C4E0(piVar5 + 0x110,piVar5 + 0xf4,0);
  *(undefined4 *)(iVar9 + 0x4c) = 0;
  *(undefined4 *)(iVar9 + 0x50) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x20);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = func_0015137C(puVar6,iVar9 + -0x440,0);
  }
  *(undefined4 **)(iVar9 + 0x54) = puVar7;
  local_3c = 6;
  piVar5 = func_00435714(&local_3c);
  *(int **)(iVar9 + 0x58) = piVar5;
  iVar9 = func_004EE484((undefined4 *)(iVar9 + 0x5c));
  *(undefined1 *)(iVar9 + 100) = 0;
  *(undefined4 *)(iVar9 + 0x68) = 0;
  *(undefined4 *)(iVar9 + 0x70) = 0;
  *(undefined4 *)(iVar9 + 0x74) = 0;
  *(undefined4 *)(iVar9 + 0x78) = 0;
  uVar13 = DAT_00143034;
  piVar5 = (int *)(iVar9 + -0x49c);
  *(undefined4 *)(iVar9 + 0x7c) = DAT_00143034;
  *(undefined4 *)(iVar9 + 0x80) = uVar13;
  *(undefined4 *)(iVar9 + 0x84) = uVar13;
  fparam_0_00 = DAT_00143038;
  *(undefined4 *)(iVar9 + 0x88) = uVar13;
  *(undefined4 *)(iVar9 + 0x8c) = uVar13;
  *(undefined4 *)(iVar9 + 0x90) = uVar13;
  *(undefined4 *)(iVar9 + 0x94) = uVar13;
  *(undefined4 *)(iVar9 + 0x98) = uVar13;
  *(undefined4 *)(iVar9 + 0x9c) = uVar13;
  fVar12 = DAT_0014303c;
  *(undefined4 *)(iVar9 + 0xa0) = uVar13;
  *(undefined4 *)(iVar9 + 0xa4) = uVar13;
  *(undefined4 *)(iVar9 + 0xa8) = uVar13;
  *(float *)(iVar9 + 0xec) = fparam_0_00;
  *(undefined4 *)(iVar9 + 0xf0) = uVar13;
  *(undefined1 *)(iVar9 + 0xf4) = 0;
  fparam_0 = fVar12;
  if (param_2[0x13] != 0) {
    puVar7 = (undefined4 *)func_0052FBA0(*DAT_00143040 + 0x3dbbc,param_2[0x13]);
    if (puVar7 != (undefined4 *)0x0) {
      unaff_r6 = puVar7[0xb4];
    }
    if (puVar7 != (undefined4 *)0x0 && unaff_r6 != 0) {
      if (*(int *)(unaff_r6 + 8) == *DAT_00143044) {
        iVar10 = func_0054DDF4((int)piVar5,0);
        *(int *)(iVar9 + -0xfc) = iVar10;
        *(int *)(iVar9 + -0xf8) = iVar10;
      }
      else if (*(int *)(unaff_r6 + 8) == *DAT_00143048) {
        iVar10 = func_0054DDF4((int)piVar5,1);
        *(int *)(iVar9 + -0xfc) = iVar10;
        *(int *)(iVar9 + -0xf8) = iVar10;
      }
      else {
        iVar10 = func_0054DDF4((int)piVar5,2);
        fVar12 = DAT_0014304c;
        *(int *)(iVar9 + -0xfc) = iVar10;
        *(int *)(iVar9 + -0xf8) = iVar10;
      }
      iVar10 = *(int *)(unaff_r6 + 0x1c8);
      if (iVar10 != 0) {
        if ((uint)(int)*(short *)((int)param_2 + 0x2a) < *(uint *)(iVar10 + 200)) {
          objStack_78[4] = *(uint *)(*(int *)(iVar10 + 0xd0) + *(short *)((int)param_2 + 0x2a) * 4);
        }
        else {
          objStack_78[4] = 0;
        }
        objStack_78[0] = DAT_00143054;
        objStack_78[1] = DAT_00143050;
        objStack_78[5] = 0;
        objStack_78[6] = 0;
        objStack_78[2] = DAT_00143054;
        objStack_78[3] = DAT_00143050;
        (*(undefined1 *)((char *)&objStack_78[0xe] + 0)) = 1;
        (*(undefined1 *)((char *)&objStack_78[7] + 0)) = 0;
        objStack_78[9] = 0;
        (*(undefined1 *)((char *)&objStack_78[7] + 1)) = 0;
        objStack_78[0xd] = 0;
        (*(undefined1 *)((char *)&objStack_78[0xe] + 1)) = 0xc4;
        objStack_78[0xc] = 0;
        objStack_78[8] = 0;
        objStack_78[0xb] = 0;
        objStack_78[10] = 0;
        piVar8 = func_002C2D00((int *)objStack_78);
        *(int **)(iVar9 + -0xc) = piVar8;
        if (piVar8 == (int *)0x0) goto LAB_0014306c;
        if (((*DAT_00143058 & 1) == 0) && (iVar10 = func_00100174((int *)DAT_00143058), iVar10 != 0)
           ) {
          *DAT_0014305c = DAT_00143060;
        }
        iVar10 = (**(code **)*puVar7)(puVar7,DAT_0014305c);
        if (iVar10 == 0) {
          puVar7 = (undefined4 *)0x0;
        }
        if (puVar7 != (undefined4 *)0x0) {
          iVar10 = func_001505D0((int)puVar7);
          func_004D0194(*(int *)(iVar9 + -0xc),iVar10);
          iVar10 = func_001506F8((int)puVar7);
          func_004D0268(*(int *)(iVar9 + -0xc),iVar10);
        }
      }
    }
  }
  iVar10 = *(int *)(iVar9 + -0xc);
  if (iVar10 != 0) {
    *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
    *(float *)(iVar10 + 0x74) = fVar12;
    *(float *)(iVar10 + 0x78) = fVar12;
    *(float *)(iVar10 + 0x7c) = fVar12;
    func_00151148(*(int *)(iVar9 + -8),1);
    func_004D80A4((float *)(iVar9 + -0xc0),*(uint *)(iVar9 + -0xb4),fparam_0_00);
    *(undefined4 *)(iVar9 + -0xbc) = uVar13;
    uVar2 = uRam00143064;
    iVar10 = *(int *)(iVar9 + -4);
    *(uint *)(iVar10 + 4) = param_2[1];
    *(uint *)(iVar10 + 8) = param_2[2];
    objStack_78[1] = iVar9 - 0x7c;
    *(uint *)(iVar10 + 0xc) = param_2[3];
    *(undefined4 *)(iVar10 + 0x58) = uVar2;
    iVar10 = piVar1[6];
    iVar11 = piVar1[7];
    *(int **)(iVar9 + -0x78) = piVar5;
    *(int *)(iVar9 + -0x74) = iVar10;
    *(int *)(iVar9 + -0x70) = iVar11;
    auStack_38[0] = *(uint *)(iVar9 + -0x1d0);
    objStack_78[0] = (uint)*(short *)(iVar9 + -0x448);
    objStack_78[2] = uRam00143068;
    uVar4 = objStack_78[2];
    (*(undefined2 *)((char *)&objStack_78[2] + 0)) = (undefined2)uRam00143068;
    uVar3 = (undefined2)objStack_78[2];
    objStack_78[2] = uVar4;
    func_0014EB8C(iVar9,*(undefined4 *)(iVar9 + -4),*(undefined2 **)(iVar9 + -0xfc),auStack_38,
                  *(short *)(iVar9 + -0x448),objStack_78[1],uVar3);
    func_004D80A4((float *)(iVar9 + 0x24),param_2[8],fparam_0);
    *(undefined4 *)(iVar9 + 0x28) = uVar13;
    *(int *)(iVar9 + -0xb0) = iVar9 + -0x6c;
    *(int *)(iVar9 + -0x10) = iVar9 + -0x8c;
    *(byte *)(iVar9 + -0x105) = *(byte *)(iVar9 + -0x105) | 1;
    func_001424F0((int)piVar5,0);
    func_00141D9C(piVar5,0);
    return (int)piVar5;
  }
LAB_0014306c:
  *(undefined1 *)(iVar9 + -0x1c5) = 1;
  return (int)piVar5;
}

