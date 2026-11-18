#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_00114E74(float *param_1,float *param_2,float *param_3);
extern int func_001150B8(undefined4 *param_1,undefined4 *param_2);
extern int func_003E183C(float *param_1,float *param_2,float fparam_0);
extern int func_003E2134(void);
extern undefined4 DAT_003fabec;
extern float DAT_003fabf0;
extern float DAT_003fabf4;
extern float DAT_003fabf8;
extern float DAT_003fabfc;
extern undefined4 DAT_003fac00;
extern int DAT_003fac04;
extern uint *DAT_003fac08;
extern float *DAT_003fac0c;
extern int DAT_003faecc;
extern int DAT_003faed0;
extern int DAT_003faed4;

// USA 003FA8AC <- EU 003FA88C (Ghidra, non-matching)
// GLOBAL DAT_003fabec undefined4
// GLOBAL DAT_003fabf0 float
// GLOBAL DAT_003fabf4 float
// GLOBAL DAT_003fabf8 float
// GLOBAL DAT_003fabfc float
// GLOBAL DAT_003fac00 undefined4
// GLOBAL DAT_003fac04 int
// GLOBAL DAT_003fac08 uint *
// GLOBAL DAT_003fac0c float *
// GLOBAL DAT_003faecc int
// GLOBAL DAT_003faed0 int
// GLOBAL DAT_003faed4 int

