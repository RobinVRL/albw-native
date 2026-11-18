#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_003E1980(float *param_1,float *param_2,float *param_3);
extern int func_003F58E8(int param_1,int param_2);
extern float DAT_003f51ec;
extern float DAT_003f51f0;
extern uint *DAT_003f51f4;
extern float *DAT_003f51f8;
extern float DAT_003f51fc;
extern int DAT_003f546c;
extern int DAT_003f5470;

// USA 003F4E98 <- EU 003F4E78 (Ghidra, non-matching)
// GLOBAL DAT_003f51ec float
// GLOBAL DAT_003f51f0 float
// GLOBAL DAT_003f51f4 uint *
// GLOBAL DAT_003f51f8 float *
// GLOBAL DAT_003f51fc float
// GLOBAL DAT_003f546c int
// GLOBAL DAT_003f5470 int

undefined4 func_003F4E98(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  fVar27 = DAT_003f51f0;
  fVar28 = DAT_003f51ec;
  iVar2 = *param_2;
  iVar14 = *(int *)(param_1 + 0xd8);
  iVar15 = iVar2 + -1;
  if (*(int *)(iVar14 + 0x328) == 5) {
    iVar11 = param_2[0x52];
    piVar13 = (int *)((uint)*(ushort *)(iVar14 + 0x55a) + iVar14);
    if (iVar11 != 0) {
      iVar3 = *(int *)(iVar11 + 8);
      iVar5 = iVar11 + iVar3 * 0x58;
      pfVar12 = (float *)(iVar5 + 0xc);
      if ((*(ushort *)(iVar14 + 0x550) & 1) == 0) {
        bVar17 = SBORROW4(iVar15,2);
        bVar16 = iVar15 == 2;
        iVar9 = iVar5;
        if (2 < iVar15) {
          iVar9 = piVar13[4];
        }
        fVar18 = ALBW_AS_F32(piVar13[8]);
        iVar1 = iVar2;
        if (2 < iVar15) {
          bVar17 = SBORROW4(iVar9,3);
          bVar16 = iVar9 == 3;
          iVar1 = iVar9;
        }
        if (((bVar16 || iVar1 + -3 < 0 != bVar17) || (0x3f7fffff < (int)ALBW_AS_U32(fVar18))) ||
           (iVar3 == *(int *)(iVar11 + 4))) {
          fVar18 = ALBW_AS_F32(param_2[0xb]);
          iVar3 = param_2[0xc];
          iVar9 = param_2[0xd];
          *pfVar12 = fVar18;
          *(int *)(iVar5 + 0x10) = iVar3;
          *(int *)(iVar5 + 0x14) = iVar9;
          *(float *)(iVar11 + 0x5864) = fVar18;
          *(int *)(iVar11 + 0x5868) = iVar3;
          *(int *)(iVar11 + 0x586c) = iVar9;
          *(float *)(iVar11 + 0x5858) = fVar18;
          *(int *)(iVar11 + 0x585c) = iVar3;
          *(int *)(iVar11 + 0x5860) = iVar9;
        }
        else {
          iVar9 = iVar3 + -1;
          if (iVar9 < 0) {
            iVar3 = piVar13[4];
          }
          fVar19 = ALBW_AS_F32(param_2[0xc]);
          if (iVar9 < 0) {
            iVar9 = iVar3 + -1;
          }
          iVar3 = iVar9 + -1;
          pfVar6 = (float *)(iVar11 + 0x5858);
          fVar20 = ALBW_AS_F32(param_2[0xd]);
          if (iVar3 < 0) {
            iVar3 = piVar13[4] + -1;
          }
          iVar9 = iVar11 + iVar9 * 0x58;
          iVar3 = iVar11 + iVar3 * 0x58;
          pfVar4 = (float *)(iVar11 + 0x5864);
          *pfVar6 = *pfVar6 + (ALBW_AS_F32(param_2[0xb]) - *pfVar6) * fVar18;
          *(float *)(iVar11 + 0x585c) =
               *(float *)(iVar11 + 0x585c) + (fVar19 - *(float *)(iVar11 + 0x585c)) * fVar18;
          *(float *)(iVar11 + 0x5860) =
               *(float *)(iVar11 + 0x5860) + (fVar20 - *(float *)(iVar11 + 0x5860)) * fVar18;
          *pfVar4 = *pfVar4 + (*pfVar6 - *pfVar4) * fVar18;
          *(float *)(iVar11 + 0x5868) =
               *(float *)(iVar11 + 0x5868) +
               (*(float *)(iVar11 + 0x585c) - *(float *)(iVar11 + 0x5868)) * fVar18;
          *(float *)(iVar11 + 0x586c) =
               *(float *)(iVar11 + 0x586c) +
               (*(float *)(iVar11 + 0x5860) - *(float *)(iVar11 + 0x586c)) * fVar18;
          uVar7 = *(undefined4 *)(iVar11 + 0x5868);
          uVar10 = *(undefined4 *)(iVar11 + 0x586c);
          *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar11 + 0x5864);
          *(undefined4 *)(iVar3 + 0x10) = uVar7;
          *(undefined4 *)(iVar3 + 0x14) = uVar10;
          fVar20 = *(float *)(iVar11 + 0x5868);
          fVar19 = (ALBW_AS_F32(param_2[0xc]) - fVar20) * DAT_003f51fc;
          fVar18 = (ALBW_AS_F32(param_2[0xd]) - *(float *)(iVar11 + 0x586c)) * DAT_003f51fc;
          fVar22 = *(float *)(iVar11 + 0x586c);
          *(float *)(iVar9 + 0xc) = *pfVar4 + (ALBW_AS_F32(param_2[0xb]) - *pfVar4) * DAT_003f51fc;
          *(float *)(iVar9 + 0x10) = fVar20 + fVar19;
          *(float *)(iVar9 + 0x14) = fVar22 + fVar18;
          iVar3 = param_2[0xc];
          iVar9 = param_2[0xd];
          *pfVar12 = ALBW_AS_F32(param_2[0xb]);
          *(int *)(iVar5 + 0x10) = iVar3;
          *(int *)(iVar5 + 0x14) = iVar9;
        }
        uVar7 = *(undefined4 *)(param_1 + 0x58);
        uVar10 = *(undefined4 *)(param_1 + 0x5c);
        uVar21 = *(undefined4 *)(param_1 + 0x60);
        uVar23 = *(undefined4 *)(param_1 + 100);
        uVar24 = *(undefined4 *)(param_1 + 0x68);
        uVar25 = *(undefined4 *)(param_1 + 0x6c);
        uVar26 = *(undefined4 *)(param_1 + 0x70);
        *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(iVar5 + 0x20) = uVar7;
        *(undefined4 *)(iVar5 + 0x24) = uVar10;
        *(undefined4 *)(iVar5 + 0x28) = uVar21;
        *(undefined4 *)(iVar5 + 0x2c) = uVar23;
        *(undefined4 *)(iVar5 + 0x30) = uVar24;
        *(undefined4 *)(iVar5 + 0x34) = uVar25;
        *(undefined4 *)(iVar5 + 0x38) = uVar26;
        uVar7 = *(undefined4 *)(param_1 + 0x78);
        uVar10 = *(undefined4 *)(param_1 + 0x7c);
        uVar21 = *(undefined4 *)(param_1 + 0x80);
        *(undefined4 *)(iVar5 + 0x3c) = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)(iVar5 + 0x40) = uVar7;
        *(undefined4 *)(iVar5 + 0x44) = uVar10;
        *(undefined4 *)(iVar5 + 0x48) = uVar21;
      }
      else {
        iVar3 = param_2[3];
        iVar9 = param_2[4];
        *pfVar12 = ALBW_AS_F32(param_2[2]);
        *(int *)(iVar5 + 0x10) = iVar3;
        *(int *)(iVar5 + 0x14) = iVar9;
        local_38 = (undefined4 *)(iVar5 + 0x1c);
        if (((*DAT_003f51f4 & 1) == 0) &&
           (iVar3 = func_00100174((int *)DAT_003f51f4), pfVar6 = DAT_003f51f8, iVar3 != 0)) {
          pfVar4 = DAT_003f51f8 + 4;
          *DAT_003f51f8 = fVar28;
          pfVar6[1] = fVar27;
          pfVar6[2] = fVar27;
          pfVar6[3] = fVar27;
          *pfVar4 = fVar27;
          pfVar6[5] = fVar28;
          pfVar6[6] = fVar27;
          pfVar6[7] = fVar27;
          pfVar6[8] = fVar27;
          pfVar6[9] = fVar27;
          pfVar6[10] = fVar28;
          pfVar6[0xb] = fVar27;
        }
        func_001119F4(local_38,DAT_003f51f8);
      }
      *(float *)(iVar5 + 0x18) = ALBW_AS_F32(param_2[0x19]) * *(float *)(*(int *)(param_1 + 0x18) + 0x218)
      ;
      if (*(int *)(iVar11 + 8) != *(int *)(iVar11 + 4)) {
        iVar3 = *(int *)(iVar11 + 8) + -1;
        bVar16 = iVar3 < 0;
        if (bVar16) {
          iVar3 = piVar13[4];
        }
        if (bVar16) {
          iVar3 = iVar3 + -1;
        }
        iVar3 = iVar11 + iVar3 * 0x58;
        if (iVar15 < 2) {
          fVar19 = *(float *)(iVar5 + 0x14);
          fVar22 = *(float *)(iVar3 + 0x14);
          fVar18 = *(float *)(iVar5 + 0x10);
          fVar20 = *(float *)(iVar3 + 0x10);
          *(float *)(iVar11 + 0x584c) = *pfVar12 - *(float *)(iVar3 + 0xc);
          *(float *)(iVar11 + 0x5850) = fVar18 - fVar20;
          *(float *)(iVar11 + 0x5854) = fVar19 - fVar22;
        }
        else {
          local_38 = (undefined4 *)ALBW_PTR_BITS((*pfVar12 - *(float *)(iVar3 + 0xc)));
          local_34 = *(float *)(iVar5 + 0x10) - *(float *)(iVar3 + 0x10);
          local_30 = *(float *)(iVar5 + 0x14) - *(float *)(iVar3 + 0x14);
          func_003E1980((float *)&local_38,(float *)&local_38,(float *)&local_38);
          pfVar12 = (float *)(iVar11 + 0x584c);
          fVar18 = ALBW_AS_F32(piVar13[9]);
          *pfVar12 = *pfVar12 + (ALBW_AS_F32(local_38) - *pfVar12) * fVar18;
          *(float *)(iVar11 + 0x5850) =
               *(float *)(iVar11 + 0x5850) + (local_34 - *(float *)(iVar11 + 0x5850)) * fVar18;
          *(float *)(iVar11 + 0x5854) =
               *(float *)(iVar11 + 0x5854) + (local_30 - *(float *)(iVar11 + 0x5854)) * fVar18;
        }
        pfVar12 = (float *)(iVar11 + 0x584c);
        func_003E1980(pfVar12,pfVar12,pfVar12);
        uVar7 = *(undefined4 *)(iVar11 + 0x5850);
        uVar10 = *(undefined4 *)(iVar11 + 0x5854);
        *(undefined4 *)(iVar5 + 0x58) = *(undefined4 *)(iVar11 + 0x584c);
        *(undefined4 *)(iVar5 + 0x5c) = uVar7;
        *(undefined4 *)(iVar5 + 0x60) = uVar10;
        if (*piVar13 == 2) {
          *(undefined4 *)(iVar5 + 0x4c) = *(undefined4 *)(iVar5 + 0x20);
          *(undefined4 *)(iVar5 + 0x50) = *(undefined4 *)(iVar5 + 0x30);
          *(undefined4 *)(iVar5 + 0x54) = *(undefined4 *)(iVar5 + 0x40);
        }
        else {
          local_30 = *(float *)(iVar5 + 0x20) * *(float *)(iVar11 + 0x5850) -
                     *(float *)(iVar5 + 0x30) * *(float *)(iVar11 + 0x584c);
          local_38 = (undefined4 *)
                     ALBW_PTR_BITS((*(float *)(iVar5 + 0x30) * *(float *)(iVar11 + 0x5854) -
                     *(float *)(iVar5 + 0x40) * *(float *)(iVar11 + 0x5850)));
          local_34 = *(float *)(iVar5 + 0x40) * *(float *)(iVar11 + 0x584c) -
                     *(float *)(iVar5 + 0x20) * *(float *)(iVar11 + 0x5854);
          func_003E1980((float *)&local_38,(float *)&local_38,(float *)&local_38);
          *(undefined4 **)(iVar5 + 0x4c) = local_38;
          *(float *)(iVar5 + 0x50) = local_34;
          *(float *)(iVar5 + 0x54) = local_30;
        }
      }
      iVar3 = *(int *)(iVar11 + 8) + 1;
      *(int *)(iVar11 + 8) = iVar3;
      if (piVar13[4] <= iVar3) {
        *(undefined4 *)(iVar11 + 8) = 0;
      }
      if ((*(int *)(iVar11 + 8) == *(int *)(iVar11 + 4)) &&
         (iVar3 = *(int *)(iVar11 + 4) + 1, *(int *)(iVar11 + 4) = iVar3, piVar13[4] <= iVar3)) {
        *(undefined4 *)(iVar11 + 4) = 0;
      }
      piVar8 = (int *)(iVar11 + 0x580c);
      iVar3 = *piVar8 + 1;
      *piVar8 = iVar3;
      if (piVar13[4] < iVar3) {
        iVar3 = piVar13[4];
      }
      *piVar8 = iVar3;
      uVar7 = *(undefined4 *)(param_1 + 0x58);
      uVar10 = *(undefined4 *)(param_1 + 0x5c);
      uVar21 = *(undefined4 *)(param_1 + 0x60);
      uVar23 = *(undefined4 *)(param_1 + 100);
      uVar24 = *(undefined4 *)(param_1 + 0x68);
      uVar25 = *(undefined4 *)(param_1 + 0x6c);
      uVar26 = *(undefined4 *)(param_1 + 0x70);
      *(undefined4 *)(iVar11 + 0x581c) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(iVar11 + 0x5820) = uVar7;
      *(undefined4 *)(iVar11 + 0x5824) = uVar10;
      *(undefined4 *)(iVar11 + 0x5828) = uVar21;
      *(undefined4 *)(iVar11 + 0x582c) = uVar23;
      *(undefined4 *)(iVar11 + 0x5830) = uVar24;
      *(undefined4 *)(iVar11 + 0x5834) = uVar25;
      *(undefined4 *)(iVar11 + 0x5838) = uVar26;
      uVar7 = *(undefined4 *)(param_1 + 0x78);
      uVar10 = *(undefined4 *)(param_1 + 0x7c);
      uVar21 = *(undefined4 *)(param_1 + 0x80);
      *(undefined4 *)(iVar11 + 0x583c) = *(undefined4 *)(param_1 + 0x74);
      *(undefined4 *)(iVar11 + 0x5840) = uVar7;
      *(undefined4 *)(iVar11 + 0x5844) = uVar10;
      *(undefined4 *)(iVar11 + 0x5848) = uVar21;
      *(int *)(iVar11 + 0x5818) = *(int *)(iVar11 + 0x5818) + 1;
    }
  }
  iVar11 = DAT_003f5470;
  if ((*(uint *)(iVar14 + 0x548) & 1) != 0) {
    if (iVar2 == 1) {
      param_2[0x55] = DAT_003f546c;
    }
    iVar2 = (int)((ulonglong)
                  ((longlong)iVar11 * (longlong)((param_2[1] + -1) * *(int *)(iVar14 + 0x564))) >>
                 0x20);
    if ((iVar2 >> 5) - (iVar2 >> 0x1f) <= iVar15) {
      iVar2 = *(int *)(iVar14 + 0x56c);
      fVar18 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
      if (ALBW_AS_F32(param_2[0x55]) < fVar18) {
        bVar16 = iVar2 == 0;
        if (bVar16) {
          iVar2 = *(int *)(iVar14 + 0x568);
        }
        if (!bVar16 || iVar2 != 1) {
          param_2[0x55] = (int)ALBW_AS_U32((ALBW_AS_F32(param_2[0x55]) + fVar28));
          return 0;
        }
      }
      param_2[0x55] = (int)ALBW_AS_U32(fVar27);
      return func_003F58E8(param_1,(int)param_2);
    }
  }
  return 0;
}

