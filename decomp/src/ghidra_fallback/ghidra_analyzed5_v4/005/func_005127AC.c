#include "ghidra_types.h"

extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004A9120(undefined4 param_1,int param_2);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_00511CC0(int param_1);
extern int func_00521028(int param_1);
extern int func_0054D89C(int param_1,uint param_2);
extern int func_0054D964(int param_1,uint param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int iRam00512b24;
extern int DAT_00512ae8;
extern undefined4 *DAT_00512aec;
extern undefined4 *DAT_00512af0;
extern undefined4 DAT_00512af4;
extern float DAT_00512af8;
extern float DAT_00512afc;
extern float DAT_00512b00;
extern uint DAT_00512b04;
extern int *DAT_00512b08;
extern undefined4 *DAT_00512b0c;
extern char s_SE_Icicle_APPEAR_00512b10[];

// USA 005127AC <- EU 00512784 (Ghidra, non-matching)
// GLOBAL DAT_00512ae8 int
// GLOBAL DAT_00512aec undefined4 *
// GLOBAL DAT_00512af0 undefined4 *
// GLOBAL DAT_00512af4 undefined4
// GLOBAL DAT_00512af8 float
// GLOBAL DAT_00512afc float
// GLOBAL DAT_00512b00 float
// GLOBAL DAT_00512b04 uint
// GLOBAL DAT_00512b08 int *
// GLOBAL DAT_00512b0c undefined4 *
// GLOBAL UNK_00512b24 int
// GLOBAL s_SE_Icicle_APPEAR_00512b10 string

/* WARNING: Variable defined which should be unmapped: objStack_58 */

int * func_005127AC(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  undefined2 uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_58 ((uint *)(albw_frame + 0x8))
  #define local_44 (*(uint *)(albw_frame + 0x1c))
  #define uStack_40 (*(uint *)(albw_frame + 0x20))
  #define iStack_30 (*(int *)(albw_frame + 0x30))
  #define pcStack_2c (*(char * *)(albw_frame + 0x34))
  #define local_28 ((uint *)(albw_frame + 0x38))
  piVar4 = func_00150E40(param_1,param_2);
  iVar5 = DAT_00512ae8 + 0x54;
  *piVar4 = DAT_00512ae8;
  piVar4[200] = iVar5;
  iVar5 = func_0054D964((int)piVar4,0);
  piVar4[0x104] = iVar5;
  iVar5 = func_004EE484(piVar4 + 0x105);
  iVar6 = iVar5 + -0x414;
  *(undefined1 *)(iVar5 + 0x65) = 0;
  *(int *)(iVar5 + 0x78) = iVar6;
  *(int *)(iVar5 + 0x7c) = iVar5 + 0xb8;
  *(int *)(iVar5 + 0x80) = iVar5 + -0x38;
  *(undefined1 *)(iVar5 + 0x84) = 0;
  *(undefined1 *)(iVar5 + 0x85) = 0;
  *(undefined1 *)(iVar5 + 0x86) = 0;
  *(undefined1 *)(iVar5 + 0x87) = 0;
  *(undefined1 *)(iVar5 + 0x88) = 1;
  *(undefined4 *)(iVar5 + 0x90) = 0;
  puVar7 = DAT_00512aec;
  *(undefined1 *)(iVar5 + 0x9c) = 0;
  *(undefined4 *)(iVar5 + 0xa4) = 0;
  *(undefined1 *)(iVar5 + 0xa9) = 0;
  *(undefined1 *)(iVar5 + 0xaa) = 0;
  uVar11 = *puVar7;
  uVar12 = puVar7[1];
  *(undefined4 *)(iVar5 + 0xc0) = puVar7[2];
  puVar7 = DAT_00512af0;
  *(undefined4 *)(iVar5 + 0xb8) = uVar11;
  *(undefined4 *)(iVar5 + 0xbc) = uVar12;
  uVar11 = *puVar7;
  uVar12 = puVar7[1];
  *(int *)(iVar5 + 200) = iVar6;
  *(undefined4 *)(iVar5 + 0xcc) = uVar11;
  *(undefined4 *)(iVar5 + 0xd0) = uVar12;
  uVar11 = DAT_00512af4;
  *(undefined4 *)(iVar5 + 0xc4) = DAT_00512af4;
  uVar12 = puVar7[2];
  uVar13 = puVar7[3];
  *(undefined4 *)(iVar5 + 0xd4) = uVar11;
  *(int *)(iVar5 + 0xd8) = iVar6;
  *(undefined4 *)(iVar5 + 0xdc) = uVar12;
  *(undefined4 *)(iVar5 + 0xe0) = uVar13;
  uVar12 = puVar7[4];
  *(undefined4 *)(iVar5 + 0xf0) = puVar7[5];
  *(undefined4 *)(iVar5 + 0xe4) = uVar11;
  *(int *)(iVar5 + 0xe8) = iVar6;
  *(undefined4 *)(iVar5 + 0xec) = uVar12;
  puVar7 = func_0034CAA0((undefined4 *)(iVar5 + 0xf4));
  fVar1 = DAT_00512afc;
  fVar15 = DAT_00512af8;
  piVar4 = puVar7 + -0x142;
  *(bool *)(puVar7 + -0x24) = ALBW_AS_F32(param_2[0x11]) != DAT_00512af8;
  iVar5 = puVar7[-0x3e];
  *(undefined4 *)(iVar5 + 4) = puVar7[-0x4e];
  *(undefined4 *)(iVar5 + 8) = puVar7[-0x4d];
  *(undefined4 *)(iVar5 + 0xc) = puVar7[-0x4c];
  iVar5 = puVar7[-0x3e];
  *(uint *)(iVar5 + 0x58) = param_2[4];
  *(uint *)(iVar5 + 0x5c) = param_2[5];
  *(uint *)(iVar5 + 0x60) = param_2[6];
  *(undefined4 *)(puVar7[-0x3e] + 0x58) = *(undefined4 *)(puVar7[-0x3e] + 0x60);
  iVar5 = puVar7[-0x3e];
  *(float *)(iVar5 + 0x5c) = *(float *)(iVar5 + 0x5c) + fVar1;
  fVar1 = DAT_00512b00;
  puVar7[-0x12] = param_2[4];
  puVar7[-0x11] = param_2[5];
  puVar7[-0x10] = param_2[6];
  puVar7[-0x17] = puVar7[-0x12];
  fVar14 = ALBW_AS_F32(puVar7[-0x12]);
  puVar7[-0x12] = ALBW_AS_U32(fVar14 * fVar1);
  puVar7[-0x10] = ALBW_AS_U32(fVar14 * fVar1);
  objStack_58[1] = 0;
  objStack_58[0] = 1;
  objStack_58[2] = 0;
  uVar11 = func_0014E428((int)piVar4,0,0,0,1,0,0);
  puVar7[-0x3f] = uVar11;
  puVar7[-0x39] = puVar7[-0x3e];
  local_28[0] = puVar7[-0x8f];
  puVar8 = puVar7 + -0x3d;
  func_004EDEA0((int)puVar8,local_28);
  puVar9 = (undefined2 *)func_0054DDF4((int)piVar4,(uint)(*(char *)(puVar7 + -0x24) != '\0'));
  local_44 = puVar7[-0x8f];
  objStack_58[0] = (uint)*(short *)(puVar7 + -0x12d);
  objStack_58[1] = (uint)(puVar7 + -8);
  objStack_58[2] = DAT_00512b04;
  uVar3 = objStack_58[2];
  (*(undefined2 *)((char *)&objStack_58[2] + 0)) = (undefined2)DAT_00512b04;
  uVar2 = (undefined2)objStack_58[2];
  objStack_58[2] = uVar3;
  func_0014EB8C((int)puVar8,puVar7[-0x3e],puVar9,&local_44,*(short *)(puVar7 + -0x12d),
                objStack_58[1],uVar2);
  if (*(char *)(*DAT_00512b08 + 0x18) == '\a' || *(char *)(*DAT_00512b08 + 0x18) == '%') {
    *(undefined2 *)(puVar7 + -0x31) = 4;
  }
  func_004A9120(*DAT_00512b0c,(int)puVar8);
  *(char *)(puVar7 + -0x13) = (char)puVar9[2];
  iVar5 = func_0054DDF4((int)piVar4,(uint)(*(char *)(puVar7 + -0x24) != '\0'));
  puVar7[-0x5a] = iVar5;
  puVar7[-0x59] = iVar5;
  puVar7[-0x1a] = puVar7[-0x4d];
  puVar7[-0x4b] = ALBW_AS_U32(fVar15);
  puVar7[-0x4a] = ALBW_AS_U32(fVar15);
  puVar7[-0x49] = ALBW_AS_U32(fVar15);
  iVar5 = func_0054D89C((int)piVar4,0);
  puVar7[-0x14] = iVar5;
  func_00151148(iVar5,0);
  piVar10 = (int *)func_00521028((int)piVar4);
  (**(code **)(*piVar10 + 8))(piVar10);
  func_003529A0(objStack_58,piVar10[1],puVar7 + -0x7a);
  uStack_40 = (uint)(*(char *)(puVar7 + -0x24) != '\0');
  func_002C41BC(puVar7 + -0x7a,objStack_58,0);
  func_00511CC0((int)piVar4);
  pcStack_2c = s_SE_Icicle_APPEAR_00512b10;
  iStack_30 = iRam00512b24;
  func_00150A84(piVar4,&iStack_30,0);
  return piVar4;
}

