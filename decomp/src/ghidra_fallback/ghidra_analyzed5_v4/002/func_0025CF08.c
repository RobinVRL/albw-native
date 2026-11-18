#include "ghidra_types.h"

extern int func_00100790(int *param_1);
extern int func_001007A2(byte *param_1,int param_2,undefined4 param_3);
extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0025C92C(int param_1,int param_2);
extern int func_0029386C(int param_1);
extern int func_003C7D28(int param_1,byte *param_2,int param_3);
extern int func_003C89CC(short *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003C8A48(short *param_1);
extern int func_003C8BD8(int *param_1);
extern int func_003C9BCC(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_003C9DCC(uint *param_1,int *param_2,int param_3,uint param_4,int param_5);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_006522F4(int param_1,int *param_2,int param_3);
extern int *DAT_0025d318;
extern int DAT_0025d31c;
extern undefined4 *DAT_0025d320;
extern uint *DAT_0025d324;
extern int DAT_0025d330;
extern int DAT_0025d334;
extern int *DAT_0025d338;
extern int DAT_0025d34c;
extern char s__s_Save__d_bin_0025d33c[];
extern char s__s__s_0025d328[];
extern char s_cf_0025d328[];
extern char s_cf_0025d33c[];

// USA 0025CF08 <- EU 0025CF30 (Ghidra, non-matching)
// GLOBAL DAT_0025d318 int *
// GLOBAL DAT_0025d31c int
// GLOBAL DAT_0025d320 undefined4 *
// GLOBAL DAT_0025d324 uint *
// GLOBAL DAT_0025d330 int
// GLOBAL DAT_0025d334 int
// GLOBAL DAT_0025d338 int *
// GLOBAL DAT_0025d34c int
// GLOBAL s_cf_0025d328 string
// GLOBAL s_cf_0025d33c string

/* WARNING: Variable defined which should be unmapped: objStack_2d0 */

void func_0025CF08(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 uVar5;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  byte *pbVar12;
  int *piVar13;
  int iVar14;
  undefined8 uVar15;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define objStack_2d0 ((uint *)(albw_frame + 0x0))
  #define aiStack_2cc ((int *)(albw_frame + 0x4))
  #define local_b0 ((int *)(albw_frame + 0x220))
  #define local_94 (*(byte * *)(albw_frame + 0x23c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x240))
  #define local_8c ((byte *)(albw_frame + 0x244))
  #define uStack_5d (*(undefined1 *)(albw_frame + 0x273))
  #define local_58 (*(undefined4 *)(albw_frame + 0x278))
  #define local_54 (*(undefined4 *)(albw_frame + 0x27c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x280))
  #define local_44 (*(int *)(albw_frame + 0x28c))
  #define local_3c (*(int *)(albw_frame + 0x294))
  #define local_38 ((int *)(albw_frame + 0x298))
  #define local_28 (*(int *)(albw_frame + 0x2a8))
  piVar13 = DAT_0025d318;
  puVar9 = objStack_2d0;
  puVar10 = objStack_2d0;
  puVar11 = objStack_2d0;
  iVar14 = *DAT_0025d318;
  local_28 = param_1;
  func_0029386C(iVar14 + 0x9cc);
  *(undefined1 *)(iVar14 + 0x9ba) = 1;
  local_94 = local_8c;
  uStack_90 = 0x30;
  uStack_5d = 0;
  local_8c[0] = 0;
  local_b0[6] = DAT_0025d31c;
  uVar6 = *DAT_0025d324;
  func_004994B0((int)(local_b0 + 6),s__s__s_0025d328,uVar6,*DAT_0025d320);
  local_44 = iVar14 + 0x4bd8;
  local_3c = *piVar13;
  piVar13 = local_b0 + 6;
  uVar15 = (**(code **)(local_b0[6] + 8))(piVar13);
  pbVar12 = local_94;
  func_003C9BCC((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar6);
  local_38[0] = 0;
  local_38[1] = 0;
  local_54 = 0;
  local_50 = 0x200;
  func_00100790(local_38);
  iVar8 = DAT_0025d330;
  while ((iVar2 = func_001007A2(pbVar12,iVar8,local_38), uVar5 = extraout_r1, iVar2 != 0 &&
         (iVar3 = func_001007C0((short *)puVar9,pbVar12,iVar2,local_38), uVar5 = extraout_r1_00,
         iVar3 != 0))) {
    puVar9 = (uint *)((int)puVar9 + 2);
    pbVar12 = pbVar12 + iVar2;
  }
  *(short *)puVar9 = 0;
  uVar6 = func_003C89CC((short *)objStack_2d0,uVar5,local_50,local_54);
  if (((int)uVar6 < 0) &&
     (((uVar1 = (uVar6 & 0x3fc00) >> 10, uVar1 != 0x11 || ((uVar6 & 0x3ff) < 100)) ||
      (0xb3 < (uVar6 & 0x3ff))))) {
    if (((uVar1 == 0x11) && (DAT_0025d334 <= (int)(uVar6 & 0x3ff))) && ((uVar6 & 0x3ff) < 400)) {
      *(undefined4 *)(local_28 + 0xb0) = 1;
      *(undefined4 *)(local_3c + 0x9c0) = 5;
      goto LAB_0025d2bc;
    }
    if (((uVar1 == 0x11) && (uVar6 = uVar6 & 0x3ff, 0xb3 < uVar6)) && (uVar6 < 200)) {
      uVar15 = (**(code **)(local_b0[6] + 8))(piVar13);
      pbVar12 = local_94;
      func_003C9BCC((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),uVar6);
      local_38[0] = 0;
      local_38[1] = 0;
      func_00100790(local_38);
      while( true ) {
        piVar7 = local_38;
        piVar4 = (int *)func_001007A2(pbVar12,iVar8,piVar7);
        if ((piVar4 == (int *)0x0) ||
           (piVar7 = piVar4, iVar2 = func_001007C0((short *)puVar10,pbVar12,(int)piVar4,local_38),
           iVar2 == 0)) break;
        puVar10 = (uint *)((int)puVar10 + 2);
        pbVar12 = pbVar12 + (int)piVar4;
      }
      *(short *)puVar10 = 0;
      iVar2 = func_003C8A48((short *)objStack_2d0);
      if (-1 < iVar2) {
        uVar15 = (**(code **)(local_b0[6] + 8))(piVar13);
        pbVar12 = local_94;
        func_003C9BCC((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),piVar7);
        local_50 = 0;
        local_58 = 0x200;
        local_38[0] = 0;
        local_38[1] = 0;
        func_00100790(local_38);
        while ((iVar2 = func_001007A2(pbVar12,iVar8,local_38), uVar5 = extraout_r1_01, iVar2 != 0 &&
               (iVar3 = func_001007C0((short *)puVar11,pbVar12,iVar2,local_38),
               uVar5 = extraout_r1_02, iVar3 != 0))) {
          puVar11 = (uint *)((int)puVar11 + 2);
          pbVar12 = pbVar12 + iVar2;
        }
        *(short *)puVar11 = 0;
        func_003C89CC((short *)objStack_2d0,uVar5,local_58,local_50);
      }
    }
  }
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[0] = *DAT_0025d338;
  *(int *)((int)local_b0 + *(int *)(local_b0[0] + -0x30)) = DAT_0025d338[3];
  (**(code **)(local_b0[6] + 8))(piVar13);
  iVar8 = 1;
  iVar2 = func_003C7D28((int)local_b0,local_94,1);
  uVar5 = extraout_r1_03;
  if (-1 < iVar2) {
    objStack_2d0[0] = 1;
    aiStack_2cc[0] = 0;
    iVar8 = local_44;
    func_003C9DCC((uint *)(local_b0 + 1),aiStack_2cc,local_44,0x200,1);
    uVar5 = extraout_r1_04;
  }
  if ((local_b0[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((local_b0[1] & 1U) != 0) {
      func_0010C1B8(local_b0[1],uVar5,iVar8);
    }
    func_003C8BD8((int *)(local_b0[1] & 0xfffffffe));
    local_b0[1] = 0;
    uVar5 = extraout_r1_05;
  }
  if ((local_b0[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
    if ((local_b0[1] & 1U) != 0) {
      func_0010C1B8(local_b0[1],uVar5,iVar8);
    }
    func_003C8BD8((int *)(local_b0[1] & 0xfffffffe));
    local_b0[1] = 0;
  }
LAB_0025d2bc:
  puVar9 = DAT_0025d324;
  uVar6 = 0;
  do {
    func_004994B0((int)(local_b0 + 6),s__s_Save__d_bin_0025d33c,*puVar9,uVar6);
    func_006522F4(local_28,local_b0 + 6,iVar14 + 0x9cc + uVar6 * DAT_0025d34c * 4);
    uVar6 = uVar6 + 1;
  } while (uVar6 < 3);
  func_0025C92C(local_28,1);
  *(undefined1 *)(iVar14 + 0x9b8) = 1;
  return;
}

