#include "ghidra_types.h"

extern int func_0046776C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00467900(int param_1);
extern int func_004683CC(int param_1);
extern int func_004684B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int func_0052A05C(int param_1,uint param_2);
extern int func_00581C5C(int param_1);
extern int func_00581FB4(int param_1);
extern int *DAT_00465dc8;
extern int *DAT_00465dcc;
extern float DAT_00465dd0;
extern float DAT_00465dd4;
extern float DAT_00465dd8;
extern float DAT_00465ddc;
extern float DAT_00465de0;
extern double DAT_00465de8;
extern undefined4 DAT_00465df0;
extern int *DAT_00465fb4;

// USA 00465A80 <- EU 00465A58 (Ghidra, non-matching)
// GLOBAL DAT_00465dc8 int *
// GLOBAL DAT_00465dcc int *
// GLOBAL DAT_00465dd0 float
// GLOBAL DAT_00465dd4 float
// GLOBAL DAT_00465dd8 float
// GLOBAL DAT_00465ddc float
// GLOBAL DAT_00465de0 float
// GLOBAL DAT_00465de8 double
// GLOBAL DAT_00465df0 undefined4
// GLOBAL DAT_00465fb4 int *

void func_00465A80(int param_1)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  double dVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  char cVar14;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  undefined4 in_r3;
  int iVar18;
  int iVar19;
  uint in_fpscr;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  
  iVar18 = *DAT_00465dc8;
  if (iVar18 == 0 || *DAT_00465dcc == 0) {
    *(undefined1 *)(param_1 + 0x129) = 1;
    iVar19 = 3;
    *(undefined1 *)(param_1 + 300) = 0;
  }
  else {
    if ((int)*(char *)(*DAT_00465dcc + 0x18) - 9U < 0xd) {
      iVar19 = func_00581FB4(iVar18);
      fVar20 = (float)VectorSignedToFloat(iVar19,(byte)(in_fpscr >> 0x15) & 3);
      uVar16 = in_fpscr & 0xfffffff | (uint)(fVar20 < DAT_00465dd0) << 0x1f |
               (uint)(fVar20 == DAT_00465dd0) << 0x1e;
      in_fpscr = uVar16 | (uint)(NAN(fVar20) || NAN(DAT_00465dd0)) << 0x1c;
      bVar10 = (byte)(uVar16 >> 0x18);
      if (!(bool)(bVar10 >> 6 & 1) && bVar10 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        fVar20 = DAT_00465dd0;
      }
      iVar19 = (int)fVar20;
      if (iVar19 < 1) {
        iVar19 = 3;
        goto LAB_00465ad0;
      }
      *(undefined1 *)(param_1 + 300) = 1;
    }
    else {
      iVar19 = 1;
LAB_00465ad0:
      *(undefined1 *)(param_1 + 300) = 0;
    }
    iVar11 = func_00581C5C(iVar18);
    if (iVar11 == 0) {
      *(undefined1 *)(param_1 + 0x129) = 1;
      *(undefined1 *)(param_1 + 300) = 0;
    }
    else {
      *(char *)(param_1 + 0x129) = (char)*(undefined2 *)(iVar11 + 0x46);
    }
    *(char *)(param_1 + 0x12a) = (char)*(undefined2 *)(*(int *)(iVar18 + 0x40) + 8);
  }
  iVar11 = (int)*(char *)(param_1 + 299);
  if (*(char *)(param_1 + 300) != '\0') {
    bVar9 = *(char *)(param_1 + 0x129) != iVar11;
    iVar12 = iVar11;
    if (iVar11 != 0 && bVar9) {
      iVar12 = param_1;
    }
    *(char *)(param_1 + 299) = *(char *)(param_1 + 0x129);
    if (iVar11 != 0 && bVar9) {
      func_004683CC(iVar12);
    }
  }
  if (iVar18 != 0) {
    *(char *)(param_1 + 0x125) = (char)*(undefined2 *)(*(int *)(iVar18 + 0x40) + 4);
    *(char *)(param_1 + 0x124) = (char)*(undefined2 *)(*(int *)(iVar18 + 0x40) + 6);
    iVar11 = func_00581FB4(iVar18);
    *(char *)(param_1 + 0x128) = (char)iVar11;
    iVar11 = *(int *)(iVar18 + 0x40);
    if (((0 < *(short *)(iVar11 + 0xc)) &&
        (bVar9 = func_0052A05C(iVar11,(int)*(short *)(iVar11 + 0xc)), bVar9)) ||
       (*(short *)(iVar11 + 10) < 1)) {
      iVar18 = *(int *)(iVar18 + 0x40);
      if (((*(short *)(iVar18 + 0xc) < 1) ||
          (bVar9 = func_0052A05C(iVar18,(int)*(short *)(iVar18 + 0xc)), !bVar9)) &&
         (*(short *)(iVar18 + 10) < 0)) {
        *(char *)(param_1 + 0x125) = *(char *)(param_1 + 0x125) + '\x01';
        *(char *)(param_1 + 0x128) = *(char *)(param_1 + 0x128) + -1;
      }
    }
    else {
      *(char *)(param_1 + 0x124) = *(char *)(param_1 + 0x124) + -1;
      *(char *)(param_1 + 0x128) = *(char *)(param_1 + 0x128) + -1;
    }
  }
  uVar16 = 0xffffffff;
  if (iVar19 < 5) {
    *(undefined1 *)(param_1 + 0x127) = *(undefined1 *)(param_1 + 0x125);
    bVar10 = *(byte *)(param_1 + 0x124);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x129);
    bVar10 = *(byte *)(param_1 + 0x124);
    if (bVar2 == bVar10) {
      if (bVar10 == 2 || bVar10 == 1) {
        cVar14 = bVar10 - 3;
      }
      else {
        cVar14 = bVar10 - 2;
      }
      *(char *)(param_1 + 0x127) = cVar14;
    }
    else {
      bVar10 = *(byte *)(param_1 + 0x125);
      if (bVar2 == bVar10) {
        *(byte *)(param_1 + 0x127) = bVar10;
        if (bVar10 < 0xfe) {
          bVar10 = bVar10 + 2;
        }
        else {
          bVar10 = bVar10 + 3;
        }
      }
      else {
        if (bVar2 == 1) {
          *(undefined1 *)(param_1 + 0x127) = 0xff;
        }
        else {
          *(byte *)(param_1 + 0x127) = bVar2 - 1;
          if (bVar2 == 0xff) goto LAB_00465c64;
        }
        bVar10 = bVar2 + 1;
      }
    }
  }
  *(byte *)(param_1 + 0x126) = bVar10;
