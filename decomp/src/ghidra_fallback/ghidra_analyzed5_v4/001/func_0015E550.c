#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BAB4(undefined4 param_1);
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
extern int func_00504CC0(undefined4 param_1,undefined4 param_2,uint param_3);
extern int func_00504D48(int param_1,int param_2);
extern int func_00522DDC(int param_1);
extern int func_005330BC(int param_1,int *param_2);
extern float fRam0015ee90;
extern float fRam0015ee94;
extern undefined4 uRam0015ee8c;
extern undefined4 *DAT_0015e974;
extern int *DAT_0015e978;
extern undefined4 DAT_0015e97c;
extern undefined4 DAT_0015e980;
extern float DAT_0015e984;
extern undefined4 DAT_0015e988;
extern char *DAT_0015e9a4;
extern int *DAT_0015e9a8;
extern char *DAT_0015e9bc;
extern int *DAT_0015e9c0;
extern undefined DAT_0015e9c4;
extern int DAT_0015e9e8;
extern undefined DAT_0015e9ec;
extern undefined DAT_0015ea3c;
extern undefined DAT_0015ee20;
extern uint *DAT_0015ee80;
extern undefined4 *DAT_0015ee84;
extern undefined4 DAT_0015ee88;
extern char s_Actor_FlatMedium_bch_0015e98c[];
extern char s_Actor_FrescoBase_bch_0015ee60[];
extern char s_FlatMediumFront_0015ea2c[];
extern char s_FlatMediumFront_linevibrate_0015ee44[];
extern char s_FlatMediumFront_wait_0015ea60[];
extern char s_FlatMediumSide_0015e9ac[];
extern char s_FlatMediumSide_linevibrate_0015ea10[];
extern char s_World_0015ee78[];
extern char s_cf_0015e98c[];
extern char s_cf_0015ee60[];

// USA 0015E550 <- EU 0015E554 (Ghidra, non-matching)
// GLOBAL DAT_0015e974 undefined4 *
// GLOBAL DAT_0015e978 int *
// GLOBAL DAT_0015e97c undefined4
// GLOBAL DAT_0015e980 undefined4
// GLOBAL DAT_0015e984 float
// GLOBAL DAT_0015e988 undefined4
// GLOBAL DAT_0015e9a4 char *
// GLOBAL DAT_0015e9a8 int *
// GLOBAL DAT_0015e9bc char *
// GLOBAL DAT_0015e9c0 int *
// GLOBAL DAT_0015e9c4 undefined
// GLOBAL DAT_0015e9e8 int
// GLOBAL DAT_0015e9ec undefined
// GLOBAL DAT_0015ea3c undefined
// GLOBAL DAT_0015ee20 undefined
// GLOBAL DAT_0015ee80 uint *
// GLOBAL DAT_0015ee84 undefined4 *
// GLOBAL DAT_0015ee88 undefined4
// GLOBAL UNK_0015ee8c undefined4
// GLOBAL UNK_0015ee90 float
// GLOBAL UNK_0015ee94 float
// GLOBAL s_cf_0015e98c string
// GLOBAL s_cf_0015ee60 string
// GLOBAL s_FlatMediumFront_0015ea2c string
// GLOBAL s_FlatMediumFront_linevibrate_0015ee44 string
// GLOBAL s_FlatMediumFront_wait_0015ea60 string
// GLOBAL s_FlatMediumSide_0015e9ac string
// GLOBAL s_FlatMediumSide_linevibrate_0015ea10 string
// GLOBAL s_World_0015ee78 string

