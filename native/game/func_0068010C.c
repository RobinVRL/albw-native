/* USA 0068010C: nw::font TextWriter string measure/print loop over a CharStrmReader at
 * local_e0 {cursor, read pmf {ptr, adj}}. Native fix of the generated Ghidra text: the second
 * pointer-to-member call of the reader's read function lost its object argument (the first one
 * kept it). Rest unchanged. Confidence: high. Class: no-argument `(*pcVarN)()` calls (about 190
 * converted files) - pointer-to-member / state-handler calls that lost `this`. */
#include "ghidra_types.h"

extern int func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern float func_0041E2D8(undefined4 *param_1,int param_2);
extern int func_00420F00(int param_1);
extern int func_0056F89C(undefined4 *param_1,int *param_2,undefined4 param_3);
extern float func_0059090C(float fparam_0);
extern float func_0067F944(byte *param_1,float *param_2,float *param_3,uint param_4,uint param_5, float fparam_0);
extern int func_0067FB90(byte *param_1,float *param_2,uint *param_3,int param_4);
extern float DAT_00680424;
extern int DAT_00680428;
extern undefined4 DAT_0068042c;

// USA 0068010C <- EU 006800E4 (Ghidra, non-matching)
// GLOBAL DAT_00680424 float
// GLOBAL DAT_00680428 int
// GLOBAL DAT_0068042c undefined4

/* WARNING: Variable defined which should be unmapped: objStack_140 */