LAB_00465c64:
  if (*(char *)(param_1 + 300) != '\0') {
    func_00467900(param_1);
    func_0046776C(param_1,extraout_r1,uVar16,in_r3);
    func_004684B0(param_1,extraout_r1_00,uVar16,in_r3);
    uVar22 = DAT_00465df0;
    dVar8 = DAT_00465de8;
    fVar7 = DAT_00465de0;
    fVar6 = DAT_00465ddc;
    fVar5 = DAT_00465dd8;
    fVar20 = DAT_00465dd4;
    fVar23 = *(float *)(*(int *)(param_1 + 0x204) + 0x20);
    uVar21 = *(undefined4 *)(*(int *)(param_1 + 500) + 0x1c);
    uVar16 = 0;
    do {
      cVar14 = *(char *)(param_1 + 0x128);
      if (cVar14 == '\x01') {
        piVar17 = (int *)(param_1 + 500);
        fVar24 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
        dVar26 = (double)(fVar23 + fVar24 * fVar6);
        iVar18 = VectorFloatToSigned(dVar26,3);
        dVar27 = (double)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
        uVar1 = in_fpscr & 0xfffffff;
        in_fpscr = uVar1 | (uint)(dVar27 == dVar26) << 0x1e | (uint)(dVar26 <= dVar27) << 0x1d;
        bVar10 = (byte)(in_fpscr >> 0x18);
        bVar9 = (bool)(bVar10 >> 6);
        if (!bVar9) {
          in_fpscr = uVar1 | (uint)(dVar8 == dVar26) << 0x1e | (uint)(dVar26 <= dVar8) << 0x1d;
          bVar10 = (byte)(in_fpscr >> 0x18);
          bVar9 = (bool)(bVar10 >> 6);
        }
        if ((bool)(bVar10 >> 5 & 1) && !bVar9) {
          iVar18 = iVar18 + -1;
        }
        if (uVar16 < 4) {
          piVar17 = piVar17 + uVar16;
        }
        iVar19 = *piVar17;
        uVar25 = ALBW_AS_U32(VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(iVar19 + 0x24) = uVar22;
        *(undefined4 *)(iVar19 + 0x1c) = uVar21;
        *(undefined4 *)(iVar19 + 0x20) = uVar25;
        *(byte *)(iVar19 + 0x44) = *(byte *)(iVar19 + 0x44) & 0xef | 0x10;
      }
      else {
        if (cVar14 == '\x02') {
          fVar24 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
          dVar26 = (double)(fVar23 + (fVar24 - fVar20) * fVar6);
          iVar18 = VectorFloatToSigned(dVar26,3);
          dVar27 = (double)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
          uVar1 = in_fpscr & 0xfffffff;
          in_fpscr = uVar1 | (uint)(dVar27 == dVar26) << 0x1e | (uint)(dVar26 <= dVar27) << 0x1d;
          bVar10 = (byte)(in_fpscr >> 0x18);
          bVar9 = (bool)(bVar10 >> 6);
          if (!bVar9) {
            in_fpscr = uVar1 | (uint)(dVar8 == dVar26) << 0x1e | (uint)(dVar26 <= dVar8) << 0x1d;
            bVar10 = (byte)(in_fpscr >> 0x18);
            bVar9 = (bool)(bVar10 >> 6);
          }
          if ((bool)(bVar10 >> 5 & 1) && !bVar9) {
            iVar18 = iVar18 + -1;
          }
          uVar25 = ALBW_AS_U32(VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3));
        }
        else {
          fVar24 = (float)VectorSignedToFloat(uVar16,(byte)(in_fpscr >> 0x15) & 3);
          if (cVar14 == '\x04') {
            piVar17 = (int *)(param_1 + 500);
            dVar26 = (double)(fVar23 + (fVar24 - fVar5) * fVar6);
            iVar18 = VectorFloatToSigned(dVar26,3);
            dVar27 = (double)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
            uVar1 = in_fpscr & 0xfffffff;
            in_fpscr = uVar1 | (uint)(dVar27 == dVar26) << 0x1e | (uint)(dVar26 <= dVar27) << 0x1d;
            bVar10 = (byte)(in_fpscr >> 0x18);
            bVar9 = (bool)(bVar10 >> 6);
            if (!bVar9) {
              in_fpscr = uVar1 | (uint)(dVar8 == dVar26) << 0x1e | (uint)(dVar26 <= dVar8) << 0x1d;
              bVar10 = (byte)(in_fpscr >> 0x18);
              bVar9 = (bool)(bVar10 >> 6);
            }
            if ((bool)(bVar10 >> 5 & 1) && !bVar9) {
              iVar18 = iVar18 + -1;
            }
            if (uVar16 < 4) {
              piVar17 = piVar17 + uVar16;
            }
            iVar19 = *piVar17;
            uVar25 = ALBW_AS_U32(VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3));
            *(undefined4 *)(iVar19 + 0x1c) = uVar21;
            *(undefined4 *)(iVar19 + 0x20) = uVar25;
            *(undefined4 *)(iVar19 + 0x24) = uVar22;
            *(byte *)(iVar19 + 0x44) = *(byte *)(iVar19 + 0x44) & 0xef | 0x10;
            goto LAB_00465e6c;
          }
          dVar26 = (double)(fVar23 + (fVar24 - fVar7) * fVar6);
          iVar18 = VectorFloatToSigned(dVar26,3);
          dVar27 = (double)VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3);
          uVar1 = in_fpscr & 0xfffffff;
          in_fpscr = uVar1 | (uint)(dVar27 == dVar26) << 0x1e | (uint)(dVar26 <= dVar27) << 0x1d;
          bVar10 = (byte)(in_fpscr >> 0x18);
          bVar9 = (bool)(bVar10 >> 6);
          if (!bVar9) {
            in_fpscr = uVar1 | (uint)(dVar8 == dVar26) << 0x1e | (uint)(dVar26 <= dVar8) << 0x1d;
            bVar10 = (byte)(in_fpscr >> 0x18);
            bVar9 = (bool)(bVar10 >> 6);
          }
          if ((bool)(bVar10 >> 5 & 1) && !bVar9) {
            iVar18 = iVar18 + -1;
          }
          uVar25 = ALBW_AS_U32(VectorSignedToFloat(iVar18,(byte)(in_fpscr >> 0x15) & 3));
        }
        piVar17 = (int *)(param_1 + 500);
        if (uVar16 < 4) {
          piVar17 = (int *)(param_1 + 500 + uVar16 * 4);
        }
        iVar18 = *piVar17;
        *(undefined4 *)(iVar18 + 0x1c) = uVar21;
        *(undefined4 *)(iVar18 + 0x20) = uVar25;
        *(undefined4 *)(iVar18 + 0x24) = uVar22;
        *(byte *)(iVar18 + 0x44) = *(byte *)(iVar18 + 0x44) & 0xef | 0x10;
      }
