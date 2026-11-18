#include "ghidra_types.h"

extern ulonglong func_00110710(uint param_1,uint param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern float func_002B04E8(void);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491A18(float *param_1,uint *param_2,float *param_3);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_004F95A0(int param_1,int param_2);
extern int func_004FD130(int param_1,int param_2);
extern int func_004FD348(int param_1,undefined1 *param_2,int param_3);
extern int func_00521380(int param_1);
extern int func_00542AB4(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00584E64(int param_1);
extern int func_00584E70(int param_1);
extern int func_0058ADE0(int param_1,int param_2);
extern int func_006824D4(int *param_1,float *param_2,undefined4 *param_3,float *param_4);
extern float DAT_004f5ef0;
extern float DAT_004f5ef4;
extern int *DAT_004f5ef8;
extern int DAT_004f5efc;
extern float *DAT_004f6878;
extern float *DAT_004f687c;

// USA 004F5BD8 <- EU 004F5BB0 (Ghidra, non-matching)
// GLOBAL DAT_004f5ef0 float
// GLOBAL DAT_004f5ef4 float
// GLOBAL DAT_004f5ef8 int *
// GLOBAL DAT_004f5efc int
// GLOBAL DAT_004f6878 float *
// GLOBAL DAT_004f687c float *

float * func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  float *pfVar5;
  undefined1 uVar6;
  uint uVar7;
  uint extraout_r1;
  int **ppiVar8;
  int **ppiVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char cVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar27;
  _Alignas(8) unsigned char albw_frame[0x160];
  #define local_158 (*(int * *)(albw_frame + 0x8))
  #define local_154 (*(int * *)(albw_frame + 0xc))
  #define local_150 (*(int * *)(albw_frame + 0x10))
  #define local_14c (*(int * *)(albw_frame + 0x14))
  #define local_148 (*(int * *)(albw_frame + 0x18))
  #define local_144 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_140 (*(int * *)(albw_frame + 0x20))
  #define local_13c (*(int * *)(albw_frame + 0x24))
  #define local_138 (*(int * *)(albw_frame + 0x28))
  #define local_134 (*(int * *)(albw_frame + 0x2c))
  #define local_130 (*(undefined4 *)(albw_frame + 0x30))
  #define local_12c (*(int * *)(albw_frame + 0x34))
  #define local_128 (*(int * *)(albw_frame + 0x38))
  #define local_124 (*(int * *)(albw_frame + 0x3c))
  #define local_120 (*(int * *)(albw_frame + 0x40))
  #define local_11c (*(float *)(albw_frame + 0x44))
  #define local_118 (*(int * *)(albw_frame + 0x48))
  #define piStack_114 (*(int * *)(albw_frame + 0x4c))
  #define local_110 (*(int * *)(albw_frame + 0x50))
  #define local_10c (*(float *)(albw_frame + 0x54))
  #define local_108 (*(int * *)(albw_frame + 0x58))
  #define local_104 (*(int * *)(albw_frame + 0x5c))
  #define piStack_100 (*(int * *)(albw_frame + 0x60))
  #define local_fc (*(float *)(albw_frame + 0x64))
  #define afStack_f8 ((float *)(albw_frame + 0x68))
  #define local_e8 (*(int * *)(albw_frame + 0x78))
  #define local_e4 (*(uint *)(albw_frame + 0x7c))
  #define local_e0 (*(int * *)(albw_frame + 0x80))
  #define local_dc (*(undefined4 *)(albw_frame + 0x84))
  #define local_d8 (*(int * *)(albw_frame + 0x88))
  #define local_d4 ((uint *)(albw_frame + 0x8c))
  #define local_bc (*(int *)(albw_frame + 0xa4))
  #define local_a0 (*(float *)(albw_frame + 0xc0))
  #define local_9c (*(float *)(albw_frame + 0xc4))
  #define local_98 (*(float *)(albw_frame + 0xc8))
  #define afStack_90 ((float *)(albw_frame + 0xd0))
  #define iStack_30 (*(int *)(albw_frame + 0x130))
  #define puStack_2c (*(uint * *)(albw_frame + 0x134))
  #define local_28 (*(int ** *)(albw_frame + 0x138))
  float fVar26;
  
  ppiVar9 = &local_158;
  ppiVar8 = &local_158;
  if (param_2 == (uint *)0x0) {
    uVar14 = *(uint *)(param_1 + 1000);
  }
  else {
    uVar14 = *param_2;
  }
  fVar26 = **(float **)(*(int *)(param_1 + 0x2d0) + 0x14);
  local_140 = (int *)(param_1 + 0x510);
  uVar7 = in_fpscr & 0xfffffff | (uint)(fVar26 == DAT_004f5ef0) << 0x1e;
  cVar15 = *(char *)(*(int *)(param_1 + 0x510) + 4);
  if (SUB41(uVar7 >> 0x1e,0)) {
    fVar26 = DAT_004f5ef4;
  }
  uVar25 = CONCAT44(fVar26,DAT_004f5ef4);
  uVar24 = CONCAT44(DAT_004f5ef0,*(float *)(param_1 + 0x574) + *(float *)(param_1 + 0x57c));
  if (cVar15 == '\x12' || cVar15 == '\x13') {
    *(uint *)(param_1 + 0x5a0) = *(uint *)(param_1 + 0x5a0) | 0x200000;
  }
  local_e8 = (int *)(param_1 + 0x40c);
  iVar13 = *(int *)(param_1 + 0x40c);
  local_bc = param_1 + 0x800;
  iStack_30 = param_1;
  puStack_2c = param_2;
  local_28 = param_3;
  if (iVar13 != 0) {
    piVar11 = (int *)(param_1 + 0x5a8);
    uVar10 = 0;
    local_14c = piVar11;
    if (*(char *)(param_1 + 0x650) != '\0') {
      do {
        iVar12 = piVar11[uVar10 * 3];
        if (iVar12 != iVar13) {
          iVar3 = func_00584E64(iVar13);
          func_004D0194(iVar12,iVar3);
          iVar3 = func_00584E70(iVar13);
          func_004D0268(iVar12,iVar3);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(byte *)(param_1 + 0x650));
      if (*(int *)(param_1 + 0x40c) == 0) goto LAB_004f64a4;
    }
    if ((local_28 != (int **)0x0) || (*(char *)(*(int *)(param_1 + 0x40c) + 0x30) != '\0')) {
      uVar10 = *(uint *)(param_1 + 0x5a0);
      if (((uVar10 & 0x200000) == 0) && (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\x12')) {
        iVar13 = 1;
        if ((uVar10 & 0xc000000) != 0) {
          if ((uVar10 & 0x4000000) == 0) {
            if ((uVar10 & 0x8000000) != 0) goto LAB_004f5d38;
          }
          else {
            uVar27 = func_00110710(*(uint *)(*DAT_004f5ef8 + 0x10),6);
            if (((int)((ulonglong)uVar27 >> 0x20) == 0) && (*(char *)(param_1 + 0x77c) != '\0')) {
LAB_004f5d38:
              iVar13 = 0;
            }
          }
        }
        if ((*(char *)(param_1 + 0x77c) != iVar13) || (*(char *)(local_bc + 0x28) != '\0')) {
          func_004F95A0(param_1,iVar13);
          *(undefined1 *)(param_1 + 0x828) = 0;
        }
        cVar15 = *(char *)(param_1 + 0x859);
        puVar4 = (undefined4 *)(param_1 + 0x868);
        if ((cVar15 != '\0') ||
           (param_3 = *(int ***)(param_1 + 0x86c), *(int ***)(param_1 + 0x868) < param_3)) {
          if (*(short *)(DAT_004f5efc + param_1) < 1) {
            cVar15 = '\0';
          }
          param_3 = (int **)((uint)*(byte *)(param_1 + 0x87d) + (uint)*(byte *)(param_1 + 0x87c));
          iVar12 = (uint)*(byte *)(param_1 + 0x87e) + (int)param_3;
          param_4 = (float *)((uint)*(byte *)(param_1 + 0x880) + (uint)*(byte *)(param_1 + 0x87f));
          iVar13 = (uint)*(byte *)(param_1 + 0x881) + (int)param_4;
          fVar19 = ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
          fVar26 = ALBW_AS_F32(uVar25);
          if ((cVar15 != '\0') && (*(uint *)(param_1 + 0x860) <= *(uint *)(param_1 + 0x85c))) {
            if (cVar15 == '\x01') {
              *(int ***)(param_1 + 0x86c) = param_3;
              param_4 = (float *)0x0;
              if (param_3 == (int **)0x0) {
                *(float *)(param_1 + 0x870) = fVar19;
              }
              else {
                fVar18 = (float)VectorUnsignedToFloat(param_3,(byte)(uVar7 >> 0x15) & 3);
                *(float *)(param_1 + 0x870) = fVar26 / fVar18;
              }
              *puVar4 = 0;
              *(int *)(param_1 + 0x860) = iVar12;
              if (iVar12 == 0) {
                *(float *)(param_1 + 0x864) = fVar19;
              }
              else {
                fVar18 = (float)VectorUnsignedToFloat(iVar12,(byte)(uVar7 >> 0x15) & 3);
                *(float *)(param_1 + 0x864) = fVar26 / fVar18;
              }
              *(undefined4 *)(param_1 + 0x85c) = 0;
              uVar6 = 1;
            }
            else {
              *(float **)(param_1 + 0x86c) = param_4;
              if (param_4 == (float *)0x0) {
                *(float *)(param_1 + 0x870) = fVar19;
              }
              else {
                fVar18 = (float)VectorUnsignedToFloat(param_4,(byte)(uVar7 >> 0x15) & 3);
                *(float *)(param_1 + 0x870) = fVar26 / fVar18;
              }
              *puVar4 = 0;
              *(int *)(param_1 + 0x860) = iVar13;
              if (iVar13 == 0) {
                *(float *)(param_1 + 0x864) = fVar19;
              }
              else {
                fVar18 = (float)VectorUnsignedToFloat(iVar13,(byte)(uVar7 >> 0x15) & 3);
                *(float *)(param_1 + 0x864) = fVar26 / fVar18;
              }
              *(undefined4 *)(param_1 + 0x85c) = 0;
              uVar6 = 2;
            }
            param_3 = (int **)0x0;
            *(undefined1 *)(param_1 + 0x85a) = uVar6;
          }
          if (*(float **)(param_1 + 0x86c) == (float *)0x0) {
LAB_004f5e80:
            fVar19 = fVar26;
            bVar16 = false;
          }
          else {
            param_4 = (float *)*puVar4;
            if (param_4 != (float *)0x0) {
              if (param_4 < *(float **)(param_1 + 0x86c)) {
                fVar19 = (float)VectorUnsignedToFloat(param_4,(byte)(uVar7 >> 0x15) & 3);
                fVar19 = fVar19 * *(float *)(param_1 + 0x870);
                fVar26 = fVar19;
                if ((int)ALBW_AS_U32(fVar19) < 0x3f800000) goto LAB_004f5f1c;
              }
              goto LAB_004f5e80;
            }
LAB_004f5f1c:
            bVar16 = true;
          }
          if (*(char *)(local_bc + 0x5b) == '\0') {
            puVar4 = (undefined4 *)func_0058ADE0((int)local_14c,1);
            *(undefined4 *)(param_1 + 0x874) = *puVar4;
          }
          *(bool *)(param_1 + 0x85b) = bVar16;
          if (bVar16) {
            if (*(char *)(param_1 + 0x85a) == '\x01') {
              bVar1 = *(byte *)(param_1 + 0x87c);
            }
            else {
              bVar1 = *(byte *)(param_1 + 0x87f);
            }
            fVar26 = (float)VectorSignedToFloat((uint)bVar1,(byte)(uVar7 >> 0x15) & 3);
            fVar18 = (float)VectorUnsignedToFloat
                                      (*(undefined4 *)(param_1 + 0x86c),(byte)(uVar7 >> 0x15) & 3);
            fVar26 = fVar26 / fVar18;
            uVar7 = uVar7 & 0xfffffff | (uint)(fVar26 <= fVar19) << 0x1d;
            fVar18 = ALBW_AS_F32(uVar25);
            if (SUB41(uVar7 >> 0x1d,0)) {
              fVar19 = fVar18 - (fVar19 - fVar26) / (fVar18 - fVar26);
            }
            else {
              fVar19 = fVar19 / fVar26;
            }
            uVar10 = *(uint *)(param_1 + 0x878);
            fVar18 = fVar18 - fVar19;
            fVar26 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(param_1 + 0x877),(byte)(uVar7 >> 0x15) & 3);
            fVar23 = (float)VectorUnsignedToFloat(uVar10 >> 0x18,(byte)(uVar7 >> 0x15) & 3);
            uVar21 = VectorFloatToUnsigned(fVar26 * fVar18 + fVar23 * fVar19,3);
            fVar26 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(param_1 + 0x876),(byte)(uVar7 >> 0x15) & 3);
            fVar23 = (float)VectorUnsignedToFloat(uVar10 >> 0x10 & 0xff,(byte)(uVar7 >> 0x15) & 3);
            uVar22 = VectorFloatToUnsigned(fVar26 * fVar18 + fVar23 * fVar19,3);
            fVar23 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(param_1 + 0x875),(byte)(uVar7 >> 0x15) & 3);
            fVar26 = (float)VectorUnsignedToFloat(uVar10 >> 8 & 0xff,(byte)(uVar7 >> 0x15) & 3);
            uVar20 = VectorFloatToUnsigned(fVar23 * fVar18 + fVar26 * fVar19,3);
            local_154 = (int *)CONCAT31(CONCAT21(CONCAT11((char)uVar21,(char)uVar22),(char)uVar20),
                                        0xff);
            param_3 = (int **)0x1;
            func_004FD348((int)local_14c,(undefined1 *)&local_154,1);
          }
          else {
            func_004FD130((int)local_14c,1);
          }
          if (*(uint *)(param_1 + 0x86c) <= *(uint *)(param_1 + 0x868)) {
            *(undefined1 *)(param_1 + 0x85a) = 0;
          }
        }
      }
      if ((*(uint *)(param_1 + 0x59c) & 0x400) != 0) {
        fVar26 = *(float *)(param_1 + 0x4f4) * ALBW_AS_F32(((ulonglong)uVar25 >> 0x20));
        iVar13 = *(int *)(param_1 + 0x510);
        uVar27 = CONCAT44(*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x4e8) * fVar26,
                          *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x4e4) * fVar26);
        fVar26 = *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x4ec) * fVar26;
        local_a0 = *(float *)(param_1 + 0x3d0) + *(float *)(param_1 + 0x570);
        local_9c = *(float *)(param_1 + 0x3d4) + ALBW_AS_F32(uVar24);
        local_98 = *(float *)(param_1 + 0x3d8) + *(float *)(param_1 + 0x578);
        bVar16 = *(char *)(*local_140 + 4) != '\0';
        if (bVar16) {
          func_00115C54(&local_a0,&local_a0,(float *)(*local_140 + 0x70));
          uVar14 = uVar14 + *(int *)(*local_140 + 0x68);
        }
        param_4 = *(float **)(param_1 + 0x808);
        if ((param_4 == (float *)0x0) || (bVar16)) {
          iVar12 = *(int *)(param_1 + 0x510);
          if (*(char *)(iVar12 + 100) != '\0') {
            uVar7 = uVar7 & 0xfffffff;
            uVar10 = uVar7 | (uint)(*(float *)(iVar12 + 0x58) == *DAT_004f6878) << 0x1e;
            if (((SUB41(uVar10 >> 0x1e,0)) &&
                (uVar10 = uVar7 | (uint)(*(float *)(iVar12 + 0x5c) == DAT_004f6878[1]) << 0x1e,
                SUB41(uVar10 >> 0x1e,0))) &&
               (uVar10 = uVar7 | (uint)(*(float *)(iVar12 + 0x60) == DAT_004f6878[2]) << 0x1e,
               SUB41(uVar10 >> 0x1e,0))) {
              bVar16 = true;
            }
            else {
              bVar16 = false;
            }
            if (!bVar16) {
              fVar19 = func_002B04E8();
              param_4 = (float *)0x0;
              local_128 = (int *)uVar25;
              local_124 = (int *)((ulonglong)uVar24 >> 0x20);
              fVar18 = (float)VectorSignedToFloat(*(undefined4 *)(*(int *)(param_1 + 0x510) + 0x54),
                                                  (byte)(uVar10 >> 0x15) & 3);
              local_11c = local_a0;
              local_10c = local_9c;
              local_fc = local_98;
              local_120 = local_124;
              local_118 = local_124;
              piStack_114 = local_128;
              local_110 = local_124;
              local_108 = local_124;
              local_104 = local_124;
              piStack_100 = local_128;
              func_00491E80(afStack_f8,(int)(fVar19 * fVar18),0,0);
              local_158 = *(int **)(iVar12 + 0x58);
              local_154 = (int *)((ulonglong)uVar24 >> 0x20);
              local_144 = *(undefined4 *)(iVar12 + 0x5c);
              local_130 = *(undefined4 *)(iVar12 + 0x60);
              local_150 = local_154;
              local_14c = local_154;
              local_148 = local_154;
              local_140 = local_154;
              local_13c = local_154;
              local_138 = local_154;
              local_134 = local_154;
              local_12c = local_154;
              if ((*(uint *)(param_1 + 0x59c) & 0x800) == 0) {
                func_004D8AEC(afStack_90,uVar14,DAT_004f687c);
              }
              else {
                param_4 = DAT_004f687c;
                func_004D7EB0(afStack_90,*(uint *)(param_1 + 0x500),uVar14,DAT_004f687c);
              }
              func_001157FC(afStack_f8,afStack_f8,afStack_90);
              func_001157FC((float *)&local_158,(float *)&local_158,afStack_f8);
              func_001157FC((float *)&local_128,(float *)&local_128,(float *)&local_158);
              iVar12 = *(int *)(param_1 + 0x40c);
              param_3 = &local_128;
              *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
              func_001151EC((undefined4 *)(iVar12 + 0x80),param_3);
              goto LAB_004f63dc;
            }
          }
          uVar7 = *(uint *)(param_1 + 0x59c);
          iVar12 = *(int *)(param_1 + 0x40c);
          *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
          if ((uVar7 & 0x800) == 0) {
            func_004D8AEC((float *)(iVar12 + 0x80),uVar14,&local_a0);
          }
          else {
            param_4 = &local_a0;
            func_004D7EB0((float *)(iVar12 + 0x80),*(uint *)(param_1 + 0x500),uVar14,param_4);
          }
          local_d4[0] = 0;
          local_d8 = (int *)0x0;
          param_3 = &local_d8;
          bVar16 = func_00542AB4(*(int *)(param_1 + 0x510),local_d4,param_3);
          if (bVar16) {
            func_00491E80((float *)&local_118,0,-(int)local_d8,0);
            local_e4 = local_d4[0];
            local_e0 = local_d8;
            local_dc = 0;
            func_00491A18((float *)&local_158,&local_e4,DAT_004f687c);
            func_001157FC((float *)&local_158,(float *)&local_158,(float *)&local_118);
            iVar12 = *(int *)(param_1 + 0x40c);
            param_4 = (float *)(iVar12 + 0x80);
            *(uint *)(iVar12 + 0x164) = *(uint *)(iVar12 + 0x164) | 0x40000000;
            func_001157FC(param_4,(float *)(*local_e8 + 0x80),(float *)&local_158);
            param_3 = ppiVar9;
          }
        }
        else {
          param_3 = *(int ***)ALBW_PTR_BITS(*param_4);
          (*(code *)param_3)(param_4,&local_a0);
        }
LAB_004f63dc:
        fVar19 = *(float *)(iVar13 + 0x48);
        fVar18 = *(float *)(iVar13 + 0x4c);
        fVar23 = *(float *)(iVar13 + 0x50);
        iVar13 = *(int *)(param_1 + 0x40c);
        *(uint *)(iVar13 + 0x164) = *(uint *)(iVar13 + 0x164) | 0x40000000;
        *(float *)(iVar13 + 0x74) = ALBW_AS_F32(uVar27) * fVar19;
        *(float *)(iVar13 + 0x78) = ALBW_AS_F32(((ulonglong)uVar27 >> 0x20)) * fVar18;
        *(float *)(iVar13 + 0x7c) = fVar26 * fVar23;
      }
      if (((*(uint *)(param_1 + 0x59c) & 0x300) != 0) &&
         (uVar2 = *(ushort *)(*(int *)(param_1 + 0x510) + 0x38), uVar7 = (uint)uVar2,
         (uVar2 & 1) == 0)) {
        if ((*(uint *)(param_1 + 0x59c) & 0x100) != 0) {
          if (*(int **)(param_1 + 0x410) != (int *)0x0) {
            func_00169A80(*(int **)(param_1 + 0x410),uVar7,param_3,(int *)param_4);
            param_3 = (int **)0x0;
            func_00168E9C(*(int **)(param_1 + 0x410),*(int *)(param_1 + 0x40c),(int *)0x0);
            uVar7 = extraout_r1;
          }
        }
        if ((*(uint *)(param_1 + 0x59c) & 0x200) != 0) {
          if (*(int **)(param_1 + 0x418) != (int *)0x0) {
            func_00169A80(*(int **)(param_1 + 0x418),uVar7,param_3,(int *)param_4);
            func_00168E9C(*(int **)(param_1 + 0x418),*(int *)(param_1 + 0x40c),(int *)0x0);
          }
        }
      }
      if (*(undefined4 **)(param_1 + 0x820) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x820))();
      }
      func_004CEAF0(*(int *)(param_1 + 0x40c));
    }
  }
