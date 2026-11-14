/* compilefix: USA 0039B020 (EU 0039AFFC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0039b444[];
#include "compilefix.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_002C6868(undefined4 *param_1,uint *param_2);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDB28(int param_1,int param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int DAT_0039b438;
extern int DAT_0039b43c;
extern undefined4 DAT_0039b440;
extern float DAT_0039b460;
extern float DAT_0039b464;
extern float DAT_0039b468;
extern float DAT_0039b46c;
extern float *DAT_0039b470;
extern int *DAT_0039b568;
extern char s_Actor_WallHideCastle_kcl_0039b444[];

// USA 0039B020 <- EU 0039AFFC (Ghidra, non-matching)
// GLOBAL DAT_0039b438 int
// GLOBAL DAT_0039b43c int
// GLOBAL DAT_0039b440 undefined4
// GLOBAL DAT_0039b460 float
// GLOBAL DAT_0039b464 float
// GLOBAL DAT_0039b468 float
// GLOBAL DAT_0039b46c float
// GLOBAL DAT_0039b470 float *
// GLOBAL DAT_0039b568 int *
// GLOBAL s_cf_0039b444 string

int * func_0039B020(undefined4 *param_1,uint *param_2)

{
  float fVar1;
  float *pfVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 ((uint *)(albw_frame + 0x8))
  #define local_a8 (*(int *)(albw_frame + 0x18))
  #define local_a4 (*(uint * *)(albw_frame + 0x1c))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(undefined4 *)(albw_frame + 0x48))
  #define local_74 (*(uint * *)(albw_frame + 0x4c))
  #define local_70 (*(int *)(albw_frame + 0x50))
  #define local_6c ((uint *)(albw_frame + 0x54))
  #define uStack_2d (*(undefined1 *)(albw_frame + 0x93))
  piVar4 = (int *)(uintptr_t)(func_002C6868(param_1,param_2));
  iVar5 = DAT_0039b438 + 0x5c;
  *piVar4 = DAT_0039b438;
  piVar4[200] = iVar5;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar6));
  }
  piVar9 = piVar4 + 0x121;
  piVar4[0x121] = (int)puVar7;
  if (puVar7 == (undefined4 *)0x0) goto LAB_0039b520;
  local_70 = 0x40;
  uStack_2d = 0;
  (*(undefined1 *)((char *)&local_6c[0] + 0)) = 0;
  local_a8 = DAT_0039b43c;
  local_78 = DAT_0039b440;
  local_a4 = (uint *)s_Actor_WallHideCastle_kcl_0039b444;
  local_74 = local_6c;
  (**(code **)(DAT_0039b43c + 8))(&local_a8);
  uVar8 = 0;
  do {
    if (*(char *)((int)local_a4 + uVar8) == '\0') {
      if ((int)uVar8 < 0x40001) goto LAB_0039b0d4;
      break;
    }
    uVar8 = uVar8 + 1;
  } while ((int)uVar8 < 0x40001);
  uVar8 = 0;
LAB_0039b0d4:
  if (local_70 <= (int)uVar8) {
    uVar8 = local_70 - 1;
  }
  (**(code **)(local_a8 + 8))(&local_a8);
  func_0010E3C4(local_6c,local_a4,uVar8);
  *(undefined1 *)((int)local_6c + uVar8) = 0;
  func_004EDB28(piVar4[0x121],(int)&local_78);
  fVar15 = DAT_0039b46c;
  fVar14 = DAT_0039b468;
  fVar1 = DAT_0039b464;
  fVar12 = DAT_0039b460;
  local_9c = DAT_0039b460;
  local_98 = DAT_0039b464;
  local_94 = DAT_0039b464;
  local_90 = DAT_0039b464;
  local_8c = DAT_0039b460;
  local_88 = DAT_0039b464;
  local_84 = DAT_0039b464;
  local_80 = DAT_0039b464;
  local_7c = DAT_0039b460;
  iVar5 = *(int *)(*piVar9 + 0x14);
  fVar13 = DAT_0039b460 - *(float *)(iVar5 + 0x18);
  bVar10 = DAT_0039b46c == fVar13;
  bVar11 = fVar13 <= DAT_0039b46c;
  if (!bVar11 || bVar10) {
    bVar10 = fVar13 == DAT_0039b468;
    bVar11 = DAT_0039b468 <= fVar13;
  }
  if (bVar11 && !bVar10) {
LAB_0039b294:
    bVar10 = false;
  }
  else {
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x1c);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x20);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x24);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b460 - *(float *)(iVar5 + 0x28);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x2c);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x30);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b464 - *(float *)(iVar5 + 0x34);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    fVar13 = DAT_0039b460 - *(float *)(iVar5 + 0x38);
    bVar10 = DAT_0039b46c == fVar13;
    bVar11 = fVar13 <= DAT_0039b46c;
    if (!bVar11 || bVar10) {
      bVar10 = fVar13 == DAT_0039b468;
      bVar11 = DAT_0039b468 <= fVar13;
    }
    if (bVar11 && !bVar10) goto LAB_0039b294;
    bVar10 = true;
  }
  if (!bVar10) {
    bVar3 = *(byte *)(iVar5 + 0xa8);
    *(byte *)(iVar5 + 0xa8) = bVar3 | 8;
    if (fVar12 == 1.0) {
      *(undefined4 *)(iVar5 + 0x18) = 0x3f800000;
      *(float *)(iVar5 + 0x1c) = fVar1;
      *(float *)(iVar5 + 0x20) = fVar1;
      bVar3 = bVar3 & 0xfb | 8;
      *(float *)(iVar5 + 0x24) = fVar1;
      *(undefined4 *)(iVar5 + 0x28) = 0x3f800000;
      *(float *)(iVar5 + 0x2c) = fVar1;
      *(float *)(iVar5 + 0x30) = fVar1;
      *(float *)(iVar5 + 0x34) = fVar1;
      *(undefined4 *)(iVar5 + 0x38) = 0x3f800000;
    }
    else {
      func_001151CC((undefined4 *)(iVar5 + 0x18),(undefined4 *)(&local_9c));
      bVar3 = *(byte *)(iVar5 + 0xa8) | 4;
    }
    *(byte *)(iVar5 + 0xa8) = bVar3;
  }
  func_0043625C(*(int **)(piVar4[0x121] + 0x14),piVar4 + 0xf4);
  pfVar2 = DAT_0039b470;
  iVar5 = *(int *)(*piVar9 + 0x14);
  fVar12 = ALBW_AS_F32(param_2[4]) - *(float *)(iVar5 + 4);
  bVar10 = fVar15 == fVar12;
  bVar11 = fVar12 <= fVar15;
  if (!bVar11 || bVar10) {
    bVar10 = fVar12 == fVar14;
    bVar11 = fVar14 <= fVar12;
  }
  if (bVar11 && !bVar10) {
LAB_0039b3b0:
    bVar10 = false;
  }
  else {
    fVar12 = ALBW_AS_F32(param_2[5]) - *(float *)(iVar5 + 8);
    bVar10 = fVar15 == fVar12;
    bVar11 = fVar12 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == fVar14;
      bVar11 = fVar14 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0039b3b0;
    fVar12 = ALBW_AS_F32(param_2[6]) - *(float *)(iVar5 + 0xc);
    bVar10 = fVar15 == fVar12;
    bVar11 = fVar12 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == fVar14;
      bVar11 = fVar14 <= fVar12;
    }
    if (bVar11 && !bVar10) goto LAB_0039b3b0;
    bVar10 = true;
  }
  if (!bVar10) {
    *(byte *)(iVar5 + 0xa8) = *(byte *)(iVar5 + 0xa8) | 8;
    fVar12 = ALBW_AS_F32(param_2[4]) - *pfVar2;
    bVar10 = fVar15 == fVar12;
    bVar11 = fVar12 <= fVar15;
    if (!bVar11 || bVar10) {
      bVar10 = fVar12 == fVar14;
      bVar11 = fVar14 <= fVar12;
    }
    if (bVar11 && !bVar10) {
LAB_0039b4c4:
      *(uint *)(iVar5 + 4) = param_2[4];
      *(uint *)(iVar5 + 8) = param_2[5];
      *(uint *)(iVar5 + 0xc) = param_2[6];
      bVar3 = *(byte *)(iVar5 + 0xa8) | 2;
    }
    else {
      fVar12 = ALBW_AS_F32(param_2[5]) - pfVar2[1];
      bVar10 = fVar15 == fVar12;
      bVar11 = fVar12 <= fVar15;
      if (!bVar11 || bVar10) {
        bVar10 = fVar12 == fVar14;
        bVar11 = fVar14 <= fVar12;
      }
      if (bVar11 && !bVar10) goto LAB_0039b4c4;
      fVar12 = ALBW_AS_F32(param_2[6]) - pfVar2[2];
      bVar10 = fVar15 == fVar12;
      bVar11 = fVar12 <= fVar15;
      if (!bVar11 || bVar10) {
        bVar10 = fVar12 == fVar14;
        bVar11 = fVar14 <= fVar12;
      }
      if (bVar11 && !bVar10) goto LAB_0039b4c4;
      *(float *)(iVar5 + 4) = *pfVar2;
      *(float *)(iVar5 + 8) = pfVar2[1];
      *(float *)(iVar5 + 0xc) = pfVar2[2];
      bVar3 = *(byte *)(iVar5 + 0xa8) & 0xfd;
    }
    *(byte *)(iVar5 + 0xa8) = bVar3;
  }
  local_b8[0] = piVar4[0xb3];
  func_004EDAD0(piVar4[0x121],local_b8);
  *(short *)(*piVar9 + 0x2c) = (short)piVar4[0x15];
  func_004ED9C8(*piVar9);
  func_004A879C(*DAT_0039b568,*piVar9,0);
LAB_0039b520:
  iVar5 = piVar4[0x11f];
  *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar5 + 0x80),piVar4[0x11e],piVar4[0xfa],(float *)(piVar4 + 0xf4));
  func_004CEAF0(piVar4[0x11f]);
  return piVar4;
}