LAB_00465e6c:
      uVar16 = uVar16 + 1;
    } while ((int)uVar16 < 4);
    puVar13 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar13[4] == 0) {
      if ((undefined4 *)puVar13[1] == (undefined4 *)0x0) {
        (**(code **)(*(int *)*puVar13 + 0x30))((int *)*puVar13,*DAT_00465fb4 + 0x6b4,1);
      }
      else {
        piVar17 = *(int **)puVar13[1];
        (**(code **)(*piVar17 + 0x30))(piVar17,*DAT_00465fb4 + 0x6b4,1);
      }
    }
    uVar16 = 0;
    do {
      piVar17 = (int *)(param_1 + 500);
      if (uVar16 < 4) {
        piVar17 = piVar17 + uVar16;
      }
      piVar15 = (int *)(param_1 + 0x1e4);
      iVar18 = *piVar17;
      if (uVar16 < 4) {
        piVar15 = piVar15 + uVar16;
      }
      uVar16 = uVar16 + 1;
      iVar19 = *piVar15;
      uVar22 = *(undefined4 *)(iVar18 + 0x4c);
      uVar21 = *(undefined4 *)(iVar18 + 0x50);
      uVar25 = *(undefined4 *)(iVar18 + 0x54);
      uVar3 = *(undefined8 *)(iVar18 + 0x58);
      uVar4 = *(undefined8 *)(iVar18 + 0x60);
      *(undefined4 *)(iVar19 + 0x48) = *(undefined4 *)(iVar18 + 0x48);
      *(undefined4 *)(iVar19 + 0x4c) = uVar22;
      *(undefined4 *)(iVar19 + 0x50) = uVar21;
      *(undefined4 *)(iVar19 + 0x54) = uVar25;
      *(int *)(iVar19 + 0x58) = (int)uVar3;
      *(int *)(iVar19 + 0x5c) = (int)((ulonglong)uVar3 >> 0x20);
      *(int *)(iVar19 + 0x60) = (int)uVar4;
      *(int *)(iVar19 + 100) = (int)((ulonglong)uVar4 >> 0x20);
      uVar21 = *(undefined4 *)(iVar18 + 0x70);
      uVar22 = *(undefined4 *)(iVar18 + 0x68);
      uVar25 = *(undefined4 *)(iVar18 + 0x6c);
      *(undefined4 *)(iVar19 + 0x74) = *(undefined4 *)(iVar18 + 0x74);
      *(undefined4 *)(iVar19 + 0x70) = uVar21;
      *(undefined4 *)(iVar19 + 0x68) = uVar22;
      *(undefined4 *)(iVar19 + 0x6c) = uVar25;
      *(byte *)(iVar19 + 0x44) = *(byte *)(iVar19 + 0x44) & 0xbf | 0x40;
    } while ((int)uVar16 < 4);
  }
  return;
}