LAB_004f64a4:
  if (-1 < *(int *)(param_1 + 0x59c) << 0x19) {
    iVar13 = *(int *)(param_1 + 0x424);
    uVar10 = *(uint *)(param_1 + 0x40c);
    bVar16 = iVar13 != 0;
    uVar7 = uVar10;
    if (bVar16) {
      uVar7 = *(uint *)(param_1 + 0x420);
    }
    bVar17 = uVar7 != 0;
    if (bVar16 && bVar17) {
      uVar7 = (uint)*(byte *)(uVar7 + 0x61);
    }
    if ((bVar16 && bVar17) && uVar7 != 0) {
      if (*(undefined4 **)(param_1 + 0x814) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
        func_00115C54((float *)&local_154,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x44c));
        local_128 = local_154;
        local_124 = local_150;
        local_120 = local_14c;
        uVar7 = func_006824D4(*(int **)(param_1 + 0x424),(float *)(param_1 + 0x458),
                              (undefined4 *)(uVar10 + 0x80),(float *)&local_128);
      }
      else {
        uVar7 = (**(code **)**(undefined4 **)(param_1 + 0x814))();
      }
    }
    iVar13 = *(int *)(param_1 + 0x42c);
    bVar16 = iVar13 != 0;
    if (bVar16) {
      uVar7 = *(uint *)(param_1 + 0x428);
    }
    bVar17 = uVar7 != 0;
    if (bVar16 && bVar17) {
      uVar7 = (uint)*(byte *)(uVar7 + 0x61);
    }
    if ((bVar16 && bVar17) && uVar7 != 0) {
      if (*(undefined4 **)(param_1 + 0x818) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
        func_00115C54((float *)&local_154,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x47c));
        local_128 = local_154;
        local_124 = local_150;
        local_120 = local_14c;
        func_006824D4(*(int **)(param_1 + 0x42c),(float *)(param_1 + 0x488),
                      (undefined4 *)(uVar10 + 0x80),(float *)&local_128);
      }
      else {
        (**(code **)**(undefined4 **)(param_1 + 0x818))();
      }
    }
    local_148 = *(int **)(param_1 + 0x470);
    local_144 = *(undefined4 *)(param_1 + 0x474);
    local_140 = *(int **)(param_1 + 0x478);
    local_134 = *(int **)(param_1 + 0x4a0);
    local_130 = *(undefined4 *)(param_1 + 0x4a4);
    local_12c = *(int **)(param_1 + 0x4a8);
    iVar13 = *(int *)(param_1 + 0x430);
    if (iVar13 != 0) {
      if (*(undefined4 **)(param_1 + 0x80c) == (undefined4 *)0x0) {
        *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
        func_00115C54((float *)&local_128,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x464));
        local_158 = local_128;
        local_154 = local_124;
        local_150 = local_120;
        func_006824D4(*(int **)(param_1 + 0x430),(float *)&local_148,(undefined4 *)(uVar10 + 0x80),
                      (float *)&local_158);
      }
      else {
        (**(code **)**(undefined4 **)(param_1 + 0x80c))();
      }
    }
    iVar13 = *(int *)(param_1 + 0x434);
    if (iVar13 != 0) {
      puVar4 = *(undefined4 **)(param_1 + 0x810);
      if (puVar4 == (undefined4 *)0x0) {
        *(undefined4 *)(iVar13 + 4) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar13 + 8) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar13 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
        func_00115C54((float *)&local_128,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x494));
        local_158 = local_128;
        local_154 = local_124;
        local_150 = local_120;
        func_006824D4(*(int **)(param_1 + 0x434),(float *)&local_134,(undefined4 *)(uVar10 + 0x80),
                      (float *)&local_158);
      }
      else {
        (**(code **)*puVar4)(puVar4);
      }
    }
  }
  pfVar5 = (float *)0x0;
  if (*(int *)(param_1 + 0x41c) != 0) {
    if (local_28 == (int **)0x0) {
      iVar13 = func_00521380(*(int *)(param_1 + 0x41c));
      pfVar5 = (float *)0x0;
      if (iVar13 == 0) goto LAB_004f685c;
    }
    func_00115C54((float *)&local_140,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x564));
    local_158 = local_140;
    local_154 = local_13c;
    local_150 = local_138;
    if (*(char *)(*(int *)(param_1 + 0x510) + 4) != '\0') {
      func_00115C54((float *)&local_158,(float *)&local_158,
                    (float *)(*(int *)(param_1 + 0x510) + 0x70));
    }
    if (ALBW_AS_F32(uVar24) <= ALBW_AS_F32(((ulonglong)uVar24 >> 0x20))) {
      func_001512B4(*(int *)(param_1 + 0x41c),(float *)&local_158);
    }
    else {
      if ((*(uint *)(param_1 + 0x59c) & 0x200000) == 0) {
        iVar13 = *(int *)(param_1 + 0x41c);
      }
      else {
        local_140 = (int *)ALBW_PTR_BITS((ALBW_AS_F32(local_158) + *(float *)(param_1 + 0x570)));
        local_13c = (int *)ALBW_PTR_BITS((ALBW_AS_F32(local_154) + ALBW_AS_F32(uVar24)));
        local_138 = (int *)ALBW_PTR_BITS((ALBW_AS_F32(local_150) + *(float *)(param_1 + 0x578)));
        ppiVar8 = &local_140;
        iVar13 = *(int *)(param_1 + 0x41c);
      }
      func_001512B4(iVar13,(float *)ppiVar8);
    }
    iVar13 = *(int *)(param_1 + 0x40c);
    pfVar5 = (float *)0x0;
    if (iVar13 != 0) {
      local_13c = (int *)uVar25;
      fVar26 = (ALBW_AS_F32(local_13c) /
               (*(float *)(param_1 + 0x4f0) * ALBW_AS_F32(((ulonglong)uVar25 >> 0x20)))) *
               *(float *)(param_1 + 0x4f8);
      local_140 = (int *)ALBW_PTR_BITS((*(float *)(iVar13 + 0x74) * fVar26));
      local_138 = (int *)ALBW_PTR_BITS((*(float *)(iVar13 + 0x7c) * fVar26));
      func_00151150(*(int *)(param_1 + 0x41c),(float *)&local_140);
      pfVar5 = (float *)(*(int *)(param_1 + 0x41c) + 0x10);
      if ((*(char *)(local_bc + 0x9f) != '\0') ||
         (*pfVar5 != *(float *)(*(int *)(param_1 + 0x41c) + 0x18))) {
        func_00491624((float *)&local_134,0,uVar14,0);
        pfVar5 = (float *)func_0015133C(*(int *)(param_1 + 0x41c),&local_134);
      }
    }
  }
LAB_004f685c:
  *(int *)(param_1 + 0x414) = *(int *)(param_1 + 0x414) + 1;
  return pfVar5;
}

