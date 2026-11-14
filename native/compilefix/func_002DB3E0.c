/* compilefix: USA 002DB3E0 (EU 002DB3BC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002dba97[];
extern char s_cf_002dba98[];
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00114608(uint param_1,uint param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_001329B4(int param_1);
extern int func_0016BAF8(int param_1,int param_2,int param_3);
extern int func_002706E0(int param_1,int param_2);
extern float func_0028D580(uint *param_1,int param_2,undefined1 param_3,undefined1 param_4,uint param_5);
extern int func_00291CB4(int param_1,undefined1 param_2);
extern int func_0029603C(int param_1);
extern int func_002D55D0(int param_1,uint param_2);
extern int func_004CEAF0(int param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EAF8C(int param_1,int *param_2,int param_3);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern float func_00584D0C(int param_1);
extern float DAT_002db73c;
extern float DAT_002db740;
extern int DAT_002db744;
extern int *DAT_002db748;
extern float DAT_002db74c;
extern float *DAT_002db750;
extern int *DAT_002db754;
extern int *DAT_002db758;
extern float DAT_002db75c;
extern float DAT_002db760;
extern int *DAT_002db764;
extern int DAT_002db768;
extern undefined4 DAT_002db76c;
extern float DAT_002db770;
extern float DAT_002db774;
extern undefined DAT_002dba94;
extern int DAT_002dbaa8;
extern int *DAT_002dbaac;
extern float DAT_002dbac0;
extern float DAT_002dbac4;
extern float DAT_002dbac8;
extern int *DAT_002dbacc;
extern char s_SE_PV_DOWN_END_002dbab0[];
extern undefined4 _DAT_002dba94;

// USA 002DB3E0 <- EU 002DB3BC (Ghidra, non-matching)
// GLOBAL DAT_002db73c float
// GLOBAL DAT_002db740 float
// GLOBAL DAT_002db744 int
// GLOBAL DAT_002db748 int *
// GLOBAL DAT_002db74c float
// GLOBAL DAT_002db750 float *
// GLOBAL DAT_002db754 int *
// GLOBAL DAT_002db758 int *
// GLOBAL DAT_002db75c float
// GLOBAL DAT_002db760 float
// GLOBAL DAT_002db764 int *
// GLOBAL DAT_002db768 int
// GLOBAL DAT_002db76c undefined4
// GLOBAL DAT_002db770 float
// GLOBAL DAT_002db774 float
// GLOBAL DAT_002dba94 undefined
// GLOBAL DAT_002dbaa8 int
// GLOBAL DAT_002dbaac int *
// GLOBAL DAT_002dbac0 float
// GLOBAL DAT_002dbac4 float
// GLOBAL DAT_002dbac8 float
// GLOBAL DAT_002dbacc int *
// GLOBAL s_cf_002dba97 string
// GLOBAL s_SE_PV_DOWN_END_002dbab0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002DB3E0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  fVar17 = DAT_002db740;
  fVar15 = DAT_002db73c;
  if (((*(uint *)(DAT_002db744 + 4) & 1) == 0) &&
     (iVar5 = func_00100174(DAT_002db748), pfVar7 = DAT_002db750, fVar16 = DAT_002db74c, iVar5 != 0)
     ) {
    *DAT_002db750 = DAT_002db74c;
    pfVar7[1] = fVar17;
    pfVar7[2] = fVar17;
    pfVar7[3] = fVar17;
    pfVar7[4] = fVar17;
    pfVar7[5] = fVar16;
    pfVar7[6] = fVar17;
    pfVar7[7] = fVar17;
    pfVar7[8] = fVar17;
    pfVar7[9] = fVar17;
    pfVar7[10] = fVar16;
    pfVar7[0xb] = fVar15;
  }
  piVar8 = DAT_002db754;
  iVar5 = func_001329B4(*DAT_002db754);
  iVar6 = *(int *)(param_1 + 0x78);
  *(uint *)(iVar6 + 0x164) = *(uint *)(iVar6 + 0x164) | 0x40000000;
  func_001157FC((float *)(iVar6 + 0x80),(float *)(iVar5 + 0x120),DAT_002db750);
  func_004CEAF0(*(int *)(param_1 + 0x78));
  fVar19 = DAT_002db760;
  fVar16 = DAT_002db75c;
  piVar1 = DAT_002db758;
  pfVar7 = *(float **)(param_1 + 0x34);
  *pfVar7 = fVar17;
  pfVar7[1] = fVar17;
  pfVar7[2] = fVar17;
  piVar2 = DAT_002db764;
  if (param_2 == 0x98) {
    iVar5 = *(int *)(*piVar1 + 0x44);
    if ((iVar5 == 0) || (iVar5 != *(int *)(*(int *)(param_1 + 0x2c) + 0x68))) {
      return func_002D55D0(param_1,0);
    }
    if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x84) && *(uint *)(param_1 + 0x80) < 0x2d) {
      *(undefined1 *)(*piVar8 + 0x2c1c) = 0;
    }
    else {
      *(undefined1 *)(*piVar8 + 0x2c1c) = 1;
    }
    iVar5 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar6 + 0x3d0);
    *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar6 + 0x3d4);
    uVar10 = *(uint *)(iVar6 + 0x3d8);
    *(uint *)(iVar5 + 0xac) = uVar10;
    uVar9 = *(uint *)(param_1 + 0x84);
    iVar5 = *(int *)(param_1 + 0x74);
    if (uVar9 != 0) {
      uVar10 = *(uint *)(param_1 + 0x80);
    }
    if ((uVar9 != 0 && uVar10 != 0) && (fVar17 = fVar19, uVar10 < uVar9)) {
      fVar17 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar17 = fVar17 * *(float *)(param_1 + 0x88);
    }
    fVar15 = *(float *)(param_1 + 0x7c);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    fVar15 = (fVar19 - fVar17) * fVar15;
    if (fVar15 < fVar16) {
      fVar15 = fVar16;
    }
    *(float *)(iVar5 + 0x74) = fVar15;
    *(float *)(iVar5 + 0x78) = fVar15;
    *(float *)(iVar5 + 0x7c) = fVar15;
    func_004CEAF0(*(int *)(param_1 + 0x74));
    if (*(uint *)(param_1 + 0x84) <= *(uint *)(param_1 + 0x80)) {
      if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x38) {
        return 0;
      }
      return func_002D55D0(param_1,0x99);
    }
    *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) + 1;
    return 0;
  }
  if (param_2 != 0x99) {
    if (param_2 != 0x9a) {
      if (param_2 != 0x9b) {
        return 0;
      }
      iVar5 = *DAT_002db764;
      if (*(int *)(iVar5 + 0xf74) != 0) {
        iVar11 = *(int *)(*(int *)(iVar5 + 0xf74) + 0x20);
        iVar6 = 0;
        if (iVar11 != 0) {
          iVar6 = *(int *)(iVar11 + 4);
        }
        if (iVar11 != 0 && iVar6 != 0) {
          func_0016BAF8(iVar5,2,(int)*(char *)(DAT_002db768 + iVar5));
        }
      }
      *(undefined1 *)(*piVar8 + 0x2c1c) = 1;
      return 0;
    }
    if (0x1e < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
      func_0051D2CC(*(int **)(param_1 + 0x3c),0,DAT_002dbac4);
    }
    uVar9 = *(uint *)(*(int *)(param_1 + 0x2c) + 0x44);
    uVar10 = uVar9;
    if (0x50 < uVar9) {
      uVar10 = *(uint *)(param_1 + 0x4c);
    }
    if (0x50 < uVar9) {
      *(float *)(uVar10 + 0x100) = fVar19;
    }
    iVar5 = *(int *)(param_1 + 0x74);
    iVar6 = *(int *)(param_1 + 0x28);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar5 + 0x8c) = *(undefined4 *)(iVar6 + 0x3d0);
    *(undefined4 *)(iVar5 + 0x9c) = *(undefined4 *)(iVar6 + 0x3d4);
    uVar10 = *(uint *)(iVar6 + 0x3d8);
    *(uint *)(iVar5 + 0xac) = uVar10;
    fVar15 = DAT_002dbac8;
    iVar5 = *(int *)(param_1 + 0x74);
    bVar13 = *(uint *)(param_1 + 0x84) != 0;
    if (bVar13) {
      uVar10 = *(uint *)(param_1 + 0x80);
    }
    fVar18 = fVar17;
    if (bVar13 && uVar10 != 0) {
      fVar18 = fVar19;
    }
    if ((bVar13 && uVar10 != 0) && uVar10 < *(uint *)(param_1 + 0x84)) {
      fVar18 = (float)VectorUnsignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      fVar18 = fVar18 * *(float *)(param_1 + 0x88);
    }
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    fVar19 = fVar18 * fVar15;
    if (fVar18 * fVar15 < fVar16) {
      fVar19 = fVar16;
    }
    *(float *)(iVar5 + 0x74) = fVar19;
    *(float *)(iVar5 + 0x78) = fVar19;
    *(float *)(iVar5 + 0x7c) = fVar19;
    func_004CEAF0(*(int *)(param_1 + 0x74));
    piVar4 = DAT_002dbacc;
    if (*(int *)(*(int *)(param_1 + 0x2c) + 0x44) == 0x82) {
      func_002706E0(*DAT_002dbacc,0x5a);
      *(undefined1 *)(*piVar4 + 0x5c) = 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 0x82) {
      *(undefined1 *)(*piVar8 + 0x2c1c) = 1;
    }
    else {
      if (*(uint *)(param_1 + 0x80) < *(uint *)(param_1 + 0x84)) {
        *(uint *)(param_1 + 0x80) = *(uint *)(param_1 + 0x80) + 1;
      }
      *(undefined1 *)(*piVar8 + 0x2c1c) = 0;
    }
    if (*(uint *)(*(int *)(param_1 + 0x2c) + 0x44) < 100) {
      iVar6 = *piVar2;
      bVar13 = *(int *)(iVar6 + 0xf74) != 0;
      iVar5 = 0;
      if (bVar13) {
        iVar5 = *(int *)(*(int *)(iVar6 + 0xf74) + 0x20);
      }
      bVar14 = iVar5 != 0;
      if (bVar13 && bVar14) {
        iVar5 = *(int *)(iVar5 + 4);
      }
      if ((bVar13 && bVar14) && iVar5 != 0) {
        func_0016BAF8(iVar6,2,(int)*(char *)(DAT_002db768 + iVar6));
      }
    }
    if (0x1d < *(uint *)(*(int *)(param_1 + 0x2c) + 0x44)) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x68) + 0x2cf) = 1;
    }
    iVar5 = *(int *)(*piVar1 + 0x44);
    if ((iVar5 != 0) && (iVar5 == *(int *)(*(int *)(param_1 + 0x2c) + 0x68))) {
      return 0;
    }
    func_00291CB4(*(int *)(param_1 + 0x2c),0);
    return func_002D55D0(param_1,(uint)(fVar17 < *(float *)(*(int *)(param_1 + 0x48) + 0x24)));
  }
  *(undefined1 *)(*piVar8 + 0x2c1c) = 1;
  piVar8 = *(int **)(*(int *)(param_1 + 0x2c) + 0x68);
  if ((piVar8 != (int *)0x0) && (piVar8[0x2b] == 0)) {
    local_48 = fVar15;
    local_44 = fVar17;
    local_40 = fVar15;
    (**(code **)(*piVar8 + 0x3c))(piVar8,*(undefined4 *)(param_1 + 0x30),DAT_002db76c,&local_48);
  }
  if (*(int *)(param_1 + 0x9c) == 0) {
    uVar10 = *(uint *)(param_1 + 0x84);
    fVar15 = fVar17;
    if (((uVar10 != 0) && (uVar9 = *(uint *)(param_1 + 0x80), uVar9 != 0)) &&
       (fVar15 = fVar19, uVar9 < uVar10)) {
      fVar15 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
      fVar15 = fVar15 * *(float *)(param_1 + 0x88);
    }
    puVar12 = *(undefined4 **)(param_1 + 0x3c);
    fVar15 = fVar15 / fVar19;
    fVar16 = fVar15 * fVar15 - fVar15;
    fVar19 = fVar16 * fVar15;
    fVar15 = fVar15 * fVar15 - fVar19 * DAT_002db770;
    uVar20 = func_00114608((uint)ALBW_AS_U32((((*(float *)(param_1 + 0x98) - fVar15 * *(float *)(param_1 + 0x98)
                                   ) + fVar15 * *(float *)(param_1 + 0x94) +
                                   (fVar19 - fVar16) * fVar17 + fVar19 * fVar17) * DAT_002db774)),
                           uVar10);
    *puVar12 = (int)uVar20;
    if (*(int *)(param_1 + 0x84) - *(int *)(param_1 + 0x80) == 0xf) {
      iVar5 = *(int *)(param_1 + 0x4c);
      func_0028D580((uint *)(iVar5 + 0x3c),0x53,1,1,6);
      func_0028D580((uint *)(iVar5 + 0x5c),0x53,1,1,6);
    }
    uVar10 = *(uint *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x84) <= uVar10) {
      *(undefined4 *)(param_1 + 0x84) = 0x3c;
      uVar3 = _DAT_002dba94;
      *(undefined4 *)(param_1 + 0x9c) = 1;
      *(undefined4 *)(param_1 + 0x88) = uVar3;
      piVar8 = DAT_002dbaac;
      iVar5 = DAT_002dbaa8;
      *(undefined4 *)(param_1 + 0x80) = 0;
      local_4c = s_cf_002dba98;
      local_50 = iVar5;
      func_004EA104(*piVar8,&local_50,0);
      local_4c = s_SE_PV_DOWN_END_002dbab0;
      local_50 = iVar5;
      func_004EAF8C(*piVar8,&local_50,0);
      func_0029603C(*piVar8);
      goto LAB_002db860;
    }
  }
  else {
    if (*(int *)(param_1 + 0x9c) != 1) goto LAB_002db860;
    uVar10 = *(uint *)(param_1 + 0x80);
    if (*(uint *)(param_1 + 0x84) <= uVar10) {
      *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x68) + 0x2ce) = 1;
      goto LAB_002db860;
    }
  }
  *(uint *)(param_1 + 0x80) = uVar10 + 1;
LAB_002db860:
  fVar17 = func_00584D0C(*(undefined4 *)(param_1 + 0x4c));
  *(float *)(*(int *)(param_1 + 0x4c) + 0x100) = fVar17 + -fVar17 * DAT_002dbac0;
  iVar6 = *piVar2;
  iVar11 = *(int *)(iVar6 + 0xf74);
  iVar5 = 0;
  if (iVar11 != 0) {
    iVar5 = *(int *)(iVar11 + 0x20);
  }
  if ((iVar11 != 0 && iVar5 != 0) && (*(int *)(iVar5 + 4) != 0)) {
    return func_0016BAF8(iVar6,2,(int)*(char *)(DAT_002db768 + iVar6));
  }
  return 0;
}

