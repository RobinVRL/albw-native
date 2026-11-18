#include "ghidra_types.h"

extern int func_0014D9B4(undefined4 *param_1,float fparam_0);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004356B4(int *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_00521028(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0054D884(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int DAT_001da198;
extern uint DAT_001da19c;
extern int DAT_001da1a0;
extern float DAT_001da1a4;
extern float DAT_001da1a8;
extern int DAT_001da1ac;
extern int DAT_001da1b0;
extern int *DAT_001da1b4;
extern int *DAT_001da1b8;
extern int *DAT_001da1bc;
extern int *DAT_001da1c0;

// USA 001D9E98 <- EU 001D9E98 (Ghidra, non-matching)
// GLOBAL DAT_001da198 int
// GLOBAL DAT_001da19c uint
// GLOBAL DAT_001da1a0 int
// GLOBAL DAT_001da1a4 float
// GLOBAL DAT_001da1a8 float
// GLOBAL DAT_001da1ac int
// GLOBAL DAT_001da1b0 int
// GLOBAL DAT_001da1b4 int *
// GLOBAL DAT_001da1b8 int *
// GLOBAL DAT_001da1bc int *
// GLOBAL DAT_001da1c0 int *

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int func_001D9E98(undefined4 *param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  undefined2 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint in_fpscr;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_34 ((uint *)(albw_frame + 0x2c))
  piVar4 = func_00150E40(param_1,param_2);
  iVar7 = DAT_001da1a0;
  uVar2 = DAT_001da19c;
  iVar5 = DAT_001da198;
  *piVar4 = DAT_001da198;
  piVar4[200] = iVar5 + 0x5c;
  piVar4[0x104] = uVar2;
  piVar4[0x105] = iVar7;
  piVar4[0x103] = 0;
  iVar5 = DAT_001da1ac;
  fVar13 = DAT_001da1a8;
  fVar14 = DAT_001da1a4;
  piVar4[0x106] = (int)ALBW_AS_U32(DAT_001da1a4);
  iVar7 = DAT_001da1b0;
  piVar4[0x107] = iVar5;
  piVar4[0x108] = (int)ALBW_AS_U32(fVar13);
  piVar4[0x109] = iVar7;
  piVar4[0x10d] = piVar4[0xf4];
  piVar4[0x10e] = piVar4[0xf5];
  piVar4[0x10f] = piVar4[0xf6];
  fVar12 = func_0054DE3C(piVar4,0,1);
  piVar4[0x110] = (int)ALBW_AS_U32(fVar12);
  iVar5 = func_004EE484(piVar4 + 0x112);
  puVar6 = func_0014D9B4((undefined4 *)(iVar5 + 0x94),fVar13);
  puVar6[2] = 0;
  *(undefined1 *)(puVar6 + 3) = 0;
  uVar11 = in_fpscr & 0xfffffff | (uint)(ALBW_AS_F32(param_2[0x11]) == fVar13) << 0x1e;
  puVar10 = puVar6 + -0x137;
  bVar1 = !SUB41(uVar11 >> 0x1e,0);
  *(bool *)(puVar6 + 3) = bVar1;
  iVar5 = func_0054D964((int)puVar10,(uint)bVar1);
  puVar6[-0x26] = iVar5;
  iVar5 = func_0054D884(puVar6[-0x83] + 0x18,(uint)(*(char *)(puVar6 + 3) != '\0'));
  uVar8 = *(undefined4 *)(iVar5 + 4);
  uVar9 = *(undefined4 *)(iVar5 + 8);
  puVar6[-0x2b] = *(undefined4 *)(iVar5 + 0xc);
  puVar6[-0x2d] = uVar8;
  puVar6[-0x2c] = uVar9;
  puVar6[-0x29] = ALBW_AS_U32(ALBW_AS_F32(puVar6[-0x29]) + ALBW_AS_F32(puVar6[-0x27]));
  iVar5 = puVar6[-0x26];
  *(undefined4 *)(iVar5 + 4) = puVar6[-0x2a];
  *(undefined4 *)(iVar5 + 8) = puVar6[-0x29];
  *(undefined4 *)(iVar5 + 0xc) = puVar6[-0x28];
  func_004356B4((int *)puVar6[-0x26]);
  puVar6[-0xc] = ALBW_AS_U32(fVar14);
  puVar6[-0xb] = ALBW_AS_U32(fVar13);
  puVar6[-10] = ALBW_AS_U32(fVar13);
  puVar6[-8] = ALBW_AS_U32(fVar13);
  puVar6[-7] = ALBW_AS_U32(fVar14);
  puVar6[-6] = ALBW_AS_U32(fVar13);
  puVar6[-4] = ALBW_AS_U32(fVar13);
  puVar6[-3] = ALBW_AS_U32(fVar13);
  puVar6[-2] = ALBW_AS_U32(fVar14);
  puVar6[-9] = puVar6[-0x2a];
  puVar6[-5] = puVar6[-0x29];
  puVar6[-1] = puVar6[-0x28];
  local_34[0] = puVar6[-0x84];
  objStack_58[0] = (uint)*(short *)(puVar6 + -0x122);
  objStack_58[1] = 0;
  objStack_58[2] = uVar2;
  (*(undefined2 *)((char *)&objStack_58[2] + 0)) = (undefined2)uVar2;
  uVar3 = (undefined2)objStack_58[2];
  objStack_58[2] = uVar2;
  func_0014EB8C((int)(puVar6 + -0x25),puVar6[-0x26],(undefined2 *)puVar6[-0x4f],local_34,
                *(short *)(puVar6 + -0x122),0,uVar3);
  iVar5 = 0x1a;
  if (param_2[0x13] == 0) {
    uVar8 = 0;
    if (*(char *)(puVar6 + 3) != '\0') {
      uVar8 = 4;
    }
  }
  else {
    iVar7 = func_0052FBA0(*DAT_001da1b4 + 0x3dbbc,param_2[0x13]);
    if (iVar7 == 0) goto LAB_001da0f0;
    iVar7 = func_00588BE4(iVar7);
    if (iVar7 == *DAT_001da1b8) {
      if (*(char *)(puVar6 + 3) == '\0') {
        uVar8 = 1;
      }
      else {
        uVar8 = 5;
      }
    }
    else if (iVar7 == *DAT_001da1bc) {
      uVar8 = 2;
      iVar5 = 10;
    }
    else {
      if (iVar7 != *DAT_001da1c0) goto LAB_001da0f0;
      uVar8 = 3;
    }
  }
  puVar6[2] = uVar8;
LAB_001da0f0:
  piVar4 = (int *)func_00521028((int)puVar10);
  (**(code **)(*piVar4 + 8))(piVar4);
  func_003529A0(objStack_58,piVar4[1],puVar6 + -0x6f);
  func_002C41BC(puVar6 + -0x6f,objStack_58,0);
  puVar6[2] = 0xffffffff;
  puVar6[-0x33] = iVar5;
  if (iVar5 == 0) {
    puVar6[-0x32] = ALBW_AS_U32(fVar13);
  }
  else {
    fVar13 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar11 >> 0x15) & 3);
    puVar6[-0x32] = ALBW_AS_U32(fVar14 / fVar13);
  }
  puVar6[-0x34] = 0;
  puVar6[-0x7f] = puVar6[-0x7f] | 2;
  return (int)puVar10;
}

