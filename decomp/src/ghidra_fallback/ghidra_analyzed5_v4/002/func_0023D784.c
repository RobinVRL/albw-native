#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0023D3A0(int param_1);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_004EE484(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int DAT_0023daec;
extern undefined4 *DAT_0023daf0;
extern undefined4 DAT_0023daf4;
extern undefined4 DAT_0023daf8;
extern undefined4 DAT_0023dafc;
extern int *DAT_0023db00;
extern undefined4 DAT_0023db04;
extern undefined4 DAT_0023db08;
extern undefined4 DAT_0023db0c;
extern int *DAT_0023db10;
extern uint DAT_0023db14;

// USA 0023D784 <- EU 0023D784 (Ghidra, non-matching)
// GLOBAL DAT_0023daec int
// GLOBAL DAT_0023daf0 undefined4 *
// GLOBAL DAT_0023daf4 undefined4
// GLOBAL DAT_0023daf8 undefined4
// GLOBAL DAT_0023dafc undefined4
// GLOBAL DAT_0023db00 int *
// GLOBAL DAT_0023db04 undefined4
// GLOBAL DAT_0023db08 undefined4
// GLOBAL DAT_0023db0c undefined4
// GLOBAL DAT_0023db10 int *
// GLOBAL DAT_0023db14 uint

/* WARNING: Variable defined which should be unmapped: objStack_88 */

