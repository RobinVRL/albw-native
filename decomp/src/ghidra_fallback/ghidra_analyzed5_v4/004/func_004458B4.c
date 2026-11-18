#include "ghidra_types.h"

extern int func_00449C40(int param_1);
extern int func_00449FD0(int param_1,int *param_2);
extern int func_0044A798(int param_1);
extern int func_0044AEC8(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0044AFE8(int param_1);
extern int func_0044D0EC(int param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_0046A1D4(int param_1,int param_2);
extern int func_004727B8(int param_1,int param_2);
extern int func_0047E8C4(int param_1,int param_2,int param_3);
extern int func_0051B0B4(int param_1);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0058DE90(int param_1);
extern int func_0058E1A8(int param_1);
extern int func_0066CC58(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00445bfc;
extern float DAT_00445c00;
extern int *DAT_00445c04;
extern int DAT_00445c24;
extern int *DAT_00445c28;
extern float DAT_00445c2c;
extern float DAT_00445c30;
extern float DAT_00445c34;
extern float DAT_00445c38;
extern float DAT_00445c3c;
extern char s_SE_S_MAP_KINSTA_ON_FIELD_00445c08[];

// USA 004458B4 <- EU 0044588C (Ghidra, non-matching)
// GLOBAL DAT_00445bfc undefined4
// GLOBAL DAT_00445c00 float
// GLOBAL DAT_00445c04 int *
// GLOBAL DAT_00445c24 int
// GLOBAL DAT_00445c28 int *
// GLOBAL DAT_00445c2c float
// GLOBAL DAT_00445c30 float
// GLOBAL DAT_00445c34 float
// GLOBAL DAT_00445c38 float
// GLOBAL DAT_00445c3c float
// GLOBAL s_SE_S_MAP_KINSTA_ON_FIELD_00445c08 string

undefined4 func_004458B4(int param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  ushort uVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  undefined4 extraout_r1_00;
  uint uVar9;
  undefined4 uVar10;
  int in_r3;
  int iVar11;
  bool bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  func_00449FD0(param_1,(int *)0x1);
  if (*(int *)(param_1 + 0x280) != 0) {
    *(int *)(param_1 + 0x280) = *(int *)(param_1 + 0x280) + -1;
  }
  iVar5 = func_0044A798(param_1);
  piVar3 = DAT_00445c28;
  piVar2 = DAT_00445c04;
  fVar18 = DAT_00445c00;
  uVar19 = DAT_00445bfc;
  if (iVar5 == 0) {
    if (*(char *)(param_1 + 0x284) == '\0') {
      uVar6 = *(uint *)(param_1 + 0x20c);
      uVar9 = (uint)*(byte *)(uVar6 + 0x5f);
      if (uVar9 == 0) {
        uVar6 = (uint)*(byte *)(uVar6 + 0x5d);
      }
      if (uVar9 != 0 || uVar6 != 0) {
        *(undefined1 *)(param_1 + 0x291) = 0;
        func_00449C40(param_1);
        uVar8 = extraout_r1;
        if (*(float *)(param_1 + 0x260) <= fVar18) {
          *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
          uVar8 = *(undefined4 *)(param_1 + 0x24c);
          *(undefined4 *)(param_1 + 0x25c) = uVar8;
          *(undefined4 *)(param_1 + 0x260) = uVar19;
        }
        if (*(char *)(param_1 + 0x15c) == '\x02') {
          func_0044AEC8(param_1,uVar8,uVar9,in_r3);
        }
LAB_00445950:
        return func_0066CC58((undefined4 *)(param_1 + 0x158),1);
      }
      uVar6 = *(uint *)(param_1 + 0x210);
      bVar12 = *(char *)(uVar6 + 0x5f) == '\0';
      if (bVar12) {
        uVar6 = (uint)*(byte *)(uVar6 + 0x5d);
      }
      if (bVar12 && uVar6 == 0) {
        uVar8 = *(undefined4 *)(*DAT_00445c28 + 0x10);
        uVar10 = *(undefined4 *)(*DAT_00445c28 + 0x14);
        *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(param_1 + 0x26c);
        iVar11 = *(int *)(param_1 + 0x270);
        *(int *)(param_1 + 0x278) = iVar11;
        *(undefined4 *)(param_1 + 0x26c) = uVar8;
        *(undefined4 *)(param_1 + 0x270) = uVar10;
        uVar6 = (uint)*(char *)(param_1 + 0x292);
        iVar5 = func_0058DE90(*piVar2);
        if (((iVar5 != 0) && (iVar5 = func_0051B0B4(*piVar2), iVar5 != 0)) &&
           ((*(ushort *)(*(int *)(param_1 + 0x230) + 0x16) & 8) != 0)) {
          if (*(char *)(param_1 + 0x208) != '\0') {
            func_0044D0EC(*piVar2,extraout_r1_00,uVar10,iVar11);
            func_0044AFE8(param_1);
          }
          uVar6 = 1;
        }
        iVar5 = func_0058E1A8(*piVar2);
        if (iVar5 != 0) {
          uVar6 = 1;
        }
        func_004727B8(*(int *)(param_1 + 0x20c),uVar6 ^ 1);
        func_0047E8C4(*(int *)(param_1 + 0x210),uVar6 ^ 1,(int)*(char *)(param_1 + 0x293));
        func_0046A1D4(*(int *)(param_1 + 0x214),uVar6 ^ 1);
        uVar7 = *(ushort *)(*(int *)(param_1 + 0x230) + 0x16);
        if (*(char *)(param_1 + 0x292) == '\0') {
          uVar7 = uVar7 | 0x40;
        }
        else {
          uVar7 = uVar7 & 0xffbf;
        }
        *(ushort *)(*(int *)(param_1 + 0x230) + 0x16) = uVar7;
        fVar4 = DAT_00445c38;
        fVar16 = DAT_00445c34;
        fVar15 = DAT_00445c30;
        if ((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 0x10) != 0) {
          if (*(int *)(param_1 + 0x280) == 0) {
            *(undefined4 *)(param_1 + 0x280) = 0x14;
          }
          else if (uVar6 == 0) {
            fVar17 = *(float *)(*piVar3 + 0x14);
            fVar13 = (DAT_00445c2c - *(float *)(*piVar3 + 0x10)) * DAT_00445c30;
            uVar6 = in_fpscr & 0xfffffff | (uint)(DAT_00445c34 <= fVar13) << 0x1d;
            fVar14 = DAT_00445c34;
            if ((SUB41(uVar6 >> 0x1d,0)) &&
               (uVar6 = in_fpscr & 0xfffffff | (uint)(fVar13 < DAT_00445c38) << 0x1f |
                        (uint)(fVar13 == DAT_00445c38) << 0x1e, bVar1 = (byte)(uVar6 >> 0x18),
               fVar14 = fVar13,
               !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar13) || NAN(DAT_00445c38))))
            {
              fVar14 = DAT_00445c38;
            }
            iVar5 = (int)fVar14;
            fVar13 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
            uVar9 = uVar6 & 0xfffffff | (uint)(fVar13 == fVar14) << 0x1e |
                    (uint)(fVar14 <= fVar13) << 0x1d;
            bVar1 = (byte)(uVar9 >> 0x18);
            bVar12 = (bool)(bVar1 >> 6);
            if (!bVar12) {
              uVar9 = uVar6 & 0xfffffff | (uint)(fVar18 == fVar14) << 0x1e |
                      (uint)(fVar14 <= fVar18) << 0x1d;
              bVar1 = (byte)(uVar9 >> 0x18);
              bVar12 = (bool)(bVar1 >> 6);
            }
            if ((bool)(bVar1 >> 5 & 1) && !bVar12) {
              iVar5 = iVar5 + -1;
            }
            uVar8 = ALBW_AS_U32(VectorSignedToFloat(iVar5,(byte)(uVar9 >> 0x15) & 3));
            *(undefined4 *)(param_1 + 0x250) = uVar8;
            fVar15 = (DAT_00445c3c - fVar17) * fVar15;
            uVar6 = uVar9 & 0xfffffff | (uint)(fVar16 <= fVar15) << 0x1d;
            if ((SUB41(uVar6 >> 0x1d,0)) &&
               (uVar6 = uVar9 & 0xfffffff | (uint)(fVar15 < fVar4) << 0x1f |
                        (uint)(fVar15 == fVar4) << 0x1e, bVar1 = (byte)(uVar6 >> 0x18),
               fVar16 = fVar15,
               !(bool)(bVar1 >> 6 & 1) && (bool)(bVar1 >> 7) == (NAN(fVar15) || NAN(fVar4)))) {
              fVar16 = fVar4;
            }
            iVar5 = (int)fVar16;
            fVar15 = (float)VectorSignedToFloat(iVar5,(byte)(uVar6 >> 0x15) & 3);
            uVar9 = uVar6 & 0xfffffff | (uint)(fVar15 == fVar16) << 0x1e |
                    (uint)(fVar16 <= fVar15) << 0x1d;
            bVar1 = (byte)(uVar9 >> 0x18);
            bVar12 = (bool)(bVar1 >> 6);
            if (!bVar12) {
              uVar9 = uVar6 & 0xfffffff | (uint)(fVar18 == fVar16) << 0x1e |
                      (uint)(fVar16 <= fVar18) << 0x1d;
              bVar1 = (byte)(uVar9 >> 0x18);
              bVar12 = (bool)(bVar1 >> 6);
            }
            if ((bool)(bVar1 >> 5 & 1) && !bVar12) {
              iVar5 = iVar5 + -1;
            }
            uVar8 = ALBW_AS_U32(VectorSignedToFloat(iVar5,(byte)(uVar9 >> 0x15) & 3));
            *(undefined4 *)(param_1 + 0x254) = uVar8;
            *(undefined4 *)(param_1 + 600) = *(undefined4 *)(param_1 + 0x248);
            *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(param_1 + 0x24c);
            *(undefined4 *)(param_1 + 0x260) = uVar19;
            goto LAB_00445950;
          }
        }
      }
      else {
        if ((*(char *)(param_1 + 0x293) != '\0') ||
           ((iVar5 = func_0058DE90(*DAT_00445c04), iVar5 != 0 &&
            (iVar5 = func_0051B0B4(*piVar2), iVar5 != 0)))) {
          func_0066CC58((undefined4 *)(param_1 + 0x158),4);
        }
        if (*(char *)(*(int *)(param_1 + 0x210) + 0x5f) != '\0') {
          local_24 = s_SE_S_MAP_KINSTA_ON_FIELD_00445c08;
          local_28 = DAT_00445c24;
          return func_00533078(*(undefined4 *)(param_1 + 0x210),&local_28,0);
        }
      }
    }
    else {
      func_0066CC58((undefined4 *)(param_1 + 0x158),9);
    }
  }
  return 0;
}

