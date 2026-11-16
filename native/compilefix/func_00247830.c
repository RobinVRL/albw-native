/* compilefix: USA 00247830 (EU 00247830), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
#include "compilefix.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115C8C(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0026F8D4(int param_1,undefined4 param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_004356B4(int *param_1);
extern int func_004905E0(float fparam_0);
extern int func_004CEAF0(int param_1);
extern int func_00520EE4(int param_1);
extern int func_0058E2B8(int *param_1);
extern float DAT_00247c10;
extern float DAT_00247c14;
extern float DAT_00247c18;
extern float DAT_00247c1c;
extern float DAT_00247c20;
extern float *DAT_00247c24;
extern undefined4 DAT_00247c28;
extern float DAT_00247c2c;
extern float DAT_00247c30;
extern float DAT_00247c34;
extern float DAT_00247c38;
extern float DAT_00247c3c;
extern float DAT_00247c40;
extern float DAT_00247e70;
extern float DAT_00247e74;
extern int *DAT_00247e78;

// USA 00247830 <- EU 00247830 (Ghidra, non-matching)
// GLOBAL DAT_00247c10 float
// GLOBAL DAT_00247c14 float
// GLOBAL DAT_00247c18 float
// GLOBAL DAT_00247c1c float
// GLOBAL DAT_00247c20 float
// GLOBAL DAT_00247c24 float *
// GLOBAL DAT_00247c28 undefined4
// GLOBAL DAT_00247c2c float
// GLOBAL DAT_00247c30 float
// GLOBAL DAT_00247c34 float
// GLOBAL DAT_00247c38 float
// GLOBAL DAT_00247c3c float
// GLOBAL DAT_00247c40 float
// GLOBAL DAT_00247e70 float
// GLOBAL DAT_00247e74 float
// GLOBAL DAT_00247e78 int *

void func_00247830(int param_1,float fparam_0)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  float *pfVar4;
  int iVar5;
  uint in_r1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar6;
  int *piVar7;
  float *pfVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(int * *)(albw_frame + 0x8))
  #define local_84 (*(int * *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define local_7c (*(int * *)(albw_frame + 0x14))
  #define local_78 (*(int * *)(albw_frame + 0x18))
  #define fStack_74 (*(float *)(albw_frame + 0x1c))
  #define piStack_70 (*(int * *)(albw_frame + 0x20))
  #define local_5c (*(float *)(albw_frame + 0x34))
  #define piStack_58 (*(int * *)(albw_frame + 0x38))
  #define piStack_54 (*(int * *)(albw_frame + 0x3c))
  #define local_50 (*(int * *)(albw_frame + 0x40))
  #define local_4c (*(int * *)(albw_frame + 0x44))
  #define local_48 (*(float *)(albw_frame + 0x48))
  #define local_44 (*(int * *)(albw_frame + 0x4c))
  #define fStack_40 (*(float *)(albw_frame + 0x50))
  #define piStack_3c (*(int * *)(albw_frame + 0x54))
  fVar16 = DAT_00247c14;
  fVar15 = DAT_00247c10;
  pfVar8 = (float *)(param_1 + 0x4a4);
  *pfVar8 = DAT_00247c10;
  *(float *)(param_1 + 0x4a8) = fVar15;
  *(float *)(param_1 + 0x4ac) = fVar15;
  *(undefined1 *)(param_1 + 0x4c1) = 0;
  *(undefined1 *)(param_1 + 0x4c3) = 0;
  cVar2 = *(char *)(param_1 + 0x40c);
  uVar18 = CONCAT44(DAT_00247c18,fVar16);
  if (cVar2 != '\0') {
    in_r1 = (uint)*(byte *)(param_1 + 0x414);
  }
  if (cVar2 != '\0' && in_r1 != 0) {
    if (cVar2 != '\x01') {
      fVar16 = DAT_00247c18;
    }
    func_00115DAC((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3d0),
                  fVar16 + *(float *)(param_1 + 0x48));
    *(undefined1 *)(param_1 + 0x4c3) = 1;
  }
  pfVar4 = DAT_00247c24;
  fVar16 = DAT_00247c20;
  uVar17 = CONCAT44(DAT_00247c1c,DAT_00247c20);
  *(float *)(param_1 + 0x3d4) = *(float *)(param_1 + 0x3d4) - DAT_00247c1c;
  *(undefined4 *)(param_1 + 0x3b8) = 0xf;
  *(undefined1 *)(param_1 + 0x4dc) = 0;
  fVar16 = *(float *)(param_1 + 0x468) * *(float *)(param_1 + 0x450) * fVar16;
  func_00115D70(&local_80,pfVar4,fVar16);
  local_5c = local_80;
  piStack_58 = local_7c;
  piStack_54 = local_78;
  func_0014EEC8(param_1,param_1 + 0x3d0,(undefined4 *)(&local_5c),DAT_00247c28,fVar16);
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar8);
  fVar16 = DAT_00247c2c;
  if (*(char *)(param_1 + 0x414) == '\x03') goto LAB_00247b94;
  if (*(char *)(param_1 + 0x4c1) == '\0') {
LAB_00247b00:
    if (*(char *)(param_1 + 0x4c0) != '\0') {
      *(char *)(param_1 + 0x4c2) = *(char *)(param_1 + 0x4c2) + '\x01';
    }
  }
  else {
    if (*(char *)(param_1 + 0x4dc) != '\0') {
      fVar14 = *(float *)(param_1 + 0x4d8);
      fVar13 = *(float *)(param_1 + 0x4d0);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar14 == fVar15) << 0x1e;
      bVar10 = false;
      if (SUB41(uVar12 >> 0x1e,0)) {
        uVar12 = in_fpscr & 0xfffffff | (uint)(fVar13 == fVar15) << 0x1e;
        bVar10 = SUB41(uVar12 >> 0x1e,0);
      }
      if (bVar10) {
        iVar5 = 0;
      }
      else {
        uVar12 = uVar12 & 0xfffffff;
        if (NAN(fVar14) || NAN(fVar15)) {
          if (NAN(fVar13) || NAN(fVar15)) {
            uVar12 = uVar12 | (uint)(fVar14 == fVar13) << 0x1e | (uint)(fVar13 <= fVar14) << 0x1d;
            bVar3 = (byte)(uVar12 >> 0x18);
            if ((bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6)) {
              iVar5 = func_004905E0(fVar14 / fVar13);
              iVar5 = -0x40000000 - iVar5;
            }
            else {
              iVar5 = func_004905E0(fVar13 / fVar14);
              iVar5 = iVar5 + -0x80000000;
            }
          }
          else {
            fVar14 = -fVar14;
            uVar1 = uVar12 | (uint)(fVar14 < fVar13) << 0x1f;
            uVar12 = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
            if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
              iVar5 = func_004905E0(fVar13 / fVar14);
              iVar5 = -0x80000000 - iVar5;
            }
            else {
              iVar5 = func_004905E0(fVar14 / fVar13);
              iVar5 = iVar5 + 0x40000000;
            }
          }
        }
        else if (NAN(fVar13) || NAN(fVar15)) {
          fVar13 = -fVar13;
          uVar1 = uVar12 | (uint)(fVar14 < fVar13) << 0x1f;
          uVar12 = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
          if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
            iVar5 = func_004905E0(fVar13 / fVar14);
            iVar5 = -iVar5;
          }
          else {
            iVar5 = func_004905E0(fVar14 / fVar13);
            iVar5 = iVar5 + -0x40000000;
          }
        }
        else {
          uVar1 = uVar12 | (uint)(fVar14 < fVar13) << 0x1f;
          uVar12 = uVar1 | (uint)(NAN(fVar14) || NAN(fVar13)) << 0x1c;
          if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar12 >> 0x1c) & 1)) {
            iVar5 = func_004905E0(fVar13 / fVar14);
          }
          else {
            iVar5 = func_004905E0(fVar14 / fVar13);
            iVar5 = 0x40000000 - iVar5;
          }
        }
      }
      local_7c = (int *)(*(int *)(param_1 + 1000) - iVar5);
      iVar5 = func_0058E2B8((int *)&local_7c);
      fVar13 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar12 >> 0x15) & 3);
      fVar14 = fVar13 * DAT_00247c30 * DAT_00247c34 - fVar16;
      in_fpscr = uVar12 & 0xfffffff | (uint)(DAT_00247c38 <= fVar14) << 0x1d;
      fVar13 = DAT_00247c38;
      if ((SUB41(in_fpscr >> 0x1d,0)) &&
         (uVar12 = uVar12 & 0xfffffff | (uint)(fVar14 < fVar16) << 0x1f |
                   (uint)(fVar14 == fVar16) << 0x1e,
         in_fpscr = uVar12 | (uint)(NAN(fVar14) || NAN(fVar16)) << 0x1c,
         bVar3 = (byte)(uVar12 >> 0x18), fVar13 = fVar14,
         !(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))) {
        fVar13 = fVar16;
      }
      if (*(char *)(param_1 + 0x40c) == '\x01') {
        fVar14 = ALBW_AS_F32(uVar18);
      }
      else {
        fVar14 = ALBW_AS_F32(((ulonglong)uVar18 >> 0x20));
      }
      fVar13 = ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)) + *(float *)(param_1 + 0x4d4) * fVar13 * fVar14;
      uVar17 = CONCAT44(fVar13,(int)uVar17);
      *(float *)(param_1 + 0x3d4) = fVar13 + *(float *)(param_1 + 0x4c8);
      if (*(char *)(param_1 + 0x4c1) == '\0') goto LAB_00247b00;
    }
    *(undefined1 *)(param_1 + 0x4c2) = 0;
  }
  if (*(char *)(param_1 + 0x4c3) == '\0') {
    fVar13 = *pfVar8;
    uVar12 = in_fpscr & 0xfffffff;
    in_fpscr = uVar12 | (uint)(DAT_00247c40 == fVar13) << 0x1e |
               (uint)(fVar13 <= DAT_00247c40) << 0x1d;
    bVar3 = (byte)(in_fpscr >> 0x18);
    bVar10 = (bool)(bVar3 >> 6);
    bVar11 = (bool)(bVar3 >> 5 & 1);
    if (!bVar11 || bVar10) {
      in_fpscr = uVar12 | (uint)(fVar13 == DAT_00247c3c) << 0x1e |
                 (uint)(DAT_00247c3c <= fVar13) << 0x1d;
      bVar3 = (byte)(in_fpscr >> 0x18);
      bVar10 = (bool)(bVar3 >> 6);
      bVar11 = (bool)(bVar3 >> 5 & 1);
    }
    if (!bVar11 || bVar10) {
      fVar13 = *(float *)(param_1 + 0x4a8);
      uVar12 = in_fpscr & 0xfffffff;
      in_fpscr = uVar12 | (uint)(DAT_00247c40 == fVar13) << 0x1e |
                 (uint)(fVar13 <= DAT_00247c40) << 0x1d;
      bVar3 = (byte)(in_fpscr >> 0x18);
      bVar10 = (bool)(bVar3 >> 6);
      bVar11 = (bool)(bVar3 >> 5 & 1);
      if (!bVar11 || bVar10) {
        in_fpscr = uVar12 | (uint)(fVar13 == DAT_00247c3c) << 0x1e |
                   (uint)(DAT_00247c3c <= fVar13) << 0x1d;
        bVar3 = (byte)(in_fpscr >> 0x18);
        bVar10 = (bool)(bVar3 >> 6);
        bVar11 = (bool)(bVar3 >> 5 & 1);
      }
      if (!bVar11 || bVar10) {
        fVar13 = *(float *)(param_1 + 0x4ac);
        in_fpscr = in_fpscr & 0xfffffff | (uint)(DAT_00247c40 == fVar13) << 0x1e |
                   (uint)(fVar13 <= DAT_00247c40) << 0x1d;
        bVar3 = (byte)(in_fpscr >> 0x18);
        bVar10 = (bool)(bVar3 >> 6);
        bVar11 = (bool)(bVar3 >> 5 & 1);
      }
      if ((!bVar11 || bVar10) &&
         (uVar12 = in_fpscr & 0xfffffff | (uint)(DAT_00247c3c < fVar13) << 0x1f,
         in_fpscr = uVar12 | (uint)(NAN(DAT_00247c3c) || NAN(fVar13)) << 0x1c,
         (byte)(uVar12 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1))) goto LAB_00247b80;
    }
    *(undefined1 *)(param_1 + 0x4c3) = 1;
  }
LAB_00247b80:
  iVar5 = func_00520EE4(param_1);
  if (iVar5 != 0) {
    *(undefined1 *)(param_1 + 0x4c2) = 4;
  }
LAB_00247b94:
  fVar13 = ALBW_AS_F32(uVar17);
  piVar9 = *(int **)(param_1 + 0x444);
  if (*(char *)(param_1 + 0x414) == '\x03') {
    local_50 = *(int **)(param_1 + 0x450);
    local_48 = *(float *)(param_1 + 0x458);
    fVar14 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x410),
                                        (byte)(in_fpscr >> 0x15) & 3);
    local_4c = (int *)CF_FBITS((fVar15 + *(float *)(param_1 + 0x454) * (DAT_00247e70 - fVar14) * DAT_00247e74
                      ));
    func_00115C8C((float *)(piVar9 + 0x16),(float *)(param_1 + 0x468),(float *)&local_50);
    func_00115D70((float *)&local_44,DAT_00247c24,*(float *)(param_1 + 0x46c));
    local_78 = local_44;
    fStack_74 = fStack_40;
    piStack_70 = piStack_3c;
    func_00115D70((float *)&local_44,(float *)&local_78,*(float *)(param_1 + 0x454));
    local_84 = local_44;
    local_80 = fStack_40;
    local_7c = piStack_3c;
    func_00115C54((float *)(piVar9 + 1),(float *)&local_84,(float *)(param_1 + 0x3d0));
    func_00115D70((float *)&local_44,DAT_00247c24,ALBW_AS_F32(piVar9[0x17]));
    local_78 = local_44;
    fStack_74 = fStack_40;
    piStack_70 = piStack_3c;
    func_00115D70((float *)&local_44,(float *)&local_78,fVar13);
    local_84 = local_44;
    local_80 = fStack_40;
    local_7c = piStack_3c;
    func_00115C70((float *)(piVar9 + 1),(float *)(piVar9 + 1),(float *)&local_84);
    piVar7 = piStack_3c;
  }
  else {
    func_00115C8C((float *)(piVar9 + 0x16),(float *)(param_1 + 0x468),(float *)(param_1 + 0x450));
    func_00115D70((float *)&local_50,DAT_00247c24,ALBW_AS_F32(piVar9[0x17]));
    local_7c = local_50;
    local_78 = local_4c;
    fStack_74 = local_48;
    func_00115D70((float *)&local_50,(float *)&local_7c,fVar13);
    local_88 = local_50;
    local_84 = local_4c;
    local_80 = local_48;
    piVar7 = local_4c;
    func_00115C54((float *)(piVar9 + 1),(float *)&local_88,(float *)(param_1 + 0x3d0));
  }
  func_004356B4(piVar9);
  iVar5 = *(int *)(param_1 + 0x434);
  piVar9 = (int *)(param_1 + 0x434);
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_00115154((float *)&local_84,&local_80,*(uint *)(param_1 + 1000));
  *(float *)(iVar5 + 0xa4) = fVar15;
  pfVar8 = (float *)(param_1 + 0x450);
  *(float *)(iVar5 + 0x90) = fVar15;
  *(float *)(iVar5 + 0x94) = fVar16;
  *(float *)(iVar5 + 0x98) = fVar15;
  *(float *)(iVar5 + 0x84) = fVar15;
  *(float *)(iVar5 + 0x80) = local_80;
  *(int **)(iVar5 + 0x88) = local_84;
  *(float *)(iVar5 + 0xa0) = -ALBW_AS_F32(local_84);
  *(float *)(iVar5 + 0xa8) = local_80;
  iVar5 = *piVar9;
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar5 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  iVar5 = *piVar9;
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_00115C8C((float *)(iVar5 + 0x74),(float *)(param_1 + 0x14),pfVar8);
  func_00169A80(*(int **)(param_1 + 0x438),extraout_r1,(undefined4)(uintptr_t)(pfVar8),piVar7);
  uVar6 = 0;
  func_00168E9C(*(int **)(param_1 + 0x438),*piVar9,(int *)0x0);
  func_00169A80(*(int **)(param_1 + 0x440),extraout_r1_00,uVar6,piVar7);
  func_00168E9C(*(int **)(param_1 + 0x440),*piVar9,(int *)0x0);
  func_004CEAF0(*piVar9);
  piVar9 = DAT_00247e78;
  if (*(char *)(param_1 + 0x414) == '\x01' || *(char *)(param_1 + 0x414) == '\x02') {
    local_88 = *(int **)(param_1 + 0x2cc);
    func_0026FC20(*(int *)(*DAT_00247e78 + 0xf9c),(int)(char)*(undefined2 *)(param_1 + 0x4de),
                  (int *)&local_88,(undefined4 *)(param_1 + 0x3d0));
    func_0026F8D4(*(int *)(*piVar9 + 0xf9c),param_1 + 0x3d0);
  }
  return;
}

