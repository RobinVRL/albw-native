#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E294(int *param_1);
extern int func_001139F8(int param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern void func_001FE4C0(int param_1,float fparam_0);
extern int func_001FE6C8(int param_1);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002C2D00(int *param_1);
extern int func_002FF8A4(int param_1,int param_2,int param_3,int param_4,int param_5,int *param_6,int param_7);
extern int func_0030022C(undefined4 *param_1);
extern int func_0036D0C8(int *param_1,int param_2);
extern void func_004CE804(int param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D0134(int param_1,int param_2);
extern int func_00522DDC(int param_1);
extern int func_00527934(int param_1,int *param_2);
extern int func_005330BC(int param_1,int *param_2);
extern undefined4 uRam002f3d00;
extern int *DAT_00109864;
extern undefined4 *DAT_002f3ae8;
extern int *DAT_002f3aec;
extern int *DAT_002f3af0;
extern undefined4 DAT_002f3af4;
extern undefined4 DAT_002f3af8;
extern float DAT_002f3afc;
extern undefined4 DAT_002f3b00;
extern uint DAT_002f3b14;
extern undefined4 DAT_002f3b2c;
extern int *DAT_002f3b30;
extern undefined DAT_002f3b34;
extern int DAT_002f3b4c;
extern undefined DAT_002f3b50;
extern uint *DAT_002f3b98;
extern undefined4 *DAT_002f3b9c;
extern undefined4 DAT_002f3ba0;
extern char s_EnemyFrescoBase_002f3b88[];
extern char s_FlatMediumGanonSide_002f3b18[];
extern char s_FlatMediumGanonSide_linevibrate_002f3b68[];
extern char s_FlatMediumGanon_002f3b04[];

// USA 002F36B4 <- EU 002F3690 (Ghidra, non-matching)
// GLOBAL DAT_00109864 int *
// GLOBAL DAT_002f3ae8 undefined4 *
// GLOBAL DAT_002f3aec int *
// GLOBAL DAT_002f3af0 int *
// GLOBAL DAT_002f3af4 undefined4
// GLOBAL DAT_002f3af8 undefined4
// GLOBAL DAT_002f3afc float
// GLOBAL DAT_002f3b00 undefined4
// GLOBAL DAT_002f3b14 uint
// GLOBAL DAT_002f3b2c undefined4
// GLOBAL DAT_002f3b30 int *
// GLOBAL DAT_002f3b34 undefined
// GLOBAL DAT_002f3b4c int
// GLOBAL DAT_002f3b50 undefined
// GLOBAL DAT_002f3b98 uint *
// GLOBAL DAT_002f3b9c undefined4 *
// GLOBAL DAT_002f3ba0 undefined4
// GLOBAL UNK_002f3d00 undefined4
// GLOBAL s_EnemyFrescoBase_002f3b88 string
// GLOBAL s_FlatMediumGanonSide_002f3b18 string
// GLOBAL s_FlatMediumGanonSide_linevibrate_002f3b68 string
// GLOBAL s_FlatMediumGanon_002f3b04 string

/* WARNING: Variable defined which should be unmapped: objStack_e0 */

undefined4 * func_002F36B4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define objStack_e0 ((uint *)(albw_frame + 0x0))
  #define local_d4 (*(uint *)(albw_frame + 0xc))
  #define uStack_d0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_cc (*(uint *)(albw_frame + 0x14))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_c4 (*(uint *)(albw_frame + 0x1c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_bc (*(undefined4 *)(albw_frame + 0x24))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x28))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x29))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x30))
  #define local_ac (*(undefined4 *)(albw_frame + 0x34))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x38))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_a0 (*(undefined4 *)(albw_frame + 0x40))
  #define local_9c (*(undefined1 *)(albw_frame + 0x44))
  #define local_9b (*(undefined1 *)(albw_frame + 0x45))
  #define local_98 (*(uint *)(albw_frame + 0x48))
  #define local_94 (*(char * *)(albw_frame + 0x4c))
  #define aiStack_90 ((int *)(albw_frame + 0x50))
  #define local_30 (*(uint *)(albw_frame + 0xb0))
  #define local_2c (*(char * *)(albw_frame + 0xb4))
  func_0036D0C8((int *)(param_1 + 0xdac),0);
  puVar9 = DAT_002f3ae8;
  iVar10 = *(int *)(param_1 + 0xdac);
  if (iVar10 == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = func_0010983C(*DAT_002f3ae8,iVar10);
  }
  puVar1 = (undefined4 *)func_0010BAB4(0x18c);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = func_0030022C(puVar1);
  }
  *(int *)(param_1 + 0xdc0) = iVar2;
  piVar4 = DAT_002f3af0;
  piVar13 = (int *)(param_1 + 0xdc0);
  objStack_e0[0] =
       (**(code **)(**(int **)(*DAT_002f3aec + 0x1fa8) + 0x18))
                 (*(int **)(*DAT_002f3aec + 0x1fa8),*DAT_002f3af0 * 2 * DAT_002f3af0[1],0x80);
  func_002FF8A4(*piVar13,*piVar4,piVar4[1],1,1,(int *)0x0,objStack_e0[0]);
  uVar12 = DAT_002f3af8;
  uVar11 = DAT_002f3af4;
  iVar2 = *piVar13;
  *(undefined4 *)(iVar2 + 0x16c) = DAT_002f3af4;
  *(undefined4 *)(iVar2 + 0x170) = uVar12;
  *(undefined4 *)(iVar2 + 0x174) = uVar11;
  fVar15 = DAT_002f3afc;
  iVar2 = *piVar13;
  if (*(float *)(iVar2 + 0x164) != DAT_002f3afc) {
    *(uint *)(iVar2 + 0x188) = *(uint *)(iVar2 + 0x188) | 8;
  }
  *(float *)(iVar2 + 0x164) = fVar15;
  uVar7 = DAT_002f3b14;
  *(undefined4 *)(*(int *)(param_1 + 0xdc0) + 0x168) = DAT_002f3b00;
  local_94 = s_FlatMediumGanon_002f3b04;
  local_98 = uVar7;
  iVar2 = func_00527934(*(int *)(param_1 + 0x2d0),(int *)&local_98);
  local_94 = s_FlatMediumGanonSide_002f3b18;
  local_98 = uVar7;
  uVar3 = func_005330BC(iVar2,(int *)&local_98);
  local_c4 = uVar3;
  if (uVar3 < *(uint *)(iVar2 + 200)) {
    local_c4 = *(uint *)(*(int *)(iVar2 + 0xd0) + uVar3 * 4);
  }
  local_d4 = uVar7;
  if (*(uint *)(iVar2 + 200) <= uVar3) {
    local_c4 = 0;
  }
  uStack_d0 = DAT_002f3b2c;
  uStack_cc = uVar7;
  local_c8 = DAT_002f3b2c;
  uStack_c0 = 0;
  local_9c = 1;
  local_a4 = 0;
  local_a8 = 0;
  local_b8 = 1;
  local_a0 = 0;
  local_b0 = 0;
  local_bc = 1;
  local_b7 = 1;
  local_b4 = 0;
  local_ac = 0;
  local_9b = 0xc4;
  piVar4 = func_002C2D00((int *)&local_d4);
  *(int **)(param_1 + 0xdbc) = piVar4;
  piVar4[0x59] = piVar4[0x59] | 1;
  uVar3 = func_00522DDC(*DAT_002f3b30);
  func_004CE804(*(int *)(param_1 + 0xdbc),uVar3 & 0xffff,0,0,fVar15);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  puVar1 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_94 = &DAT_002f3b34;
    local_98 = uVar7;
    puVar1 = func_0016A2FC(puVar5,0xc,&local_98,1);
  }
  iVar8 = DAT_002f3b4c;
  uVar3 = 0;
  *(undefined4 **)(param_1 + 0xdb4) = puVar1;
  do {
    func_00169688(*(uint **)(param_1 + 0xdb4),uVar3,(int *)(iVar8 + uVar3 * 8),iVar2);
    func_00133870(*(int *)(param_1 + 0xdb4),0,*(int *)(param_1 + 0xdbc));
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0xc);
  func_0016A02C(*(int *)(param_1 + 0xdb4),-1,(int *)0xffffffff,0);
  puVar6 = (uint *)func_002C11E8(aiStack_90,2,0,0);
  func_0016898C(*(int *)(param_1 + 0xdb4),puVar6);
  puVar5 = (undefined4 *)func_0010BAB4(0xa8);
  piVar4 = (int *)(param_1 + 0xdb8);
  puVar1 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    local_94 = &DAT_002f3b50;
    local_98 = uVar7;
    puVar1 = func_0016A2FC(puVar5,1,&local_98,1);
  }
  *(undefined4 **)(param_1 + 0xdb8) = puVar1;
  local_2c = s_FlatMediumGanonSide_linevibrate_002f3b68;
  local_30 = uVar7;
  func_00169608(*(uint **)(param_1 + 0xdb8),0,(int *)&local_30,iVar2);
  func_00133870(*piVar4,0,*(int *)(param_1 + 0xdbc));
  func_0016A02C(*piVar4,-1,(int *)0xffffffff,0);
  puVar6 = (uint *)func_002C11E8(aiStack_90,0,0,0);
  func_0016898C(*piVar4,puVar6);
  objStack_e0[1] = (uint)s_EnemyFrescoBase_002f3b88;
  objStack_e0[0] = uVar7;
  piVar4 = (int *)func_00527934(*(int *)(param_1 + 0x2d0),(int *)objStack_e0);
  if ((char)piVar4[0x47] != '\0') {
    (**(code **)(*piVar4 + 0x1c))(piVar4,*(undefined4 *)(*DAT_002f3aec + 0x1fa8));
  }
  local_c4 = 0;
  if (piVar4[0x32] != 0) {
    local_c4 = *(undefined4 *)piVar4[0x34];
  }
  local_d4 = uVar7;
  uStack_d0 = DAT_002f3b2c;
  uStack_cc = uVar7;
  if (piVar4[0x32] == 0) {
    local_c4 = 0;
  }
  local_c8 = DAT_002f3b2c;
  uStack_c0 = 0;
  local_9c = 1;
  local_b0 = 0;
  local_9b = 0xc4;
  local_a4 = 0;
  local_b8 = 2;
  local_a0 = 0;
  local_a8 = 0;
  local_b4 = 0;
  local_ac = 0;
  local_bc = 1;
  local_b7 = 1;
  piVar4 = func_002C2D00((int *)&local_d4);
  if (((*DAT_002f3b98 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_002f3b98), iVar2 != 0)) {
    *DAT_002f3b9c = DAT_002f3ba0;
  }
  if ((piVar4 == (int *)0x0) ||
     (iVar2 = (**(code **)(*piVar4 + 8))(piVar4,DAT_002f3b9c), iVar2 == 0)) {
    piVar4 = (int *)0x0;
  }
  piVar13 = (int *)(param_1 + 0xdc4);
  *(int **)(param_1 + 0xdc4) = piVar4;
  uVar7 = func_001139F8(*(int *)(*(int *)(param_1 + 0xdc0) + 0x3c));
  *(uint *)piVar4[0x7a] = uVar7 >> 3;
  **(uint **)(*piVar13 + 0x1ec) = DAT_002f3af0[1] & 0xffffU | *DAT_002f3af0 << 0x10;
  func_004D0134(*piVar13,0);
  (**(code **)(*(int *)*piVar13 + 0x10))((int *)*piVar13,0xef);
  uVar7 = func_00522DDC(*DAT_002f3b30);
  func_004CE804(*piVar13,uVar7 & 0xffff,0,0,fVar15);
  *(uint *)(*piVar13 + 0x164) = *(uint *)(*piVar13 + 0x164) | 1;
  func_004CF478(*(int *)(param_1 + 0xdc4),0);
  if (iVar10 != 1) {
    func_0010983C(*puVar9,iVar10);
  }
  func_0036D0C8((int *)(param_1 + 0xdb0),0);
  if (*(int *)(param_1 + 0xdb0) == 0) {
    iVar10 = 1;
  }
  else {
    iVar10 = func_0010983C(*puVar9,*(int *)(param_1 + 0xdb0));
  }
  iVar8 = func_0010BAB4(uRam002f3d00);
  iVar2 = 0;
  if (iVar8 != 0) {
    iVar2 = func_001FE6C8(iVar8);
  }
  *(int *)(param_1 + 0xdcc) = iVar2;
  func_001FE4C0(iVar2,fVar15);
  *(undefined1 *)(param_1 + 0xe0c) = 0;
  uVar11 = *(undefined4 *)(param_1 + 0x3d8);
  uVar12 = *(undefined4 *)(param_1 + 0x3d0);
  uVar14 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xdfc) = uVar11;
  *(undefined4 *)(param_1 + 0xdf4) = uVar12;
  *(undefined4 *)(param_1 + 0xdf8) = uVar14;
  *(undefined4 *)(param_1 + 0xdf0) = uVar11;
  *(undefined4 *)(param_1 + 0xde8) = uVar12;
  *(undefined4 *)(param_1 + 0xdec) = uVar14;
  *(undefined4 *)(param_1 + 0xde4) = uVar11;
  *(undefined4 *)(param_1 + 0xddc) = uVar12;
  *(undefined4 *)(param_1 + 0xde0) = uVar14;
  if (iVar10 == 1) {
    return (undefined4 *)(param_1 + 0xddc);
  }
  iVar2 = func_0010E294((int *)(*DAT_00109864 + 0x24));
  puVar9 = *(undefined4 **)(iVar2 + 0x68);
  *(int *)(iVar2 + 0x68) = iVar10;
  return puVar9;
}

