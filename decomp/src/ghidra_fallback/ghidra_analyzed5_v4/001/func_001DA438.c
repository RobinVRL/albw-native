#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A9B88(undefined4 param_1,int *param_2);
extern int func_004B06FC(int param_1);
extern int func_00581A08(void);
extern int func_0068B200(float *param_1,float *param_2);
extern undefined4 DAT_001da75c;
extern float DAT_001da760;
extern int DAT_001da764;
extern undefined4 DAT_001da768;
extern undefined4 *DAT_001da76c;
extern float DAT_001da770;
extern float DAT_001da774;
extern float DAT_001da778;
extern float DAT_001da77c;

// USA 001DA438 <- EU 001DA438 (Ghidra, non-matching)
// GLOBAL DAT_001da75c undefined4
// GLOBAL DAT_001da760 float
// GLOBAL DAT_001da764 int
// GLOBAL DAT_001da768 undefined4
// GLOBAL DAT_001da76c undefined4 *
// GLOBAL DAT_001da770 float
// GLOBAL DAT_001da774 float
// GLOBAL DAT_001da778 float
// GLOBAL DAT_001da77c float

undefined4 func_001DA438(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x120];
  #define local_120 ((int *)(albw_frame + 0x0))
  #define local_108 (*(undefined4 *)(albw_frame + 0x18))
  #define local_104 (*(float *)(albw_frame + 0x1c))
  #define local_100 (*(float *)(albw_frame + 0x20))
  #define local_fc (*(float *)(albw_frame + 0x24))
  #define local_f8 (*(float *)(albw_frame + 0x28))
  #define fStack_f4 (*(float *)(albw_frame + 0x2c))
  #define local_f0 (*(float *)(albw_frame + 0x30))
  #define local_ec (*(float *)(albw_frame + 0x34))
  #define local_e8 (*(float *)(albw_frame + 0x38))
  #define local_e4 (*(float *)(albw_frame + 0x3c))
  #define local_e0 (*(float *)(albw_frame + 0x40))
  #define local_dc (*(float *)(albw_frame + 0x44))
  #define local_d8 (*(float *)(albw_frame + 0x48))
  #define local_d4 (*(float *)(albw_frame + 0x4c))
  #define local_d0 (*(float *)(albw_frame + 0x50))
  #define local_cc (*(float *)(albw_frame + 0x54))
  #define local_c0 (*(float *)(albw_frame + 0x60))
  #define local_bc (*(undefined2 *)(albw_frame + 0x64))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_b4 (*(float *)(albw_frame + 0x6c))
  #define local_b0 (*(float *)(albw_frame + 0x70))
  #define local_ac (*(float *)(albw_frame + 0x74))
  #define local_a8 (*(float *)(albw_frame + 0x78))
  #define local_a4 (*(float *)(albw_frame + 0x7c))
  #define local_a0 (*(float *)(albw_frame + 0x80))
  #define local_9c (*(float *)(albw_frame + 0x84))
  #define fStack_98 (*(float *)(albw_frame + 0x88))
  #define local_94 (*(float *)(albw_frame + 0x8c))
  #define local_90 (*(float *)(albw_frame + 0x90))
  #define local_8c (*(float *)(albw_frame + 0x94))
  #define local_88 (*(float *)(albw_frame + 0x98))
  #define local_84 (*(float *)(albw_frame + 0x9c))
  #define local_80 (*(float *)(albw_frame + 0xa0))
  #define local_7c (*(float *)(albw_frame + 0xa4))
  #define local_68 (*(float *)(albw_frame + 0xb8))
  #define local_64 (*(float *)(albw_frame + 0xbc))
  #define local_60 (*(float *)(albw_frame + 0xc0))
  #define local_5c (*(float *)(albw_frame + 0xc4))
  #define local_58 (*(float *)(albw_frame + 0xc8))
  #define local_54 (*(float *)(albw_frame + 0xcc))
  uVar11 = DAT_001da768;
  uVar1 = (uint)*(ushort *)(param_2 + 0x20);
  if ((uVar1 & 0x1f) == 6) {
    if (((uVar1 & 0x7e0) == 0x300) && (2 < *(int *)(param_1 + 0x410) - *(int *)(param_1 + 0x40c))) {
      *(undefined4 *)(param_1 + 0x410) = 2;
      *(undefined4 *)(param_1 + 0x414) = uVar11;
      *(undefined4 *)(param_1 + 0x40c) = 0;
    }
  }
  else {
    fVar6 = *(float *)(param_2 + 8);
    if (fVar6 <= DAT_001da760) {
      fVar6 = -fVar6;
    }
    if ((((int)ALBW_AS_U32(fVar6) <= DAT_001da764) &&
        (uVar11 = DAT_001da75c, fVar6 = DAT_001da760,
        puVar2 = (ushort *)func_004B06FC((uVar1 & 0x7e0) >> 5), (*puVar2 & 2) == 0)) &&
       ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x80U) == 0)) {
      local_120[0] = 0;
      local_120[1] = 0;
      local_120[2] = 0;
      local_b8 = 0x1f;
      local_bc = 0x1f;
      local_108 = uVar11;
      iVar3 = func_004A9B88(*DAT_001da76c,local_120);
      if (iVar3 == 0) {
        fVar6 = DAT_001da770;
        fVar12 = DAT_001da774;
        fVar13 = DAT_001da778;
        fVar7 = DAT_001da77c;
        iVar3 = func_00581A08();
        if ((iVar3 != 0) && (iVar3 = *(int *)(iVar3 + 0x18), iVar3 != 0)) {
          local_b0 = fVar6;
          local_ac = fVar6;
          local_a8 = fVar6;
          local_a4 = fVar12;
          local_a0 = fVar12;
          local_9c = fVar12;
          local_94 = fVar13;
          local_90 = fVar7;
          local_8c = fVar13;
          func_00115C54(&local_88,(float *)(param_1 + 0x430),&local_94);
          func_0068B200(&local_b0,&local_88);
          func_00115C70(&local_88,(float *)(param_1 + 0x430),&local_94);
          func_0068B200(&local_b0,&local_88);
          if ((*(float *)(iVar3 + 0x34) <= local_a4) && (local_b0 <= *(float *)(iVar3 + 0x40))) {
            bVar4 = *(float *)(iVar3 + 0x38) == local_a0;
            bVar5 = local_a0 <= *(float *)(iVar3 + 0x38);
            if (!bVar5 || bVar4) {
              bVar4 = local_ac == *(float *)(iVar3 + 0x44);
              bVar5 = *(float *)(iVar3 + 0x44) <= local_ac;
            }
            if (!bVar5 || bVar4) {
              bVar4 = *(float *)(iVar3 + 0x3c) == local_9c;
              bVar5 = local_9c <= *(float *)(iVar3 + 0x3c);
              if (!bVar5 || bVar4) {
                bVar4 = local_a8 == *(float *)(iVar3 + 0x48);
                bVar5 = *(float *)(iVar3 + 0x48) <= local_a8;
              }
              if (!bVar5 || bVar4) goto LAB_001da884;
            }
          }
        }
      }
      else {
        local_68 = DAT_001da770;
        local_64 = DAT_001da770;
        local_60 = DAT_001da770;
        local_5c = DAT_001da774;
        local_58 = DAT_001da774;
        local_54 = DAT_001da774;
        local_b0 = DAT_001da778;
        local_ac = DAT_001da77c;
        local_a8 = DAT_001da778;
        fVar12 = DAT_001da770;
        fVar13 = DAT_001da774;
        func_00115C54(&local_a4,(float *)(param_1 + 0x430),&local_b0);
        func_0068B200(&local_68,&local_a4);
        func_00115C70(&local_a4,(float *)(param_1 + 0x430),&local_b0);
        func_0068B200(&local_68,&local_a4);
        local_b4 = local_104;
        local_b0 = local_100;
        local_ac = local_fc;
        fVar7 = local_f0 * local_e8 - fStack_f4 * local_e4;
        fVar10 = fStack_f4 * local_ec - local_f8 * local_e8;
        fVar8 = local_f8 * local_e4 - local_f0 * local_ec;
        fVar9 = fVar7 * local_d4 + fVar8 * local_d0 + fVar10 * local_cc;
        if (fVar9 <= fVar6) {
          local_a8 = local_104;
          local_a4 = local_100;
          local_a0 = local_fc;
        }
        else {
          fVar9 = local_c0 / fVar9;
          local_a8 = local_104 + fVar7 * fVar9;
          local_a4 = local_100 + fVar8 * fVar9;
          local_a0 = local_fc + fVar10 * fVar9;
        }
        fVar8 = local_d8 * fStack_f4 - local_dc * local_f0;
        fVar10 = local_dc * local_f8 - local_e0 * fStack_f4;
        fVar9 = local_e0 * local_f0 - local_d8 * local_f8;
        fVar7 = fVar8 * local_d4 + fVar9 * local_d0 + fVar10 * local_cc;
        if (fVar7 <= fVar6) {
          local_9c = local_104;
          fStack_98 = local_100;
          local_94 = local_fc;
        }
        else {
          local_c0 = local_c0 / fVar7;
          local_94 = local_fc + fVar10 * local_c0;
          local_9c = local_104 + fVar8 * local_c0;
          fStack_98 = local_100 + fVar9 * local_c0;
        }
        local_90 = fVar12;
        local_8c = fVar12;
        local_88 = fVar12;
        local_84 = fVar13;
        local_80 = fVar13;
        local_7c = fVar13;
        func_0068B200(&local_90,&local_b4);
        func_0068B200(&local_90,&local_a8);
        func_0068B200(&local_90,&local_9c);
        bVar4 = local_68 == local_84;
        bVar5 = local_84 <= local_68;
        if (!bVar5 || bVar4) {
          bVar4 = local_90 == local_5c;
          bVar5 = local_5c <= local_90;
        }
        if (!bVar5 || bVar4) {
          bVar4 = local_64 == local_80;
          bVar5 = local_80 <= local_64;
          if (!bVar5 || bVar4) {
            bVar4 = local_8c == local_58;
            bVar5 = local_58 <= local_8c;
          }
          if (!bVar5 || bVar4) {
            bVar4 = local_60 == local_7c;
            bVar5 = local_7c <= local_60;
            if (!bVar5 || bVar4) {
              bVar4 = local_88 == local_54;
              bVar5 = local_54 <= local_88;
            }
            if (!bVar5 || bVar4) {
LAB_001da884:
              *(undefined1 *)(param_1 + 0x51a) = 1;
              return 0;
            }
          }
        }
      }
    }
  }
  return 0;
}

