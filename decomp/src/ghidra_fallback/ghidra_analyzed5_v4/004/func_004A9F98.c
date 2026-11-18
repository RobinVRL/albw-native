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
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004A8930(int param_1,float *param_2,int *param_3,uint param_4);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0068B2DC(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3, float fparam_4,float fparam_5);
extern undefined DAT_00000005;
extern undefined DAT_00000006;
extern float DAT_004aa2a4;
extern float DAT_004aa2a8;
extern float DAT_004aa2ac;
extern int *DAT_004aa2b0;
extern int *DAT_004aa2b4;
extern int DAT_004aa2b8;
extern int DAT_004aa2bc;
extern uint DAT_004aa2c0;
extern float *DAT_004aa2c4;
extern int DAT_004aa2c8;
extern float DAT_004aa2cc;
extern uint *DAT_004aa2d0;
extern uint *DAT_004aa2d4;
extern int *DAT_004aa9cc;
extern uint *DAT_004aa9d0;

// USA 004A9F98 <- EU 004A9F70 (Ghidra, non-matching)
// GLOBAL DAT_00000005 undefined
// GLOBAL DAT_00000006 undefined
// GLOBAL DAT_004aa2a4 float
// GLOBAL DAT_004aa2a8 float
// GLOBAL DAT_004aa2ac float
// GLOBAL DAT_004aa2b0 int *
// GLOBAL DAT_004aa2b4 int *
// GLOBAL DAT_004aa2b8 int
// GLOBAL DAT_004aa2bc int
// GLOBAL DAT_004aa2c0 uint
// GLOBAL DAT_004aa2c4 float *
// GLOBAL DAT_004aa2c8 int
// GLOBAL DAT_004aa2cc float
// GLOBAL DAT_004aa2d0 uint *
// GLOBAL DAT_004aa2d4 uint *
// GLOBAL DAT_004aa9cc int *
// GLOBAL DAT_004aa9d0 uint *

