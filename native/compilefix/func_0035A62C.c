/* compilefix: USA 0035A62C (EU 0035A608), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0035aa90[];
#include "compilefix.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00169678(int param_1,uint param_2,int *param_3);
extern int func_001E3FD8(int param_1);
extern int func_001E40F4(int param_1,int param_2);
extern float func_001E4378(int param_1);
extern int func_002BE9D4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4, undefined1 param_5);
extern int func_00305AF4(undefined4 *param_1,uint *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_0035aa84;
extern int DAT_0035aa88;
extern undefined4 DAT_0035aa8c;
extern float DAT_0035aaac;
extern float DAT_0035aab0;
extern float DAT_0035aab4;
extern float DAT_0035aab8;
extern float *DAT_0035aabc;
extern int *DAT_0035ac14;
extern int DAT_0035ac18;
extern int DAT_0035ac1c;
extern undefined DAT_0035ac20;
extern char s_Actor_DoorHyruleSmall_kcl_0035aa90[];

// USA 0035A62C <- EU 0035A608 (Ghidra, non-matching)
// GLOBAL DAT_0035aa84 int
// GLOBAL DAT_0035aa88 int
// GLOBAL DAT_0035aa8c undefined4
// GLOBAL DAT_0035aaac float
// GLOBAL DAT_0035aab0 float
// GLOBAL DAT_0035aab4 float
// GLOBAL DAT_0035aab8 float
// GLOBAL DAT_0035aabc float *
// GLOBAL DAT_0035ac14 int *
// GLOBAL DAT_0035ac18 int
// GLOBAL DAT_0035ac1c int
// GLOBAL DAT_0035ac20 undefined
// GLOBAL s_cf_0035aa90 string

int * func_0035A62C(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x100]; /* entry_sp - 0x100 .. entry_sp + 0x0 */
#define stack0xffffff0c (*(undefined4 *)(albw_frame + 0xc))
  float fVar1;
  float *pfVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  bool bVar11;
  bool bVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  #define afStack_cc ((float *)(albw_frame + 0x34))
  #define local_98 (*(int *)(albw_frame + 0x68))
  #define local_94 (*(uint * *)(albw_frame + 0x6c))
  #define local_90 (*(undefined4 *)(albw_frame + 0x70))
  #define local_8c (*(uint * *)(albw_frame + 0x74))
  #define local_88 (*(int *)(albw_frame + 0x78))
  #define local_84 ((uint *)(albw_frame + 0x7c))
  #define uStack_45 (*(undefined1 *)(albw_frame + 0xbb))
  #define local_44 (*(uint *)(albw_frame + 0xbc))
  #define local_40 (*(int *)(albw_frame + 0xc0))
  #define local_3c (*(undefined * *)(albw_frame + 0xc4))
  piVar4 = (int *)func_00305AF4(param_1,param_2);
  iVar7 = DAT_0035aa84 + 0x5c;
  *piVar4 = DAT_0035aa84;
  piVar4[200] = iVar7;
  iVar7 = func_0014E428((int)piVar4,0,0,0,1,0,0);
  piVar4[0x11f] = iVar7;
  func_001E3FD8((int)piVar4);
  puVar5 = (undefined4 *)func_0010BAB4(0x48);
  puVar6 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar6 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar5));
  }
  iVar7 = DAT_0035aa88;
  piVar10 = piVar4 + 0x121;
  piVar4[0x121] = (int)puVar6;
  if (puVar6 == (undefined4 *)0x0) goto LAB_0035ab78;
  local_88 = 0x40;
  uStack_45 = 0;
  (*(undefined1 *)((char *)&local_84[0] + 0)) = 0;
  local_98 = iVar7;
  local_90 = DAT_0035aa8c;
  local_94 = (uint *)s_Actor_DoorHyruleSmall_kcl_0035aa90;
  local_8c = local_84;
  (**(code **)(iVar7 + 8))(&local_98);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_94 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0035a6fc;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0035a6fc:
  if (local_88 <= (int)uVar8) {
    uVar8 = local_88 - 1;
  }
  (**(code **)(local_98 + 8))(&local_98);
  func_0010E3C4(local_84,local_94,uVar8);
  *(undefined1 *)((int)local_84 + uVar8) = 0;
  func_004EDB28(piVar4[0x121],(int)&local_90);
  fVar1 = DAT_0035aab0;
  fVar14 = DAT_0035aaac;
  fVar17 = DAT_0035aab0;
  fVar18 = DAT_0035aaac;
  fVar19 = DAT_0035aaac;
  fVar20 = DAT_0035aab0;
  func_00491624(afStack_cc,0,piVar4[0xfa],0);
  func_0011549C((float *)&stack0xffffff0c,(float *)&stack0xffffff0c,afStack_cc);
  fVar16 = DAT_0035aab8;
  fVar15 = DAT_0035aab4;
  iVar9 = *(int *)(*piVar10 + 0x14);
  fVar13 = fVar19 - *(float *)(iVar9 + 0x18);
  bVar11 = DAT_0035aab8 == fVar13;
  bVar12 = fVar13 <= DAT_0035aab8;
  if (!bVar12 || bVar11) {
    bVar11 = fVar13 == DAT_0035aab4;
    bVar12 = DAT_0035aab4 <= fVar13;
  }
  if (bVar12 && !bVar11) {
LAB_0035a8e4:
    bVar11 = false;
  }
  else {
    fVar13 = fVar20 - *(float *)(iVar9 + 0x1c);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar1 - *(float *)(iVar9 + 0x20);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar1 - *(float *)(iVar9 + 0x24);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar14 - *(float *)(iVar9 + 0x28);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar1 - *(float *)(iVar9 + 0x2c);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar1 - *(float *)(iVar9 + 0x30);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar1 - *(float *)(iVar9 + 0x34);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    fVar13 = fVar14 - *(float *)(iVar9 + 0x38);
    bVar11 = DAT_0035aab8 == fVar13;
    bVar12 = fVar13 <= DAT_0035aab8;
    if (!bVar12 || bVar11) {
      bVar11 = fVar13 == DAT_0035aab4;
      bVar12 = DAT_0035aab4 <= fVar13;
    }
    if (bVar12 && !bVar11) goto LAB_0035a8e4;
    bVar11 = true;
  }
  if (!bVar11) {
    bVar3 = *(byte *)(iVar9 + 0xa8);
    *(byte *)(iVar9 + 0xa8) = bVar3 | 8;
    if ((((fVar19 == 1.0 && fVar20 == fVar17) && (fVar1 == fVar17)) &&
        (fVar14 == 1.0 && fVar1 == fVar17)) && (fVar1 == fVar17 && fVar14 == 1.0)) {
      *(float *)(iVar9 + 0x18) = fVar18;
      *(float *)(iVar9 + 0x1c) = fVar17;
      *(float *)(iVar9 + 0x20) = fVar17;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar9 + 0x24) = fVar17;
      *(float *)(iVar9 + 0x28) = fVar18;
      *(float *)(iVar9 + 0x2c) = fVar17;
      *(float *)(iVar9 + 0x30) = fVar17;
      *(float *)(iVar9 + 0x34) = fVar17;
      *(float *)(iVar9 + 0x38) = fVar18;
    }
    else {
      func_001151CC((undefined4 *)(iVar9 + 0x18),(undefined4 *)&stack0xffffff0c);
      bVar3 = *(byte *)(iVar9 + 0xa8) | 4;
    }
    *(byte *)(iVar9 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(piVar4[0x121] + 0x14),piVar4 + 0xf4);
  pfVar2 = DAT_0035aabc;
  iVar9 = *(int *)(*piVar10 + 0x14);
  fVar14 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar9 + 4);
  bVar11 = fVar16 == fVar14;
  bVar12 = fVar14 <= fVar16;
  if (!bVar12 || bVar11) {
    bVar11 = fVar14 == fVar15;
    bVar12 = fVar15 <= fVar14;
  }
  if (bVar12 && !bVar11) {
LAB_0035aa08:
    bVar11 = false;
  }
  else {
    fVar14 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar9 + 8);
    bVar11 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_0035aa08;
    fVar14 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar9 + 0xc);
    bVar11 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) goto LAB_0035aa08;
    bVar11 = true;
  }
  if (!bVar11) {
    *(byte *)(iVar9 + 0xa8) = *(byte *)(iVar9 + 0xa8) | 8;
    fVar14 = ALBW_AS_F32(param_2[4]) - *pfVar2;
    bVar11 = fVar16 == fVar14;
    bVar12 = fVar14 <= fVar16;
    if (!bVar12 || bVar11) {
      bVar11 = fVar14 == fVar15;
      bVar12 = fVar15 <= fVar14;
    }
    if (bVar12 && !bVar11) {
LAB_0035ab1c:
      *(uint *)(iVar9 + 4) = param_2[4];
      *(uint *)(iVar9 + 8) = param_2[5];
      *(uint *)(iVar9 + 0xc) = param_2[6];
      bVar3 = *(byte *)(iVar9 + 0xa8) | 2;
    }
    else {
      fVar14 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
      bVar11 = fVar16 == fVar14;
      bVar12 = fVar14 <= fVar16;
      if (!bVar12 || bVar11) {
        bVar11 = fVar14 == fVar15;
        bVar12 = fVar15 <= fVar14;
      }
      if (bVar12 && !bVar11) goto LAB_0035ab1c;
      fVar14 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
      bVar11 = fVar16 == fVar14;
      bVar12 = fVar14 <= fVar16;
      if (!bVar12 || bVar11) {
        bVar11 = fVar14 == fVar15;
        bVar12 = fVar15 <= fVar14;
      }
      if (bVar12 && !bVar11) goto LAB_0035ab1c;
      *(float *)(iVar9 + 4) = *pfVar2;
      *(float *)(iVar9 + 8) = pfVar2[1];
      *(float *)(iVar9 + 0xc) = pfVar2[2];
      bVar3 = *(byte *)(iVar9 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar9 + 0xa8) = bVar3;
  }
  local_44 = piVar4[0xb3];
  func_004EDAD0(piVar4[0x121],&local_44);
  *(short *)(*piVar10 + 0x2c) = (short)piVar4[0x15];
  func_004ED9C8(*piVar10);
  func_004A879C(*DAT_0035ac14,*piVar10,0);
LAB_0035ab78:
  func_001E40F4((int)piVar4,2);
  iVar9 = DAT_0035ac18;
  uVar8 = 0;
  do {
    func_00169678((int)piVar4,uVar8,(int *)(uintptr_t)(iVar9 + uVar8 * 8));
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 2);
  func_001E4378((int)piVar4);
  if (*(short *)((int)piVar4 + 0x2e) == 0) {
    piVar4[0x127] = DAT_0035ac1c;
  }
  puVar6 = (undefined4 *)func_0010BAB4(0x2cc);
  iVar9 = 0;
  if (puVar6 != (undefined4 *)0x0) {
    local_3c = &DAT_0035ac20;
    local_40 = iVar7;
    iVar9 = func_002BE9D4(puVar6,(undefined4)(uintptr_t)(&local_40),0,0,1);
  }
  piVar4[0x128] = iVar9;
  return piVar4;
}

