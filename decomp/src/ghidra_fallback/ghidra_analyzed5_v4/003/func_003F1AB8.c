#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_003F2234(undefined4 param_1,uint *param_2,int *param_3,int param_4,float fparam_0, float fparam_1);
extern int func_003F2E98(undefined4 param_1,uint *param_2,int param_3,float *param_4,int param_5, int param_6,int param_7);
extern undefined8 func_003F6E84(int param_1,uint *param_2);
extern int func_003F8518(int param_1,int param_2);
extern uint *DAT_003f1f60;
extern uint DAT_003f1f64;
extern undefined4 DAT_003f1f68;
extern int DAT_003f1f6c;
extern int DAT_003f1f70;
extern int *DAT_003f1f74;
extern int DAT_003f1f78;
extern int DAT_003f1f7c;

// USA 003F1AB8 <- EU 003F1A98 (Ghidra, non-matching)
// GLOBAL DAT_003f1f60 uint *
// GLOBAL DAT_003f1f64 uint
// GLOBAL DAT_003f1f68 undefined4
// GLOBAL DAT_003f1f6c int
// GLOBAL DAT_003f1f70 int
// GLOBAL DAT_003f1f74 int *
// GLOBAL DAT_003f1f78 int
// GLOBAL DAT_003f1f7c int

/* WARNING: Variable defined which should be unmapped: objStack_80 */

