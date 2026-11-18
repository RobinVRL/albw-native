#include "ghidra_types.h"

extern int func_00100790(int *param_1);
extern int func_001007A2(byte *param_1,int param_2,undefined4 param_3);
extern int func_001007C0(short *param_1,byte *param_2,int param_3,undefined4 param_4);
extern int func_0010C1B8(undefined4 param_1,undefined4 param_2,undefined4 param_3);
extern int func_001164F4(undefined4 *param_1,uint param_2);
extern int func_00256810(byte *param_1);
extern int func_002DF44C(int param_1,int param_2);
extern int func_003C8874(undefined4 *param_1,short *param_2,undefined4 param_3);
extern int func_003C8BD8(int *param_1);
extern int func_003C9C94(uint *param_1,int *param_2,int param_3,uint param_4);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004A143C(byte *param_1,uint param_2);
extern int *DAT_0025cda4;
extern int DAT_0025cda8;
extern int *DAT_0025cdac;
extern undefined4 *DAT_0025cdb0;
extern uint *DAT_0025cdb4;
extern uint DAT_0025cdc0;
extern int DAT_0025cdd4;
extern int DAT_0025cdd8;
extern uint DAT_0025cf24;
extern int DAT_0025cf28;
extern int *DAT_0025cf2c;
extern char s__s_Save__d_bin_0025cdc4[];
extern char s__s__s_0025cdb8[];
extern char s_cf_0025cdb8[];
extern char s_cf_0025cdc4[];

// USA 0025C9CC <- EU 0025C9F4 (Ghidra, non-matching)
// GLOBAL DAT_0025cda4 int *
// GLOBAL DAT_0025cda8 int
// GLOBAL DAT_0025cdac int *
// GLOBAL DAT_0025cdb0 undefined4 *
// GLOBAL DAT_0025cdb4 uint *
// GLOBAL DAT_0025cdc0 uint
// GLOBAL DAT_0025cdd4 int
// GLOBAL DAT_0025cdd8 int
// GLOBAL DAT_0025cf24 uint
// GLOBAL DAT_0025cf28 int
// GLOBAL DAT_0025cf2c int *
// GLOBAL s_cf_0025cdb8 string
// GLOBAL s_cf_0025cdc4 string

/* WARNING: Type propagation algorithm not settling */

