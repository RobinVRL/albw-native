#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00100950(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010983C(undefined4 param_1,undefined4 param_2);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001FEC30(int *param_1,int *param_2);
extern int func_001FEE18(int *param_1,int *param_2);
extern int func_0048A08C(int *param_1,int param_2);
extern int func_0048A16C(int param_1);
extern int func_0048A1EC(int param_1,int *param_2,int param_3,uint param_4);
extern int func_0048C378(int *param_1,int param_2,undefined4 param_3);
extern int func_0048E59C(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
extern int func_004A1520();
extern int func_004F0678(int *param_1,int *param_2,int *param_3);
extern int func_004F0B30(int param_1,int *param_2);
extern int func_00504D48(int param_1,int param_2);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_0058FA08();
extern int func_0058FA5C();
extern int func_006875AC(int *param_1,int *param_2,int param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int func_00689A2C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_00691884(int *param_1,int *param_2);
extern int func_006919D8(int *param_1,int *param_2);
extern undefined4 DAT_004b7cd8;
extern undefined4 DAT_004b7cdc;
extern undefined4 DAT_004b7ce0;
extern uint *DAT_004b7cf0;
extern int *DAT_004b7cf4;
extern int *DAT_004b7cf8;
extern undefined DAT_004b7cfc;
extern undefined DAT_004b7d00;
extern int *DAT_004b7d04;
extern undefined1 *DAT_004b7d08;
extern undefined DAT_004b7d1c;
extern int *DAT_004b7d24;
extern undefined4 DAT_004b7d28;
extern undefined4 DAT_004b7d2c;
extern undefined4 DAT_004b7d30;
extern undefined4 DAT_004b7d34;
extern undefined4 DAT_004b7d38;
extern undefined4 DAT_004b7d3c;
extern uint *DAT_004b7d40;
extern undefined *DAT_004b7d44;
extern int DAT_004b83e0;
extern undefined *DAT_004b83e4;
extern uint *DAT_004b83e8;
extern undefined DAT_004b83ec;
extern undefined1 DAT_004b83f0;
extern int DAT_004b8b18;
extern undefined4 *DAT_004b8b1c;
extern undefined4 DAT_004b8b20;
extern undefined *DAT_004b8b24;
extern undefined *DAT_004b8b28;
extern undefined DAT_004b8b2c;
extern undefined DAT_004b8b34;
extern char s_Demo__004b7d14[];
extern char s_World_004b7d0c[];
extern char s_World_Demo__004b7ce4[];
extern char s_cf_004b7ce4[];
extern char s_cf_004b7d14[];

// USA 004B79BC <- EU 004B7994 (Ghidra, non-matching)
// GLOBAL DAT_004b7cd8 undefined4
// GLOBAL DAT_004b7cdc undefined4
// GLOBAL DAT_004b7ce0 undefined4
// GLOBAL DAT_004b7cf0 uint *
// GLOBAL DAT_004b7cf4 int *
// GLOBAL DAT_004b7cf8 int *
// GLOBAL DAT_004b7cfc undefined
// GLOBAL DAT_004b7d00 undefined
// GLOBAL DAT_004b7d04 int *
// GLOBAL DAT_004b7d08 undefined1 *
// GLOBAL DAT_004b7d1c undefined
// GLOBAL DAT_004b7d24 int *
// GLOBAL DAT_004b7d28 undefined4
// GLOBAL DAT_004b7d2c undefined4
// GLOBAL DAT_004b7d30 undefined4
// GLOBAL DAT_004b7d34 undefined4
// GLOBAL DAT_004b7d38 undefined4
// GLOBAL DAT_004b7d3c undefined4
// GLOBAL DAT_004b7d40 uint *
// GLOBAL DAT_004b7d44 undefined *
// GLOBAL DAT_004b83e0 int
// GLOBAL DAT_004b83e4 undefined *
// GLOBAL DAT_004b83e8 uint *
// GLOBAL DAT_004b83ec undefined
// GLOBAL DAT_004b83f0 undefined1
// GLOBAL DAT_004b8b18 int
// GLOBAL DAT_004b8b1c undefined4 *
// GLOBAL DAT_004b8b20 undefined4
// GLOBAL DAT_004b8b24 undefined *
// GLOBAL DAT_004b8b28 undefined *
// GLOBAL DAT_004b8b2c undefined
// GLOBAL DAT_004b8b34 undefined
// GLOBAL s_cf_004b7d14 string
// GLOBAL s_cf_004b7ce4 string
// GLOBAL s_World_004b7d0c string

undefined4 func_004B79BC(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint *puVar11;
  undefined1 *puVar12;
  uint *extraout_r1;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  char *pcVar17;
  int *piVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  code *in_r12;
  bool bVar22;
  _Alignas(8) unsigned char albw_frame[0x2d0];
  #define local_2c4 (*(uint *)(albw_frame + 0xc))
  #define local_2c0 (*(undefined1 * *)(albw_frame + 0x10))
  #define local_2bc (*(int *)(albw_frame + 0x14))
  #define auStack_2b8 ((undefined1 *)(albw_frame + 0x18))
  #define local_1b8 (*(int *)(albw_frame + 0x118))
  #define local_1b4 (*(char * *)(albw_frame + 0x11c))
  #define auStack_1ac ((undefined1 *)(albw_frame + 0x124))
  #define local_12c ((undefined4 *)(albw_frame + 0x1a4))
  #define local_118 (*(int * *)(albw_frame + 0x1b8))
  #define local_ec (*(uint * *)(albw_frame + 0x1e4))
  #define local_e8 (*(uint * *)(albw_frame + 0x1e8))
  #define local_e4 (*(char * *)(albw_frame + 0x1ec))
  #define local_e0 (*(uint * *)(albw_frame + 0x1f0))
  #define local_dc (*(undefined1 * *)(albw_frame + 0x1f4))
  #define auStack_d8 ((undefined1 *)(albw_frame + 0x1f8))
  #define local_d0 (*(uint * *)(albw_frame + 0x200))
  #define local_cc (*(undefined * *)(albw_frame + 0x204))
  #define local_c8 (*(undefined4 *)(albw_frame + 0x208))
  #define local_c4 (*(uint * *)(albw_frame + 0x20c))
  #define local_c0 (*(uint * *)(albw_frame + 0x210))
  #define local_bc (*(char * *)(albw_frame + 0x214))
  #define local_b4 (*(int *)(albw_frame + 0x21c))
  #define local_b0 (*(int *)(albw_frame + 0x220))
  #define auStack_a8 ((undefined1 *)(albw_frame + 0x228))
  #define local_80 (*(uint *)(albw_frame + 0x250))
  #define local_7c (*(undefined4 *)(albw_frame + 0x254))
  #define local_78 (*(uint * *)(albw_frame + 0x258))
  #define local_74 (*(undefined1 * *)(albw_frame + 0x25c))
  #define local_70 (*(uint * *)(albw_frame + 0x260))
  #define local_6c (*(uint * *)(albw_frame + 0x264))
  #define local_68 (*(uint * *)(albw_frame + 0x268))
  #define local_64 (*(undefined * *)(albw_frame + 0x26c))
  #define local_60 (*(uint * *)(albw_frame + 0x270))
  #define local_5c (*(uint * *)(albw_frame + 0x274))
  #define local_58 (*(int *)(albw_frame + 0x278))
  #define local_54 (*(uint * *)(albw_frame + 0x27c))
  #define puStack_50 (*(undefined1 * *)(albw_frame + 0x280))
  #define local_4c (*(uint * *)(albw_frame + 0x284))
  #define local_48 (*(uint * *)(albw_frame + 0x288))
  #define local_44 (*(undefined1 *)(albw_frame + 0x28c))
  #define local_43 (*(undefined1 *)(albw_frame + 0x28d))
  #define local_42 (*(undefined1 *)(albw_frame + 0x28e))
  #define local_41 (*(undefined1 *)(albw_frame + 0x28f))
  #define local_40 (*(uint * *)(albw_frame + 0x290))
  #define local_3c (*(uint * *)(albw_frame + 0x294))
  #define local_38 (*(char * *)(albw_frame + 0x298))
  #define local_34 (*(undefined4 *)(albw_frame + 0x29c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x2a0))
  #define local_2c (*(undefined1 *)(albw_frame + 0x2a4))
  #define local_28 (*(int *)(albw_frame + 0x2a8))
  local_28 = param_1;
  puVar4 = func_0010CE7C(local_12c);
  local_c8 = DAT_004b7cd8;
  puVar4[4] = 0;
  puVar4[5] = 0;
  *puVar4 = local_c8;
  puVar4[0xe] = 0;
  puVar4 = func_00689A2C(&local_1b8,auStack_1ac,0x80);
  puVar19 = DAT_004b7cf0;
  *(undefined1 *)puVar4[1] = 0;
  *puVar4 = DAT_004b7ce0;
  local_bc = s_World_Demo__004b7ce4;
  local_c0 = puVar19;
  func_00689894((int)&local_1b8,(int *)&local_c0,0xffffffff);
  piVar18 = DAT_004b7cf8;
  iVar5 = *DAT_004b7cf4;
  iVar6 = func_00582260(*DAT_004b7cf8,(int)*(char *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c));
  func_00689928(&local_1b8,(int *)(iVar6 + 4),0xffffffff);
  local_bc = &DAT_004b7cfc;
  local_c0 = puVar19;
  func_00689928(&local_1b8,(int *)&local_c0,0xffffffff);
  piVar7 = (int *)func_0048E59C(*DAT_004b7d04,(int)local_12c,&local_1b8,0,0);
  if (piVar7 == (int *)0x0) {
    local_12c[0] = local_c8;
    if (local_118 != (int *)0x0) {
LAB_004b7d64:
      local_12c[0] = local_c8;
      func_0048A08C(local_118,(int)local_12c);
    }
  }
  else {
    local_80 = func_0048A16C((int)local_12c);
    iVar6 = func_0010BA78(local_80);
    func_0048A1EC((int)local_12c,(int *)0x0,iVar6,local_80);
    func_0048A08C(piVar7,(int)local_12c);
    local_70 = (uint *)0x0;
    local_74 = DAT_004b7d08;
    local_78 = puVar19;
    local_6c = (uint *)0x0;
    local_68 = (uint *)0x20;
    local_64 = (undefined *)0x0;
    local_5c = (uint *)0x0;
    local_48 = (uint *)s_World_004b7d0c;
    local_60 = (uint *)0x0;
    local_58 = 0;
    local_54 = (uint *)0x0;
    puStack_50 = (undefined1 *)0x0;
    local_4c = puVar19;
    local_44 = 7;
    local_38 = &DAT_004b7d00;
    local_42 = 0;
    local_40 = (uint *)((uint)local_40 & 0xffffff00);
    local_41 = 0;
    local_2c = 1;
    local_30 = 0;
    local_43 = 0xff;
    local_34 = 0;
    local_e4 = s_Demo__004b7d14;
    local_3c = puVar19;
    local_e8 = puVar19;
    func_00689894((int)&local_1b8,(int *)&local_e8,0xffffffff);
    iVar5 = func_00582260(*piVar18,(int)*(char *)(iVar5 + 0x18),*(uint *)(iVar5 + 0x1c));
    func_00689928(&local_1b8,(int *)(iVar5 + 4),0xffffffff);
    local_e4 = &DAT_004b7d1c;
    local_e8 = puVar19;
    func_00689928(&local_1b8,(int *)&local_e8,0xffffffff);
    (**(code **)(local_1b8 + 8))(&local_1b8);
    local_e8 = puVar19;
    local_e4 = local_1b4;
    local_38 = local_1b4;
    puVar4 = func_00504D48(*DAT_004b7d24,(int)&local_78);
    *(undefined4 **)(local_28 + 0x28) = puVar4;
    puVar4 = func_00689A2C(&local_2c4,auStack_2b8,0x100);
    *(undefined1 *)puVar4[1] = 0;
    *puVar4 = DAT_004b7d2c;
    puVar4 = func_00689A2C(&local_b4,auStack_a8,0x28);
    *(undefined1 *)puVar4[1] = 0;
    *puVar4 = DAT_004b7d34;
    iVar5 = func_0010BAB4(DAT_004b7d38);
    local_7c = DAT_004b7d3c;
    local_78 = DAT_004b7d40;
    local_d0 = (uint *)0x0;
    if (iVar5 != 0) {
      iVar5 = func_00100118(iVar5,DAT_004b7d44,0x1c,0x10);
      *(undefined4 *)(iVar5 + 0x1c0) = 0;
      local_64 = &DAT_004b7d00;
      local_68 = puVar19;
      puVar4 = func_00689A2C(&local_ec,&local_e0,0x10);
      *puVar4 = local_7c;
      func_00689894((int)puVar4,(int *)&local_68,0xffffffff);
      iVar16 = 0;
      *puVar4 = local_78;
      do {
        iVar21 = iVar5 + iVar16 * 0x1c;
        puVar20 = *(uint **)(iVar21 + 4);
        (*(code *)local_ec[2])(&local_ec);
        uVar15 = 0;
        do {
          if (*(char *)((int)local_e8 + uVar15) == '\0') {
            if ((int)uVar15 < 0x40001) goto LAB_004b7d78;
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 0x40001);
        uVar15 = 0;
LAB_004b7d78:
        iVar21 = *(int *)(iVar21 + 8);
        if (iVar21 <= (int)uVar15) {
          uVar15 = iVar21 - 1;
        }
        (*(code *)local_ec[2])(&local_ec);
        func_0010E3C4(puVar20,local_e8,uVar15);
        iVar16 = iVar16 + 1;
        *(undefined1 *)((int)puVar20 + uVar15) = 0;
      } while (iVar16 < 0x10);
      iVar5 = func_00100118(iVar5 + 0x1c4,DAT_004b7d44,0x1c,6);
      *(undefined4 *)(iVar5 + 0xa8) = 0;
      local_cc = &DAT_004b7d00;
      local_d0 = puVar19;
      puVar4 = func_00689A2C(&local_70,&local_64,0x10);
      *puVar4 = local_7c;
      func_00689894((int)puVar4,(int *)&local_d0,0xffffffff);
      iVar16 = 0;
      *puVar4 = local_78;
      do {
        iVar21 = iVar5 + iVar16 * 0x1c;
        puVar20 = *(uint **)(iVar21 + 4);
        (*(code *)local_70[2])(&local_70);
        uVar15 = 0;
        do {
          if (*(char *)((int)local_6c + uVar15) == '\0') {
            if ((int)uVar15 < 0x40001) goto LAB_004b7e68;
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 0x40001);
        uVar15 = 0;
LAB_004b7e68:
        iVar21 = *(int *)(iVar21 + 8);
        if (iVar21 <= (int)uVar15) {
          uVar15 = iVar21 - 1;
        }
        (*(code *)local_70[2])(&local_70);
        func_0010E3C4(puVar20,local_6c,uVar15);
        iVar16 = iVar16 + 1;
        *(undefined1 *)((int)puVar20 + uVar15) = 0;
      } while (iVar16 < 6);
      iVar5 = func_00100118(iVar5 + 0xac,DAT_004b7d44,0x1c,4);
      *(undefined4 *)(iVar5 + 0x70) = 0;
      local_5c = (uint *)&DAT_004b7d00;
      local_60 = puVar19;
      puVar4 = func_00689A2C(&local_e4,auStack_d8,0x10);
      *puVar4 = local_7c;
      func_00689894((int)puVar4,(int *)&local_60,0xffffffff);
      iVar16 = 0;
      *puVar4 = local_78;
      do {
        iVar21 = iVar5 + iVar16 * 0x1c;
        puVar20 = *(uint **)(iVar21 + 4);
        (**(code **)(local_e4 + 8))(&local_e4);
        uVar15 = 0;
        do {
          if (*(char *)((int)local_e0 + uVar15) == '\0') {
            if ((int)uVar15 < 0x40001) goto LAB_004b7f58;
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < 0x40001);
        uVar15 = 0;
LAB_004b7f58:
        iVar21 = *(int *)(iVar21 + 8);
        if (iVar21 <= (int)uVar15) {
          uVar15 = iVar21 - 1;
        }
        (**(code **)(local_e4 + 8))(&local_e4);
        func_0010E3C4(puVar20,local_e0,uVar15);
        iVar16 = iVar16 + 1;
        *(undefined1 *)((int)puVar20 + uVar15) = 0;
        iVar21 = DAT_004b83e0;
      } while (iVar16 < 4);
      iVar5 = func_00100118(iVar5 + 0x74,DAT_004b83e4,DAT_004b83e0,0x10);
      iVar5 = func_00100118(iVar5 + iVar21 * 0x10,DAT_004b83e4,iVar21,0x10);
      iVar5 = func_00100118(iVar5 + iVar21 * 0x10,DAT_004b83e4,iVar21,0x10);
      iVar5 = func_00100118(iVar5 + iVar21 * 0x10,DAT_004b83e4,iVar21,6);
      iVar5 = func_00100118(iVar5 + 0x2130,DAT_004b83e4,iVar21,6);
      iVar5 = func_00100118(iVar5 + 0x2130,DAT_004b83e4,iVar21,6);
      iVar5 = func_00100118(iVar5 + 0x2130,DAT_004b83e4,iVar21,4);
      iVar5 = func_00100118(iVar5 + iVar21 * 4,DAT_004b83e4,iVar21,4);
      local_d0 = (uint *)(iVar5 + -0x18614);
    }
    local_4c = (uint *)0x1;
    uVar15 = 0;
    if (local_80 != 0) {
      local_48 = local_d0 + 0x670d;
      local_68 = DAT_004b83e8;
      do {
        uVar1 = *(undefined1 *)(iVar6 + uVar15);
        (**(code **)(local_2c4 + 8))(&local_2c4);
        iVar5 = 0;
        do {
          if (local_2c0[iVar5] == '\0') {
            if (iVar5 < 0x40001) goto LAB_004b80cc;
            break;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < 0x40001);
        iVar5 = 0;
LAB_004b80cc:
        if (iVar5 < local_2bc + -1) {
          local_2c0[iVar5] = uVar1;
          local_2c0[iVar5 + 1] = 0;
        }
        local_3c = (uint *)&DAT_004b83ec;
        local_40 = puVar19;
        iVar5 = func_006919D8((int *)&local_2c4,(int *)&local_40);
        puVar12 = DAT_004b7d08;
        if (iVar5 != -1) {
          (**(code **)(local_2c4 + 8))(&local_2c4);
          local_58 = 0;
          do {
            if (local_2c0[local_58] == '\0') {
              if (local_58 < 0x40001) goto LAB_004b816c;
              break;
            }
            local_58 = local_58 + 1;
          } while (local_58 < 0x40001);
          local_58 = 0;
LAB_004b816c:
          local_58 = local_58 + 1;
          local_60 = local_68;
          local_54 = puVar19;
          puStack_50 = puVar12;
          iVar16 = 0;
          local_e4 = (char *)0x0;
          local_dc = &DAT_004b83f0;
          local_ec = local_68;
          local_e0 = puVar19;
          local_e8 = &local_2c4;
          local_5c = &local_2c4;
          (**(code **)(local_2c4 + 8))(&local_2c4);
          iVar5 = 0;
          do {
            if (local_2c0[iVar5] == '\0') {
              if (iVar5 < 0x40001) goto LAB_004b81f0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 < 0x40001);
          iVar5 = 0;
LAB_004b81f0:
          if (-1 < iVar5) {
            iVar21 = 0;
            (**(code **)(local_b4 + 8))(&local_b4);
            iVar5 = local_b0;
            for (; uVar8 = local_e8[1], *(char *)(uVar8 + iVar16) != '\0'; iVar16 = iVar16 + 1) {
              (*(code *)local_e0[2])(&local_e0);
              cVar2 = *(char *)(uVar8 + iVar16);
              iVar9 = 0;
              do {
                if (local_dc[iVar9] == '\0') break;
                if (local_dc[iVar9] == cVar2) goto LAB_004b827c;
                iVar9 = iVar9 + 1;
              } while (iVar9 < 0x40001);
              *(char *)(iVar5 + iVar21) = cVar2;
              iVar21 = iVar21 + 1;
            }
LAB_004b827c:
            *(undefined1 *)(iVar5 + iVar21) = 0;
            local_e4 = (char *)(iVar16 + 1);
          }
          iVar5 = func_006875AC((int *)local_48,&local_b4,-1);
          pcVar17 = local_e4;
          puVar20 = local_e8;
          if (iVar5 == 0) {
            if (local_4c == (uint *)0x0) {
LAB_004b85c0:
              local_ec = local_68;
              local_60 = local_68;
              func_0058FA08(iVar6);
              puVar19 = local_d0;
              iVar5 = DAT_004b83e0;
              if (local_d0 != (uint *)0x0) {
                func_00100950((int)(local_d0 + 0x6185),DAT_004b8b24,DAT_004b83e0,4);
                func_00100950((int)(puVar19 + 0x5bfd),DAT_004b8b24,iVar5,4);
                func_00100950((int)(puVar19 + 0x53b1),DAT_004b8b24,iVar5,6);
                func_00100950((int)(puVar19 + 0x4b65),DAT_004b8b24,iVar5,6);
                func_00100950((int)(puVar19 + 0x4319),DAT_004b8b24,iVar5,6);
                func_00100950((int)(puVar19 + 0x2cf9),DAT_004b8b24,iVar5,0x10);
                func_00100950((int)(puVar19 + 0x16d9),DAT_004b8b24,iVar5,0x10);
                func_00100950((int)(puVar19 + 0xb9),DAT_004b8b24,iVar5,0x10);
                func_00100950((int)(puVar19 + 0x9c),DAT_004b8b28,0x1c,4);
                func_00100950((int)(puVar19 + 0x71),DAT_004b8b28,0x1c,6);
                func_00100950((int)puVar19,DAT_004b8b28,0x1c,0x10);
                func_0058FA5C((int)puVar19);
              }
              local_12c[0] = local_c8;
              if (local_118 == (int *)0x0) goto LAB_004b8d5c;
              goto LAB_004b7d64;
            }
            local_4c = (uint *)0x0;
            *local_2c0 = 0;
            local_ec = local_68;
            local_60 = local_68;
          }
          else {
            local_4c = (uint *)0x0;
            if ((int)*local_48 < 0) {
              *local_2c0 = 0;
              local_ec = local_68;
              local_60 = local_68;
            }
            else {
              (**(code **)(*local_e8 + 8))(local_e8);
              iVar5 = 0;
              do {
                if (*(char *)(puVar20[1] + iVar5) == '\0') {
                  if (iVar5 < 0x40001) goto LAB_004b8354;
                  break;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < 0x40001);
              iVar5 = 0;
LAB_004b8354:
              if (-1 < (int)pcVar17 && (int)pcVar17 <= iVar5) {
                iVar16 = 0;
                (**(code **)(local_b4 + 8))(&local_b4);
                iVar5 = local_b0;
                for (; uVar8 = local_e8[1], pcVar17[uVar8] != '\0'; pcVar17 = pcVar17 + 1) {
                  (*(code *)local_e0[2])(&local_e0);
                  cVar2 = pcVar17[uVar8];
                  iVar21 = 0;
                  do {
                    if (local_dc[iVar21] == '\0') break;
                    if (local_dc[iVar21] == cVar2) goto LAB_004b83f4;
                    iVar21 = iVar21 + 1;
                  } while (iVar21 < 0x40001);
                  *(char *)(iVar5 + iVar16) = cVar2;
                  iVar16 = iVar16 + 1;
                }
LAB_004b83f4:
                *(undefined1 *)(iVar5 + iVar16) = 0;
                local_e4 = pcVar17 + 1;
              }
              iVar5 = DAT_004b8b18;
              iVar16 = 0;
              while( true ) {
                local_6c = *(uint **)(iVar5 + iVar16 * 0xc);
                local_70 = puVar19;
                iVar21 = func_00691884(&local_b4,(int *)&local_70);
                if (iVar21 != 0) break;
                iVar16 = iVar16 + 1;
                if (0x35 < iVar16) goto LAB_004b85c0;
              }
              iVar5 = iVar5 + iVar16 * 0xc;
              bVar22 = (*(uint *)(iVar5 + 8) & 1) == 0;
              if (bVar22) {
                in_r12 = *(code **)(iVar5 + 4);
              }
              piVar18 = (int *)(local_28 + ((int)*(uint *)(iVar5 + 8) >> 1));
              if (!bVar22) {
                in_r12 = *(code **)(*piVar18 + *(int *)(iVar5 + 4));
              }
              (*in_r12)(piVar18,local_d0,&local_ec,&local_60);
              *local_2c0 = 0;
              local_ec = local_68;
              local_60 = local_68;
            }
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < local_80);
    }
    func_0058FA08(iVar6);
    iVar5 = local_28;
    uVar3 = DAT_004b8b20;
    puVar4 = DAT_004b8b1c;
    uVar15 = 0;
    if (0 < *(int *)(local_28 + 0x20c0)) {
      puVar20 = (uint *)(local_28 + 0x18b4);
      do {
        iVar6 = *(int *)(local_28 + 0x20c0);
        if (iVar6 < 1) break;
        iVar16 = *(int *)(local_28 + 0x20c8);
        iVar6 = iVar6 + -1;
        *(int *)(local_28 + 0x20c0) = iVar6;
        iVar6 = *(int *)(iVar16 + iVar6 * 4);
        if (iVar6 != 0) {
          uVar8 = *puVar20;
          iVar6 = *(int *)(iVar6 + 4);
          bVar22 = uVar8 == uVar15;
          if ((int)uVar15 < (int)uVar8) {
            do {
              if (uVar15 <= uVar8 && !bVar22) {
                iVar21 = *(int *)(*(int *)(iVar5 + 0x18bc) + uVar15 * 4);
                if (iVar21 != 0) {
                  iVar16 = *(int *)(iVar21 + 8);
                }
                if ((iVar21 != 0 && iVar16 != 0x35) && (*(int *)(iVar21 + 4) <= iVar6)) {
                  if (*(int *)(local_28 + 0x20) == 0) {
                    local_cc = (undefined *)0x1;
                  }
                  else {
                    local_cc = (undefined *)func_0010983C(*puVar4,*(int *)(local_28 + 0x20));
                  }
                  puVar10 = (undefined4 *)func_0010BAB4(0xc);
                  if (puVar10 != (undefined4 *)0x0) {
                    puVar10[2] = 0x33;
                    puVar10[1] = iVar6;
                    *puVar10 = uVar3;
                  }
                  func_0048C378((int *)puVar20,uVar15,puVar10);
                  if (local_cc != (undefined *)0x1) {
                    func_0010983C(*puVar4,local_cc);
                  }
                  break;
                }
              }
              uVar15 = uVar15 + 1;
              bVar22 = uVar8 == uVar15;
            } while (!bVar22 && (int)uVar15 <= (int)uVar8);
          }
        }
      } while (0 < *(int *)(iVar5 + 0x20c0));
    }
    puVar4 = func_00689A2C(&local_ec,&local_e0,0x10);
    iVar6 = local_28;
    *puVar4 = local_7c;
    *(undefined1 *)puVar4[1] = 0;
    *puVar4 = local_78;
    local_70 = puVar19;
    piVar18 = (int *)(local_28 + 0x68);
    local_6c = (uint *)&DAT_004b8b2c;
    iVar16 = func_006919D8(piVar18,(int *)&local_70);
    if (iVar16 == -1) {
      (**(code **)(*piVar18 + 8))(piVar18);
      iVar16 = 0;
      do {
        if (*(char *)(*(int *)(iVar6 + 0x6c) + iVar16) == '\0') {
          if (iVar16 < 0x40001) goto LAB_004b87bc;
          break;
        }
        iVar16 = iVar16 + 1;
      } while (iVar16 < 0x40001);
      iVar16 = 0;
LAB_004b87bc:
      iVar16 = iVar16 + 1;
    }
    iVar21 = local_28;
    iVar16 = iVar16 + 4;
    piVar7 = (int *)(local_28 + 0x68);
    (**(code **)(*piVar7 + 8))(piVar7);
    iVar9 = 0;
    do {
      if (*(char *)(*(int *)(iVar21 + 0x6c) + iVar9) == '\0') {
        if (iVar9 < 0x40001) goto LAB_004b8808;
        break;
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < 0x40001);
    iVar9 = 0;
LAB_004b8808:
    if (piVar18 != piVar7 || iVar16 != iVar9 + 1) {
      do {
        (**(code **)(*piVar18 + 8))(piVar18);
        iVar21 = 0;
        do {
          if (*(char *)(*(int *)(iVar6 + 0x6c) + iVar21) == '\0') {
            if (iVar21 < 0x40001) goto LAB_004b8858;
            break;
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x40001);
        iVar21 = 0;
LAB_004b8858:
        puVar12 = DAT_004b7d08;
        if (-1 < iVar16 && iVar16 <= iVar21) {
          puVar12 = (undefined1 *)(*(int *)(iVar6 + 0x6c) + iVar16);
        }
        uVar1 = *puVar12;
        (*(code *)local_ec[2])(&local_ec);
        iVar21 = 0;
        do {
          if (*(char *)((int)local_e8 + iVar21) == '\0') {
            if (iVar21 < 0x40001) goto LAB_004b88b0;
            break;
          }
          iVar21 = iVar21 + 1;
        } while (iVar21 < 0x40001);
        iVar21 = 0;
LAB_004b88b0:
        if (iVar21 < (int)(local_e4 + -1)) {
          *(undefined1 *)((int)local_e8 + iVar21) = uVar1;
          *(undefined1 *)((int)local_e8 + iVar21 + 1) = 0;
        }
        iVar16 = iVar16 + 1;
      } while (piVar18 != piVar7 || iVar16 != iVar9 + 1);
    }
    uVar15 = 0;
    puVar4 = (undefined4 *)(local_28 + 0x1418);
    local_c4 = local_d0 + 0x2cf9;
    puVar20 = local_d0 + 0x16d9;
    do {
      puVar10 = puVar4;
      if (uVar15 < 0x10) {
        puVar10 = puVar4 + uVar15;
      }
      piVar18 = (int *)*puVar10;
      if (piVar18 != (int *)0x0) {
        puVar13 = local_d0 + 0xb9;
        if (uVar15 < 0x10) {
          puVar13 = puVar13 + uVar15 * 0x162;
        }
        if ((0 < (int)puVar13[0x160]) && (iVar6 = func_001FEC30(piVar18,(int *)puVar13), iVar6 != 0)
           ) {
          func_004F0B30((int)piVar18,(int *)puVar13);
        }
        puVar13 = puVar20;
        if (uVar15 < 0x10) {
          puVar13 = puVar20 + uVar15 * 0x162;
        }
        if (0 < (int)puVar13[0x160]) {
          func_001FEE18(piVar18,(int *)puVar13);
          puVar13 = extraout_r1;
        }
        puVar14 = local_c4;
        if (uVar15 < 0x10) {
          puVar13 = (uint *)0xb1;
          puVar14 = local_c4 + uVar15 * 0x162;
        }
        if ((int)puVar14[0x160] < 1) {
          if (uVar15 < 0x10) {
            puVar13 = (uint *)(uVar15 * 7);
          }
          local_68 = puVar19;
          puVar11 = local_d0;
          if (uVar15 < 0x10) {
            puVar11 = local_d0 + (int)puVar13;
          }
          local_64 = &DAT_004b8b34;
          iVar6 = func_00691884((int *)puVar11,(int *)&local_68);
          bVar22 = false;
          if (iVar6 != 0) goto LAB_004b89f0;
        }
        else {
LAB_004b89f0:
          bVar22 = true;
        }
        if (bVar22) {
          (**(code **)(*piVar18 + 8))(piVar18,puVar14);
        }
        puVar13 = local_d0;
        if (uVar15 < 0x10) {
          puVar13 = local_d0 + uVar15 * 7;
        }
        func_004F0678(piVar18,(int *)&local_ec,(int *)puVar13);
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 < 0x10);
    uVar15 = 0;
    if (*(int *)(iVar5 + 0x23e0) != 0) {
      piVar18 = (int *)(local_28 + 0x1458);
      puVar14 = local_d0 + 0x4319;
      puVar19 = local_d0 + 0x4b65;
      puVar13 = local_d0 + 0x53b1;
      do {
        puVar11 = puVar14;
        if (uVar15 < 6) {
          puVar11 = puVar14 + uVar15 * 0x162;
        }
        if (0 < (int)puVar11[0x160]) {
          piVar7 = piVar18;
          if (uVar15 < 6) {
            piVar7 = piVar18 + uVar15 * 0x13;
          }
          func_001FEC30(piVar7,(int *)puVar11);
        }
        puVar11 = puVar19;
        if (uVar15 < 6) {
          puVar11 = puVar19 + uVar15 * 0x162;
        }
        if (0 < (int)puVar11[0x160]) {
          piVar7 = piVar18;
          if (uVar15 < 6) {
            piVar7 = piVar18 + uVar15 * 0x13;
          }
          func_001FEE18(piVar7,(int *)puVar11);
        }
        puVar11 = puVar13;
        if (uVar15 < 6) {
          puVar11 = puVar13 + uVar15 * 0x162;
        }
        if (0 < (int)puVar11[0x160]) {
          piVar7 = piVar18;
          if (uVar15 < 6) {
            piVar7 = piVar18 + uVar15 * 0x13;
          }
          (**(code **)(*piVar7 + 8))(piVar7);
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(iVar5 + 0x23e0));
    }
    uVar15 = 0;
    if (*(int *)(iVar5 + 0x23e4) != 0) {
      puVar4 = (undefined4 *)(local_28 + 0x18a4);
      puVar13 = local_d0 + 0x5bfd;
      puVar19 = local_d0 + 0x6185;
      do {
        puVar10 = puVar4;
        if (uVar15 < 4) {
          puVar10 = puVar4 + uVar15;
        }
        piVar18 = (int *)*puVar10;
        if (piVar18 != (int *)0x0) {
          puVar14 = puVar13;
          if (uVar15 < 4) {
            puVar14 = puVar13 + uVar15 * 0x162;
          }
          if (0 < (int)puVar14[0x160]) {
            func_001FEC30(piVar18,(int *)puVar14);
          }
          puVar14 = puVar19;
          if (uVar15 < 4) {
            puVar14 = puVar19 + uVar15 * 0x162;
          }
          if (0 < (int)puVar14[0x160]) {
            (**(code **)(*piVar18 + 8))(piVar18);
          }
        }
        uVar15 = uVar15 + 1;
      } while (uVar15 < *(uint *)(iVar5 + 0x23e4));
    }
    puVar19 = local_d0;
    iVar5 = DAT_004b83e0;
    if (local_d0 != (uint *)0x0) {
      func_00100950((int)(local_d0 + 0x6185),DAT_004b8b24,DAT_004b83e0,4);
      func_00100950((int)(puVar19 + 0x5bfd),DAT_004b8b24,iVar5,4);
      func_00100950((int)(puVar19 + 0x53b1),DAT_004b8b24,iVar5,6);
      func_00100950((int)(puVar19 + 0x4b65),DAT_004b8b24,iVar5,6);
      func_00100950((int)(puVar19 + 0x4319),DAT_004b8b24,iVar5,6);
      func_00100950((int)local_c4,DAT_004b8b24,iVar5,0x10);
      func_00100950((int)puVar20,DAT_004b8b24,iVar5,0x10);
      func_00100950((int)(puVar19 + 0xb9),DAT_004b8b24,iVar5,0x10);
      func_00100950((int)(puVar19 + 0x9c),DAT_004b8b28,0x1c,4);
      func_00100950((int)(puVar19 + 0x71),DAT_004b8b28,0x1c,6);
      func_00100950((int)puVar19,DAT_004b8b28,0x1c,0x10);
      func_0058FA5C((int)puVar19);
    }
    local_12c[0] = local_c8;
    if (local_118 != (int *)0x0) {
      func_0048A08C(local_118,(int)local_12c);
    }
  }
LAB_004b8d5c:
  return func_004A1520(local_12c);
}