int func_0023D784(undefined4 *param_1,uint *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_7c (*(uint *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define local_68 (*(undefined4 *)(albw_frame + 0x28))
  #define local_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x60))
  piVar3 = func_00150E40(param_1,param_2);
  iVar6 = DAT_0023daec;
  piVar3[200] = DAT_0023daec + 0x54;
  *piVar3 = iVar6;
  piVar3[0x103] = 0;
  piVar3[0x104] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_004EDC9C(puVar4);
  }
  piVar3[0x105] = (int)puVar5;
  iVar6 = func_004EE484(piVar3 + 0x106);
  iVar10 = iVar6 + -0x418;
  iVar7 = func_0054D964(iVar10,0);
  *(int *)(iVar6 + 100) = iVar7;
  piVar3 = (int *)(iVar6 + 100);
  puVar4 = (undefined4 *)func_0010BAB4(0x48);
  puVar5 = (undefined4 *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = func_0034CAA0(puVar4);
  }
  puVar4 = DAT_0023daf0;
  *(undefined4 **)(iVar6 + 0x68) = puVar5;
  uVar8 = puVar4[1];
  *(undefined4 *)(iVar6 + 0x74) = *puVar4;
  *(undefined4 *)(iVar6 + 0x78) = uVar8;
  uVar8 = DAT_0023daf4;
  *(undefined4 *)(iVar6 + 0x6c) = DAT_0023daf4;
  *(int *)(iVar6 + 0x70) = iVar10;
  puVar12 = (undefined4 *)(iVar6 + 0x7c);
  uVar9 = puVar4[3];
  *(undefined4 *)(iVar6 + 0x84) = puVar4[2];
  *(undefined4 *)(iVar6 + 0x88) = uVar9;
  *puVar12 = uVar8;
  *(int *)(iVar6 + 0x80) = iVar10;
  uVar8 = puVar4[5];
  *(undefined4 *)(iVar6 + 0x94) = puVar4[4];
  *(undefined4 *)(iVar6 + 0x98) = uVar8;
  *(undefined4 *)(iVar6 + 0x8c) = DAT_0023daf8;
  *(int *)(iVar6 + 0x90) = iVar10;
  fVar14 = func_0054DE3C(iVar10,0,1);
  *(float *)(iVar6 + 0x9c) = fVar14;
  objStack_88[0] = 1;
  objStack_88[1] = 0;
  objStack_88[2] = 0;
  iVar7 = func_0014E428(iVar10,1,0,0,1,0,0);
  *(int *)(iVar6 + -0xc) = iVar7;
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar7 + 0x80),0,*(uint *)(iVar6 + -0x30),0);
  iVar7 = *(int *)(iVar6 + -0xc);
  *(uint *)(iVar7 + 0x164) = *(uint *)(iVar7 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar7 + 0x8c) = *(undefined4 *)(iVar6 + -0x48);
  *(undefined4 *)(iVar7 + 0x9c) = *(undefined4 *)(iVar6 + -0x44);
  *(undefined4 *)(iVar7 + 0xac) = *(undefined4 *)(iVar6 + -0x40);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  if (puVar5 == (undefined4 *)0x0) {
    puVar13 = (uint *)0x0;
  }
  else {
    puVar13 = func_0016A2FC(puVar5,1,DAT_0023dafc,1);
  }
  *(uint **)(iVar6 + -8) = puVar13;
  func_00169688(puVar13,0,DAT_0023db00,*(int *)(*(int *)(iVar6 + -0x148) + 0x1c8));
  func_0016A02C(*(int *)(iVar6 + -8),-1,(int *)0xffffffff,0);
  objStack_88[1] = 3;
  objStack_88[2] = (uint)&local_7c;
  local_34 = 10;
  local_30 = 0;
  local_7c = 0;
  objStack_88[0] = 1;
  local_78 = DAT_0023db08;
  uStack_74 = DAT_0023db04;
  uStack_70 = DAT_0023db0c;
  uStack_6c = DAT_0023db04;
  local_68 = 0xff;
  uVar8 = DAT_0023db04;
  func_0016898C(*(int *)(iVar6 + -8),objStack_88);
  iVar7 = *(int *)(*(int *)(iVar6 + -8) + 0x14);
  if (*(float *)(iVar7 + 8) != *(float *)(iVar7 + 0x14)) {
    *(float *)(iVar7 + 8) = *(float *)(iVar7 + 0x14);
    *(undefined1 *)(iVar7 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(*(int *)(iVar6 + -8) + 0x14) + 0x10) = uVar8;
  func_00168E9C(*(int **)(iVar6 + -8),*(int *)(iVar6 + -0xc),(int *)0x0);
  fVar15 = *(float *)(iVar6 + 0x9c);
  fVar14 = *(float *)(iVar6 + -0x44);
  iVar7 = *(int *)(iVar6 + 100);
  uVar8 = *(undefined4 *)(iVar6 + -0x40);
  *(undefined4 *)(iVar7 + 4) = *(undefined4 *)(iVar6 + -0x48);
  *(float *)(iVar7 + 8) = fVar14 + fVar15;
  *(undefined4 *)(iVar7 + 0xc) = uVar8;
  func_004356B4((int *)*piVar3);
  objStack_88[1] = CONCAT22((*(undefined2 *)((char *)&objStack_88[1] + 2)),0xe4);
  *(undefined2 *)(*piVar3 + 0x28) = 0xe4;
  piVar11 = (int *)(iVar6 + -4);
  *(int *)(*(int *)(iVar6 + -4) + 0x18) = *piVar3;
  func_004ED9C8(*(int *)(iVar6 + -4));
  objStack_88[0] = *(uint *)(iVar6 + -0x14c);
  func_004EDAD0(*piVar11,objStack_88);
  *(undefined2 *)(*piVar11 + 0x2c) = *(undefined2 *)(iVar6 + -0x3c4);
  func_004A7F00(*DAT_0023db10,*piVar11,2);
  *(undefined4 **)(*piVar11 + 0x28) = (undefined4 *)(iVar6 + 0x8c);
  if (*(int *)(iVar6 + -0x78) != 0) {
    uVar8 = puVar4[6];
    uVar9 = puVar4[7];
    *(int *)(iVar6 + 0x80) = iVar10;
    *(undefined4 *)(iVar6 + 0x84) = uVar8;
    *(undefined4 *)(iVar6 + 0x88) = uVar9;
    local_7c = *(uint *)(iVar6 + -0x14c);
    objStack_88[0] = (uint)*(short *)(iVar6 + -0x3c4);
    objStack_88[2] = DAT_0023db14;
    uVar2 = objStack_88[2];
    (*(undefined2 *)((char *)&objStack_88[2] + 0)) = (undefined2)DAT_0023db14;
    uVar1 = (undefined2)objStack_88[2];
    objStack_88[1] = (uint)puVar12;
    objStack_88[2] = uVar2;
    func_0014EB8C(iVar6,*(undefined4 *)(iVar6 + 100),*(undefined2 **)(iVar6 + -0x78),&local_7c,
                  *(short *)(iVar6 + -0x3c4),puVar12,uVar1);
  }
  func_0023D3A0(iVar10);
  return iVar10;
}

