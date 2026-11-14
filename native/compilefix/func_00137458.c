/* compilefix: USA 00137458 (EU 00137458), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [3]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00137848[];
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
extern int func_001E4414(undefined4 *param_1,uint *param_2);
extern int func_00324964(int param_1);
extern int func_003249E0(int param_1,uint param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004ECF6C(int param_1);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int DAT_00137834;
extern float DAT_00137838;
extern int *DAT_0013783c;
extern int DAT_00137840;
extern undefined4 DAT_00137844;
extern float DAT_0013785c;
extern float DAT_00137860;
extern float DAT_00137864;
extern float *DAT_00137a98;
extern int *DAT_00137a9c;
extern undefined4 DAT_00137aa0;
extern int DAT_00137aa4;
extern char s_Actor_DoorKey_kcl_00137848[];

// USA 00137458 <- EU 00137458 (Ghidra, non-matching)
// GLOBAL DAT_00137834 int
// GLOBAL DAT_00137838 float
// GLOBAL DAT_0013783c int *
// GLOBAL DAT_00137840 int
// GLOBAL DAT_00137844 undefined4
// GLOBAL DAT_0013785c float
// GLOBAL DAT_00137860 float
// GLOBAL DAT_00137864 float
// GLOBAL DAT_00137a98 float *
// GLOBAL DAT_00137a9c int *
// GLOBAL DAT_00137aa0 undefined4
// GLOBAL DAT_00137aa4 int
// GLOBAL s_cf_00137848 string

int * func_00137458(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xe0]; /* entry_sp - 0xe0 .. entry_sp + 0x0 */
#define stack0xffffff28 (*(undefined4 *)(albw_frame + 0x8))
#define stack0xffffff30 (*(undefined4 *)(albw_frame + 0x10))
  float *pfVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  char *pcVar16;
  #define local_c4 ((uint *)(albw_frame + 0x1c))
  #define uStack_85 (*(undefined1 *)(albw_frame + 0x5b))
  #define local_84 (*(float *)(albw_frame + 0x5c))
  #define local_80 (*(float *)(albw_frame + 0x60))
  #define local_7c (*(float *)(albw_frame + 0x64))
  #define local_78 (*(float *)(albw_frame + 0x68))
  #define local_74 (*(float *)(albw_frame + 0x6c))
  #define local_70 (*(float *)(albw_frame + 0x70))
  #define local_6c (*(float *)(albw_frame + 0x74))
  #define local_68 (*(float *)(albw_frame + 0x78))
  #define local_64 (*(float *)(albw_frame + 0x7c))
  #define afStack_60 ((float *)(albw_frame + 0x80))
  #define local_3c ((uint *)(albw_frame + 0xa4))
  piVar4 = (int *)(uintptr_t)(func_001E4414(param_1,param_2));
  iVar5 = DAT_00137834;
  piVar4[200] = DAT_00137834 + 0x5c;
  *piVar4 = iVar5;
  *(undefined1 *)(piVar4 + 0x126) = 0;
  fVar12 = DAT_00137838;
  piVar4[0x127] = 0;
  piVar4[0x128] = 0;
  piVar4[0x129] = (int)ALBW_AS_U32(fVar12);
  piVar4[0x12a] = 0;
  piVar4[299] = 0;
  piVar4[300] = (int)ALBW_AS_U32(fVar12);
  piVar4[0x12d] = 0;
  *(undefined1 *)(piVar4 + 0x12e) = 0;
  bVar2 = func_00588BF0((int)piVar4,1);
  if (bVar2) {
    *(undefined1 *)((int)piVar4 + 0x2d7) = 1;
    return piVar4;
  }
  func_003249E0((int)piVar4,0);
  func_00324964((int)piVar4);
  iVar5 = func_0014E428((int)piVar4,1,0,0,1,0,0);
  piVar4[0x11f] = iVar5;
  iVar5 = func_00581D48(*DAT_0013783c,(float *)(piVar4 + 0xf4));
  piVar4[0x12d] = iVar5;
  func_001E3FD8((int)piVar4);
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar6));
  }
  piVar9 = piVar4 + 0x121;
  piVar4[0x121] = (int)puVar7;
  if (puVar7 == (undefined4 *)0x0) goto LAB_00137a40;
  uStack_85 = 0;
  (*(undefined1 *)((char *)&local_c4[0] + 0)) = 0;
  pcVar16 = s_Actor_DoorKey_kcl_00137848;
  iVar5 = DAT_00137840;
  (**(code **)(DAT_00137840 + 8))(&stack0xffffff28);
  uVar8 = 0;
  do {
    if (*(char *)((int)pcVar16 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_001375d0;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_001375d0:
  if (0x3f < (int)uVar8) {
    uVar8 = 0x3f;
  }
  (**(code **)(iVar5 + 8))(&stack0xffffff28);
  func_0010E3C4(local_c4,(uint *)pcVar16,uVar8);
  *(undefined1 *)((int)local_c4 + uVar8) = 0;
  func_004EDB28(piVar4[0x121],(int)&stack0xffffff30);
  local_80 = DAT_0013785c;
  local_7c = DAT_0013785c;
  local_78 = DAT_0013785c;
  local_70 = DAT_0013785c;
  local_6c = DAT_0013785c;
  local_68 = DAT_0013785c;
  fVar15 = DAT_0013785c;
  local_84 = fVar12;
  local_74 = fVar12;
  local_64 = fVar12;
  func_00491624(afStack_60,0,piVar4[0xfa],0);
  func_0011549C(&local_84,&local_84,afStack_60);
  fVar14 = DAT_00137864;
  fVar13 = DAT_00137860;
  iVar5 = *(int *)(*piVar9 + 0x14);
  fVar11 = local_84 - *(float *)(iVar5 + 0x18);
  bVar2 = DAT_00137864 == fVar11;
  bVar10 = fVar11 <= DAT_00137864;
  if (!bVar10 || bVar2) {
    bVar2 = fVar11 == DAT_00137860;
    bVar10 = DAT_00137860 <= fVar11;
  }
  if (bVar10 && !bVar2) {
LAB_001377b4:
    bVar2 = false;
  }
  else {
    fVar11 = local_80 - *(float *)(iVar5 + 0x1c);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_7c - *(float *)(iVar5 + 0x20);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_78 - *(float *)(iVar5 + 0x24);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_74 - *(float *)(iVar5 + 0x28);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_70 - *(float *)(iVar5 + 0x2c);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_6c - *(float *)(iVar5 + 0x30);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_68 - *(float *)(iVar5 + 0x34);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    fVar11 = local_64 - *(float *)(iVar5 + 0x38);
    bVar2 = DAT_00137864 == fVar11;
    bVar10 = fVar11 <= DAT_00137864;
    if (!bVar10 || bVar2) {
      bVar2 = fVar11 == DAT_00137860;
      bVar10 = DAT_00137860 <= fVar11;
    }
    if (bVar10 && !bVar2) goto LAB_001377b4;
    bVar2 = true;
  }
  if (!bVar2) {
    bVar3 = *(byte *)(iVar5 + 0xa8);
    *(byte *)(iVar5 + 0xa8) = bVar3 | 8;
    if ((((local_84 == 1.0 && local_80 == fVar15) && (local_7c == fVar15 && local_78 == fVar15)) &&
        (local_74 == 1.0 && local_70 == fVar15)) &&
       ((local_6c == fVar15 && local_68 == fVar15) && local_64 == 1.0)) {
      *(float *)(iVar5 + 0x18) = fVar12;
      *(float *)(iVar5 + 0x1c) = fVar15;
      *(float *)(iVar5 + 0x20) = fVar15;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar5 + 0x24) = fVar15;
      *(float *)(iVar5 + 0x28) = fVar12;
      *(float *)(iVar5 + 0x2c) = fVar15;
      *(float *)(iVar5 + 0x30) = fVar15;
      *(float *)(iVar5 + 0x34) = fVar15;
      *(float *)(iVar5 + 0x38) = fVar12;
    }
    else {
      func_001151CC((undefined4 *)(iVar5 + 0x18),(undefined4 *)(&local_84));
      bVar3 = *(byte *)(iVar5 + 0xa8) | 4;
    }
    *(byte *)(iVar5 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(piVar4[0x121] + 0x14),piVar4 + 0xf4);
  pfVar1 = DAT_00137a98;
  iVar5 = *(int *)(*piVar9 + 0x14);
  fVar12 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar5 + 4);
  bVar2 = fVar14 == fVar12;
  bVar10 = fVar12 <= fVar14;
  if (!bVar10 || bVar2) {
    bVar2 = fVar12 == fVar13;
    bVar10 = fVar13 <= fVar12;
  }
  if (bVar10 && !bVar2) {
LAB_00137910:
    bVar2 = false;
  }
  else {
    fVar12 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar5 + 8);
    bVar2 = fVar14 == fVar12;
    bVar10 = fVar12 <= fVar14;
    if (!bVar10 || bVar2) {
      bVar2 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar2) goto LAB_00137910;
    fVar12 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar5 + 0xc);
    bVar2 = fVar14 == fVar12;
    bVar10 = fVar12 <= fVar14;
    if (!bVar10 || bVar2) {
      bVar2 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar2) goto LAB_00137910;
    bVar2 = true;
  }
  if (!bVar2) {
    *(byte *)(iVar5 + 0xa8) = *(byte *)(iVar5 + 0xa8) | 8;
    fVar12 = ALBW_AS_F32(param_2[4]) - *pfVar1;
    bVar2 = fVar14 == fVar12;
    bVar10 = fVar12 <= fVar14;
    if (!bVar10 || bVar2) {
      bVar2 = fVar12 == fVar13;
      bVar10 = fVar13 <= fVar12;
    }
    if (bVar10 && !bVar2) {
LAB_001379e4:
      *(uint *)(iVar5 + 4) = param_2[4];
      *(uint *)(iVar5 + 8) = param_2[5];
      *(uint *)(iVar5 + 0xc) = param_2[6];
      bVar3 = *(byte *)(iVar5 + 0xa8) | 2;
    }
    else {
      fVar12 = ALBW_AS_F32(param_2[5]) - pfVar1[1];
      bVar2 = fVar14 == fVar12;
      bVar10 = fVar12 <= fVar14;
      if (!bVar10 || bVar2) {
        bVar2 = fVar12 == fVar13;
        bVar10 = fVar13 <= fVar12;
      }
      if (bVar10 && !bVar2) goto LAB_001379e4;
      fVar12 = ALBW_AS_F32(param_2[6]) - pfVar1[2];
      bVar2 = fVar14 == fVar12;
      bVar10 = fVar12 <= fVar14;
      if (!bVar10 || bVar2) {
        bVar2 = fVar12 == fVar13;
        bVar10 = fVar13 <= fVar12;
      }
      if (bVar10 && !bVar2) goto LAB_001379e4;
      *(float *)(iVar5 + 4) = *pfVar1;
      *(float *)(iVar5 + 8) = pfVar1[1];
      *(float *)(iVar5 + 0xc) = pfVar1[2];
      bVar3 = *(byte *)(iVar5 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar5 + 0xa8) = bVar3;
  }
  local_3c[0] = piVar4[0xb3];
  func_004EDAD0(piVar4[0x121],local_3c);
  *(short *)(*piVar9 + 0x2c) = (short)piVar4[0x15];
  func_004ED9C8(*piVar9);
  func_004A879C(*DAT_00137a9c,*piVar9,0);
LAB_00137a40:
  func_001E40F4((int)piVar4,1);
  func_00169678((int)piVar4,0,(int *)(uintptr_t)(DAT_00137aa0));
  func_001E4378((int)piVar4);
  iVar5 = DAT_00137aa4;
  piVar4[299] = 0x28;
  piVar4[300] = iVar5;
  piVar4[0x12a] = 0;
  func_004ECF6C((int)piVar4);
  return piVar4;
}