int * func_0025C9CC(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 extraout_r1_05;
  undefined4 extraout_r1_06;
  undefined4 extraout_r1_07;
  undefined4 uVar7;
  undefined4 extraout_r1_08;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  short *psVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  bool bVar15;
  _Alignas(8) unsigned char albw_frame[0x2c0];
  #define local_2b8 ((int *)(albw_frame + 0x8))
  #define local_29c (*(byte * *)(albw_frame + 0x24))
  #define uStack_298 (*(undefined4 *)(albw_frame + 0x28))
  #define local_294 ((byte *)(albw_frame + 0x2c))
  #define uStack_265 (*(undefined1 *)(albw_frame + 0x5b))
  #define asStack_264 ((short *)(albw_frame + 0x5c))
  #define local_260 ((int *)(albw_frame + 0x60))
  #define local_4c (*(int *)(albw_frame + 0x274))
  #define local_48 (*(int *)(albw_frame + 0x278))
  #define local_44 (*(uint *)(albw_frame + 0x27c))
  #define local_40 (*(uint *)(albw_frame + 0x280))
  #define local_3c (*(int *)(albw_frame + 0x284))
  #define local_38 (*(int *)(albw_frame + 0x288))
  #define local_34 (*(undefined4 *)(albw_frame + 0x28c))
  local_48 = *DAT_0025cda4;
  local_29c = local_294;
  uStack_298 = 0x30;
  uStack_265 = 0;
  local_294[0] = 0;
  local_2b8[2] = 0;
  local_2b8[6] = DAT_0025cda8;
  local_2b8[1] = 0;
  local_2b8[3] = 0;
  local_2b8[4] = 0;
  local_2b8[5] = 0;
  local_2b8[0] = *DAT_0025cdac;
  *(int *)((int)local_2b8 + *(int *)(local_2b8[0] + -0x30)) = DAT_0025cdac[3];
  func_004994B0((int)(local_2b8 + 6),s__s__s_0025cdb8,*DAT_0025cdb4,*DAT_0025cdb0);
  (**(code **)(local_2b8[6] + 8))(local_2b8 + 6);
  pbVar12 = local_29c;
  psVar11 = asStack_264;
  local_40 = 0;
  local_3c = 0;
  func_00100790((int *)&local_40);
  while ((iVar1 = func_001007A2(pbVar12,0x105,&local_40), iVar1 != 0 &&
         (iVar2 = func_001007C0(psVar11,pbVar12,iVar1,&local_40), iVar2 != 0))) {
    psVar11 = psVar11 + 1;
    pbVar12 = pbVar12 + iVar1;
  }
  *psVar11 = 0;
  local_2b8[4] = 0;
  local_2b8[5] = 0;
  local_2b8[2] = 0;
  puVar8 = (uint *)0x1;
  local_2b8[3] = 0;
  iVar2 = func_003C8874(local_2b8 + 1,asStack_264,1);
  iVar1 = local_48;
  if (iVar2 < 0) {
    *(undefined4 *)(param_1 + 0xb0) = 4;
    uVar7 = extraout_r1;
  }
  else {
    puVar9 = (uint *)(local_48 + 0x4bd8);
    local_260[0] = 0;
    puVar8 = puVar9;
    iVar2 = func_003C9C94((uint *)(local_2b8 + 1),local_260,(int)puVar9,DAT_0025cdc0);
    if (iVar2 < 0) {
      *(undefined4 *)(param_1 + 0xb0) = 4;
      uVar7 = extraout_r1_00;
    }
    else {
      if ((local_2b8[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
        if ((local_2b8[1] & 1U) != 0) {
          func_0010C1B8(local_2b8[1],extraout_r1_00,puVar8);
        }
        func_003C8BD8((int *)(local_2b8[1] & 0xfffffffe));
        local_2b8[1] = 0;
      }
      uVar10 = *(uint *)(iVar1 + 0x4dd4);
      uVar3 = func_004A143C((byte *)puVar9,0x1fc);
      bVar15 = uVar3 == uVar10;
      *(uint *)(iVar1 + 0x4dd4) = uVar3;
      if (bVar15) {
        uVar3 = *puVar9;
      }
      if (bVar15 && uVar3 == 4) {
        local_44 = 0;
        local_4c = local_48 + 0x4dd8;
        local_3c = local_48 + 0x9cc;
        do {
          func_004994B0((int)(local_2b8 + 6),s__s_Save__d_bin_0025cdc4,*DAT_0025cdb4,local_44);
          (**(code **)(local_2b8[6] + 8))(local_2b8 + 6);
          pbVar12 = local_29c;
          psVar11 = asStack_264;
          local_38 = 0;
          local_34 = 0;
          func_00100790(&local_38);
          while ((iVar1 = func_001007A2(pbVar12,DAT_0025cdd4,&local_38), iVar1 != 0 &&
                 (iVar2 = func_001007C0(psVar11,pbVar12,iVar1,&local_38), iVar2 != 0))) {
            psVar11 = psVar11 + 1;
            pbVar12 = pbVar12 + iVar1;
          }
          *psVar11 = 0;
          local_2b8[4] = 0;
          local_2b8[5] = 0;
          local_2b8[2] = 0;
          puVar8 = (uint *)0x1;
          local_2b8[3] = 0;
          iVar1 = func_003C8874(local_2b8 + 1,asStack_264,1);
          uVar3 = DAT_0025cdc0;
          if (iVar1 < 0) {
            *(undefined4 *)(param_1 + 0xb0) = 4;
            uVar7 = extraout_r1_02;
            goto joined_r0x0025cf10;
          }
          local_40 = 0;
          puVar9 = (uint *)(local_3c + local_44 * DAT_0025cdd8 * 4);
          puVar8 = puVar9;
          func_003C9C94((uint *)(local_2b8 + 1),(int *)&local_40,(int)puVar9,DAT_0025cdc0);
          uVar7 = extraout_r1_03;
          if ((local_2b8[1] & 0xfffffffeU) != 0) {
                    /* WARNING: Subroutine does not return */
            if ((local_2b8[1] & 1U) != 0) {
              func_0010C1B8(local_2b8[1],extraout_r1_03,puVar8);
            }
            func_003C8BD8((int *)(local_2b8[1] & 0xfffffffe));
            local_2b8[1] = 0;
            uVar7 = extraout_r1_04;
          }
          if (local_40 != uVar3) {
            *(undefined4 *)(param_1 + 0xb0) = 4;
            goto joined_r0x0025cf10;
          }
          uVar10 = puVar9[0x37f];
          uVar3 = func_004A143C((byte *)puVar9,DAT_0025cf24);
          puVar9[0x37f] = uVar3;
          uVar7 = extraout_r1_05;
          if (uVar10 == uVar3) {
            puVar13 = *(uint **)(DAT_0025cf28 + (int)puVar9);
            puVar4 = (uint *)func_004A143C((byte *)(puVar9 + 0x380),DAT_0025cf28 - 0xe00);
            bVar15 = puVar13 != puVar4;
            puVar13 = puVar4;
            if (bVar15) {
              puVar13 = puVar9 + 0x380;
            }
            puVar9[0x4ff] = (uint)puVar4;
            if (bVar15) {
              func_00256810((byte *)puVar13);
            }
            uVar14 = puVar9[0x57f];
            uVar5 = func_004A143C((byte *)(puVar9 + 0x500),0x1fc);
            puVar9[0x57f] = uVar5;
            uVar7 = extraout_r1_06;
            if (uVar14 != uVar5) {
              func_001164F4(puVar9 + 0x500,0x200);
              uVar5 = func_004A143C((byte *)(puVar9 + 0x500),0x1fc);
              puVar9[0x57f] = uVar5;
              uVar7 = extraout_r1_07;
            }
          }
          if (uVar10 != uVar3) {
            *(undefined4 *)(param_1 + 0xb0) = 4;
            goto joined_r0x0025cf10;
          }
          puVar9 = (uint *)(local_4c + local_44 * 4);
          *puVar9 = *puVar9 | 8;
          local_44 = local_44 + 1;
        } while (local_44 < 3);
        *(undefined4 *)(local_48 + 0x9c0) = 6;
        *(undefined4 *)(param_1 + 0xb0) = 0;
        func_002DF44C(*DAT_0025cf2c,param_1);
        *(undefined1 *)(param_1 + 0x8f) = 1;
        uVar7 = extraout_r1_08;
      }
      else {
        *(undefined4 *)(param_1 + 0xb0) = 4;
        uVar7 = extraout_r1_01;
      }
    }
  }
joined_r0x0025cf10:
  piVar6 = (int *)0x0;
  if ((local_2b8[1] & 0xfffffffeU) != 0) {
    if ((local_2b8[1] & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
      func_0010C1B8(local_2b8[1],uVar7,puVar8);
    }
    piVar6 = func_003C8BD8((int *)(local_2b8[1] & 0xfffffffe));
  }
  return piVar6;
}