undefined8 func_003F1AB8(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  int *piVar2;
  uint *puVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  int *piVar17;
  int iVar18;
  uint in_fpscr;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  uint uVar24;
  undefined4 uVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define objStack_80 ((uint *)(albw_frame + 0x0))
  #define local_70 (*(float *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(int *)(albw_frame + 0x20))
  #define local_5c (*(int *)(albw_frame + 0x24))
  #define local_58 (*(int *)(albw_frame + 0x28))
  #define local_54 (*(uint * *)(albw_frame + 0x2c))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define puStack_2c (*(uint * *)(albw_frame + 0x54))
  #define local_28 (*(uint *)(albw_frame + 0x58))
  puVar15 = DAT_003f1f60;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x2a4) = 0;
  puVar3 = (uint *)*puVar15;
  if ((((*(char *)(param_1 + 0x14) == '\0') && (iVar18 = *(int *)(param_3 + 0xdc), iVar18 != 0)) &&
      (*(int *)(iVar18 + 0x148) != 0)) && (*(int *)(*(int *)(iVar18 + 0x148) + 0x5814) != 0)) {
    *puVar15 = (uint)param_2;
    puVar15[1] = 0;
    uVar12 = 0;
    uVar24 = *(uint *)(param_3 + 0x27c);
    uVar25 = *(undefined4 *)(param_3 + 0x280);
    local_30 = param_1;
    puStack_2c = param_2;
    local_28 = param_3;
    uVar27 = func_003F6E84(*(int *)(param_3 + 0xec),param_2);
    puVar3 = (uint *)uVar27;
    *puVar15 = (uint)puVar3;
    if (puVar3 != (uint *)0x0) {
      iVar13 = *(int *)(local_28 + 0x25c);
      if (iVar13 != 0 && *(uint **)(local_28 + 0x254) != (uint *)0x0) {
        func_0010E3C4(puVar3,*(uint **)(local_28 + 0x254),iVar13 << 2);
        puVar3 = puVar3 + iVar13;
      }
    }
    *puVar15 = (uint)puVar3;
    iVar13 = func_003F8518(**(int **)(local_28 + 0x18),local_28);
    if (iVar13 != 0) {
      objStack_80[0] = local_28;
      objStack_80[1] = *puVar15;
      pcVar4 = (code *)func_003F8518(**(int **)(local_28 + 0x18),local_28);
      uVar5 = (*pcVar4)(objStack_80);
      *puVar15 = uVar5;
    }
    uVar26 = (ulonglong)DAT_003f1f64;
    uVar27 = CONCAT44(DAT_003f1f68,uVar25);
    puVar15 = (uint *)0x0;
    iVar13 = *(int *)(local_28 + 0x18);
    local_64 = *(undefined4 *)(iVar13 + 0x238);
    local_6c = *(float *)(*(int *)(local_28 + 0xd8) + 0x4b8);
    local_70 = *(float *)(iVar13 + 0x22c) * local_6c;
    local_6c = *(float *)(iVar13 + 0x230) * local_6c;
    local_68 = *(float *)(iVar13 + 0x234) * *(float *)(*(int *)(local_28 + 0xd8) + 0x4b8);
    do {
      piVar16 = *(int **)(iVar18 + 0x148);
      if (piVar16 == (int *)0x0) break;
      iVar13 = *(int *)(DAT_003f1f6c + (int)piVar16);
      piVar17 = piVar16 + 0x161f;
      uVar1 = *(ushort *)(DAT_003f1f70 + iVar13);
      *piVar17 = 0;
      piVar14 = (int *)(iVar13 + (uint)uVar1);
      if ((*(int *)(iVar18 + 4) != 0) && (*(int *)(*(int *)(iVar18 + 0x148) + 0x5814) != 0)) {
        *(int *)(local_30 + 0x10) = *(int *)(local_30 + 0x10) + 1;
        *(int *)(local_30 + 8) = *(int *)(local_30 + 8) + 1;
        *(int *)(local_30 + 4) = *(int *)(local_30 + 4) + 1;
        iVar8 = *(int *)(iVar18 + 0x148);
        iVar6 = piVar14[7];
        iVar9 = *(int *)(iVar8 + 0x580c);
        iVar13 = iVar6;
        if (iVar9 < iVar6) {
          iVar13 = iVar9;
        }
        if (((1 < iVar13) && (3 < iVar13 * 2 - 2U)) && (2 < iVar13)) {
          local_60 = iVar13 + -2;
          fVar19 = (float)VectorSignedToFloat(local_60,(byte)(in_fpscr >> 0x15) & 3);
          fVar19 = ALBW_AS_F32(uVar26) / fVar19;
          uVar23 = CONCAT44(fVar19,fVar19);
          if ((piVar14[3] == 1) && (*(int *)(DAT_003f1f78 + iVar8) < iVar6)) {
            fVar20 = (float)VectorSignedToFloat(iVar6 + -2,(byte)(in_fpscr >> 0x15) & 3);
            uVar23 = CONCAT44(ALBW_AS_F32(uVar26) / fVar20,fVar19);
          }
          local_5c = iVar13 + -1;
          fVar19 = ALBW_AS_F32(piVar14[5]);
          fVar20 = ALBW_AS_F32(piVar14[6]);
          *(uint *)(DAT_003f1f7c + iVar8) = uVar12;
          if (0 < local_5c) {
            iVar9 = iVar9 + -2;
          }
          iVar13 = 0;
          fVar20 = fVar20 - fVar19;
          if (0 < local_5c) {
            do {
              local_58 = iVar9;
              puVar3 = DAT_003f1f60;
              fVar22 = (float)VectorSignedToFloat(local_58,(byte)(in_fpscr >> 0x15) & 3);
              fVar19 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
              fVar21 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
              fVar19 = fVar19 * ALBW_AS_F32(uVar23);
              iVar9 = *(int *)(*(int *)(iVar18 + 0x148) + 8) -
                      (int)(fVar19 * fVar22 + ALBW_AS_F32(((ulonglong)uVar27 >> 0x20)));
              iVar6 = iVar9 + -1;
              if (iVar6 < 0) {
                iVar9 = piVar14[4];
              }
              if (iVar6 < 0) {
                iVar6 = iVar6 + iVar9;
              }
              puVar10 = *(uint **)(*piVar16 + 0x144);
              puVar7 = puVar10;
              if (puVar15 == (uint *)0x0) {
                puVar7 = DAT_003f1f60;
              }
              if (puVar15 == (uint *)0x0) {
                puVar15 = (uint *)*puVar7;
              }
              puVar11 = (uint *)*DAT_003f1f60;
              puVar7 = func_003F2234(local_30,puVar11,piVar16,iVar6,
                                     *(float *)(*piVar16 + 0x5c) * *(float *)(puVar10[6] + 0x238) *
                                     (ALBW_AS_F32(piVar14[5]) + fVar20 * fVar19) * ALBW_AS_F32(puVar10[0x24]),
                                     fVar21 * ALBW_AS_F32(((ulonglong)uVar23 >> 0x20)));
              *puVar3 = (uint)puVar7;
              uVar12 = uVar12 + 2;
              *piVar17 = *piVar17 + 2;
              uVar5 = puVar3[1];
              puVar3[1] = uVar5 + 2;
              if (uVar5 + 2 == 0x12) {
                objStack_80[1] = (uint)uVar27;
                objStack_80[0] = uVar24;
                local_54 = puVar7;
                objStack_80[0] =
                     (uint)func_003F2E98(local_30,puVar7,iVar18,&local_70,uVar24,objStack_80[1],0);
                *puVar3 = objStack_80[0];
                iVar9 = *DAT_003f1f74;
                func_0010E3C4((uint *)objStack_80[0],*(uint **)(iVar9 + 0x964),
                              *(int *)(iVar9 + 0x968) << 2);
                puVar7 = (uint *)(objStack_80[0] + *(int *)(iVar9 + 0x968) * 4);
                *DAT_003f1f60 = (uint)puVar7;
                puVar3 = DAT_003f1f60;
                if ((piVar14[1] == 1) && (*piVar14 != 0)) {
                  objStack_80[0] = (int)local_54 - (int)puVar15 >> 2;
                  func_0010E3C4(puVar7,puVar15,objStack_80[0] << 2);
                  puVar15 = (uint *)(*puVar3 + objStack_80[0] * 4);
                  *puVar3 = (uint)puVar15;
                  objStack_80[1] = (uint)uVar27;
                  objStack_80[0] = uVar24;
                  objStack_80[0] =
                       (uint)func_003F2E98(local_30,puVar15,iVar18,&local_70,uVar24,objStack_80[1],1
                                          );
                  piVar2 = DAT_003f1f74;
                  *puVar3 = objStack_80[0];
                  iVar9 = *piVar2;
                  func_0010E3C4((uint *)objStack_80[0],*(uint **)(iVar9 + 0x964),
                                *(int *)(iVar9 + 0x968) << 2);
                  *puVar3 = objStack_80[0] + *(int *)(iVar9 + 0x968) * 4;
                  uVar12 = uVar12 + puVar3[1];
                }
                puVar3 = DAT_003f1f60;
                DAT_003f1f60[1] = 0;
                puVar15 = (uint *)*puVar3;
                func_0010E3C4(puVar15,puVar11,0x90);
                puVar7 = (uint *)*puVar3;
                *puVar7 = puVar3[1] * 4 + 1 | 0x80000000;
                puVar3[1] = 0;
                *puVar3 = (uint)(puVar7 + 0x24);
                if (iVar13 != local_60) {
                  uVar12 = uVar12 + 2;
                  puVar3[1] = 2;
                }
              }
              iVar13 = iVar13 + 1;
              iVar9 = local_58;
            } while (iVar13 < local_5c);
          }
          puVar3 = DAT_003f1f60;
          if ((DAT_003f1f60[1] != 0) && (2 < uVar12)) {
            puVar10 = (uint *)*DAT_003f1f60;
            objStack_80[1] = (uint)uVar27;
            objStack_80[0] = uVar24;
            puVar7 = func_003F2E98(local_30,puVar10,iVar18,&local_70,uVar24,objStack_80[1],0);
            piVar16 = DAT_003f1f74;
            *puVar3 = (uint)puVar7;
            iVar13 = *piVar16;
            *(uint *)(*(int *)(iVar13 + 0x970) + 0x10) = puVar3[1];
            func_0010E3C4(puVar7,*(uint **)(iVar13 + 0x970),*(int *)(iVar13 + 0x974) << 2);
            iVar13 = *(int *)(iVar13 + 0x974);
            *puVar3 = (uint)(puVar7 + iVar13);
            if ((piVar14[1] == 1) && (*piVar14 != 0)) {
              iVar9 = (int)puVar10 - (int)puVar15 >> 2;
              func_0010E3C4(puVar7 + iVar13,puVar15,iVar9 << 2);
              puVar15 = (uint *)(*puVar3 + iVar9 * 4);
              *puVar3 = (uint)puVar15;
              objStack_80[1] = (uint)uVar27;
              objStack_80[0] = uVar24;
              puVar15 = func_003F2E98(local_30,puVar15,iVar18,&local_70,uVar24,objStack_80[1],1);
              piVar16 = DAT_003f1f74;
              *puVar3 = (uint)puVar15;
              iVar13 = *piVar16;
              *(uint *)(*(int *)(iVar13 + 0x970) + 0x10) = puVar3[1];
              func_0010E3C4(puVar15,*(uint **)(iVar13 + 0x970),*(int *)(iVar13 + 0x974) << 2);
              *puVar3 = (uint)(puVar15 + *(int *)(iVar13 + 0x974));
              uVar12 = uVar12 + puVar3[1];
            }
            puVar15 = (uint *)0x0;
            puVar3[1] = 0;
          }
        }
      }
      iVar18 = *(int *)(iVar18 + 0x140);
    } while (iVar18 != 0);
    *(uint *)(local_28 + 0x2a4) = uVar12;
    *(uint *)(local_30 + 0xc) = uVar12;
    puVar3 = (uint *)*DAT_003f1f60;
    iVar18 = *DAT_003f1f74;
    uVar27 = func_0010E3C4(puVar3,*(uint **)(iVar18 + 0x958),*(int *)(iVar18 + 0x95c) << 2);
    param_2 = (uint *)((ulonglong)uVar27 >> 0x20);
    puVar3 = puVar3 + *(int *)(iVar18 + 0x95c);
  }
  return CONCAT44(param_2,puVar3);
}