float func_0068010C(byte *param_1,byte *param_2,uint param_3,float fparam_0)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  byte *pbVar11;
  byte *pbVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar18;
  longlong lVar17;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  _Alignas(8) unsigned char albw_frame[0x140];
  #define objStack_140 ((uint *)(albw_frame + 0x0))
  #define abStack_128 ((byte *)(albw_frame + 0x18))
  #define local_118 (*(float *)(albw_frame + 0x28))
  #define local_112 (*(byte *)(albw_frame + 0x2e))
  #define local_f8 (*(float *)(albw_frame + 0x48))
  #define local_f4 (*(float *)(albw_frame + 0x4c))
  #define local_f0 (*(float *)(albw_frame + 0x50))
  #define local_ec (*(float *)(albw_frame + 0x54))
  #define local_e0 (*(byte * *)(albw_frame + 0x60))
  #define local_dc (*(code * *)(albw_frame + 0x64))
  #define local_d8 (*(uint *)(albw_frame + 0x68))
  #define local_d4 (*(byte * *)(albw_frame + 0x6c))
  #define local_d0 (*(byte * *)(albw_frame + 0x70))
  #define local_cc (*(byte * *)(albw_frame + 0x74))
  #define local_c8 (*(byte * *)(albw_frame + 0x78))
  #define local_c4 (*(float *)(albw_frame + 0x7c))
  #define local_c0 (*(float *)(albw_frame + 0x80))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x84))
  #define uStack_b8 (*(undefined4 *)(albw_frame + 0x88))
  #define local_b4 (*(uint *)(albw_frame + 0x8c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x90))
  #define local_a8 ((float *)(albw_frame + 0x98))
  #define local_98 (*(byte * *)(albw_frame + 0xa8))
  #define local_94 (*(byte * *)(albw_frame + 0xac))
  #define local_90 (*(byte * *)(albw_frame + 0xb0))
  #define fStack_8c (*(float *)(albw_frame + 0xb4))
  #define fStack_88 (*(float *)(albw_frame + 0xb8))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0xbc))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0xc0))
  #define local_7c (*(uint *)(albw_frame + 0xc4))
  #define local_78 (*(uint *)(albw_frame + 0xc8))
  #define local_70 ((float *)(albw_frame + 0xd0))
  #define local_60 (*(float *)(albw_frame + 0xe0))
  #define local_5c (*(float *)(albw_frame + 0xe4))
  #define local_58 (*(float *)(albw_frame + 0xe8))
  #define local_54 (*(float *)(albw_frame + 0xec))
  uVar10 = 0;
  local_a8[0] = *(float *)(param_1 + 0x10);
  local_70[0] = *(float *)(param_1 + 0x14);
  lVar19 = (ulonglong)(uint)ALBW_AS_U32(local_70[0]) << 0x20;
  bVar1 = *(int *)(param_1 + 0x30) < DAT_00680428;
  fVar14 = DAT_00680424;
  fVar15 = DAT_00680424;
  objStack_140[0] = param_3;
  fVar13 = func_0067F944(param_1,local_a8,local_70,(uint)param_2,param_3,fparam_0);
  lVar17 = (ulonglong)(uint)ALBW_AS_U32(fVar13) << 0x20;
  uVar20 = CONCAT44(ALBW_AS_F32(((ulonglong)lVar19 >> 0x20)) - *(float *)(param_1 + 0x14),fVar14);
  uStack_bc = *(undefined4 *)(param_1 + 8);
  uStack_b8 = *(undefined4 *)(param_1 + 0xc);
  local_c8 = param_2 + param_3 * 2;
  local_c4 = local_a8[0];
  local_c0 = local_70[0];
  local_b4 = 0;
  local_b0 = (uint)(*(undefined2 *)((char *)&local_b0 + 2)) << 0x10;
  local_d0 = param_1;
  local_cc = param_2;
  func_0056F89C(&local_e0,*(int **)(param_1 + 0x24),0);
  local_e0 = param_2;
  (**(code **)(**(int **)(param_1 + 0x44) + 0x14))(*(int **)(param_1 + 0x44),&local_d0);
  piVar9 = (int *)((int)&local_e0 + ((int)local_d8 >> 1));
  pcVar8 = local_dc;
  if ((local_d8 & 1) != 0) {
    pcVar8 = *(code **)(local_dc + *piVar9);
  }
  uVar5 = (*pcVar8)(piVar9);
  fVar14 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
  uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
  if ((int)local_e0 - (int)param_2 >> 1 <= (int)param_3) {
    uVar21 = CONCAT44(DAT_0068042c,fVar15);
    pbVar11 = param_2;
    pbVar12 = param_2;
    do {
      uVar18 = (undefined4)((ulonglong)lVar17 >> 0x20);
      if (uVar5 < 0x20) {
        local_b4 = uVar10 ^ 1;
        local_cc = local_e0;
        if ((bVar1 && uVar5 != 10) && pbVar11 != pbVar12) {
          local_98 = local_d0;
          local_94 = local_e0;
          local_90 = local_c8;
          fStack_8c = local_c4;
          fStack_88 = local_c0;
          uStack_84 = uStack_bc;
          uStack_80 = uStack_b8;
          local_78 = local_b0;
          local_7c = local_b4;
          func_00110D44((undefined4 *)abStack_128,param_1,0x48);
          local_60 = ALBW_AS_F32(uVar21);
          local_98 = abStack_128;
          local_5c = local_60;
          local_58 = local_60;
          local_54 = local_60;
          (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                    (*(int **)(param_1 + 0x44),&local_60,uVar5,&local_98);
          fVar14 = local_58 - local_60;
          fVar13 = ALBW_AS_F32(uVar21);
          uVar2 = in_fpscr & 0xfffffff;
          uVar3 = uVar2 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
          in_fpscr = uVar3 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
          bVar4 = (byte)(uVar3 >> 0x18);
          if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            fVar13 = *(float *)(param_1 + 0x30);
            fVar14 = local_118 - local_c4;
            uVar2 = uVar2 | (uint)(fVar14 < fVar13) << 0x1f | (uint)(fVar14 == fVar13) << 0x1e;
            in_fpscr = uVar2 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
            bVar4 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              local_b0 = local_b0 & 0xffff0000;
              uVar5 = 10;
              local_e0 = pbVar11;
              goto LAB_00680614;
            }
          }
        }
        iVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0xc))
                          (*(int **)(param_1 + 0x44),uVar5,&local_d0);
        fVar14 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
        uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
        fVar15 = *(float *)(param_1 + 0x10);
        fVar13 = fVar15 - local_a8[0];
        if (iVar6 == 3) {
          fVar16 = ALBW_AS_F32(uVar21);
          if ((*(uint *)(param_1 + 0x40) & 3) == 1) {
            iVar6 = (int)local_cc - (int)param_2;
            local_d4 = local_cc;
            local_f8 = fVar16;
            local_f4 = fVar16;
            local_f0 = fVar16;
            local_ec = fVar16;
            func_00110D44(objStack_140,param_1,0x48);
            func_0067FB90((byte *)objStack_140,&local_f8,(uint *)&local_d4,param_3 - (iVar6 >> 1));
            fVar15 = ALBW_AS_F32(((ulonglong)uVar21 >> 0x20));
            fVar16 = (local_f0 - local_f8) * fVar15;
            fVar15 = func_0059090C(fVar14 * fVar15);
            lVar17 = CONCAT44(fVar14,fVar15);
            fVar14 = func_0059090C(fVar16);
            *(float *)(param_1 + 0x10) = local_c4 + (ALBW_AS_F32(lVar17) - fVar14);
          }
          else if ((*(uint *)(param_1 + 0x40) & 3) == 2) {
            iVar6 = (int)local_cc - (int)param_2;
            local_d4 = local_cc;
            local_f8 = fVar16;
            local_f4 = fVar16;
            local_f0 = fVar16;
            local_ec = fVar16;
            func_00110D44(objStack_140,param_1,0x48);
            func_0067FB90((byte *)objStack_140,&local_f8,(uint *)&local_d4,param_3 - (iVar6 >> 1));
            *(float *)(param_1 + 0x10) =
                 local_c4 + (ALBW_AS_F32(((ulonglong)lVar17 >> 0x20)) - (local_f0 - local_f8));
          }
          else {
            *(float *)(param_1 + 0x10) = local_c4;
            fVar15 = fVar15 - local_c4;
            uVar10 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar14) << 0x1f |
                     (uint)(fVar15 == fVar14) << 0x1e;
            in_fpscr = uVar10 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
            bVar4 = (byte)(uVar10 >> 0x18);
            if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              fVar15 = fVar14;
            }
            lVar17 = (ulonglong)(uint)ALBW_AS_U32(fVar15) << 0x20;
          }
          if (bVar1) {
            pbVar12 = local_e0;
          }
