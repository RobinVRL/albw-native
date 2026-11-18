#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0038AF14(undefined1 *param_1);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0052EB7C(int param_1);
extern int func_0053ECB4(int param_1);
extern int func_0053F5E0(int param_1);
extern int func_0053F6D8(int param_1);
extern int func_0053F7B8(int param_1);
extern int func_0053FD00(int param_1);
extern undefined4 * * * * *DAT_00342100;
extern undefined4 * * * * *DAT_00342104;
extern float DAT_00342108;
extern float DAT_0034210c;
extern float DAT_00342110;
extern float DAT_00342114;
extern float DAT_00342118;
extern float DAT_0034211c;
extern int *DAT_00342120;
extern undefined4 DAT_00342124;
extern float DAT_00342128;
extern float DAT_0034258c;
extern float DAT_00342590;
extern undefined4 DAT_00342594;
extern undefined4 DAT_00342598;
extern undefined4 * * * * *DAT_0034259c;

// USA 00341D28 <- EU 00341D04 (Ghidra, non-matching)
// GLOBAL DAT_00342100 undefined4 * * * * *
// GLOBAL DAT_00342104 undefined4 * * * * *
// GLOBAL DAT_00342108 float
// GLOBAL DAT_0034210c float
// GLOBAL DAT_00342110 float
// GLOBAL DAT_00342114 float
// GLOBAL DAT_00342118 float
// GLOBAL DAT_0034211c float
// GLOBAL DAT_00342120 int *
// GLOBAL DAT_00342124 undefined4
// GLOBAL DAT_00342128 float
// GLOBAL DAT_0034258c float
// GLOBAL DAT_00342590 float
// GLOBAL DAT_00342594 undefined4
// GLOBAL DAT_00342598 undefined4
// GLOBAL DAT_0034259c undefined4 * * * * *
// GLOBAL EXT_00000018 undefined

