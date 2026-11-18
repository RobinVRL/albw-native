#include "ghidra_types.h"

extern int func_00110490(undefined4 *param_1,uint param_2);
extern int func_00115B68(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_004352FC(int param_1,int param_2,int param_3,float *param_4);
extern int func_00435ED0(int param_1,float *param_2);
extern int func_0043610C(int param_1,float *param_2);
extern int func_0043627C(int param_1);
extern int func_00491404(float *param_1,float *param_2);
extern int func_00581A08(void);
extern float func_0068906C(float *param_1,float *param_2);
extern int DAT_001ea27c;
extern undefined4 *DAT_001ea280;
extern int *DAT_001ea284;
extern uint DAT_001ea288;
extern float DAT_001ea28c;
extern float *DAT_001ea290;
extern float DAT_001ea294;
extern int DAT_001ea728;
extern float DAT_001ea72c;
extern undefined4 DAT_001ea730;
extern int DAT_001ea734;

// USA 001E9E40 <- EU 001E9E40 (Ghidra, non-matching)
// GLOBAL DAT_001ea27c int
// GLOBAL DAT_001ea280 undefined4 *
// GLOBAL DAT_001ea284 int *
// GLOBAL DAT_001ea288 uint
// GLOBAL DAT_001ea28c float
// GLOBAL DAT_001ea290 float *
// GLOBAL DAT_001ea294 float
// GLOBAL DAT_001ea728 int
// GLOBAL DAT_001ea72c float
// GLOBAL DAT_001ea730 undefined4
// GLOBAL DAT_001ea734 int

void func_001E9E40(undefined4 *param_1,int param_2,int *param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  float fVar11;
  float fVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x1d0];
  #define local_1d0 (*(int * *)(albw_frame + 0x0))
  #define local_1cc (*(int * *)(albw_frame + 0x4))
  #define local_1c8 (*(int * *)(albw_frame + 0x8))
  #define local_1c0 (*(int *)(albw_frame + 0x10))
  #define local_1bc (*(int *)(albw_frame + 0x14))
  #define local_1b8 (*(uint *)(albw_frame + 0x18))
  #define local_1b4 (*(int *)(albw_frame + 0x1c))
  #define local_1b0 (*(int *)(albw_frame + 0x20))
  #define local_1ac (*(int *)(albw_frame + 0x24))
  #define local_1a8 (*(int * *)(albw_frame + 0x28))
  #define local_1a4 (*(float *)(albw_frame + 0x2c))
  #define local_1a0 (*(int *)(albw_frame + 0x30))
  #define local_19c (*(int *)(albw_frame + 0x34))
  #define local_198 (*(float *)(albw_frame + 0x38))
  #define local_194 (*(float *)(albw_frame + 0x3c))
  #define local_190 (*(float *)(albw_frame + 0x40))
  #define local_18c (*(float *)(albw_frame + 0x44))
  #define local_188 (*(float *)(albw_frame + 0x48))
  #define local_184 (*(float *)(albw_frame + 0x4c))
  #define local_180 (*(float *)(albw_frame + 0x50))
  #define local_17c (*(float *)(albw_frame + 0x54))
  #define local_178 (*(float *)(albw_frame + 0x58))
  #define local_174 (*(float *)(albw_frame + 0x5c))
  #define local_170 (*(float *)(albw_frame + 0x60))
  #define local_16c (*(float *)(albw_frame + 0x64))
  #define local_168 (*(int *)(albw_frame + 0x68))
  #define local_164 (*(int *)(albw_frame + 0x6c))
  #define local_160 (*(float *)(albw_frame + 0x70))
  #define local_15c (*(uint *)(albw_frame + 0x74))
  #define local_158 (*(undefined4 *)(albw_frame + 0x78))
  #define local_154 (*(undefined4 *)(albw_frame + 0x7c))
  #define uStack_150 (*(undefined4 *)(albw_frame + 0x80))
  #define uStack_14c (*(undefined4 *)(albw_frame + 0x84))
  #define local_148 (*(int * *)(albw_frame + 0x88))
  #define local_140 (*(int * *)(albw_frame + 0x90))
  #define uStack_13c (*(uint *)(albw_frame + 0x94))
  #define local_138 (*(uint *)(albw_frame + 0x98))
  #define local_134 (*(uint *)(albw_frame + 0x9c))
  #define local_130 (*(int * *)(albw_frame + 0xa0))
  #define uStack_12c (*(uint *)(albw_frame + 0xa4))
  #define local_128 (*(uint *)(albw_frame + 0xa8))
  #define local_124 (*(uint *)(albw_frame + 0xac))
  #define local_120 (*(int * *)(albw_frame + 0xb0))
  #define local_11c (*(int * *)(albw_frame + 0xb4))
  #define uStack_118 (*(uint *)(albw_frame + 0xb8))
  #define local_114 (*(uint *)(albw_frame + 0xbc))
  #define local_110 (*(uint *)(albw_frame + 0xc0))
  #define local_10c (*(int * *)(albw_frame + 0xc4))
  #define uStack_108 (*(uint *)(albw_frame + 0xc8))
  #define local_104 (*(uint *)(albw_frame + 0xcc))
  #define local_100 (*(uint *)(albw_frame + 0xd0))
  #define local_fc (*(int * *)(albw_frame + 0xd4))
  #define local_f8 (*(int * *)(albw_frame + 0xd8))
  #define uStack_f4 (*(uint *)(albw_frame + 0xdc))
  #define local_f0 (*(uint *)(albw_frame + 0xe0))
  #define local_ec (*(uint *)(albw_frame + 0xe4))
  #define local_e8 (*(int * *)(albw_frame + 0xe8))
  #define uStack_e4 (*(uint *)(albw_frame + 0xec))
  #define local_e0 (*(uint *)(albw_frame + 0xf0))
  #define local_dc (*(uint *)(albw_frame + 0xf4))
  #define local_d8 (*(int * *)(albw_frame + 0xf8))
  #define local_d4 (*(int * *)(albw_frame + 0xfc))
  #define uStack_d0 (*(uint *)(albw_frame + 0x100))
  #define local_cc (*(uint *)(albw_frame + 0x104))
  #define local_c8 (*(uint *)(albw_frame + 0x108))
  #define local_c4 (*(int * *)(albw_frame + 0x10c))
  #define uStack_c0 (*(uint *)(albw_frame + 0x110))
  #define local_bc (*(uint *)(albw_frame + 0x114))
  #define local_b8 (*(uint *)(albw_frame + 0x118))
  #define local_b4 (*(int * *)(albw_frame + 0x11c))
  #define local_b0 (*(undefined1 *)(albw_frame + 0x120))
  #define local_ac (*(int * *)(albw_frame + 0x124))
  #define local_a8 (*(int * *)(albw_frame + 0x128))
  #define local_a4 (*(int * *)(albw_frame + 0x12c))
  #define local_a0 (*(int * *)(albw_frame + 0x130))
  #define local_9c (*(int * *)(albw_frame + 0x134))
  #define local_98 (*(int * *)(albw_frame + 0x138))
  #define local_94 (*(uint * *)(albw_frame + 0x13c))
  #define local_90 (*(int * *)(albw_frame + 0x140))
  #define local_8c (*(int * *)(albw_frame + 0x144))
  #define local_88 (*(int * *)(albw_frame + 0x148))
  #define local_84 (*(int * *)(albw_frame + 0x14c))
  #define local_80 (*(int * *)(albw_frame + 0x150))
  #define local_7c (*(int * *)(albw_frame + 0x154))
  #define local_78 (*(int * *)(albw_frame + 0x158))
  #define local_74 (*(int * *)(albw_frame + 0x15c))
  #define local_70 (*(int * *)(albw_frame + 0x160))
  #define local_6c (*(int * *)(albw_frame + 0x164))
  #define local_68 (*(int * *)(albw_frame + 0x168))
  #define piStack_64 (*(int * *)(albw_frame + 0x16c))
  #define piStack_60 (*(int * *)(albw_frame + 0x170))
  #define afStack_5c ((float *)(albw_frame + 0x174))
  #define afStack_48 ((float *)(albw_frame + 0x188))
  puVar10 = (uint *)param_1[0xeec];
  if (puVar10 != (uint *)0x0) {
    for (uVar2 = 0; (int)uVar2 < (int)*puVar10; uVar2 = uVar2 + 1) {
      if (uVar2 < *puVar10) {
        piVar8 = (int *)(puVar10[2] + uVar2 * 4);
      }
      else {
        piVar8 = (int *)puVar10[2];
      }
      if (*piVar8 == *param_3) {
        return;
      }
    }
  }
  uVar2 = (uint)*(ushort *)(param_2 + 0x54);
  if ((uVar2 == 5 || uVar2 == 7) || (uVar2 == 8 || uVar2 == 9)) {
    puVar10 = (uint *)(DAT_001ea27c + uVar2 * 8);
    local_158 = 0;
    local_b0 = 0;
    local_154 = *DAT_001ea280;
    uStack_150 = DAT_001ea280[1];
    uStack_14c = DAT_001ea280[2];
    uVar13 = (ulonglong)DAT_001ea288;
    local_148 = DAT_001ea284;
    local_140 = DAT_001ea284;
    uStack_13c = DAT_001ea288;
    local_138 = DAT_001ea288;
    local_134 = DAT_001ea288;
    local_130 = DAT_001ea284;
    uStack_12c = DAT_001ea288;
    local_128 = DAT_001ea288;
    local_124 = DAT_001ea288;
    local_120 = DAT_001ea284;
    local_11c = DAT_001ea284;
    uStack_118 = DAT_001ea288;
    local_114 = DAT_001ea288;
    local_110 = DAT_001ea288;
    local_10c = DAT_001ea284;
    uStack_108 = DAT_001ea288;
    local_104 = DAT_001ea288;
    local_100 = DAT_001ea288;
    local_fc = DAT_001ea284;
    local_f8 = DAT_001ea284;
    uStack_f4 = DAT_001ea288;
    local_f0 = DAT_001ea288;
    local_ec = DAT_001ea288;
    local_e8 = DAT_001ea284;
    uStack_e4 = DAT_001ea288;
    local_e0 = DAT_001ea288;
    local_dc = DAT_001ea288;
    local_d8 = DAT_001ea284;
    local_d4 = DAT_001ea284;
    uStack_d0 = DAT_001ea288;
    local_cc = DAT_001ea288;
    local_c8 = DAT_001ea288;
    local_c4 = DAT_001ea284;
    uStack_c0 = DAT_001ea288;
    local_bc = DAT_001ea288;
    local_b8 = DAT_001ea288;
    local_b4 = DAT_001ea284;
    sVar1 = *(short *)(param_2 + 0x54);
    piVar8 = DAT_001ea284;
    if (sVar1 == 5) {
      func_00115D70((float *)&local_7c,(float *)(param_2 + 0x58),*(float *)(param_2 + 100));
      local_88 = local_7c;
      local_84 = local_78;
      local_80 = local_74;
      local_1cc = (int *)uVar13;
      local_a4 = *(int **)(param_2 + 0x58);
      local_98 = *(int **)(param_2 + 0x5c);
      local_8c = *(int **)(param_2 + 0x60);
      local_1d0 = piVar8;
      local_1c8 = local_1cc;
      local_ac = piVar8;
      local_a8 = local_1cc;
      local_a0 = local_1cc;
      local_9c = piVar8;
      local_94 = (uint *)local_1cc;
      local_90 = local_1cc;
      local_7c = local_a4;
      local_78 = local_98;
      local_74 = local_8c;
      local_70 = local_1cc;
      local_6c = piVar8;
      local_68 = local_1cc;
      func_00115DC8((float *)&local_7c);
      func_00115E10((float *)&local_70,(float *)&local_7c,(float *)&local_1d0);
      func_00115DC8((float *)&local_70);
      func_00115E10((float *)&local_1d0,(float *)&local_70,(float *)&local_7c);
      local_a4 = local_7c;
      local_98 = local_78;
      local_8c = local_74;
      local_ac = local_1d0;
      local_a0 = local_1cc;
      local_94 = (uint *)local_1c8;
      local_a8 = local_70;
      local_9c = local_6c;
      local_90 = local_68;
      func_00435ED0((int)&local_158,(float *)&local_ac);
    }
    else if (sVar1 == 7) {
      if ((*(ushort *)(param_2 + 0x28) & 0x1f) != 4) {
        return;
      }
      func_0043610C((int)&local_158,(float *)(param_2 + 0x58));
      local_88 = *(int **)(param_2 + 4);
      local_84 = *(int **)(param_2 + 8);
      local_80 = *(int **)(param_2 + 0xc);
    }
    else if (sVar1 == 8) {
      func_0043610C((int)&local_158,(float *)(param_2 + 0x58));
      func_00435ED0((int)&local_158,(float *)(param_2 + 100));
      local_88 = *(int **)(param_2 + 4);
      local_84 = *(int **)(param_2 + 8);
      local_80 = *(int **)(param_2 + 0xc);
    }
    else if (sVar1 == 9) {
      if ((*(ushort *)(param_2 + 0x28) & 0x1f) != 4) {
        return;
      }
      func_00115C54((float *)&local_88,(float *)(param_2 + 0x58),(float *)(param_2 + 100));
      func_00115D70((float *)&local_88,(float *)&local_88,DAT_001ea28c);
      func_00115C70((float *)&local_68,(float *)(param_2 + 100),(float *)(param_2 + 0x58));
      local_1d0 = local_68;
      local_1cc = piStack_64;
      local_1c8 = piStack_60;
      fVar11 = func_0068906C(afStack_5c,(float *)&local_1d0);
      iVar3 = func_00115B68(afStack_48,DAT_001ea290,afStack_5c);
      if (iVar3 == 0) {
        local_a8 = (int *)uVar13;
        local_ac = piVar8;
        local_a4 = local_a8;
        local_a0 = local_a8;
        local_9c = piVar8;
        local_98 = local_a8;
        local_94 = (uint *)local_a8;
        local_90 = local_a8;
        local_8c = piVar8;
      }
      else {
        func_00491404((float *)&local_ac,afStack_48);
      }
      func_00435ED0((int)&local_158,(float *)&local_ac);
      local_74 = (int *)ALBW_PTR_BITS((*(float *)(param_2 + 0x70) * DAT_001ea294));
      local_70 = (int *)ALBW_PTR_BITS((*(float *)(param_2 + 0x70) + fVar11));
      local_6c = local_74;
      func_0043610C((int)&local_158,(float *)&local_74);
    }
    func_0043627C((int)&local_158);
    local_1c0 = 0;
    local_1bc = 0;
    local_1b8 = 0;
    local_1d0 = (int *)0x1f;
    uVar2 = 0;
    local_15c = CONCAT22((*(undefined2 *)((char *)&local_15c + 2)),0x1f);
    if (0 < (int)*puVar10) {
      local_94 = param_1 + 0xeea;
      local_1a8 = piVar8;
      do {
        if (uVar2 < *puVar10) {
          uVar7 = puVar10[1] + uVar2 * 0x68;
        }
        else {
          uVar7 = puVar10[1];
        }
        func_004352FC((int)&local_1c0,uVar7,(int)&local_158,(float *)&local_88);
        local_1d0 = *(int **)(param_2 + 0x28);
        local_15c = CONCAT22((*(undefined2 *)((char *)&local_15c + 2)),(*(undefined2 *)((char *)&local_1d0 + 0)));
        iVar3 = *param_3;
        fVar11 = ALBW_AS_F32(param_1[0x28]);
        local_1b8 = uVar2;
        func_00115C70((float *)&local_7c,(float *)(param_1 + 0x25),&local_1a4);
        if ((((ALBW_AS_F32(local_7c) * local_18c + ALBW_AS_F32(local_78) * local_188 +
               ALBW_AS_F32(local_74) * local_184 <= fVar11) &&
             (ALBW_AS_F32(local_7c) * local_180 + ALBW_AS_F32(local_78) * local_17c +
              ALBW_AS_F32(local_74) * local_178 <= fVar11)) &&
            (ALBW_AS_F32(local_7c) * local_174 + ALBW_AS_F32(local_78) * local_170 + ALBW_AS_F32(local_74) * local_16c
             <= local_160 + fVar11)) &&
           (((fVar12 = -(ALBW_AS_F32(local_7c) * local_198 + ALBW_AS_F32(local_78) * local_194 +
                        ALBW_AS_F32(local_74) * local_190), -fVar11 <= fVar12 && (fVar12 <= fVar11)) &&
            (fVar12 != -3.4028235e+38)))) {
          uVar7 = local_15c & 0xffff;
          uVar4 = local_15c & 0x1f;
          if (uVar4 == 4) {
            uVar7 = local_15c & 0x7e0;
          }
          if (uVar4 != 4 || uVar7 != 0x260) {
            local_90 = (int *)0x0;
            if (uVar4 == 4) {
              if (*(char *)((int)param_1 + 0x3dc3) != '\0') goto LAB_001ea70c;
            }
            else if ((((1 << (local_15c & 0x1f) & 9U) != 0) &&
                     (fVar11 = local_198 * *DAT_001ea290 + local_194 * DAT_001ea290[1] +
                               local_190 * DAT_001ea290[2], (int)ALBW_AS_U32(fVar11) < DAT_001ea728)) &&
                    ((uint)ALBW_AS_U32(fVar11) < (uint)ALBW_AS_U32(DAT_001ea72c))) {
              local_90 = (int *)0x1;
            }
            iVar5 = func_00581A08();
            local_1c8 = *(int **)(iVar5 + 0x1c);
            if (local_90 == (int *)0x0) {
              if ((1 << ((uint)local_1c8 & 0xff) & 5U) == 0) {
                fVar11 = local_194;
                if (local_194 <= ALBW_AS_F32(uVar13)) {
                  fVar11 = -local_194;
                }
                if (DAT_001ea734 < (int)ALBW_AS_U32(fVar11)) goto LAB_001ea70c;
              }
              piVar6 = (int *)param_1[1];
              if (piVar6[1] <= *piVar6) goto LAB_001ea70c;
              piVar9 = (int *)piVar6[3];
              local_1cc = piVar6;
              if (piVar9 != (int *)0x0) {
                piVar6[3] = *piVar9;
                local_a8 = piVar9;
                func_00110490(piVar9,0x80);
                *local_a8 = 0;
                local_a8[2] = 0;
                local_a8[3] = 0;
                local_a8[4] = 0;
                local_a8[8] = (int)piVar8;
                local_1d0 = (int *)0x1f;
                *(undefined2 *)(local_a8 + 0x1b) = 0x1f;
                local_a8[0x1c] = 0;
                local_a8[0x1d] = 0;
                local_a8[0x1e] = 0;
                local_a8[0x1f] = 0;
                piVar9 = local_a8;
              }
              iVar5 = *local_1cc;
              if (iVar5 < local_1cc[1]) goto LAB_001ea4e4;
            }
            else {
              local_1cc = (int *)*param_1;
              if (*local_1cc < local_1cc[1]) {
                piVar9 = (int *)local_1cc[3];
                if (piVar9 != (int *)0x0) {
                  local_1cc[3] = *piVar9;
                  local_a8 = piVar9;
                  func_00110490(piVar9,0x80);
                  *local_a8 = 0;
                  local_a8[2] = 0;
                  local_a8[3] = 0;
                  local_a8[4] = 0;
                  local_a8[8] = (int)piVar8;
                  local_1d0 = (int *)0x1f;
                  *(undefined2 *)(local_a8 + 0x1b) = 0x1f;
                  local_a8[0x1c] = 0;
                  local_a8[0x1d] = 0;
                  local_a8[0x1e] = 0;
                  local_a8[0x1f] = 0;
                  piVar9 = local_a8;
                }
                iVar5 = *local_1cc;
                if (iVar5 < local_1cc[1]) {
LAB_001ea4e4:
                  *(int **)(local_1cc[2] + iVar5 * 4) = piVar9;
                  *local_1cc = *local_1cc + 1;
                }
              }
              else {
                piVar9 = (int *)0x0;
              }
            }
            piVar9[2] = local_1c0;
            piVar9[3] = local_1bc;
            piVar9[4] = local_1b8;
            piVar9[5] = local_1b4;
            piVar9[6] = local_1b0;
            piVar9[7] = local_1ac;
            piVar9[8] = (int)local_1a8;
            piVar9[9] = (int)ALBW_AS_U32(local_1a4);
            piVar9[10] = local_1a0;
            piVar9[0xb] = local_19c;
            piVar9[0xc] = (int)ALBW_AS_U32(local_198);
            piVar9[0xd] = (int)ALBW_AS_U32(local_194);
            piVar9[0xe] = (int)ALBW_AS_U32(local_190);
            piVar9[0xf] = (int)ALBW_AS_U32(local_18c);
            piVar9[0x10] = (int)ALBW_AS_U32(local_188);
            piVar9[0x11] = (int)ALBW_AS_U32(local_184);
            piVar9[0x12] = (int)ALBW_AS_U32(local_180);
            piVar9[0x13] = (int)ALBW_AS_U32(local_17c);
            piVar9[0x14] = (int)ALBW_AS_U32(local_178);
            piVar9[0x15] = (int)ALBW_AS_U32(local_174);
            piVar9[0x16] = (int)ALBW_AS_U32(local_170);
            piVar9[0x17] = (int)ALBW_AS_U32(local_16c);
            piVar9[0x18] = local_168;
            piVar9[0x19] = local_164;
            piVar9[0x1a] = (int)ALBW_AS_U32(local_160);
            *(undefined2 *)(piVar9 + 0x1b) = (undefined2)local_15c;
            *piVar9 = iVar3;
            piVar9[1] = (int)local_1c8;
            if ((((param_1[10] == 0) && (local_90 != (int *)0x0)) && (iVar3 == param_1[0xee9])) &&
               (local_1b8 == *local_94)) {
              param_1[10] = piVar9;
            }
          }
        }
LAB_001ea70c:
        uVar2 = uVar2 + 1;
        if ((int)*puVar10 <= (int)uVar2) {
          return;
        }
      } while( true );
    }
  }
  return;
}