LAB_0068038c:
          uVar10 = 0;
        }
        else {
          if (iVar6 == 1) goto LAB_0068038c;
          if (iVar6 == 2) {
            uVar10 = 1;
          }
          else if (iVar6 == 4) break;
        }
        local_e0 = local_cc;
LAB_006805d8:
        if (bVar1) {
          pbVar11 = local_e0;
        }
        pcVar8 = local_dc;
        if ((local_d8 & 1) != 0) {
          pcVar8 = *(code **)(local_dc + *(int *)((int)&local_e0 + ((int)local_d8 >> 1)));
        }
        uVar5 = (*pcVar8)((int)&local_e0 + ((int)local_d8 >> 1));  /* pmf call: this = reader + adj/2 */
        fVar15 = fVar13;
      }
      else {
        lVar19 = CONCAT44((int)((ulonglong)lVar19 >> 0x20),*(undefined4 *)(param_1 + 0x14));
        fVar14 = fVar15;
        uVar7 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                          (*(int **)(param_1 + 0x24),local_b0 & 0xffff,uVar5);
        fVar13 = (float)VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        lVar17 = CONCAT44(uVar18,fVar13 * *(float *)(param_1 + 8));
        func_00420F00((int)&local_118);
        (**(code **)(**(int **)(param_1 + 0x24) + 0x44))(*(int **)(param_1 + 0x24),&local_118,uVar5)
        ;
        if (uVar10 != 0) {
          fVar13 = *(float *)(param_1 + 0x34);
        }
        if (uVar10 != 0) {
          fVar14 = fVar13 + fVar14;
        }
        if (param_1[0x2d] == 0) {
          fVar13 = (float)VectorUnsignedToFloat((uint)local_112,(byte)(in_fpscr >> 0x15) & 3);
          fVar13 = fVar13 * *(float *)(param_1 + 8);
        }
        else {
          fVar13 = *(float *)(param_1 + 0x1c);
        }
        fVar13 = fVar13 + fVar14 + ALBW_AS_F32(lVar17);
        if (!bVar1 || pbVar11 == pbVar12) {
LAB_00680568:
          if (uVar10 == 0) {
            fVar14 = *(float *)(param_1 + 0x10);
          }
          else {
            fVar14 = *(float *)(param_1 + 0x10) + *(float *)(param_1 + 0x34);
            *(float *)(param_1 + 0x10) = fVar14;
          }
          uVar10 = 1;
          *(float *)(param_1 + 0x10) = fVar14 + ALBW_AS_F32(lVar17);
          iVar6 = (**(code **)(**(int **)(param_1 + 0x24) + 0x54))(*(int **)(param_1 + 0x24));
          fVar14 = (float)VectorSignedToFloat(-iVar6,(byte)(in_fpscr >> 0x15) & 3);
          *(float *)(param_1 + 0x14) =
               *(float *)(param_1 + 0x14) + fVar14 * *(float *)(param_1 + 0xc);
          func_0041E2D8((undefined4 *)param_1,(int)&local_118);
          *(int *)(param_1 + 0x14) = (int)lVar19;
          local_b0 = CONCAT22((*(undefined2 *)((char *)&local_b0 + 2)),(short)uVar5);
          goto LAB_006805d8;
        }
        fVar16 = *(float *)(param_1 + 0x30);
        fVar14 = fVar13 - ALBW_AS_F32(uVar20);
        uVar2 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar16) << 0x1f |
                (uint)(fVar14 == fVar16) << 0x1e;
        in_fpscr = uVar2 | (uint)(NAN(fVar14) || NAN(fVar16)) << 0x1c;
        bVar4 = (byte)(uVar2 >> 0x18);
        if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1))
        goto LAB_00680568;
        uVar5 = 10;
        local_b0 = local_b0 & 0xffff0000;
        local_e0 = pbVar11;
      }
LAB_00680614:
      fVar14 = ALBW_AS_F32(((ulonglong)lVar17 >> 0x20));
      uVar18 = (undefined4)((ulonglong)lVar19 >> 0x20);
    } while ((int)local_e0 - (int)param_2 >> 1 <= (int)param_3);
  }
  if (fVar14 < *(float *)(param_1 + 0x10) - local_c4) {
    fVar14 = *(float *)(param_1 + 0x10) - local_c4;
  }
  if ((*(uint *)(param_1 + 0x40) & 0x300) == 0x100 || (*(uint *)(param_1 + 0x40) & 0x300) == 0x200)
  {
    *(undefined4 *)(param_1 + 0x14) = uVar18;
  }
  else {
    *(float *)(param_1 + 0x14) = *(float *)(param_1 + 0x14) + ALBW_AS_F32(((ulonglong)uVar20 >> 0x20));
  }
  (**(code **)(**(int **)(param_1 + 0x44) + 0x18))(*(int **)(param_1 + 0x44),&local_d0);
  return fVar14;
}