void func_0015E550(int param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  float fVar15;
  undefined4 uVar16;
  _Alignas(8) unsigned char albw_frame[0x150];
  #define local_144 (*(char * *)(albw_frame + 0xc))
  #define local_140 (*(char * *)(albw_frame + 0x10))
  #define pcStack_13c (*(char * *)(albw_frame + 0x14))
  #define local_138 (*(char * *)(albw_frame + 0x18))
  #define local_134 (*(uint *)(albw_frame + 0x1c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x20))
  #define local_12c (*(undefined4 *)(albw_frame + 0x24))
  #define local_128 (*(undefined4 *)(albw_frame + 0x28))
  #define local_124 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_120 (*(undefined4 *)(albw_frame + 0x30))
  #define local_11c (*(undefined4 *)(albw_frame + 0x34))
  #define local_118 (*(undefined4 *)(albw_frame + 0x38))
  #define local_114 (*(char * *)(albw_frame + 0x3c))
  #define local_110 (*(char * *)(albw_frame + 0x40))
  #define local_10c (*(undefined1 *)(albw_frame + 0x44))
  #define local_10b (*(undefined1 *)(albw_frame + 0x45))
  #define local_10a (*(undefined1 *)(albw_frame + 0x46))
  #define local_109 (*(undefined1 *)(albw_frame + 0x47))
  #define local_108 (*(char * *)(albw_frame + 0x48))
  #define local_104 (*(char * *)(albw_frame + 0x4c))
  #define local_100 (*(char * *)(albw_frame + 0x50))
  #define local_fc (*(char * *)(albw_frame + 0x54))
  #define local_f8 (*(int *)(albw_frame + 0x58))
  #define local_f4 (*(undefined1 *)(albw_frame + 0x5c))
  #define local_f0 (*(char * *)(albw_frame + 0x60))
  #define pcStack_ec (*(char * *)(albw_frame + 0x64))
  #define pcStack_e8 (*(char * *)(albw_frame + 0x68))
  #define local_e4 (*(char * *)(albw_frame + 0x6c))
  #define local_e0 (*(undefined4 * *)(albw_frame + 0x70))
  #define uStack_dc (*(undefined4 *)(albw_frame + 0x74))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x78))
  #define local_d4 (*(undefined1 *)(albw_frame + 0x7c))
  #define local_d3 (*(undefined1 *)(albw_frame + 0x7d))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_cc (*(undefined4 *)(albw_frame + 0x84))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x88))
  #define local_c4 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_c0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_bc (*(undefined4 *)(albw_frame + 0x94))
  #define local_b8 (*(undefined1 *)(albw_frame + 0x98))
  #define local_b7 (*(undefined1 *)(albw_frame + 0x99))
  #define aiStack_9c ((int *)(albw_frame + 0xb4))
  #define local_30 (*(char * *)(albw_frame + 0x120))
  #define local_2c (*(char * *)(albw_frame + 0x124))
  func_0036D0C8((int *)(param_1 + 0xddc),0);
  puVar1 = DAT_0015e974;
  iVar13 = *(int *)(param_1 + 0xddc);
  if (iVar13 == 0) {
    iVar13 = 1;
  }
  else {
    iVar13 = func_0010983C(*DAT_0015e974,iVar13);
  }
  puVar4 = (undefined4 *)func_0010BAB4(0x18c);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = func_0030022C(puVar4);
  }
  piVar7 = DAT_0015e978;
  *(int *)(param_1 + 0x97c) = iVar5;
  func_002FF8A4(iVar5,*piVar7,piVar7[1],1,1,(int *)0x0,0);
  uVar16 = DAT_0015e980;
  uVar12 = DAT_0015e97c;
  iVar5 = *(int *)(param_1 + 0x97c);
  *(undefined4 *)(iVar5 + 0x16c) = DAT_0015e97c;
  *(undefined4 *)(iVar5 + 0x170) = uVar16;
  *(undefined4 *)(iVar5 + 0x174) = uVar12;
  fVar15 = DAT_0015e984;
  iVar5 = *(int *)(param_1 + 0x97c);
  if (*(float *)(iVar5 + 0x164) != DAT_0015e984) {
    *(uint *)(iVar5 + 0x188) = *(uint *)(iVar5 + 0x188) | 8;
  }
  *(float *)(iVar5 + 0x164) = fVar15;
  pcVar2 = DAT_0015e9a4;
  *(undefined4 *)(*(int *)(param_1 + 0x97c) + 0x168) = DAT_0015e988;
  local_fc = s_Actor_FlatMedium_bch_0015e98c;
  local_100 = pcVar2;
  puVar4 = func_00504CC0(*DAT_0015e9a8,&local_100,0xffffffff);
  local_2c = s_FlatMediumSide_0015e9ac;
  local_30 = pcVar2;
  uVar6 = func_005330BC((int)puVar4,(int *)&local_30);
  local_134 = uVar6;
  if (uVar6 < (uint)puVar4[0x32]) {
    local_134 = *(uint *)(puVar4[0x34] + uVar6 * 4);
  }
  local_144 = pcVar2;
  if ((uint)puVar4[0x32] <= uVar6) {
    local_134 = 0;
  }
  local_140 = DAT_0015e9bc;
  pcStack_13c = pcVar2;
  local_138 = DAT_0015e9bc;
  local_130 = 0;
  local_10c = 1;
  local_114 = (char *)0x0;
  local_118 = 0;
  local_110 = (char *)0x0;
  local_120 = 0;
  local_12c = 1;
  local_128 = CONCAT22((*(undefined2 *)((char *)&local_128 + 2)),0x101);
  local_124 = 0;
  local_11c = 0;
  local_10b = 0xc4;
  piVar7 = func_002C2D00((int *)&local_144);
  *(int **)(param_1 + 0x974) = piVar7;
  piVar7[0x59] = piVar7[0x59] | 1;
  uVar6 = func_00522DDC(*DAT_0015e9c0);
  func_004CE804(*(int *)(param_1 + 0x974),uVar6 & 0xffff,0,0,fVar15);
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    local_104 = &DAT_0015e9c4;
    local_108 = pcVar2;
    puVar9 = func_0016A2FC(puVar8,2,&local_108,1);
  }
  iVar5 = DAT_0015e9e8;
  uVar6 = 0;
  *(undefined4 **)(param_1 + 0x964) = puVar9;
  do {
    func_00169688(*(uint **)(param_1 + 0x964),uVar6,(int *)(iVar5 + uVar6 * 8),(int)puVar4);
    func_00133870(*(int *)(param_1 + 0x964),uVar6,*(int *)(param_1 + 0x974));
    uVar6 = uVar6 + 1;
  } while ((int)uVar6 < 2);
  func_0016A02C(*(int *)(param_1 + 0x964),-1,(int *)0xffffffff,0);
  puVar10 = (uint *)func_002C11E8(aiStack_9c,0,0,0);
  func_0016898C(*(int *)(param_1 + 0x964),puVar10);
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  piVar7 = (int *)(param_1 + 0x968);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    local_2c = &DAT_0015e9ec;
    local_30 = pcVar2;
    puVar9 = func_0016A2FC(puVar8,1,&local_30,1);
  }
  *(undefined4 **)(param_1 + 0x968) = puVar9;
  local_2c = s_FlatMediumSide_linevibrate_0015ea10;
  local_30 = pcVar2;
  func_00169608(*(uint **)(param_1 + 0x968),0,(int *)&local_30,(int)puVar4);
  func_00133870(*piVar7,0,*(int *)(param_1 + 0x974));
  func_0016A02C(*piVar7,-1,(int *)0xffffffff,0);
  puVar10 = (uint *)func_002C11E8(&local_f8,0,0,0);
  func_0016898C(*piVar7,puVar10);
  local_104 = s_FlatMediumFront_0015ea2c;
  local_108 = pcVar2;
  uVar6 = func_005330BC((int)puVar4,(int *)&local_108);
  local_134 = uVar6;
  if (uVar6 < (uint)puVar4[0x32]) {
    local_134 = *(uint *)(puVar4[0x34] + uVar6 * 4);
  }
  local_144 = pcVar2;
  if ((uint)puVar4[0x32] <= uVar6) {
    local_134 = 0;
  }
  local_140 = DAT_0015e9bc;
  pcStack_13c = pcVar2;
  local_138 = DAT_0015e9bc;
  local_130 = 0;
  local_10c = 1;
  local_114 = (char *)0x0;
  local_120 = 0;
  local_110 = (char *)0x0;
  local_118 = 0;
  local_10b = 0xc4;
  local_124 = 0;
  local_11c = 0;
  local_12c = 1;
  local_128 = CONCAT22((*(undefined2 *)((char *)&local_128 + 2)),0x101);
  piVar7 = func_002C2D00((int *)&local_144);
  *(int **)(param_1 + 0x978) = piVar7;
  piVar7[0x59] = piVar7[0x59] | 1;
  uVar6 = func_00522DDC(*DAT_0015e9c0);
  func_004CE804(*(int *)(param_1 + 0x978),uVar6 & 0xffff,0,0,fVar15);
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  piVar7 = (int *)(param_1 + 0x96c);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    local_104 = &DAT_0015ea3c;
    local_108 = pcVar2;
    puVar9 = func_0016A2FC(puVar8,1,&local_108,1);
  }
  *(undefined4 **)(param_1 + 0x96c) = puVar9;
  local_104 = s_FlatMediumFront_wait_0015ea60;
  local_108 = pcVar2;
  func_00169688(*(uint **)(param_1 + 0x96c),0,(int *)&local_108,(int)puVar4);
  func_00133870(*piVar7,0,*(int *)(param_1 + 0x978));
  func_0016A02C(*piVar7,-1,(int *)0xffffffff,0);
  puVar10 = (uint *)func_002C11E8(&local_f8,0,0,0);
  func_0016898C(*piVar7,puVar10);
  puVar8 = (undefined4 *)func_0010BAB4(0xa8);
  piVar7 = (int *)(param_1 + 0x970);
  puVar9 = (undefined4 *)0x0;
  if (puVar8 != (undefined4 *)0x0) {
    local_104 = &DAT_0015ee20;
    local_108 = pcVar2;
    puVar9 = func_0016A2FC(puVar8,1,&local_108,1);
  }
  *(undefined4 **)(param_1 + 0x970) = puVar9;
  local_104 = s_FlatMediumFront_linevibrate_0015ee44;
  local_108 = pcVar2;
  func_00169608(*(uint **)(param_1 + 0x970),0,(int *)&local_108,(int)puVar4);
  func_00133870(*piVar7,0,*(int *)(param_1 + 0x978));
  func_0016A02C(*piVar7,-1,(int *)0xffffffff,0);
  puVar10 = (uint *)func_002C11E8(&local_f8,0,0,0);
  func_0016898C(*piVar7,puVar10);
  pcVar3 = DAT_0015e9bc;
  local_140 = pcVar2;
  pcStack_13c = DAT_0015e9bc;
  local_138 = (char *)0x0;
  local_134 = 0;
  local_130 = 0x20;
  local_12c = 0;
  local_124 = 0;
  local_110 = s_World_0015ee78;
  local_120 = 0;
  local_10c = 7;
  local_128 = 0;
  local_11c = 0;
  local_118 = 0;
  local_114 = pcVar2;
  local_10a = 0;
  local_108 = (char *)((uint)local_108 & 0xffffff00);
  local_104 = pcVar2;
  local_100 = s_Actor_FrescoBase_bch_0015ee60;
  local_fc = (char *)0x0;
  local_f8 = 0;
  local_109 = 1;
  local_f4 = 0;
  local_10b = 2;
  local_e0 = func_00504D48(*DAT_0015e9a8,(int)&local_140);
  piVar7 = local_e0 + 0x32;
  if (*piVar7 != 0) {
    local_e0 = *(undefined4 **)local_e0[0x34];
  }
  local_f0 = pcVar2;
  pcStack_ec = pcVar3;
  pcStack_e8 = pcVar2;
  if (*piVar7 == 0) {
    local_e0 = (undefined4 *)0x0;
  }
  local_e4 = pcVar3;
  uStack_dc = 0;
  local_b8 = 1;
  local_c0 = 0;
  local_cc = 0;
  local_bc = 0;
  local_c4 = 0;
  local_b7 = 0xc4;
  local_d4 = 2;
  local_d0 = 0;
  local_c8 = 0;
  local_d8 = 1;
  local_d3 = 1;
  piVar7 = func_002C2D00((int *)&local_f0);
  if (((*DAT_0015ee80 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0015ee80), iVar5 != 0)) {
    *DAT_0015ee84 = DAT_0015ee88;
  }
  if ((piVar7 == (int *)0x0) ||
     (iVar5 = (**(code **)(*piVar7 + 8))(piVar7,DAT_0015ee84), iVar5 == 0)) {
    piVar7 = (int *)0x0;
  }
  *(int **)(param_1 + 0x980) = piVar7;
  piVar14 = (int *)(param_1 + 0x980);
  uVar6 = func_001139F8(*(int *)(*(int *)(param_1 + 0x97c) + 0x3c));
  *(uint *)piVar7[0x7a] = uVar6 >> 3;
  **(uint **)(*piVar14 + 0x1ec) = DAT_0015e978[1] & 0xffffU | *DAT_0015e978 << 0x10;
  uVar6 = func_00522DDC(*DAT_0015e9c0);
  func_004CE804(*piVar14,uVar6 & 0xffff,0,0,fVar15);
  func_004D0134(*piVar14,0);
  (**(code **)(*(int *)*piVar14 + 0x10))((int *)*piVar14,0xef);
  *(uint *)(*piVar14 + 0x164) = *(uint *)(*piVar14 + 0x164) | 1;
  func_004CF478(*(int *)(param_1 + 0x980),0);
  if (iVar13 != 1) {
    func_0010983C(*puVar1,iVar13);
  }
  func_0036D0C8((int *)(param_1 + 0xde0),0);
  if (*(int *)(param_1 + 0xde0) == 0) {
    iVar13 = 1;
  }
  else {
    iVar13 = func_0010983C(*puVar1,*(int *)(param_1 + 0xde0));
  }
  iVar11 = func_0010BAB4(uRam0015ee8c);
  iVar5 = 0;
  if (iVar11 != 0) {
    iVar5 = func_001FE6C8(iVar11);
  }
  *(int *)(param_1 + 0x984) = iVar5;
  func_001FE4C0(iVar5,fVar15);
  if (iVar13 != 1) {
    func_0010983C(*puVar1,iVar13);
  }
  *(undefined1 *)(param_1 + 0x9ac) = 0;
  uVar12 = *(undefined4 *)(param_1 + 0x3d8);
  fVar15 = fRam0015ee90;
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
    fVar15 = fRam0015ee94;
  }
  uVar16 = *(undefined4 *)(param_1 + 0x3d0);
  fVar15 = fVar15 + *(float *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x9a0) = uVar16;
  *(float *)(param_1 + 0x9a4) = fVar15;
  *(undefined4 *)(param_1 + 0x9a8) = uVar12;
  *(undefined4 *)(param_1 + 0x994) = uVar16;
  *(float *)(param_1 + 0x998) = fVar15;
  *(undefined4 *)(param_1 + 0x99c) = uVar12;
  *(undefined4 *)(param_1 + 0x988) = uVar16;
  *(float *)(param_1 + 0x98c) = fVar15;
  *(undefined4 *)(param_1 + 0x990) = uVar12;
  return;
}

