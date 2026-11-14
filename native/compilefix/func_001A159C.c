/* compilefix: USA 001A159C (EU 001A159C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [4]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001a197f[];
extern char s_cf_001a1980[];
extern char s_cf_001a1999[];
extern char s_cf_001a199c[];
#include "compilefix.h"

extern int func_001104E4(uint param_1,uint param_2);
extern int func_00111A64(uint *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A474(undefined4 param_1,uint param_2);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern float DAT_001a18c0;
extern float DAT_001a18c4;
extern float DAT_001a18c8;
extern float DAT_001a18cc;
extern float DAT_001a18d0;
extern float DAT_001a18d4;
extern uint DAT_001a18d8;
extern int DAT_001a18dc;
extern int DAT_001a18e0;
extern int DAT_001a18e4;
extern float DAT_001a18e8;
extern uint DAT_001a18ec;
extern float DAT_001a18f0;
extern int DAT_001a18f4;
extern int DAT_001a18f8;
extern int DAT_001a18fc;
extern undefined DAT_001a197c;
extern undefined DAT_001a1998;
extern char s_SE_DegTail_MOVE_LOW_001a1900[];
extern undefined4 _DAT_001a197c;
extern undefined4 _DAT_001a1998;

// USA 001A159C <- EU 001A159C (Ghidra, non-matching)
// GLOBAL DAT_001a18c0 float
// GLOBAL DAT_001a18c4 float
// GLOBAL DAT_001a18c8 float
// GLOBAL DAT_001a18cc float
// GLOBAL DAT_001a18d0 float
// GLOBAL DAT_001a18d4 float
// GLOBAL DAT_001a18d8 uint
// GLOBAL DAT_001a18dc int
// GLOBAL DAT_001a18e0 int
// GLOBAL DAT_001a18e4 int
// GLOBAL DAT_001a18e8 float
// GLOBAL DAT_001a18ec uint
// GLOBAL DAT_001a18f0 float
// GLOBAL DAT_001a18f4 int
// GLOBAL DAT_001a18f8 int
// GLOBAL DAT_001a18fc int
// GLOBAL DAT_001a197c undefined
// GLOBAL DAT_001a1998 undefined
// GLOBAL s_cf_001a197f string
// GLOBAL s_cf_001a1999 string
// GLOBAL s_SE_DegTail_MOVE_LOW_001a1900 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001A159C(int param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  bool bVar10;
  uint in_fpscr;
  float fVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  longlong lVar19;
  undefined8 uVar20;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  fVar15 = DAT_001a18c4;
  fVar13 = DAT_001a18c0;
  puVar7 = (uint *)(param_1 + 0x11e0);
  piVar8 = (int *)(param_1 + 0x11c4);
  if (*puVar7 < *(uint *)(param_1 + 0x11e4)) {
    *puVar7 = *puVar7 + 1;
  }
  fVar16 = DAT_001a18cc;
  fVar14 = DAT_001a18c8;
  *piVar8 = *(int *)(param_1 + 0x11c0) + *piVar8;
  if (*(char *)(param_1 + 0x121c) == '\0') {
    if (*(uint *)(param_1 + 0x11e0) < *(uint *)(param_1 + 0x11e4)) goto LAB_001a17e0;
    fVar18 = DAT_001a18d0;
    fVar17 = DAT_001a18d4;
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    fVar11 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar12 = VectorFloatToUnsigned(fVar14 + fVar11 * fVar13 * fVar18 * fVar15,3);
    *(int *)(param_1 + 0x11e4) = iVar12;
    if (iVar12 == 0) {
      *(float *)(param_1 + 0x11e8) = fVar17;
    }
    else {
      fVar13 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x11e8) = fVar18 / fVar13;
    }
    *puVar7 = 0;
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x11c0),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar13 * fVar16;
    iVar12 = (int)fVar13;
    fVar15 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = in_fpscr & 0xfffffff;
    in_fpscr = uVar3 | (uint)(fVar15 == fVar13) << 0x1e | (uint)(fVar13 <= fVar15) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    bVar10 = (bool)(bVar1 >> 6);
    if (!bVar10) {
      in_fpscr = uVar3 | (uint)(fVar17 == fVar13) << 0x1e | (uint)(fVar13 <= fVar17) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      bVar10 = (bool)(bVar1 >> 6);
    }
    if ((bool)(bVar1 >> 5 & 1) && !bVar10) goto LAB_001a1734;
  }
  else {
    fVar18 = DAT_001a18d0;
    fVar17 = DAT_001a18d4;
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    fVar11 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    iVar12 = VectorFloatToUnsigned(fVar14 + fVar11 * fVar13 * fVar18 * fVar15,3);
    *(int *)(param_1 + 0x11e4) = iVar12;
    if (iVar12 == 0) {
      *(float *)(param_1 + 0x11e8) = fVar17;
    }
    else {
      fVar13 = (float)VectorUnsignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x11e8) = fVar18 / fVar13;
    }
    *puVar7 = 0;
    lVar19 = func_001104E4(*(uint *)(param_1 + 0x1174),(uint)*(byte *)(param_1 + 0x121c));
    iVar12 = (int)lVar19 * 0x10000;
    uVar20 = func_0058A474(param_1,0x32);
    if ((int)uVar20 == 0) {
      *(int *)(param_1 + 0x11c4) = iVar12;
    }
    else {
      puVar7 = (uint *)func_0058A7D4();
      uVar3 = DAT_001a18d8;
      uVar4 = func_00111A64(puVar7);
      iVar9 = (int)((ulonglong)uVar3 * (ulonglong)uVar4 >> 0x20) + DAT_001a18dc;
      iVar5 = *(int *)(param_1 + 0x11c4);
      local_44 = iVar12 - (iVar5 + iVar9);
      uVar3 = func_0058E2B8(&local_44);
      local_40 = iVar12 - (iVar5 - iVar9);
      uVar4 = func_0058E2B8(&local_40);
      if (uVar4 <= uVar3) {
        iVar9 = -iVar9;
      }
      *piVar8 = *piVar8 + iVar9;
    }
    uVar20 = func_0058A474(param_1,0x32);
    if ((int)uVar20 == 0) goto LAB_001a17e0;
    fVar13 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x11c0),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar13 = fVar13 * fVar16;
    iVar12 = (int)fVar13;
    fVar15 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    uVar3 = in_fpscr & 0xfffffff;
    in_fpscr = uVar3 | (uint)(fVar15 == fVar13) << 0x1e | (uint)(fVar13 <= fVar15) << 0x1d;
    bVar1 = (byte)(in_fpscr >> 0x18);
    bVar10 = (bool)(bVar1 >> 6);
    if (!bVar10) {
      in_fpscr = uVar3 | (uint)(fVar17 == fVar13) << 0x1e | (uint)(fVar13 <= fVar17) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      bVar10 = (bool)(bVar1 >> 6);
    }
    if ((bool)(bVar1 >> 5 & 1) && !bVar10) {
LAB_001a1734:
      iVar12 = iVar12 + -1;
    }
  }
  *(int *)(param_1 + 0x11c0) = iVar12;
LAB_001a17e0:
  func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x11c4),DAT_001a18e4,DAT_001a18e0,
                DAT_001a18e8);
  local_48 = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x11c4);
  uVar3 = func_0058E2B8(&local_48);
  fVar13 = DAT_001a18f0;
  if (uVar3 <= DAT_001a18ec) {
    uVar3 = *(uint *)(param_1 + 1000);
    pfVar6 = (float *)(DAT_001a18f4 + (uVar3 >> 0x18) * 0x10);
    fVar15 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = (float)VectorUnsignedToFloat(uVar3 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x3d0) =
         *(float *)(param_1 + 0x3d0) +
         (*pfVar6 + pfVar6[1] * fVar15 * DAT_001a18f0) * *(float *)(param_1 + 0x1218);
    *(float *)(param_1 + 0x3d8) =
         *(float *)(param_1 + 0x3d8) +
         (pfVar6[2] + pfVar6[3] * fVar14 * fVar13) * *(float *)(param_1 + 0x1218);
  }
  iVar12 = *(int *)(param_1 + 0x1218);
  if (iVar12 == DAT_001a18f8) {
    local_40 = DAT_001a18fc;
    local_3c = s_SE_DegTail_MOVE_LOW_001a1900;
    func_001507D8(param_1,&local_40,0);
  }
  else {
    if (iVar12 == _DAT_001a197c) {
      local_40 = DAT_001a18fc;
      local_3c = s_cf_001a1980;
      return func_001507D8(param_1,&local_40,0);
    }
    if (iVar12 == _DAT_001a1998) {
      local_40 = DAT_001a18fc;
      local_3c = s_cf_001a199c;
      return func_001507D8(param_1,&local_40,0);
    }
  }
  return 0;
}