int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  float fVar14;
  float fVar15;
  float fparam_0_00;
  undefined8 uVar16;
  float fparam_0_01;
  _Alignas(8) unsigned char albw_frame[0x240];
  #define iStack_238 (*(int *)(albw_frame + 0x8))
  #define local_234 (*(float * *)(albw_frame + 0xc))
  #define pfStack_230 (*(float * *)(albw_frame + 0x10))
  #define pfStack_22c (*(float * *)(albw_frame + 0x14))
  #define local_228 (*(float * *)(albw_frame + 0x18))
  #define pfStack_224 (*(float * *)(albw_frame + 0x1c))
  #define pfStack_220 (*(float * *)(albw_frame + 0x20))
  #define local_21c (*(float * *)(albw_frame + 0x24))
  #define pfStack_218 (*(float * *)(albw_frame + 0x28))
  #define pfStack_214 (*(float * *)(albw_frame + 0x2c))
  #define local_1e0 (*(uint *)(albw_frame + 0x60))
  #define local_1dc ((float * *)(albw_frame + 0x64))
  #define local_1d0 (*(float * *)(albw_frame + 0x70))
  #define local_1cc (*(float * *)(albw_frame + 0x74))
  #define pfStack_1c8 (*(float * *)(albw_frame + 0x78))
  #define pfStack_1c4 (*(float * *)(albw_frame + 0x7c))
  #define local_1c0 (*(float * *)(albw_frame + 0x80))
  #define local_1bc (*(float * *)(albw_frame + 0x84))
  #define local_1b8 (*(float *)(albw_frame + 0x88))
  #define local_1b0 (*(float *)(albw_frame + 0x90))
  #define local_1ac (*(float *)(albw_frame + 0x94))
  #define fStack_1a8 (*(float *)(albw_frame + 0x98))
  #define fStack_1a4 (*(float *)(albw_frame + 0x9c))
  #define fStack_1a0 (*(float *)(albw_frame + 0xa0))
  #define local_19c (*(float *)(albw_frame + 0xa4))
  #define uStack_198 (*(undefined4 *)(albw_frame + 0xa8))
  #define uStack_194 (*(undefined4 *)(albw_frame + 0xac))
  #define local_190 (*(float *)(albw_frame + 0xb0))
  #define uStack_18c (*(undefined4 *)(albw_frame + 0xb4))
  #define uStack_188 (*(undefined4 *)(albw_frame + 0xb8))
  #define local_184 (*(float *)(albw_frame + 0xbc))
  #define uStack_180 (*(undefined4 *)(albw_frame + 0xc0))
  #define uStack_17c (*(undefined4 *)(albw_frame + 0xc4))
  #define local_148 (*(float *)(albw_frame + 0xf8))
  #define local_144 (*(undefined4 *)(albw_frame + 0xfc))
  #define local_140 (*(undefined4 *)(albw_frame + 0x100))
  #define local_13c (*(undefined4 *)(albw_frame + 0x104))
  #define local_138 (*(undefined4 *)(albw_frame + 0x108))
  #define local_134 (*(uint *)(albw_frame + 0x10c))
  #define uStack_130 (*(undefined4 *)(albw_frame + 0x110))
  #define uStack_12c (*(undefined4 *)(albw_frame + 0x114))
  #define local_128 (*(undefined4 *)(albw_frame + 0x118))
  #define local_124 (*(undefined4 *)(albw_frame + 0x11c))
  #define local_120 (*(float *)(albw_frame + 0x120))
  #define local_11c (*(undefined1 *)(albw_frame + 0x124))
  #define local_11b (*(undefined1 *)(albw_frame + 0x125))
  #define local_10c (*(float *)(albw_frame + 0x134))
  #define local_108 (*(float *)(albw_frame + 0x138))
  #define local_104 (*(float *)(albw_frame + 0x13c))
  #define afStack_100 ((float *)(albw_frame + 0x140))
  #define afStack_f4 ((float *)(albw_frame + 0x14c))
  #define local_e8 (*(int *)(albw_frame + 0x158))
  #define local_d4 (*(float *)(albw_frame + 0x16c))
  #define local_d0 (*(float *)(albw_frame + 0x170))
  #define local_cc (*(float *)(albw_frame + 0x174))
  #define local_bc (*(float *)(albw_frame + 0x184))
  #define fStack_b8 (*(float *)(albw_frame + 0x188))
  #define fStack_b4 (*(float *)(albw_frame + 0x18c))
  #define local_b0 (*(float *)(albw_frame + 0x190))
  #define fStack_ac (*(float *)(albw_frame + 0x194))
  #define fStack_a8 (*(float *)(albw_frame + 0x198))
  #define local_a0 (*(float *)(albw_frame + 0x1a0))
  #define fStack_9c (*(float *)(albw_frame + 0x1a4))
  #define fStack_98 (*(float *)(albw_frame + 0x1a8))
  #define local_94 (*(uint *)(albw_frame + 0x1ac))
  #define afStack_90 ((float *)(albw_frame + 0x1b0))
  #define afStack_84 ((float *)(albw_frame + 0x1bc))
  #define local_78 (*(float *)(albw_frame + 0x1c8))
  #define local_74 (*(float *)(albw_frame + 0x1cc))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x1d0))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x1d4))
  #define local_68 (*(float *)(albw_frame + 0x1d8))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x1dc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x1e0))
  #define local_5c (*(float *)(albw_frame + 0x1e4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x1e8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1ec))
  #define uStack_38 (*(undefined8 *)(albw_frame + 0x208))
  #define local_30 (*(int *)(albw_frame + 0x210))
  #define puStack_2c (*(uint * *)(albw_frame + 0x214))
  #define local_28 (*(uint *)(albw_frame + 0x218))
  uStack_38 = CONCAT44(fparam_1,fparam_0);
  uVar16 = CONCAT44(fparam_1,fparam_0);
  fparam_0_00 = DAT_004aa2a4;
  local_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  func_0068B2DC(afStack_100,DAT_004aa2a4,DAT_004aa2a4,DAT_004aa2a4,DAT_004aa2a4,DAT_004aa2a4,
                DAT_004aa2a4);
  piVar5 = DAT_004aa2b0;
  iVar2 = (int)(short)param_2[4];
  iVar10 = 0;
  fparam_0_01 = DAT_004aa2ac;
  fVar14 = DAT_004aa2a8;
  if (-1 < iVar2) {
    if (iVar2 == 0xff) {
      iVar2 = func_0052FBA0(*DAT_004aa2b4 + 0x3dbbc,param_2[3]);
      if ((iVar2 == 0) || (iVar2 = (int)*(short *)(iVar2 + 0x54), iVar2 < 0)) {
        iVar2 = (int)*(short *)(*(int *)(*piVar5 + 0x38) + 0x15b40);
      }
      if (iVar2 < 0) goto LAB_004aa218;
    }
    local_1b8 = ALBW_AS_F32((*(int *)(*piVar5 + 0x38) + iVar2 * DAT_004aa2b8 * 4 + 0x1c3c));
    if (local_1b8 != 0.0) {
      func_00115C70(&local_10c,(float *)param_2[7],(float *)param_2[8]);
      iVar2 = DAT_004aa2bc;
      fVar14 = SQRT(local_10c * local_10c + local_108 * local_108 + local_104 * local_104);
      param_2[9] = (uint)ALBW_AS_U32(fVar14);
      if ((ALBW_AS_F32(param_2[0xb]) * ALBW_AS_F32(uVar16) < fVar14) &&
         (fVar14 <= ALBW_AS_F32(param_2[0xb]) * ALBW_AS_F32(((ulonglong)uVar16 >> 0x20)))) {
        local_10c = local_10c / fVar14;
        local_108 = local_108 / fVar14;
        local_104 = local_104 / ALBW_AS_F32(param_2[9]);
        local_144 = 0;
        local_13c = 0;
        local_e8 = local_30;
        local_138 = 0;
        local_94 = local_28;
        local_78 = local_1b8;
        local_140 = 0;
        local_134 = (uint)ALBW_AS_U32(local_1b8) & 0xffff0000 | DAT_004aa2c0;
        uStack_130 = 0xff;
        uStack_12c = 0;
        local_128 = 0;
        local_124 = 0;
        local_11c = 0;
        local_11b = 1;
        local_120 = fparam_0_00;
        func_00110D44(local_1dc,(byte *)&local_144,0x2a);
        local_1ac = *DAT_004aa2c4;
        fStack_1a8 = DAT_004aa2c4[1];
        fStack_1a4 = DAT_004aa2c4[2];
        local_1b0 = fparam_0_00;
        func_0010E3C4((uint *)local_1dc,param_2,0x3c);
        func_0068B2DC(afStack_90,fparam_0_00,fparam_0_00,fparam_0_00,fparam_0_00,fparam_0_00,
                      fparam_0_00);
        fVar15 = *(float *)(DAT_004aa2c8 + 4) - DAT_004aa2cc;
        iVar10 = 0;
        local_bc = local_10c;
        fStack_b8 = local_108;
        fStack_b4 = local_104;
        fVar14 = local_1b0 * fparam_0_01;
        if (fVar15 < local_1b0 * fparam_0_01) {
          fVar14 = fVar15;
        }
        func_00115D70(&local_bc,&local_bc,fVar14);
        local_b0 = *local_1c0;
        fStack_ac = local_1c0[1];
        fStack_a8 = local_1c0[2];
        local_d0 = local_1bc[1];
        local_d4 = *local_1bc;
        local_cc = local_1bc[2];
        local_a0 = local_d4;
        fStack_9c = local_d0;
        fStack_98 = local_cc;
        if (((*DAT_004aa2d0 & 1) == 0) &&
           (iVar3 = func_00100174((int *)DAT_004aa2d0), puVar1 = DAT_004aa2d4, iVar3 != 0)) {
          puVar8 = DAT_004aa2d4 + 3;
          *DAT_004aa2d4 = 0;
          puVar1[1] = 0;
          puVar1[2] = 0;
          func_0010B3EC(puVar1,9,(int)puVar8);
        }
        while( true ) {
          fparam_0_00 = fparam_0_00 + fVar14;
          if (fparam_0_00 < local_1b8) {
            func_00115C54(&local_a0,&local_a0,&local_bc);
          }
          else {
            local_a0 = local_b0;
            fStack_9c = fStack_ac;
            fStack_98 = fStack_a8;
          }
          local_1bc = &local_d4;
          local_1c0 = &local_a0;
          func_00432F74(&fStack_1a0);
          func_00115C54(&local_74,&local_1ac,local_1c0);
          local_19c = local_74;
          uStack_198 = uStack_70;
          uStack_194 = uStack_6c;
          func_00115C54(&local_68,&local_1ac,local_1bc);
          uVar12 = 5;
          local_184 = local_68;
          uStack_180 = uStack_64;
          uStack_17c = uStack_60;
          local_190 = local_68;
          uStack_18c = uStack_64;
          uStack_188 = uStack_60;
          local_148 = local_1b0;
          do {
            if ((local_94 & 1 << (uVar12 & 0xff)) != 0) {
              iVar3 = (int)ALBW_AS_U32(local_78) + 0xb4;
              iVar4 = (int)ALBW_AS_U32(local_78) + 0xb4;
              if (uVar12 < 6) {
                iVar3 = (int)ALBW_AS_U32(local_78) + 0xb4U + uVar12 * 0xc;
                iVar4 = (int)ALBW_AS_U32(local_78) + 0xb4U + uVar12 * 0xc;
              }
              iVar4 = *(int *)(iVar4 + 4);
              if (iVar4 != iVar3) {
                do {
                  piVar5 = *(int **)(iVar4 + 8);
                  *(int **)(iVar2 + 8) = piVar5;
                  pfVar7 = (float *)piVar5[8];
                  bVar13 = local_1d0 != pfVar7;
                  if (bVar13) {
                    pfVar7 = (float *)(uint)*(byte *)(piVar5 + 0x11);
                  }
                  if (bVar13 && pfVar7 != (float *)0x0) {
                    pfVar7 = (float *)0x0;
                    if (local_1dc[0] != (float *)0x0) {
                      pfVar7 = afStack_90;
                    }
                    iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,local_1dc,&fStack_1a0);
                    if (iVar6 != 0) {
                      iVar10 = 1;
                    }
                  }
                  *(undefined4 *)(iVar2 + 8) = 0;
                  iVar4 = *(int *)(iVar4 + 4);
                } while (iVar4 != iVar3);
              }
              puVar1 = DAT_004aa2d4;
              *DAT_004aa2d4 = 0;
              if (local_1c0 != (float *)0x0) {
                func_004A8930(local_e8,local_1c0,(int *)puVar1,uVar12);
              }
              uVar11 = *puVar1;
              uVar9 = 0;
              if (0 < (int)uVar11) {
                do {
                  if (uVar9 < *DAT_004aa2d4) {
                    iVar3 = *(int *)(DAT_004aa2d4[2] + uVar9 * 4);
                    iVar4 = *(int *)(DAT_004aa2d4[2] + uVar9 * 4);
                  }
                  else {
                    iVar3 = 0;
                    iVar4 = 0;
                  }
                  for (iVar4 = *(int *)(iVar4 + 4); iVar4 != iVar3; iVar4 = *(int *)(iVar4 + 4)) {
                    piVar5 = *(int **)(iVar4 + 8);
                    *(int **)(iVar2 + 8) = piVar5;
                    pfVar7 = (float *)piVar5[8];
                    bVar13 = local_1d0 != pfVar7;
                    if (bVar13) {
                      pfVar7 = (float *)(uint)*(byte *)(piVar5 + 0x11);
                    }
                    if (bVar13 && pfVar7 != (float *)0x0) {
                      pfVar7 = (float *)0x0;
                      if (local_1dc[0] != (float *)0x0) {
                        pfVar7 = afStack_90;
                      }
                      iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,local_1dc,&fStack_1a0);
                      if (iVar6 != 0) {
                        iVar10 = 1;
                      }
                    }
                    *(undefined4 *)(iVar2 + 8) = 0;
                  }
                  uVar9 = uVar9 + 1;
                } while ((int)uVar9 < (int)uVar11);
              }
              iVar3 = local_e8 + 0xc4;
              iVar4 = local_e8 + 0xc4;
              if (uVar12 < 6) {
                iVar3 = local_e8 + 0xc4 + uVar12 * 0xc;
                iVar4 = local_e8 + 0xc4 + uVar12 * 0xc;
              }
              iVar4 = *(int *)(iVar4 + 4);
              if (iVar4 != iVar3) {
                do {
                  piVar5 = *(int **)(iVar4 + 8);
                  *(int **)(iVar2 + 8) = piVar5;
                  pfVar7 = (float *)piVar5[8];
                  bVar13 = local_1d0 != pfVar7;
                  if (bVar13) {
                    pfVar7 = (float *)(uint)*(byte *)(piVar5 + 0x11);
                  }
                  if (bVar13 && pfVar7 != (float *)0x0) {
                    pfVar7 = (float *)0x0;
                    if (local_1dc[0] != (float *)0x0) {
                      pfVar7 = afStack_90;
                    }
                    iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,local_1dc,&fStack_1a0);
                    if (iVar6 != 0) {
                      iVar10 = 1;
                    }
                  }
                  *(undefined4 *)(iVar2 + 8) = 0;
                  iVar4 = *(int *)(iVar4 + 4);
                } while (iVar4 != iVar3);
              }
              if (((local_1dc[0] != (float *)0x0) && ((int)uVar12 < 3)) && (0 < (int)uVar12)) {
                func_00115C54(&local_5c,&local_1ac,&local_a0);
                local_19c = local_5c;
                uStack_198 = uStack_58;
                uStack_194 = uStack_54;
                func_00115C54(&local_19c,&local_19c,afStack_90);
                func_00115C54(&local_19c,&local_19c,afStack_84);
                func_004356B4((int *)&fStack_1a0);
              }
            }
            uVar12 = uVar12 - 1;
          } while (-1 < (int)uVar12);
          if (iVar10 != 0) break;
          if (local_1b8 <= fparam_0_00) {
            return 0;
          }
        }
        if (local_1dc[0] == (float *)0x0) {
          return iVar10;
        }
        func_00115C70(&fStack_1a0,&local_a0,&local_b0);
        func_00115C54(local_1dc[0],local_1dc[0],afStack_90);
        func_00115C54(local_1dc[0],local_1dc[0],afStack_84);
        func_00115C54(local_1dc[0],local_1dc[0],&fStack_1a0);
        return iVar10;
      }
      func_00432F74(&iStack_238);
      func_00115C54((float *)&local_1d0,(float *)(param_2 + 0xc),(float *)param_2[7]);
      local_234 = local_1d0;
      pfStack_230 = local_1cc;
      pfStack_22c = pfStack_1c8;
      func_00115C54((float *)&local_1d0,(float *)(param_2 + 0xc),(float *)param_2[8]);
      local_21c = local_1d0;
      pfStack_218 = local_1cc;
      pfStack_214 = pfStack_1c8;
      local_228 = local_1d0;
      pfStack_224 = local_1cc;
      pfStack_220 = pfStack_1c8;
      local_1e0 = param_2[0xb];
      if (((*(uint *)(iVar2 + 0x18) & 1) == 0) &&
         (iVar3 = func_00100174(DAT_004aa9cc), puVar1 = DAT_004aa9d0, iVar3 != 0)) {
        puVar8 = DAT_004aa9d0 + 3;
        *DAT_004aa9d0 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        func_0010B3EC(puVar1,9,(int)puVar8);
      }
      local_1d0 = (float *)&DAT_00000005;
      do {
        if ((local_28 & 1 << ((uint)local_1d0 & 0xff)) != 0) {
          iVar3 = (int)ALBW_AS_U32(local_1b8) + 0xb4;
          iVar4 = (int)ALBW_AS_U32(local_1b8) + 0xb4;
          if (local_1d0 < &DAT_00000006) {
            iVar3 = iVar3 + (int)local_1d0 * 0xc;
            iVar4 = (int)ALBW_AS_U32(local_1b8) + 0xb4U + (int)local_1d0 * 0xc;
          }
          iVar4 = *(int *)(iVar4 + 4);
          if (iVar4 != iVar3) {
            do {
              piVar5 = *(int **)(iVar4 + 8);
              *(int **)(iVar2 + 8) = piVar5;
              uVar12 = piVar5[8];
              bVar13 = param_2[3] != uVar12;
              if (bVar13) {
                uVar12 = (uint)*(byte *)(piVar5 + 0x11);
              }
              if (bVar13 && uVar12 != 0) {
                pfVar7 = (float *)0x0;
                if (*param_2 != 0) {
                  pfVar7 = afStack_100;
                }
                iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,param_2,&iStack_238);
                if (iVar6 != 0) {
                  iVar10 = 1;
                }
              }
              *(undefined4 *)(iVar2 + 8) = 0;
              iVar4 = *(int *)(iVar4 + 4);
            } while (iVar4 != iVar3);
          }
          puVar1 = DAT_004aa9d0;
          *DAT_004aa9d0 = 0;
          if ((float *)param_2[7] != (float *)0x0) {
            func_004A8930(local_30,(float *)param_2[7],(int *)puVar1,(uint)local_1d0);
          }
          uVar9 = *puVar1;
          uVar12 = 0;
          if (0 < (int)uVar9) {
            do {
              if (uVar12 < *DAT_004aa9d0) {
                iVar3 = *(int *)(DAT_004aa9d0[2] + uVar12 * 4);
                iVar4 = *(int *)(DAT_004aa9d0[2] + uVar12 * 4);
              }
              else {
                iVar3 = 0;
                iVar4 = 0;
              }
              for (iVar4 = *(int *)(iVar4 + 4); iVar4 != iVar3; iVar4 = *(int *)(iVar4 + 4)) {
                piVar5 = *(int **)(iVar4 + 8);
                *(int **)(iVar2 + 8) = piVar5;
                uVar11 = piVar5[8];
                bVar13 = param_2[3] != uVar11;
                if (bVar13) {
                  uVar11 = (uint)*(byte *)(piVar5 + 0x11);
                }
                if (bVar13 && uVar11 != 0) {
                  pfVar7 = (float *)0x0;
                  if (*param_2 != 0) {
                    pfVar7 = afStack_100;
                  }
                  iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,param_2,&iStack_238);
                  if (iVar6 != 0) {
                    iVar10 = 1;
                  }
                }
                *(undefined4 *)(iVar2 + 8) = 0;
              }
              uVar12 = uVar12 + 1;
            } while ((int)uVar12 < (int)uVar9);
          }
          iVar3 = local_30 + 0xc4;
          iVar4 = local_30 + 0xc4;
          if (local_1d0 < &DAT_00000006) {
            iVar3 = iVar3 + (int)local_1d0 * 0xc;
            iVar4 = local_30 + 0xc4 + (int)local_1d0 * 0xc;
          }
          iVar4 = *(int *)(iVar4 + 4);
          if (iVar4 != iVar3) {
            do {
              piVar5 = *(int **)(iVar4 + 8);
              *(int **)(iVar2 + 8) = piVar5;
              uVar12 = piVar5[8];
              bVar13 = param_2[3] != uVar12;
              if (bVar13) {
                uVar12 = (uint)*(byte *)(piVar5 + 0x11);
              }
              if (bVar13 && uVar12 != 0) {
                pfVar7 = (float *)0x0;
                if (*param_2 != 0) {
                  pfVar7 = afStack_100;
                }
                iVar6 = (**(code **)(*piVar5 + 8))(piVar5,pfVar7,param_2,&iStack_238);
                if (iVar6 != 0) {
                  iVar10 = 1;
                }
              }
              *(undefined4 *)(iVar2 + 8) = 0;
              iVar4 = *(int *)(iVar4 + 4);
            } while (iVar4 != iVar3);
          }
          if (((*param_2 != 0) && ((int)local_1d0 < 3)) && (0 < (int)local_1d0)) {
            func_00115C54((float *)&local_1cc,(float *)(param_2 + 0xc),(float *)param_2[7]);
            local_234 = local_1cc;
            pfStack_230 = pfStack_1c8;
            pfStack_22c = pfStack_1c4;
            func_00115C54((float *)&local_234,(float *)&local_234,afStack_100);
            func_00115C54((float *)&local_234,(float *)&local_234,afStack_f4);
            func_004356B4(&iStack_238);
          }
        }
        local_1d0 = (float *)((int)local_1d0 + -1);
      } while (-1 < (int)local_1d0);
      pfVar7 = local_1d0;
      if (iVar10 != 0) {
        pfVar7 = (float *)*param_2;
      }
      if (iVar10 == 0 || pfVar7 == (float *)0x0) {
        return iVar10;
      }
      func_00115C54(pfVar7,pfVar7,afStack_100);
      func_00115C54((float *)*param_2,(float *)*param_2,afStack_f4);
      return iVar10;
    }
  }
LAB_004aa218:
  iVar10 = func_004A7620(local_30,param_2,local_28,fparam_0_01,fVar14);
  return iVar10;
}