void func_00341D28(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 *puVar8;
  float *pfVar9;
  uint uVar10;
  int *piVar11;
  char *pcVar12;
  byte bVar13;
  bool bVar14;
  float fVar15;
  float fVar16;
  undefined4 *****pppppuVar17;
  undefined4 *****pppppuVar18;
  undefined8 uVar19;
  undefined4 *****pppppuVar20;
  float fVar21;
  float fparam_1;
  undefined8 uVar22;
  undefined4 uVar23;
  float fparam_0;
  float fparam_0_00;
  _Alignas(8) unsigned char albw_frame[0x1b0];
  #define local_1a4 (*(undefined4 **** *)(albw_frame + 0xc))
  #define local_1a0 (*(undefined4 **** *)(albw_frame + 0x10))
  #define local_19c (*(undefined4 **** *)(albw_frame + 0x14))
  #define local_198 (*(undefined4 **** *)(albw_frame + 0x18))
  #define local_194 (*(undefined4 **** *)(albw_frame + 0x1c))
  #define local_190 (*(int *)(albw_frame + 0x20))
  #define local_18c (*(undefined4 *)(albw_frame + 0x24))
  #define local_188 (*(undefined4 *)(albw_frame + 0x28))
  #define local_184 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_180 (*(undefined4 *)(albw_frame + 0x30))
  #define local_17c (*(float * *)(albw_frame + 0x34))
  #define local_178 (*(undefined4 **** *)(albw_frame + 0x38))
  #define piStack_174 (*(int * *)(albw_frame + 0x3c))
  #define local_170 (*(undefined1 *)(albw_frame + 0x40))
  #define local_16c (*(undefined4 *)(albw_frame + 0x44))
  #define local_168 (*(undefined4 **** *)(albw_frame + 0x48))
  #define local_164 (*(undefined4 **** *)(albw_frame + 0x4c))
  #define ppppuStack_160 (*(undefined4 **** *)(albw_frame + 0x50))
  #define ppppuStack_15c (*(undefined4 **** *)(albw_frame + 0x54))
  #define local_158 (*(undefined4 **** *)(albw_frame + 0x58))
  #define local_154 (*(int * *)(albw_frame + 0x5c))
  #define local_150 (*(undefined4 **** *)(albw_frame + 0x60))
  #define local_14c (*(float *)(albw_frame + 0x64))
  #define local_148 (*(float *)(albw_frame + 0x68))
  #define local_144 (*(float *)(albw_frame + 0x6c))
  #define local_140 (*(undefined4 **** *)(albw_frame + 0x70))
  #define local_13c (*(float *)(albw_frame + 0x74))
  #define local_138 (*(undefined4 **** *)(albw_frame + 0x78))
  #define fStack_134 (*(float *)(albw_frame + 0x7c))
  #define local_130 (*(undefined4 **** *)(albw_frame + 0x80))
  #define piStack_12c (*(int * *)(albw_frame + 0x84))
  #define ppppuStack_128 (*(undefined4 **** *)(albw_frame + 0x88))
  #define local_124 (*(undefined1 *)(albw_frame + 0x8c))
  #define local_123 (*(undefined1 *)(albw_frame + 0x8d))
  #define local_120 (*(float *)(albw_frame + 0x90))
  #define local_11c (*(undefined4 **** *)(albw_frame + 0x94))
  #define fStack_118 (*(float *)(albw_frame + 0x98))
  #define local_114 (*(undefined4 **** *)(albw_frame + 0x9c))
  #define uStack_f4 (*(undefined4 *)(albw_frame + 0xbc))
  #define local_f0 (*(undefined4 **** *)(albw_frame + 0xc0))
  #define local_ec (*(undefined4 **** *)(albw_frame + 0xc4))
  #define local_e8 (*(undefined4 **** *)(albw_frame + 0xc8))
  #define auStack_e4 ((undefined4 *)(albw_frame + 0xcc))
  #define auStack_b8 ((undefined4 *)(albw_frame + 0xf8))
  #define local_9c (*(uint *)(albw_frame + 0x114))
  #define auStack_98 ((undefined4 *)(albw_frame + 0x118))
  #define auStack_6c ((undefined4 *)(albw_frame + 0x144))
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x1e0) = 0;
  }
  bVar3 = func_0053F7B8(*(int *)(*(int *)(param_1 + 0x24) + 0x614));
  if (bVar3) {
    bVar13 = 0;
    local_1a4 = DAT_00342100;
    local_1a0 = DAT_00342100;
    local_19c = DAT_00342100;
    fVar15 = DAT_0034210c;
    fparam_1 = DAT_00342110;
    fparam_0 = DAT_00342114;
    fparam_0_00 = DAT_00342108;
    pppppuVar17 = DAT_00342100;
    pppppuVar18 = DAT_00342104;
    if (*(char *)(param_1 + 0x166) != '\0') {
      uVar19 = CONCAT44(DAT_00342108,DAT_0034210c);
      sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
      if ((sVar2 == 8 || sVar2 == 0x3c) || (sVar2 == 0x3b || sVar2 == 0x3e)) {
        uVar10 = 1;
      }
      else {
        uVar10 = 0;
      }
      puVar8 = *(undefined4 **)(param_1 + 0x3c);
      local_158 = (undefined4 ****)*puVar8;
      local_154 = (int *)puVar8[1];
      local_150 = (undefined4 ****)puVar8[2];
      fVar15 = DAT_00342110;
      pppppuVar20 = DAT_00342100;
      fVar16 = DAT_00342108;
      iVar5 = func_0053ECB4(*(int *)(*(int *)(param_1 + 0x24) + 0x600));
      local_158 = *(undefined4 *****)(iVar5 + 0xc);
      local_154 = *(int **)(iVar5 + 0x1c);
      local_150 = *(undefined4 *****)(iVar5 + 0x2c);
      if (*(float *)(param_1 + 0x160) != ALBW_AS_F32(pppppuVar20)) {
        func_004D80A4(&fStack_134,**(uint **)(param_1 + 0x48),*(float *)(param_1 + 0x160));
        local_130 = pppppuVar20;
        func_00115C54((float *)&local_140,&fStack_134,(float *)&local_158);
        local_158 = local_140;
        local_150 = local_138;
        local_154 = (int *)ALBW_PTR_BITS(local_13c);
      }
      uVar22 = CONCAT44(DAT_00342118,fVar15);
      if (uVar10 != 0) {
        local_154 = (int *)ALBW_PTR_BITS((ALBW_AS_F32(local_154) + ALBW_AS_F32(uVar19)));
        fVar16 = DAT_00342118;
      }
      fVar15 = *(float *)(*(int *)(param_1 + 0x3c) + 4);
      if (ALBW_AS_F32(local_154) <= fVar15) {
        local_154 = (int *)ALBW_PTR_BITS(fVar15);
      }
      if ((ALBW_AS_F32(local_154) < *(float *)(*(int *)(param_1 + 0x3c) + 4)) ||
         (cVar4 = func_0053F5E0(*(int *)(*(int *)(param_1 + 0x24) + 0x614)), cVar4 == '\b')) {
        bVar3 = true;
      }
      else {
        bVar3 = false;
      }
      func_00115C70((float *)&local_140,(float *)&local_158,*(float **)(param_1 + 0x3c));
      fVar15 = DAT_0034211c;
      if (((int)ALBW_AS_U32(SQRT(ALBW_AS_F32(local_140) * ALBW_AS_F32(local_140) + ALBW_AS_F32(local_138) * ALBW_AS_F32(local_138))) <
           0x3f000001) &&
         (iVar5 = func_0053FD00(*(int *)(*(int *)(param_1 + 0x24) + 0x614)), iVar5 == 0)) {
        local_140 = pppppuVar20;
        local_13c = fVar15;
        local_138 = pppppuVar18;
        func_00115C54((float *)&local_130,*(float **)(param_1 + 0x3c),(float *)&local_140);
        local_158 = local_130;
        local_154 = piStack_12c;
        local_150 = ppppuStack_128;
      }
      else {
        local_154 = (int *)ALBW_PTR_BITS((*(float *)(*(int *)(param_1 + 0x3c) + 4) + fVar15));
      }
      if (uVar10 != 0) {
        fVar16 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
        local_154 = (int *)ALBW_PTR_BITS((ALBW_AS_F32(local_154) + ALBW_AS_F32(((ulonglong)uVar19 >> 0x20))));
      }
      if (bVar3) {
        local_154 = (int *)ALBW_PTR_BITS((*(float *)(*(int *)(param_1 + 0x3c) + 4) + fVar15));
      }
      fVar15 = ALBW_AS_F32(uVar19);
      piVar11 = (int *)(param_1 + 0x504);
      pppppuVar17 = pppppuVar20;
      local_f0 = pppppuVar20;
      local_ec = pppppuVar18;
      local_e8 = pppppuVar20;
      func_00115C54((float *)&local_140,(float *)&local_158,(float *)&local_f0);
      fparam_1 = ALBW_AS_F32(uVar22);
      fVar16 = fVar16 * fVar15;
      *piVar11 = (int)local_140;
      *(float *)(param_1 + 0x508) = local_13c;
      *(undefined4 *****)(param_1 + 0x50c) = local_138;
      local_f0 = pppppuVar20;
      local_ec = (undefined4 ****)ALBW_PTR_BITS(fVar16);
      local_e8 = pppppuVar20;
      puVar8 = func_004331A0(auStack_b8);
      pbVar6 = (byte *)func_00436384(auStack_e4,puVar8);
      func_00110D44(&local_194,pbVar6,0x2a);
      local_164 = local_f0;
      ppppuStack_160 = local_ec;
      ppppuStack_15c = local_e8;
      local_178 = &local_158;
      if (param_3 == 0) {
        local_194 = (undefined4 *****)0x0;
      }
      else {
        local_194 = &local_1a4;
      }
      local_188 = *(undefined4 *)(param_1 + 100);
      local_9c = uVar10 ^ 1;
      if (param_2 == 0) {
        local_190 = 0;
      }
      else {
        local_190 = param_1 + 0x14;
      }
      local_180 = 0x18;
      local_16c = ALBW_AS_U32(ALBW_AS_F32(CONCAT31(CONCAT21((*(undefined2 *)((char *)&local_16c + 2)),(char)local_9c),
                                  *(undefined1 *)(param_1 + 0x16c))));
      *(undefined1 *)(param_1 + 0x164) = 1;
      piStack_174 = piVar11;
      local_168 = (undefined4 ****)ALBW_PTR_BITS(fVar16);
      iVar5 = func_004A7620(*DAT_00342120,(uint *)&local_194,0xff,fparam_0,fparam_1);
      uVar23 = DAT_00342124;
      if (iVar5 != 0) {
        bVar3 = func_0052EB7C(*(int *)(param_1 + 0x24));
        iVar5 = 0;
        if (bVar3) {
          iVar5 = *(int *)(param_1 + 0x38);
        }
        if (bVar3) {
          *(undefined4 *)(iVar5 + 0x104) = uVar23;
        }
      }
      if (uVar10 == 0) {
        local_1a0 = pppppuVar20;
      }
      bVar13 = *(byte *)(param_1 + 0x4b9);
      func_00115C54(*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x3c),(float *)&local_1a4);
      *(bool *)(param_1 + 0x16e) =
           ALBW_AS_F32(local_1a4) != ALBW_AS_F32(pppppuVar20) || ALBW_AS_F32(local_19c) != ALBW_AS_F32(pppppuVar20);
      if (param_2 != 0) {
        fVar16 = fVar16 * DAT_00342128;
        puVar8 = func_004331A0(auStack_6c);
        pbVar6 = (byte *)func_00436384(auStack_98,puVar8);
        func_00110D44(&local_14c,pbVar6,0x2a);
        local_130 = &local_158;
        local_14c = 0.0;
        local_148 = 0.0;
        local_138 = (undefined4 ****)&IRQ;
        local_123 = (undefined1)local_9c;
        local_124 = *(undefined1 *)(param_1 + 0x16c);
        piStack_12c = piVar11;
        local_120 = fVar16;
        local_11c = pppppuVar20;
        fStack_118 = fVar16;
        local_114 = pppppuVar20;
        iVar5 = func_004A7620(*DAT_00342120,(uint *)&local_14c,0xff,fparam_0,fparam_1);
        if (iVar5 != 0) {
          bVar3 = func_0052EB7C(*(int *)(param_1 + 0x24));
          iVar5 = 0;
          if (bVar3) {
            iVar5 = *(int *)(param_1 + 0x38);
          }
          if (bVar3) {
            *(undefined4 *)(iVar5 + 0x104) = uVar23;
          }
        }
      }
    }
    sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
    fVar16 = fparam_0_00;
    if (sVar2 == 0x45 || sVar2 == 0x49) {
      fVar16 = DAT_0034258c;
    }
    if (*(char *)(param_1 + 0x52d) != '\0') {
      fVar16 = DAT_00342590;
    }
    pppppuVar20 = pppppuVar17;
    if (param_3 == 0) {
      pppppuVar20 = pppppuVar18;
    }
    fVar21 = fVar16 * fVar15;
    fVar16 = ALBW_AS_F32(pppppuVar17) + fVar16 * fVar15;
    local_1a4 = pppppuVar17;
    local_1a0 = pppppuVar17;
    local_19c = pppppuVar17;
    puVar8 = func_004331A0(&local_f0);
    pbVar6 = (byte *)func_00436384(&local_140,puVar8);
    func_00110D44(&local_198,pbVar6,0x2a);
    pfVar9 = *(float **)(param_1 + 0x40);
    local_14c = *pfVar9;
    local_148 = pfVar9[1];
    local_144 = pfVar9[2];
    bVar3 = false;
    if (*(float *)(param_1 + 0x4d8) == ALBW_AS_F32(pppppuVar20)) {
      bVar3 = *(float *)(param_1 + 0x4dc) == ALBW_AS_F32(pppppuVar20);
    }
    bVar14 = false;
    if (bVar3) {
      bVar14 = *(float *)(param_1 + 0x4e0) == ALBW_AS_F32(pppppuVar20);
    }
    local_16c = ALBW_AS_U32(fVar21);
    local_168 = pppppuVar20;
    local_164 = (undefined4 ****)ALBW_PTR_BITS(fVar16);
    ppppuStack_160 = pppppuVar20;
    if (!bVar14) {
      func_00115C54(&local_14c,&local_14c,(float *)(param_1 + 0x4d8));
    }
    local_178 = (undefined4 ****)&local_14c;
    local_17c = *(float **)(param_1 + 0x3c);
    if (param_3 == 0) {
      local_198 = (undefined4 *****)0x0;
    }
    else {
      local_198 = &local_1a4;
    }
    local_18c = *(undefined4 *)(param_1 + 100);
    if (param_2 == 0) {
      local_194 = (undefined4 ****)0x0;
    }
    else {
      local_194 = (undefined4 ****)(param_1 + 0x14);
    }
    local_184 = DAT_00342594;
    local_170 = *(undefined1 *)(param_1 + 0x16c);
    sVar2 = *(short *)(*(int *)(*(int *)(param_1 + 0x24) + 0x614) + 0x42);
    if (sVar2 == 0x46 || sVar2 == 0x4e) {
      local_184 = DAT_00342598;
    }
    *(undefined1 *)(param_1 + 0x164) = 0;
    func_004A7620(*DAT_00342120,(uint *)&local_198,0xff,fparam_0_00,fparam_1);
    local_158 = (undefined4 ****)(param_1 + 0x300);
    pcVar12 = (char *)(param_1 + 0x16e);
    pppppuVar17 = DAT_0034259c;
    for (iVar5 = 0;
        ((*(char *)(param_1 + 0x4b9) != '\0' && (*(char *)(param_1 + 0x4ba) == '\0')) && (iVar5 < 3)
        ); iVar5 = iVar5 + 1) {
      *(undefined1 *)(param_1 + 0x4b9) = 0;
      *(undefined1 *)(param_1 + 0x4ba) = 0;
      if ((param_3 != 0) &&
         (iVar7 = func_0053F6D8(*(int *)(*(int *)(param_1 + 0x24) + 0x614)), iVar7 != 0)) {
        local_1a0 = pppppuVar17;
      }
      func_00115C54(*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x3c),(float *)&local_1a4);
      *pcVar12 = (ALBW_AS_F32(local_1a4) != ALBW_AS_F32(pppppuVar20) || ALBW_AS_F32(local_19c) != ALBW_AS_F32(pppppuVar20))
                 || *pcVar12 != '\0';
      local_1a4 = pppppuVar20;
      local_1a0 = pppppuVar20;
      local_19c = pppppuVar20;
      if (*(char *)(local_158 + 0x11) == '\0') {
        func_0038AF14((undefined1 *)(param_1 + 0x324));
      }
      func_004A7620(*DAT_00342120,(uint *)&local_198,0xff,fparam_0,fparam_1);
    }
    *(undefined1 *)(param_1 + 0x4bb) = *(undefined1 *)(param_1 + 0x4ba);
    if ((*(char *)(param_1 + 0x169) != '\0') &&
       (bVar1 = *(byte *)(param_1 + 0x324), (bVar1 & 1) == 0)) {
      bVar3 = (bVar1 & 8) == 0;
      if (bVar3) {
        bVar1 = *(byte *)(param_1 + 0x168);
      }
      if (bVar3 && bVar1 == 0) {
        *(undefined1 *)(param_1 + 0x168) = 1;
      }
    }
    bVar1 = *(byte *)(param_1 + 0x4b9);
    *(byte *)(param_1 + 0x4bc) = bVar1;
    func_00115C54(*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x3c),(float *)&local_1a4);
    *pcVar12 = (ALBW_AS_F32(local_1a4) != ALBW_AS_F32(pppppuVar20) || ALBW_AS_F32(local_19c) != ALBW_AS_F32(pppppuVar20)) ||
               *pcVar12 != '\0';
    *(byte *)(param_1 + 0x4b9) = bVar13 | bVar1;
    if (*(char *)(param_1 + 0x167) != '\0' && param_2 != 0) {
      fVar15 = *(float *)(param_1 + 0x180) * fVar15;
      local_1a4 = pppppuVar20;
      local_1a0 = pppppuVar20;
      local_19c = pppppuVar20;
      puVar8 = func_004331A0(&uStack_f4);
      pbVar6 = (byte *)func_00436384(&piStack_12c,puVar8);
      func_00110D44(&local_198,pbVar6,0x2a);
      local_150 = (undefined4 ****)**(undefined4 **)(param_1 + 0x40);
      local_148 = (float)(*(undefined4 **)(param_1 + 0x40))[2];
      local_144 = **(float **)(param_1 + 0x3c);
      local_13c = (*(float **)(param_1 + 0x3c))[2];
      local_14c = *(float *)(param_1 + 0x17c);
      local_140 = *(undefined4 *****)(param_1 + 0x17c);
      local_178 = &local_150;
      local_17c = &local_144;
      if (param_3 == 0) {
        local_198 = (undefined4 *****)0x0;
      }
      else {
        local_198 = &local_1a4;
      }
      local_18c = *(undefined4 *)(param_1 + 100);
      local_184 = 0x39;
      local_170 = *(undefined1 *)(param_1 + 0x16c);
      local_16c = ALBW_AS_U32(fVar15);
      local_168 = pppppuVar20;
      local_164 = (undefined4 ****)ALBW_PTR_BITS(fVar15);
      ppppuStack_160 = pppppuVar20;
      func_004A7620(*DAT_00342120,(uint *)&local_198,0xff,fparam_0,fparam_1);
      local_1a0 = pppppuVar20;
      func_00115C54(*(float **)(param_1 + 0x3c),*(float **)(param_1 + 0x3c),(float *)&local_1a4);
      *pcVar12 = (ALBW_AS_F32(local_1a4) != ALBW_AS_F32(pppppuVar20) || ALBW_AS_F32(local_19c) != ALBW_AS_F32(pppppuVar20))
                 || *pcVar12 != '\0';
    }
  }
  return;
}

