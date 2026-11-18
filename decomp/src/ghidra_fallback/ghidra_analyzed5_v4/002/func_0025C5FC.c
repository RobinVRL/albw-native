#include "ghidra_types.h"

extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_0025C92C(int param_1,int param_2);
extern int func_003C7D28(int param_1,byte *param_2,int param_3);
extern int func_003C8BA4(uint *param_1);
extern int func_003C8BD8(int *param_1);
extern longlong func_003C9D1C(uint *param_1,uint param_2,uint param_3,uint param_4,int param_5);
extern int func_003C9DCC(uint *param_1,int *param_2,int param_3,uint param_4,int param_5);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A143C(byte *param_1,uint param_2);
extern int func_006522F4(int param_1,int *param_2,int param_3);
extern int *DAT_0025c920;
extern int DAT_0025c924;
extern uint *DAT_0025c928;
extern int *DAT_0025c93c;
extern int DAT_0025c940;
extern undefined4 *DAT_0025c944;
extern uint DAT_0025c950;
extern char s__s_Save__d_bin_0025c92c[];
extern char s__s__s_0025c948[];
extern char s_cf_0025c92c[];
extern char s_cf_0025c948[];

// USA 0025C5FC <- EU 0025C624 (Ghidra, non-matching)
// GLOBAL DAT_0025c920 int *
// GLOBAL DAT_0025c924 int
// GLOBAL DAT_0025c928 uint *
// GLOBAL DAT_0025c93c int *
// GLOBAL DAT_0025c940 int
// GLOBAL DAT_0025c944 undefined4 *
// GLOBAL DAT_0025c950 uint
// GLOBAL s_cf_0025c948 string
// GLOBAL s_cf_0025c92c string

undefined4 func_0025C5FC(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  uint uVar3;
  undefined4 extraout_r1_03;
  undefined4 uVar4;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(int *)(albw_frame + 0xc))
  #define local_90 ((int *)(albw_frame + 0x10))
  #define local_74 (*(byte * *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define local_6c ((byte *)(albw_frame + 0x34))
  #define uStack_3d (*(undefined1 *)(albw_frame + 0x63))
  #define local_34 ((int *)(albw_frame + 0x6c))
  #define local_2c (*(int *)(albw_frame + 0x74))
  #define local_28 (*(int *)(albw_frame + 0x78))
  puVar1 = DAT_0025c928;
  iVar6 = *DAT_0025c920;
  iVar9 = *(int *)(iVar6 + 0x9bc);
  iVar10 = *(int *)(iVar6 + 0x14);
  uVar8 = *(uint *)(iVar6 + iVar9 * 4 + 0x4dd8);
  local_74 = local_6c;
  uStack_70 = 0x30;
  uStack_3d = 0;
  local_6c[0] = 0;
  local_90[6] = DAT_0025c924;
  local_28 = param_1;
  func_004994B0((int)(local_90 + 6),s__s_Save__d_bin_0025c92c,*DAT_0025c928,iVar9);
  if ((uVar8 & 7) != 0) {
    local_90[1] = 0;
    local_90[2] = 0;
    local_90[3] = 0;
    local_90[4] = 0;
    local_90[5] = 0;
    local_90[0] = *DAT_0025c93c;
    *(int *)((int)local_90 + *(int *)(local_90[0] + -0x30)) = DAT_0025c93c[3];
    (**(code **)(local_90[6] + 8))(local_90 + 6);
    iVar5 = 0;
    iVar2 = func_003C7D28((int)local_90,local_74,0);
    uVar3 = extraout_r1;
    if (iVar2 < 0) {
      func_006522F4(local_28,local_90 + 6,iVar6 + 0x9cc + iVar9 * DAT_0025c940 * 4);
      (**(code **)(local_90[6] + 8))(local_90 + 6);
      iVar5 = 0;
      func_003C7D28((int)local_90,local_74,0);
      uVar3 = extraout_r1_00;
    }
    if ((~uVar8 & 7) == 0) {
      local_94 = 0;
      func_003C9DCC((uint *)(local_90 + 1),&local_94,iVar10,DAT_0025c950,1);
      uVar4 = extraout_r1_05;
    }
    else if ((~uVar8 & 3) == 0) {
      local_94 = 0;
      func_003C9DCC((uint *)(local_90 + 1),&local_94,iVar10,0x1400,1);
      uVar4 = extraout_r1_06;
    }
    else {
      if ((uVar8 & 1) != 0) {
        local_94 = 0;
        func_003C9D1C((uint *)(local_90 + 1),uVar3,0,0,0);
        iVar5 = iVar10;
        func_003C9DCC((uint *)(local_90 + 1),&local_94,iVar10,0xe00,0);
        uVar3 = extraout_r1_01;
      }
      if ((uVar8 & 2) != 0) {
        local_2c = 0;
        func_003C9D1C((uint *)(local_90 + 1),uVar3,0xe00,0,0);
        iVar5 = iVar10 + 0xe00;
        func_003C9DCC((uint *)(local_90 + 1),&local_2c,iVar5,0x600,0);
        uVar3 = extraout_r1_02;
      }
      if ((uVar8 & 4) != 0) {
        local_94 = 0;
        func_003C9D1C((uint *)(local_90 + 1),uVar3,0x1400,0,0);
        iVar5 = iVar10 + 0x1400;
        func_003C9DCC((uint *)(local_90 + 1),&local_94,iVar5,0x200,0);
      }
      iVar10 = iVar5;
      func_003C8BA4((uint *)(local_90 + 1));
      uVar4 = extraout_r1_03;
    }
    if ((local_90[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((local_90[1] & 1U) != 0) {
        func_0010C1B8(local_90[1],uVar4,iVar10);
      }
      func_003C8BD8((int *)(local_90[1] & 0xfffffffe));
      local_90[1] = 0;
    }
    func_004994B0((int)(local_90 + 6),s__s__s_0025c948,*puVar1,*DAT_0025c944);
    (**(code **)(local_90[6] + 8))(local_90 + 6);
    func_003C7D28((int)local_90,local_74,0);
    pbVar7 = (byte *)(iVar6 + 0x4bd8);
    if (*(char *)(iVar6 + 0x9c4) == '\0') {
      *(int *)(iVar6 + 0x4bdc) = iVar9;
    }
    uVar8 = func_004A143C(pbVar7,0x1fc);
    *(uint *)(iVar6 + 0x4dd4) = uVar8;
    local_34[0] = 0;
    func_003C9DCC((uint *)(local_90 + 1),local_34,(int)pbVar7,0x200,1);
    if ((local_90[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
      if ((local_90[1] & 1U) != 0) {
        func_0010C1B8(local_90[1],extraout_r1_04,pbVar7);
      }
      func_003C8BD8((int *)(local_90[1] & 0xfffffffe));
      local_90[1] = 0;
    }
  }
  return func_0025C92C(local_28,0);
}

