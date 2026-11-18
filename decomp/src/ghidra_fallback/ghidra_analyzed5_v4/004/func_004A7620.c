#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00432F74(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A8930(int param_1,float *param_2,int *param_3,uint param_4);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern undefined DAT_00000005;
extern undefined DAT_00000006;
extern float DAT_004a791c;
extern float *DAT_004a7920;
extern uint *DAT_004a7924;
extern uint *DAT_004a7928;
extern int DAT_004a792c;
extern float DAT_004a7930;
extern int DAT_004a7934;
extern uint *DAT_004a7ed4;

// USA 004A7620 <- EU 004A75F8 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_00000006 undefined
// GLOBAL DAT_004a791c float
// GLOBAL DAT_004a7920 float *
// GLOBAL DAT_004a7924 uint *
// GLOBAL DAT_004a7928 uint *
// GLOBAL DAT_004a792c int
// GLOBAL DAT_004a7930 float
// GLOBAL DAT_004a7934 int
// GLOBAL DAT_004a7ed4 uint *

int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x230];
  #define iStack_228 (*(int *)(albw_frame + 0x8))
  #define local_224 (*(float * *)(albw_frame + 0xc))
  #define uStack_220 (*(uint *)(albw_frame + 0x10))
  #define pfStack_21c (*(float * *)(albw_frame + 0x14))
  #define local_218 (*(float * *)(albw_frame + 0x18))
  #define uStack_214 (*(uint *)(albw_frame + 0x1c))
  #define pfStack_210 (*(float * *)(albw_frame + 0x20))
  #define local_20c (*(float * *)(albw_frame + 0x24))
  #define uStack_208 (*(uint *)(albw_frame + 0x28))
  #define pfStack_204 (*(float * *)(albw_frame + 0x2c))
  #define local_1d0 (*(uint *)(albw_frame + 0x60))
  #define local_1cc (*(float * *)(albw_frame + 0x64))
  #define uStack_1c8 (*(uint *)(albw_frame + 0x68))
  #define local_1c4 (*(float * *)(albw_frame + 0x6c))
  #define local_1c0 (*(uint *)(albw_frame + 0x70))
  #define local_1bc (*(float * *)(albw_frame + 0x74))
  #define local_1b0 (*(float * *)(albw_frame + 0x80))
  #define local_1ac (*(float * *)(albw_frame + 0x84))
  #define local_1a8 (*(float *)(albw_frame + 0x88))
  #define local_1a0 (*(float *)(albw_frame + 0x90))
  #define local_19c (*(float *)(albw_frame + 0x94))
  #define fStack_198 (*(float *)(albw_frame + 0x98))
  #define fStack_194 (*(float *)(albw_frame + 0x9c))
  #define fStack_190 (*(float *)(albw_frame + 0xa0))
  #define local_18c (*(float *)(albw_frame + 0xa4))
  #define uStack_188 (*(undefined4 *)(albw_frame + 0xa8))
  #define uStack_184 (*(undefined4 *)(albw_frame + 0xac))
  #define local_180 (*(float *)(albw_frame + 0xb0))
  #define uStack_17c (*(undefined4 *)(albw_frame + 0xb4))
  #define uStack_178 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_174 (*(float *)(albw_frame + 0xbc))
  #define uStack_170 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_16c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_138 (*(float *)(albw_frame + 0xf8))
  #define local_134 (*(float *)(albw_frame + 0xfc))
  #define fStack_130 (*(float *)(albw_frame + 0x100))
  #define fStack_12c (*(float *)(albw_frame + 0x104))
  #define local_128 (*(float *)(albw_frame + 0x108))
  #define fStack_124 (*(float *)(albw_frame + 0x10c))
  #define fStack_120 (*(float *)(albw_frame + 0x110))
  #define local_11c (*(undefined4 *)(albw_frame + 0x114))
  #define local_118 (*(undefined4 *)(albw_frame + 0x118))
  #define local_114 (*(undefined4 *)(albw_frame + 0x11c))
  #define local_110 (*(undefined4 *)(albw_frame + 0x120))
  #define local_10c (*(uint *)(albw_frame + 0x124))
  #define local_108 (*(undefined4 *)(albw_frame + 0x128))
  #define uStack_104 (*(undefined4 *)(albw_frame + 0x12c))
  #define local_100 (*(undefined4 *)(albw_frame + 0x130))
  #define local_fc (*(undefined4 *)(albw_frame + 0x134))
  #define local_f8 (*(float *)(albw_frame + 0x138))
  #define local_f4 (*(undefined1 *)(albw_frame + 0x13c))
  #define local_f3 (*(undefined1 *)(albw_frame + 0x13d))
  #define afStack_f0 ((float *)(albw_frame + 0x140))
  #define afStack_e4 ((float *)(albw_frame + 0x14c))
  #define afStack_d8 ((float *)(albw_frame + 0x158))
  #define afStack_cc ((float *)(albw_frame + 0x164))
  #define local_bc (*(int *)(albw_frame + 0x174))
  #define local_b0 (*(float *)(albw_frame + 0x180))
  #define local_ac (*(float *)(albw_frame + 0x184))
  #define fStack_a8 (*(float *)(albw_frame + 0x188))
  #define local_a4 (*(float *)(albw_frame + 0x18c))
  #define fStack_a0 (*(float *)(albw_frame + 0x190))
  #define fStack_9c (*(float *)(albw_frame + 0x194))
  #define local_94 (*(float *)(albw_frame + 0x19c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x1a0))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x1a4))
  #define local_80 (*(float *)(albw_frame + 0x1b0))
  #define local_7c (*(float *)(albw_frame + 0x1b4))
  #define local_78 (*(float *)(albw_frame + 0x1b8))
  #define local_70 (*(int *)(albw_frame + 0x1c0))
  #define local_6c (*(uint *)(albw_frame + 0x1c4))
  #define local_68 (*(uint *)(albw_frame + 0x1c8))
  #define local_60 (*(float *)(albw_frame + 0x1d0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x1d4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x1d8))
  #define local_54 (*(float *)(albw_frame + 0x1dc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x1e0))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x1e4))
  #define uStack_38 (*(undefined8 *)(albw_frame + 0x1f8))
  #define local_30 (*(int *)(albw_frame + 0x200))
  #define puStack_2c (*(uint * *)(albw_frame + 0x204))
  #define local_28 (*(uint *)(albw_frame + 0x208))
  uStack_38 = CONCAT44(fparam_1,fparam_0);
  fparam_0_00 = DAT_004a791c;
  local_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  func_0068B2DC(afStack_d8,DAT_004a791c,DAT_004a791c,DAT_004a791c,DAT_004a791c,DAT_004a791c,
                DAT_004a791c);
  iVar13 = 0;
  func_00115C70(&local_80,(float *)param_2[7],(float *)param_2[8]);
  fVar18 = SQRT(local_80 * local_80 + local_7c * local_7c + local_78 * local_78);
  param_2[9] = (uint)ALBW_AS_U32(fVar18);
  if ((fVar18 <= ALBW_AS_F32(param_2[0xb]) * fparam_0) || (ALBW_AS_F32(param_2[0xb]) * fparam_1 < fVar18)) {
    func_00432F74(&iStack_228);
    func_00115C54((float *)&local_1cc,(float *)(param_2 + 0xc),(float *)param_2[7]);
    local_224 = local_1cc;
    uStack_220 = uStack_1c8;
    pfStack_21c = local_1c4;
    func_00115C54((float *)&local_1cc,(float *)(param_2 + 0xc),(float *)param_2[8]);
    iVar12 = DAT_004a7934;
    local_20c = local_1cc;
    uStack_208 = uStack_1c8;
    pfStack_204 = local_1c4;
    local_218 = local_1cc;
    uStack_214 = uStack_1c8;
    pfStack_210 = local_1c4;
    local_1d0 = param_2[0xb];
    if (((*(uint *)(DAT_004a7934 + 0x1c) & 1) == 0) &&
       (iVar6 = func_00100174((int *)(DAT_004a7934 + 0x1c)), puVar1 = DAT_004a7ed4, iVar6 != 0)) {
      puVar9 = DAT_004a7ed4 + 3;
      *DAT_004a7ed4 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      func_0010B3EC(puVar1,9,(int)puVar9);
    }
    iVar6 = local_30;
    local_1b0 = (float *)&DAT_00000005;
    iVar14 = local_30 + 0xbf3c;
    do {
      if ((local_28 & 1 << ((uint)local_1b0 & 0xff)) != 0) {
        local_1bc = *(float **)(iVar6 + 0xbf48);
        local_1cc = (float *)((int)local_1b0 * 3);
        for (iVar10 = *(int *)(iVar6 + 0xbf40) - (int)local_1bc; puVar1 = DAT_004a7ed4,
            iVar10 != iVar14 - *(int *)(iVar6 + 0xbf48);
            iVar10 = *(int *)((int)local_1bc + iVar10 + 4) - (int)local_1bc) {
          iVar15 = iVar10 + 0xb4;
          iVar5 = iVar10 + 0xb4;
          if (local_1b0 < &DAT_00000006) {
            iVar15 = iVar15 + (int)local_1cc * 4;
            iVar5 = iVar10 + 0xb4 + (int)local_1cc * 4;
          }
          for (iVar5 = *(int *)(iVar5 + 4); iVar5 != iVar15; iVar5 = *(int *)(iVar5 + 4)) {
            piVar4 = *(int **)(iVar5 + 8);
            *(int **)(iVar12 + 8) = piVar4;
            uVar11 = piVar4[8];
            bVar17 = param_2[3] != uVar11;
            if (bVar17) {
              uVar11 = (uint)*(byte *)(piVar4 + 0x11);
            }
            if (bVar17 && uVar11 != 0) {
              pfVar7 = (float *)0x0;
              if (*param_2 != 0) {
                pfVar7 = afStack_d8;
              }
              iVar2 = (**(code **)(*piVar4 + 8))(piVar4,pfVar7,param_2,&iStack_228);
              if (iVar2 != 0) {
                iVar13 = 1;
              }
            }
            *(undefined4 *)(iVar12 + 8) = 0;
          }
        }
        *DAT_004a7ed4 = 0;
        if ((float *)param_2[7] != (float *)0x0) {
          func_004A8930(local_30,(float *)param_2[7],(int *)puVar1,(uint)local_1b0);
        }
        local_1c4 = (float *)*puVar1;
        uVar11 = 0;
        if (0 < (int)local_1c4) {
          do {
            if (uVar11 < *DAT_004a7ed4) {
              iVar10 = *(int *)(DAT_004a7ed4[2] + uVar11 * 4);
              iVar15 = *(int *)(DAT_004a7ed4[2] + uVar11 * 4);
            }
            else {
              iVar10 = 0;
              iVar15 = 0;
            }
            for (iVar15 = *(int *)(iVar15 + 4); iVar15 != iVar10; iVar15 = *(int *)(iVar15 + 4)) {
              piVar4 = *(int **)(iVar15 + 8);
              *(int **)(iVar12 + 8) = piVar4;
              uVar16 = piVar4[8];
              bVar17 = param_2[3] != uVar16;
              if (bVar17) {
                uVar16 = (uint)*(byte *)(piVar4 + 0x11);
              }
              if (bVar17 && uVar16 != 0) {
                pfVar7 = (float *)0x0;
                if (*param_2 != 0) {
                  pfVar7 = afStack_d8;
                }
                iVar5 = (**(code **)(*piVar4 + 8))(piVar4,pfVar7,param_2,&iStack_228);
                if (iVar5 != 0) {
                  iVar13 = 1;
                }
              }
              *(undefined4 *)(iVar12 + 8) = 0;
            }
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < (int)local_1c4);
        }
        if (((*param_2 != 0) && ((int)local_1b0 < 3)) && (0 < (int)local_1b0)) {
          func_00115C54((float *)&local_1c4,(float *)(param_2 + 0xc),(float *)param_2[7]);
          local_224 = local_1c4;
          uStack_220 = local_1c0;
          pfStack_21c = local_1bc;
          func_00115C54((float *)&local_224,(float *)&local_224,afStack_d8);
          func_00115C54((float *)&local_224,(float *)&local_224,afStack_cc);
          func_004356B4(&iStack_228);
        }
      }
      local_1b0 = (float *)((int)local_1b0 + -1);
    } while (-1 < (int)local_1b0);
    pfVar7 = local_1b0;
    if (iVar13 != 0) {
      pfVar7 = (float *)*param_2;
    }
    if (iVar13 != 0 && pfVar7 != (float *)0x0) {
      func_00115C54(pfVar7,pfVar7,afStack_d8);
      func_00115C54((float *)*param_2,(float *)*param_2,afStack_cc);
    }
  }
  else {
    local_80 = local_80 / fVar18;
    local_7c = local_7c / fVar18;
    local_78 = local_78 / ALBW_AS_F32(param_2[9]);
    local_114 = 0;
    local_70 = local_30;
    local_118 = 0;
    local_110 = 0;
    local_68 = local_28;
    local_11c = 0;
    local_10c = local_28 & 0xffff0000 | 0xffff;
    local_108 = 0xff;
    uStack_104 = 0;
    local_100 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_f3 = 1;
    local_f8 = fparam_0_00;
    func_00110D44(&local_1cc,(byte *)&local_11c,0x2a);
    local_19c = *DAT_004a7920;
    fStack_198 = DAT_004a7920[1];
    fStack_194 = DAT_004a7920[2];
    local_1a0 = fparam_0_00;
    func_0010E3C4((uint *)&local_1cc,param_2,0x3c);
    func_0068B2DC(afStack_f0,fparam_0_00,fparam_0_00,fparam_0_00,fparam_0_00,fparam_0_00,fparam_0_00
                 );
    iVar12 = 0;
    if (((*DAT_004a7924 & 1) == 0) &&
       (iVar13 = func_00100174((int *)DAT_004a7924), puVar1 = DAT_004a7928, iVar13 != 0)) {
      puVar9 = DAT_004a7928 + 3;
      *DAT_004a7928 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      func_0010B3EC(puVar1,9,(int)puVar9);
    }
    local_128 = local_80;
    fStack_124 = local_7c;
    fStack_120 = local_78;
    fVar19 = *(float *)(DAT_004a792c + 4) - DAT_004a7930;
    fVar18 = local_1a0;
    if (fVar19 < local_1a0) {
      fVar18 = fVar19;
    }
    func_00115D70(&local_128,&local_128,fVar18);
    iVar6 = local_70;
    local_a4 = *local_1b0;
    fStack_a0 = local_1b0[1];
    fStack_9c = local_1b0[2];
    local_134 = *local_1ac;
    fStack_130 = local_1ac[1];
    fStack_12c = local_1ac[2];
    iVar14 = local_70 + 0xbf3c;
    local_b0 = local_134;
    local_ac = fStack_130;
    fStack_a8 = fStack_12c;
    do {
      fparam_0_00 = fparam_0_00 + fVar18;
      if (fparam_0_00 < local_1a8) {
        func_00115C54(&local_134,&local_134,&local_128);
      }
      else {
        local_134 = local_a4;
        fStack_130 = fStack_a0;
        fStack_12c = fStack_9c;
      }
      local_1b0 = &local_134;
      local_1ac = &local_b0;
      func_00432F74(&fStack_190);
      func_00115C54(&local_60,&local_19c,&local_134);
      local_18c = local_60;
      uStack_188 = uStack_5c;
      uStack_184 = uStack_58;
      func_00115C54(&local_54,&local_19c,&local_b0);
      local_174 = local_54;
      uStack_170 = uStack_50;
      uStack_16c = uStack_4c;
      local_180 = local_54;
      uStack_17c = uStack_50;
      uStack_178 = uStack_4c;
      local_138 = local_1a0;
      local_6c = 5;
      do {
        iVar13 = DAT_004a7934;
        if ((local_68 & 1 << (local_6c & 0xff)) != 0) {
          iVar15 = *(int *)(iVar6 + 0xbf48);
          local_bc = local_6c * 3;
          for (iVar10 = *(int *)(iVar6 + 0xbf40) - iVar15; puVar1 = DAT_004a7928,
              iVar10 != iVar14 - *(int *)(iVar6 + 0xbf48);
              iVar10 = *(int *)(iVar10 + iVar15 + 4) - iVar15) {
            iVar5 = iVar10 + 0xb4;
            iVar2 = iVar10 + 0xb4;
            if (local_6c < 6) {
              iVar5 = iVar5 + local_bc * 4;
              iVar2 = iVar10 + 0xb4 + local_bc * 4;
            }
            for (iVar2 = *(int *)(iVar2 + 4); iVar2 != iVar5; iVar2 = *(int *)(iVar2 + 4)) {
              piVar4 = *(int **)(iVar2 + 8);
              *(int **)(iVar13 + 8) = piVar4;
              uVar11 = piVar4[8];
              bVar17 = local_1c0 != uVar11;
              if (bVar17) {
                uVar11 = (uint)*(byte *)(piVar4 + 0x11);
              }
              if (bVar17 && uVar11 != 0) {
                pfVar7 = (float *)0x0;
                if (local_1cc != (float *)0x0) {
                  pfVar7 = afStack_f0;
                }
                iVar3 = (**(code **)(*piVar4 + 8))(piVar4,pfVar7,&local_1cc,&fStack_190);
                if (iVar3 != 0) {
                  iVar12 = 1;
                }
              }
              *(undefined4 *)(iVar13 + 8) = 0;
            }
          }
          *DAT_004a7928 = 0;
          if (local_1b0 != (float *)0x0) {
            func_004A8930(local_70,local_1b0,(int *)puVar1,local_6c);
          }
          uVar16 = *puVar1;
          uVar11 = 0;
          if (0 < (int)uVar16) {
            do {
              if (uVar11 < *DAT_004a7928) {
                iVar10 = *(int *)(DAT_004a7928[2] + uVar11 * 4);
                iVar15 = *(int *)(DAT_004a7928[2] + uVar11 * 4);
              }
              else {
                iVar10 = 0;
                iVar15 = 0;
              }
              for (iVar15 = *(int *)(iVar15 + 4); iVar15 != iVar10; iVar15 = *(int *)(iVar15 + 4)) {
                piVar4 = *(int **)(iVar15 + 8);
                *(int **)(iVar13 + 8) = piVar4;
                uVar8 = piVar4[8];
                bVar17 = local_1c0 != uVar8;
                if (bVar17) {
                  uVar8 = (uint)*(byte *)(piVar4 + 0x11);
                }
                if (bVar17 && uVar8 != 0) {
                  pfVar7 = (float *)0x0;
                  if (local_1cc != (float *)0x0) {
                    pfVar7 = afStack_f0;
                  }
                  iVar5 = (**(code **)(*piVar4 + 8))(piVar4,pfVar7,&local_1cc,&fStack_190);
                  if (iVar5 != 0) {
                    iVar12 = 1;
                  }
                }
                *(undefined4 *)(iVar13 + 8) = 0;
              }
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < (int)uVar16);
          }
          if (((local_1cc != (float *)0x0) && ((int)local_6c < 3)) && (0 < (int)local_6c)) {
            func_00115C54(&local_94,&local_19c,&local_134);
            local_18c = local_94;
            uStack_188 = uStack_90;
            uStack_184 = uStack_8c;
            func_00115C54(&local_18c,&local_18c,afStack_f0);
            func_00115C54(&local_18c,&local_18c,afStack_e4);
            func_004356B4((int *)&fStack_190);
          }
        }
        local_6c = local_6c - 1;
      } while (-1 < (int)local_6c);
      if (iVar12 != 0) {
        if (local_1cc == (float *)0x0) {
          return iVar12;
        }
        func_00115C70(&fStack_190,&local_134,&local_a4);
        func_00115C54(local_1cc,local_1cc,afStack_f0);
        func_00115C54(local_1cc,local_1cc,afStack_e4);
        func_00115C54(local_1cc,local_1cc,&fStack_190);
        return iVar12;
      }
      iVar13 = 0;
    } while (fparam_0_00 < local_1a8);
  }
  return iVar13;
}

