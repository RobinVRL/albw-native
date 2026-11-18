#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00133870(int param_1,uint param_2,int param_3);
extern int func_0014DF18(int param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5, undefined1 param_6);
extern int func_00151358(int *param_1);
extern int func_0015137C(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00169608(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004FC1CC(int param_1,int param_2,byte param_3,float fparam_0);
extern int func_004FC8D8(int param_1,int param_2);
extern int func_005330A8(int param_1,int param_2,int *param_3);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_0021aafc;
extern int DAT_0021ab00;
extern undefined4 DAT_0021ab04;
extern undefined4 DAT_0021ab08;
extern undefined4 DAT_0021ab0c;
extern uint DAT_0021ab10;
extern int DAT_0021ab14;
extern int DAT_0021ab18;
extern int DAT_0021ab1c;
extern undefined4 *DAT_0021ab20;
extern undefined4 DAT_0021ab24;
extern int *DAT_0021ab28;
extern int *DAT_0021ab2c;
extern char s_Moldworm1_0021ab30[];

// USA 0021A748 <- EU 0021A748 (Ghidra, non-matching)
// GLOBAL DAT_0021aafc undefined4
// GLOBAL DAT_0021ab00 int
// GLOBAL DAT_0021ab04 undefined4
// GLOBAL DAT_0021ab08 undefined4
// GLOBAL DAT_0021ab0c undefined4
// GLOBAL DAT_0021ab10 uint
// GLOBAL DAT_0021ab14 int
// GLOBAL DAT_0021ab18 int
// GLOBAL DAT_0021ab1c int
// GLOBAL DAT_0021ab20 undefined4 *
// GLOBAL DAT_0021ab24 undefined4
// GLOBAL DAT_0021ab28 int *
// GLOBAL DAT_0021ab2c int *
// GLOBAL s_Moldworm1_0021ab30 string

void func_0021A748(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint unaff_r8;
  uint unaff_r10;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar15;
  longlong lVar14;
  undefined8 uVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_138 ((uint *)(albw_frame + 0x8))
  #define local_130 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_12c (*(undefined4 *)(albw_frame + 0x14))
  #define local_128 (*(float *)(albw_frame + 0x18))
  #define local_124 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_120 (*(undefined4 *)(albw_frame + 0x20))
  #define local_11c (*(undefined4 *)(albw_frame + 0x24))
  #define local_118 (*(uint *)(albw_frame + 0x28))
  #define local_e4 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_e0 (*(undefined1 *)(albw_frame + 0x60))
  #define local_dc ((uint *)(albw_frame + 0x64))
  #define local_d4 (*(undefined4 * *)(albw_frame + 0x6c))
  #define local_d0 (*(undefined4 *)(albw_frame + 0x70))
  #define local_cc (*(float *)(albw_frame + 0x74))
  #define uStack_c8 (*(undefined4 *)(albw_frame + 0x78))
  #define uStack_c4 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_c0 (*(undefined4 *)(albw_frame + 0x80))
  #define local_bc (*(uint *)(albw_frame + 0x84))
  #define local_88 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_84 (*(undefined1 *)(albw_frame + 0xbc))
  #define local_70 (*(int *)(albw_frame + 0xd0))
  #define local_6c (*(int *)(albw_frame + 0xd4))
  #define local_5c (*(int *)(albw_frame + 0xe4))
  #define local_58 (*(int *)(albw_frame + 0xe8))
  #define local_50 (*(int *)(albw_frame + 0xf0))
  #define pcStack_4c (*(char * *)(albw_frame + 0xf4))
  uVar13 = CONCAT44(DAT_0021aafc,*(undefined4 *)(param_1 + 0x4e4));
  iVar9 = DAT_0021ab00;
  puVar1 = (undefined4 *)func_0010BAB4(0x20);
  piVar2 = (int *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    piVar2 = func_0015137C(puVar1,param_1,0);
  }
  *(int **)(param_1 + 0x8e0) = piVar2;
  piVar2[4] = (int)uVar13;
  piVar2[5] = iVar9;
  piVar2[6] = (int)uVar13;
  func_00151358(piVar2);
  uVar11 = DAT_0021ab08;
  uVar10 = DAT_0021ab04;
  iVar3 = *(int *)(param_1 + 0x8e0);
  uVar16 = CONCAT44(DAT_0021ab04,DAT_0021ab08);
  fVar12 = ALBW_AS_F32(uVar13) * ALBW_AS_F32(((ulonglong)uVar13 >> 0x20));
  *(undefined4 *)(iVar3 + 4) = DAT_0021ab04;
  *(undefined4 *)(iVar3 + 8) = uVar11;
  *(undefined4 *)(iVar3 + 0xc) = uVar10;
  local_70 = param_1 + 0x5a8;
  func_004FC8D8(local_70,*(int *)(param_1 + 0x8e0));
  local_58 = param_1 + 0x8e4;
  local_6c = 4;
  iVar3 = 0;
  uVar13 = CONCAT44(iVar9,DAT_0021ab0c);
  lVar14 = (ulonglong)DAT_0021ab10 << 0x20;
  iVar9 = 0;
  local_5c = DAT_0021ab14;
  do {
    uVar15 = (undefined4)((ulonglong)lVar14 >> 0x20);
    uVar10 = *(undefined4 *)(param_1 + 0x3d4);
    uVar11 = *(undefined4 *)(param_1 + 0x3d8);
    puVar8 = (undefined4 *)(local_58 + iVar3 * 0x30);
    *puVar8 = *(undefined4 *)(param_1 + 0x3d0);
    puVar8[1] = uVar10;
    puVar8[2] = uVar11;
    puVar8[7] = *(undefined4 *)(param_1 + 1000);
    puVar8[8] = 0;
    uVar10 = *(undefined4 *)(param_1 + 0x4e4);
    uVar11 = *(undefined4 *)(param_1 + 0x4e8);
    puVar8[0xb] = *(undefined4 *)(param_1 + 0x4ec);
    puVar8[9] = uVar10;
    puVar8[10] = uVar11;
    uVar4 = func_005330A8(param_1,0,
                          (int *)(DAT_0021ab1c + (uint)*(byte *)(DAT_0021ab18 + iVar9) * 8));
    piVar2 = func_0014DF18(*(int *)(param_1 + 0x2d0),*DAT_0021ab20,DAT_0021ab20[1],uVar4,0,0);
    puVar8[3] = piVar2;
    puVar1 = (undefined4 *)func_0010BAB4(0xa8);
    puVar5 = (uint *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      puVar5 = func_0016A2FC(puVar1,4,DAT_0021ab24,1);
    }
    puVar8[4] = puVar5;
    func_00169688(puVar5,0,DAT_0021ab28,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
    func_00133870(puVar8[4],0,puVar8[3]);
    func_0016A02C(puVar8[4],-1,(int *)0xffffffff,0);
    local_124 = (undefined4)uVar13;
    lVar14 = CONCAT44(uVar15,local_124);
    fVar17 = ALBW_AS_F32(((ulonglong)uVar16 >> 0x20));
    local_130 = &local_12c;
    local_e4 = 10;
    local_138[1] = 3;
    local_e0 = 0;
    local_12c = 0;
    local_138[0] = 1;
    unaff_r8 = unaff_r8 | 0xff;
    local_128 = fVar17;
    local_120 = uVar15;
    local_11c = local_124;
    local_118 = unaff_r8;
    func_0016898C(puVar8[4],local_138);
    iVar7 = *(int *)(puVar8[4] + 0x14);
    if (*(float *)(iVar7 + 8) != fVar17) {
      *(float *)(iVar7 + 8) = fVar17;
      *(undefined1 *)(iVar7 + 0x26) = 1;
    }
    iVar7 = puVar8[4];
    if (*(int *)(iVar7 + 0xc) == 0) {
      iVar7 = *(int *)(iVar7 + 0x14);
    }
    else {
      iVar7 = *(int *)(iVar7 + 0x14);
    }
    *(float *)(iVar7 + 0x10) = fVar17;
    iVar7 = func_00588BE4(param_1);
    if (iVar7 == *DAT_0021ab2c) {
      puVar6 = (undefined4 *)func_0010BAB4(0xa8);
      puVar1 = (undefined4 *)0x0;
      if (puVar6 != (undefined4 *)0x0) {
        puVar1 = func_0016A2FC(puVar6,1,DAT_0021ab24,1);
      }
      puVar8[5] = puVar1;
      local_50 = local_5c;
      pcStack_4c = s_Moldworm1_0021ab30;
      func_00169608((uint *)puVar8[5],0,&local_50,*(int *)(*(int *)(param_1 + 0x2d0) + 0x1c8));
      func_00133870(puVar8[5],0,puVar8[3]);
      func_0016A02C(puVar8[5],-1,(int *)0xffffffff,0);
      local_d4 = &local_d0;
      uStack_c8 = (undefined4)lVar14;
      uStack_c4 = (undefined4)((ulonglong)lVar14 >> 0x20);
      local_dc[1] = 3;
      local_88 = 10;
      local_84 = 0;
      local_d0 = 0;
      local_dc[0] = 1;
      unaff_r10 = unaff_r10 | 0xff;
      local_cc = fVar17;
      uStack_c0 = uStack_c8;
      local_bc = unaff_r10;
      func_0016898C(puVar8[5],local_dc);
      iVar7 = *(int *)(puVar8[5] + 0x14);
      if (*(float *)(iVar7 + 8) != fVar17) {
        *(float *)(iVar7 + 8) = fVar17;
        *(undefined1 *)(iVar7 + 0x26) = 1;
      }
      *(int *)(*(int *)(puVar8[5] + 0x14) + 0x10) = (int)lVar14;
    }
    puVar1 = (undefined4 *)func_0010BAB4(0x20);
    piVar2 = (int *)0x0;
    if (puVar1 != (undefined4 *)0x0) {
      piVar2 = func_0015137C(puVar1,param_1,0);
    }
    puVar8[6] = piVar2;
    piVar2[4] = (int)ALBW_AS_U32(fVar12);
    piVar2[5] = (int)((ulonglong)uVar13 >> 0x20);
    piVar2[6] = (int)ALBW_AS_U32(fVar12);
    func_00151358(piVar2);
    iVar7 = puVar8[6];
    *(float *)(iVar7 + 4) = fVar17;
    *(int *)(iVar7 + 8) = (int)uVar16;
    *(float *)(iVar7 + 0xc) = fVar17;
    func_004FC1CC(param_1,puVar8[3],0xb,ALBW_AS_F32(((ulonglong)lVar14 >> 0x20)));
    func_004FC8D8(local_70,puVar8[6]);
    iVar3 = iVar3 + 1;
    iVar9 = iVar9 + 1;
  } while (iVar3 != local_6c);
  iVar9 = 0;
  do {
    uVar10 = *(undefined4 *)(param_1 + 0x3d4);
    uVar11 = *(undefined4 *)(param_1 + 0x3d8);
    puVar1 = (undefined4 *)(param_1 + 0x9a4 + iVar9 * 0x18);
    iVar9 = iVar9 + 1;
    *puVar1 = *(undefined4 *)(param_1 + 0x3d0);
    puVar1[1] = uVar10;
    puVar1[2] = uVar11;
    uVar10 = *(undefined4 *)(param_1 + 1000);
    puVar1[4] = 0;
    puVar1[3] = uVar10;
    puVar1[5] = ALBW_AS_U32(fVar17);
  } while (iVar9 != 100);
  return;
}