undefined4 func_003FA8AC(int param_1,ushort *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define local_138 ((float *)(albw_frame + 0x8))
  #define local_11c (*(float *)(albw_frame + 0x24))
  #define local_118 (*(float *)(albw_frame + 0x28))
  #define local_114 (*(float *)(albw_frame + 0x2c))
  #define local_110 (*(float *)(albw_frame + 0x30))
  #define local_10c (*(float *)(albw_frame + 0x34))
  #define local_108 (*(float *)(albw_frame + 0x38))
  #define local_104 (*(float *)(albw_frame + 0x3c))
  #define local_100 (*(float *)(albw_frame + 0x40))
  #define local_fc (*(float *)(albw_frame + 0x44))
  #define local_f8 ((float *)(albw_frame + 0x48))
  #define local_e0 (*(undefined4 *)(albw_frame + 0x60))
  #define local_dc (*(undefined4 *)(albw_frame + 0x64))
  #define local_d8 (*(undefined4 *)(albw_frame + 0x68))
  #define local_d4 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_d0 (*(float *)(albw_frame + 0x70))
  #define local_cc (*(undefined4 *)(albw_frame + 0x74))
  #define local_c8 ((float *)(albw_frame + 0x78))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_ac (*(undefined4 *)(albw_frame + 0x94))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x98))
  #define local_a4 (*(undefined4 *)(albw_frame + 0x9c))
  #define local_a0 (*(float *)(albw_frame + 0xa0))
  #define local_9c (*(undefined4 *)(albw_frame + 0xa4))
  #define afStack_98 ((float *)(albw_frame + 0xa8))
  #define local_70 (*(float *)(albw_frame + 0xd0))
  #define local_6c (*(float *)(albw_frame + 0xd4))
  #define local_68 (*(float *)(albw_frame + 0xd8))
  #define local_64 (*(float *)(albw_frame + 0xdc))
  #define local_60 (*(undefined4 *)(albw_frame + 0xe0))
  #define local_5c (*(float *)(albw_frame + 0xe4))
  #define local_58 (*(float *)(albw_frame + 0xe8))
  #define local_54 (*(float *)(albw_frame + 0xec))
  #define local_50 ((float *)(albw_frame + 0xf0))
  uVar13 = 0;
  uVar23 = CONCAT44(DAT_003fac00,DAT_003fabec);
  local_60 = 0;
  fVar21 = DAT_003fabf0;
  fVar22 = DAT_003fabf4;
  fVar17 = DAT_003fabf8;
  fVar18 = DAT_003fabfc;
  do {
    iVar12 = param_1 + uVar13 * 0x18;
    bVar1 = *(byte *)(iVar12 + 0x94);
    if (((bVar1 & 1) != 0) ||
       ((((cVar2 = *(char *)(iVar12 + 0x96), cVar2 == '\x04' ||
          ((cVar2 == '\x05' || cVar2 == '\x03') || cVar2 == '\x01')) &&
         ((*(byte *)(*(int *)(param_3 + 0x40) + (*(char *)(iVar12 + 0x97) + 1) * 0x6c) & 1) != 0))
        || ((*param_2 & *(ushort *)(DAT_003fac04 + uVar13 * 2)) != 0)))) {
      *(byte *)(iVar12 + 0x94) = bVar1 & 0xfe;
      cVar2 = *(char *)(iVar12 + 0x95);
      if (cVar2 == '\0') {
        uVar19 = *(undefined8 *)(iVar12 + 0x98);
        uVar20 = *(undefined8 *)(iVar12 + 0xa4);
        func_003E183C(&local_5c,&local_58,*(float *)(iVar12 + 0xa0) * fVar21);
        fVar14 = ALBW_AS_F32(uVar19);
        fVar15 = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
        local_138[0] = fVar14 * local_58;
        local_138[1] = -(fVar14 * local_5c);
        local_138[3] = (((local_5c * fVar22 - local_58 * fVar22) + fVar22) - ALBW_AS_F32(uVar20)) * fVar14
        ;
        local_138[4] = fVar15 * local_5c;
        local_138[5] = fVar15 * local_58;
        local_11c = (((local_5c * ALBW_AS_F32(uVar23) - local_58 * fVar22) + fVar22) -
                    ALBW_AS_F32(((ulonglong)uVar20 >> 0x20))) * fVar15;
        local_100 = fVar17;
        local_104 = fVar17;
        local_108 = fVar17;
        local_10c = fVar17;
        local_114 = fVar17;
        local_118 = fVar17;
        local_138[6] = fVar17;
        local_138[2] = fVar17;
        local_fc = fVar18;
        local_110 = fVar18;
      }
      else if (cVar2 == '\x01') {
        uVar19 = *(undefined8 *)(iVar12 + 0x98);
        uVar20 = *(undefined8 *)(iVar12 + 0xa4);
        func_003E183C(&local_54,local_50,*(float *)(iVar12 + 0xa0) * fVar21);
        fVar14 = ALBW_AS_F32(uVar19);
        fVar15 = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
        local_138[0] = fVar14 * local_50[0];
        fVar16 = ALBW_AS_F32(((ulonglong)uVar20 >> 0x20));
        local_138[1] = fVar14 * local_54;
        local_138[5] = fVar15 * local_50[0];
        local_11c = (local_54 * ALBW_AS_F32(uVar20) - local_50[0] * fVar16) * fVar15;
        local_100 = fVar17;
        local_104 = fVar17;
        local_108 = fVar17;
        local_10c = fVar17;
        local_114 = fVar17;
        local_118 = fVar17;
        local_138[6] = fVar17;
        local_138[2] = fVar17;
        local_fc = fVar18;
        local_110 = fVar18;
        local_138[3] = (-(local_50[0] * ALBW_AS_F32(uVar20)) - local_54 * fVar16) * fVar14;
        local_138[4] = -(fVar15 * local_54);
      }
      else if (cVar2 == '\x02') {
        fVar16 = *(float *)(iVar12 + 0xa4);
        uVar19 = *(undefined8 *)(iVar12 + 0x98);
        fVar15 = *(float *)(iVar12 + 0xa8);
        func_003E183C(&local_68,&local_64,*(float *)(iVar12 + 0xa0) * fVar21);
        fVar14 = ALBW_AS_F32(uVar19);
        local_138[5] = ALBW_AS_F32(((ulonglong)uVar19 >> 0x20));
        local_138[4] = local_138[5] * local_68;
        local_138[5] = local_138[5] * local_64;
        local_138[0] = fVar14 * local_64;
        local_138[1] = -(fVar14 * local_68);
        local_11c = local_138[4] * (-fVar16 - fVar22) + local_138[5] * (fVar15 - fVar22) + fVar22;
        local_100 = fVar17;
        local_104 = fVar17;
        local_108 = fVar17;
        local_10c = fVar17;
        local_114 = fVar17;
        local_118 = fVar17;
        local_138[6] = fVar17;
        local_138[2] = fVar17;
        local_fc = fVar18;
        local_110 = fVar18;
        local_138[3] = (fVar14 * local_64 * (-fVar16 - fVar22) -
                       fVar14 * local_68 * (fVar15 - fVar22)) + fVar22;
      }
      else {
        if (((*DAT_003fac08 & 1) == 0) &&
           (iVar5 = func_00100174((int *)DAT_003fac08), pfVar11 = DAT_003fac0c, iVar5 != 0)) {
          pfVar8 = DAT_003fac0c + 4;
          *DAT_003fac0c = fVar18;
          pfVar11[1] = fVar17;
          pfVar11[2] = fVar17;
          pfVar11[3] = fVar17;
          *pfVar8 = fVar17;
          pfVar11[5] = fVar18;
          pfVar11[6] = fVar17;
          pfVar11[7] = fVar17;
          pfVar11[8] = fVar17;
          pfVar11[9] = fVar17;
          pfVar11[10] = fVar18;
          pfVar11[0xb] = fVar17;
          pfVar11[0xc] = fVar17;
          pfVar11[0xd] = fVar17;
          pfVar11[0xe] = fVar17;
          pfVar11[0xf] = fVar18;
        }
        func_001150B8(local_138,DAT_003fac0c);
      }
      switch(*(undefined1 *)(iVar12 + 0x96)) {
      case 1:
        local_138[0] = *(float *)(param_3 + 0x10);
        local_138[1] = *(float *)(param_3 + 0x14);
        local_138[2] = *(float *)(param_3 + 0x18);
        local_138[3] = *(float *)(param_3 + 0x1c);
        local_138[4] = *(float *)(param_3 + 0x20);
        local_138[5] = *(float *)(param_3 + 0x24);
        local_138[6] = *(float *)(param_3 + 0x28);
        local_11c = *(float *)(param_3 + 0x2c);
        local_118 = *(float *)(param_3 + 0x30);
        local_114 = *(float *)(param_3 + 0x34);
        local_110 = *(float *)(param_3 + 0x38);
        local_10c = *(float *)(param_3 + 0x3c);
        break;
      case 3:
        iVar12 = *(int *)(param_3 + 0x40) + (*(char *)(iVar12 + 0x97) + 1) * 0x6c;
        if (uVar13 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = 2;
        }
        iVar5 = param_1 + iVar5 * 4;
        *(float *)(iVar5 + 0x80) = local_138[3];
        *(float *)(iVar5 + 0x84) = local_11c;
        local_138[3] = fVar17;
        local_11c = fVar17;
        func_00114E74(local_138,local_138,(float *)(iVar12 + 4));
        func_00114E74(local_138,local_138,(float *)(iVar12 + 0x34));
        *(undefined1 *)(param_1 + 0x90) = 1;
        break;
      case 4:
        cVar2 = *(char *)(iVar12 + 0x97);
        iVar12 = *(int *)(param_3 + 0x40);
        *(float *)(param_1 + 0x80) = local_138[3];
        iVar12 = iVar12 + (cVar2 + 1) * 0x6c;
        *(float *)(param_1 + 0x84) = local_11c;
        local_138[3] = fVar17;
        local_11c = fVar17;
        func_001119F4(afStack_98,(undefined4 *)(iVar12 + 4));
        cVar2 = *(char *)(iVar12 + 1);
        if (cVar2 == '\0') {
          fVar14 = fVar18 / (*(float *)(iVar12 + 0x68) - *(float *)(iVar12 + 100));
          puVar6 = func_003E2134();
          func_001119F4(local_f8,puVar6);
          local_f8[1] = 0.0;
          local_f8[2] = 0.0;
          local_f8[3] = 0.0;
          local_f8[4] = 0.0;
          local_e0 = 0;
          local_dc = 0;
          local_d8 = 0;
          local_d4 = 0;
          local_cc = 0;
          local_f8[0] = fVar14;
          local_f8[5] = fVar14;
          local_d0 = fVar14;
          func_00114E74(local_138,local_138,local_f8);
        }
        else if (cVar2 == '\x01') {
          local_70 = ALBW_AS_F32(((ulonglong)uVar23 >> 0x20)) /
                     (*(float *)(iVar12 + 0x68) - *(float *)(iVar12 + 100));
          local_6c = *(float *)(iVar12 + 100) * local_70;
        }
        else if (cVar2 == '\x02') {
          fVar14 = fVar18 / (*(float *)(iVar12 + 0x68) - *(float *)(iVar12 + 100));
          puVar6 = func_003E2134();
          func_001119F4(local_c8,puVar6);
          local_c8[1] = 0.0;
          local_c8[2] = 0.0;
          local_c8[3] = 0.0;
          local_c8[4] = 0.0;
          local_b0 = 0;
          local_ac = 0;
          local_a8 = 0;
          local_a4 = 0;
          local_9c = 0;
          local_c8[0] = fVar14;
          local_c8[5] = fVar14;
          local_a0 = fVar14;
          func_00114E74(local_138,local_138,local_c8);
        }
        func_00114E74(local_138,local_138,afStack_98);
        func_00114E74(local_138,local_138,(float *)(iVar12 + 0x34));
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
      iVar5 = DAT_003faed4;
      iVar12 = DAT_003faed0;
      uVar3 = *(ushort *)(DAT_003faecc + (uint)*(byte *)((int)param_2 + 3) * 2) >>
              ((uVar13 & 0x3f) << 2);
      if ((uVar3 & 7) != 0) {
        uVar7 = 0;
        do {
          if (((uVar3 & 7 & 1 << (uVar7 & 0xff)) != 0) &&
             (iVar9 = 0, *(char *)(iVar5 + uVar7) != '\0')) {
            do {
              iVar4 = iVar9 * 4;
              fVar14 = local_138[iVar9 * 4 + 1];
              fVar15 = local_138[iVar9 * 4 + 2];
              fVar16 = local_138[iVar9 * 4 + 3];
              iVar10 = (uint)*(byte *)(iVar12 + uVar7) + iVar9;
              iVar9 = iVar9 + 1;
              pfVar11 = (float *)(param_1 + iVar10 * 0x10);
              *pfVar11 = local_138[iVar4];
              pfVar11[1] = fVar14;
              pfVar11[2] = fVar15;
              pfVar11[3] = fVar16;
            } while (iVar9 < (int)(uint)*(byte *)(iVar5 + uVar7));
          }
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < 3);
        local_60 = 1;
      }
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 3);
  return local_60;
}

