#include "ghidra_types.h"

extern longlong func_001104E4(int param_1,int param_2);
extern float DAT_002fe6e0;
extern undefined4 DAT_002fe6e4;
extern undefined4 DAT_002fe6e8;
extern float DAT_002fe6ec;

// USA 002FE3E8 <- EU 002FE3C4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int
// PARAM param_7 Stack[0x8]:4 uint
// GLOBAL DAT_002fe6e0 float
// GLOBAL DAT_002fe6e4 undefined4
// GLOBAL DAT_002fe6e8 undefined4
// GLOBAL DAT_002fe6ec float

void func_002FE3E8(int param_1,uint *param_2,int *param_3,uint param_4,uint param_5,int param_6,
                  uint param_7,float fparam_0)

{
  int iVar1;
  byte bVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ushort uVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar25;
  longlong lVar26;
  uint local_58;
  uint local_54;
  
  local_58 = 0;
  lVar26 = func_001104E4(param_4,param_7);
  uVar24 = CONCAT44(DAT_002fe6e4,DAT_002fe6e8);
  local_54 = (int)lVar26 * param_7;
  uVar22 = CONCAT44(fparam_0,DAT_002fe6e0 - fparam_0);
  if (*(char *)(param_1 + 0x91) != '\x01') {
    lVar26 = func_001104E4(param_5,param_7);
    iVar4 = (int)lVar26 * param_7;
    fVar3 = DAT_002fe6ec;
    if (iVar4 < 400) goto LAB_002fe46c;
  }
  iVar4 = 400;
  fVar3 = DAT_002fe6ec;
LAB_002fe46c:
  do {
    uVar7 = 0;
    uVar10 = local_58 + param_6;
    iVar9 = 0;
    iVar14 = 0;
    iVar12 = 0;
    uVar11 = local_54 + param_7;
    uVar19 = local_54;
    while( true ) {
      iVar1 = uVar11 - uVar19;
      uVar6 = uVar11;
      if ((int)uVar19 < (int)uVar11) {
        uVar6 = 400;
        iVar1 = 400 - uVar19;
      }
      uVar5 = local_58;
      if (uVar6 == uVar19 || iVar1 < 0 != SBORROW4(uVar6,uVar19)) break;
      while( true ) {
        bVar16 = SBORROW4(uVar10,uVar5);
        iVar1 = uVar10 - uVar5;
        bVar15 = uVar10 == uVar5;
        if ((int)uVar5 < (int)uVar10) {
          bVar16 = SBORROW4(0xf0,uVar5);
          iVar1 = 0xf0 - uVar5;
          bVar15 = uVar5 == 0xf0;
        }
        if (bVar15 || iVar1 < 0 != bVar16) break;
        uVar7 = uVar7 + 1 & 0xffff;
        uVar13 = *(ushort *)(param_3[2] + (*param_3 * uVar19 + uVar5) * 2);
        iVar12 = iVar12 + (uVar13 & 0x1f);
        iVar14 = iVar14 + ((uVar13 & 0x7e0) >> 5);
        iVar9 = iVar9 + (uint)(uVar13 >> 0xb);
        uVar5 = uVar5 + 1;
      }
      uVar19 = uVar19 + 1;
    }
    if (uVar7 != 0) {
      fVar17 = ALBW_AS_F32(((ulonglong)uVar22 >> 0x20));
      fVar23 = ALBW_AS_F32(uVar24);
      if (*(char *)(param_1 + 0x94) == '\0') {
        fVar18 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar17 / fVar18;
        fVar18 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        fVar21 = ALBW_AS_F32(uVar22);
        fVar25 = ALBW_AS_F32(((ulonglong)uVar24 >> 0x20));
        fVar18 = fVar18 * fVar17 + fVar21 * fVar25;
        iVar12 = (int)fVar18;
        fVar20 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        uVar19 = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar18) << 0x1e;
        if ((!SUB41(uVar19 >> 0x1e,0)) &&
           (uVar19 = in_fpscr & 0xfffffff | (uint)(fVar23 == fVar18) << 0x1e |
                     (uint)(fVar18 <= fVar23) << 0x1d, bVar2 = (byte)(uVar19 >> 0x18),
           (bool)(bVar2 >> 5 & 1) && !(bool)(bVar2 >> 6))) {
          iVar12 = iVar12 + -1;
        }
        uVar13 = (ushort)iVar12;
        fVar18 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar19 >> 0x15) & 3);
        fVar18 = fVar18 * fVar17 + fVar21 * fVar3;
        iVar12 = (int)fVar18;
        fVar20 = (float)VectorSignedToFloat(iVar12,(byte)(uVar19 >> 0x15) & 3);
        uVar7 = uVar19 & 0xfffffff | (uint)(fVar20 == fVar18) << 0x1e |
                (uint)(fVar18 <= fVar20) << 0x1d;
        bVar2 = (byte)(uVar7 >> 0x18);
        bVar15 = (bool)(bVar2 >> 6);
        if (!bVar15) {
          uVar7 = uVar19 & 0xfffffff | (uint)(fVar23 == fVar18) << 0x1e |
                  (uint)(fVar18 <= fVar23) << 0x1d;
          bVar2 = (byte)(uVar7 >> 0x18);
          bVar15 = (bool)(bVar2 >> 6);
        }
        if ((bool)(bVar2 >> 5 & 1) && !bVar15) {
          iVar12 = iVar12 + -1;
        }
        fVar18 = (float)VectorUnsignedToFloat(iVar9,(byte)(uVar7 >> 0x15) & 3);
        fVar17 = fVar18 * fVar17 + fVar21 * fVar25;
        uVar19 = (uint)fVar17;
        fVar18 = (float)VectorSignedToFloat(uVar19,(byte)(uVar7 >> 0x15) & 3);
        in_fpscr = uVar7 & 0xfffffff | (uint)(fVar18 == fVar17) << 0x1e |
                   (uint)(fVar17 <= fVar18) << 0x1d;
        bVar2 = (byte)(in_fpscr >> 0x18);
        bVar15 = (bool)(bVar2 >> 6);
        if (!bVar15) {
          in_fpscr = uVar7 & 0xfffffff | (uint)(fVar23 == fVar17) << 0x1e |
                     (uint)(fVar17 <= fVar23) << 0x1d;
          bVar2 = (byte)(in_fpscr >> 0x18);
          bVar15 = (bool)(bVar2 >> 6);
        }
        if ((bool)(bVar2 >> 5 & 1) && !bVar15) goto LAB_002fe5a8;
      }
      else {
        fVar18 = (float)VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
        fVar17 = fVar17 / fVar18;
        fVar18 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        fVar18 = fVar18 * fVar17;
        iVar12 = (int)fVar18;
        fVar20 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
        uVar19 = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar18) << 0x1e |
                 (uint)(fVar18 <= fVar20) << 0x1d;
        bVar2 = (byte)(uVar19 >> 0x18);
        bVar15 = (bool)(bVar2 >> 6);
        if (!bVar15) {
          uVar19 = in_fpscr & 0xfffffff | (uint)(fVar23 == fVar18) << 0x1e |
                   (uint)(fVar18 <= fVar23) << 0x1d;
          bVar2 = (byte)(uVar19 >> 0x18);
          bVar15 = (bool)(bVar2 >> 6);
        }
        if ((bool)(bVar2 >> 5 & 1) && !bVar15) {
          iVar12 = iVar12 + -1;
        }
        uVar13 = (ushort)iVar12;
        fVar18 = (float)VectorUnsignedToFloat(iVar14,(byte)(uVar19 >> 0x15) & 3);
        fVar18 = fVar18 * fVar17;
        iVar12 = (int)fVar18;
        fVar20 = (float)VectorSignedToFloat(iVar12,(byte)(uVar19 >> 0x15) & 3);
        uVar7 = uVar19 & 0xfffffff | (uint)(fVar20 == fVar18) << 0x1e |
                (uint)(fVar18 <= fVar20) << 0x1d;
        bVar2 = (byte)(uVar7 >> 0x18);
        bVar15 = (bool)(bVar2 >> 6);
        if (!bVar15) {
          uVar7 = uVar19 & 0xfffffff | (uint)(fVar23 == fVar18) << 0x1e |
                  (uint)(fVar18 <= fVar23) << 0x1d;
          bVar2 = (byte)(uVar7 >> 0x18);
          bVar15 = (bool)(bVar2 >> 6);
        }
        if ((bool)(bVar2 >> 5 & 1) && !bVar15) {
          iVar12 = iVar12 + -1;
        }
        fVar18 = (float)VectorUnsignedToFloat(iVar9,(byte)(uVar7 >> 0x15) & 3);
        fVar18 = fVar18 * fVar17;
        uVar19 = (uint)fVar18;
        fVar17 = (float)VectorSignedToFloat(uVar19,(byte)(uVar7 >> 0x15) & 3);
        in_fpscr = uVar7 & 0xfffffff | (uint)(fVar17 == fVar18) << 0x1e |
                   (uint)(fVar18 <= fVar17) << 0x1d;
        bVar2 = (byte)(in_fpscr >> 0x18);
        bVar15 = (bool)(bVar2 >> 6);
        if (!bVar15) {
          in_fpscr = uVar7 & 0xfffffff | (uint)(fVar23 == fVar18) << 0x1e |
                     (uint)(fVar18 <= fVar23) << 0x1d;
          bVar2 = (byte)(in_fpscr >> 0x18);
          bVar15 = (bool)(bVar2 >> 6);
        }
        if ((bool)(bVar2 >> 5 & 1) && !bVar15) {
LAB_002fe5a8:
          uVar19 = uVar19 - 1;
        }
      }
      uVar7 = local_54;
      while( true ) {
        iVar9 = uVar11 - uVar7;
        uVar6 = uVar11;
        if ((int)uVar7 < (int)uVar11) {
          uVar6 = 400;
          iVar9 = 400 - uVar7;
        }
        uVar5 = local_58;
        if (uVar6 == uVar7 || iVar9 < 0 != SBORROW4(uVar6,uVar7)) break;
        while( true ) {
          bVar16 = SBORROW4(uVar10,uVar5);
          iVar9 = uVar10 - uVar5;
          bVar15 = uVar10 == uVar5;
          if ((int)uVar5 < (int)uVar10) {
            bVar16 = SBORROW4(0xf0,uVar5);
            iVar9 = 0xf0 - uVar5;
            bVar15 = uVar5 == 0xf0;
          }
          if (bVar15 || iVar9 < 0 != bVar16) break;
          uVar6 = *param_2;
          bVar16 = uVar5 <= uVar6;
          bVar15 = uVar6 == uVar5;
          if (bVar16 && !bVar15) {
            bVar16 = uVar7 <= param_2[1];
            bVar15 = param_2[1] == uVar7;
          }
          if (bVar16 && !bVar15) {
            puVar8 = (ushort *)(param_2[2] + (uVar6 * uVar7 + uVar5) * 2);
          }
          else {
            puVar8 = (ushort *)0x0;
          }
          *puVar8 = uVar13 & 0x1f | (ushort)(iVar12 << 5) & 0x7e0 | (ushort)((uVar19 & 0x1f) << 0xb)
          ;
          uVar5 = uVar5 + 1;
        }
        uVar7 = uVar7 + 1;
      }
    }
    local_58 = uVar10;
    if ((0xef < (int)uVar10) && (local_58 = 0, local_54 = uVar11, iVar4 < (int)uVar11)) {
      return;
    }
  } while( true );
}

