/* compilefix: USA 001BD460 (EU 001BD460), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [13]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E428(int param_1,undefined4 param_2,int param_3,uint param_4,int param_5, undefined1 param_6,undefined1 param_7);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169688(uint *param_1,uint param_2,int *param_3,int param_4);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_0016A02C(int param_1,int param_2,int *param_3,int param_4);
extern int func_0016A2FC(undefined4 *param_1,int param_2,undefined4 param_3,int param_4);
extern int func_004356B4(int *param_1);
extern int func_00491E80(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004A879C(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_004ED9C8(int param_1);
extern int func_004EDAD0(int param_1,uint *param_2);
extern int func_004EDC9C(undefined4 *param_1);
extern int func_0054D964(int param_1,uint param_2);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065B3E0(undefined4 *param_1,undefined1 param_2);
extern int DAT_001bd83c;
extern undefined4 DAT_001bd840;
extern undefined4 *DAT_001bd844;
extern undefined4 DAT_001bd848;
extern int DAT_001bd84c;
extern undefined DAT_001bd850;
extern undefined4 DAT_001bd868;
extern undefined4 DAT_001bd86c;
extern undefined *DAT_001bd870;
extern int DAT_001bd874;
extern float *DAT_001bdcf8;
extern float DAT_001bdcfc;
extern int *DAT_001bdd64;
extern char s_ArrowWall_001bd85c[];
extern char s_cState_PrepareShot_001bdcbc[];
extern char s_cState_Vibration_001bdcd0[];
extern char s_cState_WaitShot_001bd878[];
extern char s_cState_WaitSwitchOn_001bdce4[];

// USA 001BD460 <- EU 001BD460 (Ghidra, non-matching)
// GLOBAL DAT_001bd83c int
// GLOBAL DAT_001bd840 undefined4
// GLOBAL DAT_001bd844 undefined4 *
// GLOBAL DAT_001bd848 undefined4
// GLOBAL DAT_001bd84c int
// GLOBAL DAT_001bd850 undefined
// GLOBAL DAT_001bd868 undefined4
// GLOBAL DAT_001bd86c undefined4
// GLOBAL DAT_001bd870 undefined *
// GLOBAL DAT_001bd874 int
// GLOBAL DAT_001bdcf8 float *
// GLOBAL DAT_001bdcfc float
// GLOBAL DAT_001bdd64 int *
// GLOBAL s_ArrowWall_001bd85c string
// GLOBAL s_cState_PrepareShot_001bdcbc string
// GLOBAL s_cState_Vibration_001bdcd0 string
// GLOBAL s_cState_WaitShot_001bd878 string
// GLOBAL s_cState_WaitSwitchOn_001bdce4 string

undefined4 * func_001BD460(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xd0]; /* entry_sp - 0xd0 .. entry_sp + 0x0 */
#define stack0xffffff30 (*(undefined4 *)(albw_frame + 0x0))
  byte bVar1;
  float *pfVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  float fVar11;
  undefined4 uVar12;
  int iVar13;
  float fVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int *piVar19;
  uint uVar20;
  float fVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  #define local_c4 ((uint *)(albw_frame + 0xc))
  #define local_bc (*(undefined4 * *)(albw_frame + 0x14))
  #define local_b8 (*(undefined4 *)(albw_frame + 0x18))
  #define local_b4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_b0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_ac (*(undefined4 *)(albw_frame + 0x24))
  #define local_a8 (*(undefined4 *)(albw_frame + 0x28))
  #define local_a4 (*(uint *)(albw_frame + 0x2c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x60))
  #define local_6c (*(undefined1 *)(albw_frame + 0x64))
  #define local_68 (*(int *)(albw_frame + 0x68))
  #define local_64 (*(uint * *)(albw_frame + 0x6c))
  #define local_60 (*(undefined4 * *)(albw_frame + 0x70))
  #define local_5c (*(float *)(albw_frame + 0x74))
  #define local_58 (*(uint * *)(albw_frame + 0x78))
  #define fStack_54 (*(float *)(albw_frame + 0x7c))
  #define local_48 (*(int * *)(albw_frame + 0x88))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x90))
  #define local_3c ((uint *)(albw_frame + 0x94))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0xa4))
  #define local_28 (*(uint * *)(albw_frame + 0xa8))
  puStack_2c = param_1;
  local_28 = param_2;
  piVar4 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar8 = DAT_001bd83c;
  *piVar4 = DAT_001bd83c;
  piVar4[200] = iVar8 + 0x54;
  puVar5 = (undefined4 *)(uintptr_t)(func_0010A794(piVar4 + 0x103));
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[0xb] = 0;
  uVar12 = DAT_001bd840;
  puVar5[0xc] = 0;
  puVar5[0xd] = uVar12;
  puVar5[0xe] = 0;
  puVar17 = puVar5 + -0x103;
  puVar5[0xf] = 0;
  puVar5[0x10] = uVar12;
  *(undefined1 *)(puVar5 + 0x11) = 0;
  *(undefined1 *)((int)puVar5 + 0x45) = 0;
  puVar6 = (undefined4 *)func_0010BAB4(0x48);
  puVar7 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar7 = (undefined4 *)(uintptr_t)(func_004EDC9C(puVar6));
  }
  puVar5[0x12] = (undefined4)(uintptr_t)(puVar7);
  piVar4 = puVar5 + 0x12;
  iVar8 = func_0054D964((int)puVar17,0);
  puVar5[0x13] = iVar8;
  piVar19 = puVar5 + 0x13;
  iVar8 = func_0054D964((int)puVar17,0);
  puVar6 = DAT_001bd844;
  local_48 = puVar5 + 0x14;
  puVar5[0x14] = iVar8;
  puVar5[0x16] = 0;
  uVar15 = puVar6[0x17];
  puVar5[0x17] = puVar6[0x16];
  puVar5[0x18] = uVar15;
  puVar5[0x15] = DAT_001bd848;
  uVar15 = func_0014E428((int)puVar17,0,0,0,1,0,0);
  puVar5[9] = uVar15;
  puVar9 = (undefined4 *)func_0010BAB4(0xa8);
  iVar8 = DAT_001bd84c;
  puVar7 = (undefined4 *)0x0;
  if (puVar9 != (undefined4 *)0x0) {
    local_64 = (uint *)&DAT_001bd850;
    local_68 = DAT_001bd84c;
    puVar7 = (undefined4 *)(uintptr_t)(func_0016A2FC(puVar9,1,(undefined4)(uintptr_t)(&local_68),1));
  }
  puVar5[10] = (undefined4)(uintptr_t)(puVar7);
  local_64 = (uint *)s_ArrowWall_001bd85c;
  local_68 = iVar8;
  func_00169688((uint *)puVar5[10],0,&local_68,*(int *)(puVar5[-0x4f] + 0x1c8));
  uVar20 = 0x1bd5e8;
  func_0016A02C(puVar5[10],-1,(int *)0xffffffff,0);
  local_c4[1] = 3;
  local_bc = &local_b8;
  local_70 = 0;
  local_6c = 0;
  local_b8 = 0;
  local_c4[0] = 1;
  local_b4 = DAT_001bd868;
  local_ac = DAT_001bd86c;
  local_a4 = uVar20 | 0xff;
  uVar15 = DAT_001bd868;
  local_b0 = uVar12;
  local_a8 = uVar12;
  func_0016898C(puVar5[10],local_c4);
  *(undefined4 *)(*(int *)(puVar5[10] + 0x14) + 0x10) = uVar15;
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  uVar20 = puVar5[-9];
  piVar16 = (int *)0x0;
  func_00491E80((float *)(iVar10 + 0x80),0,uVar20,0);
  iVar10 = puVar5[9];
  *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar10 + 0x8c) = puVar5[-0xf];
  *(undefined4 *)(iVar10 + 0x9c) = puVar5[-0xe];
  uVar12 = puVar5[-0xd];
  *(undefined4 *)(iVar10 + 0xac) = uVar12;
  func_00169A80((int *)puVar5[10],uVar12,uVar20,piVar16);
  func_00168E9C((int *)puVar5[10],puVar5[9],(int *)0x0);
  func_004CEAF0(puVar5[9]);
  *(bool *)(puVar5 + 0x11) = (short)local_28[10] != 0;
  *(undefined1 *)((int)puVar5 + 0x45) = 0;
  *(undefined1 *)((int)puVar5 + 6) = 4;
  puVar5[5] = (undefined4)(uintptr_t)(puVar17);
  local_60 = puVar5;
  iVar10 = func_0010BA78(0x40);
  puVar5[6] = iVar10;
  puVar5[7] = iVar10 + (uint)*(byte *)((int)puVar5 + 6) * 8;
  iVar13 = 4;
  puVar7 = (undefined4 *)(iVar10 + -8);
  do {
    uVar12 = puVar6[0x15];
    iVar13 = iVar13 + -1;
    puVar7[2] = puVar6[0x14];
    puVar7[3] = uVar12;
    uVar12 = puVar6[0x15];
    puVar7[4] = puVar6[0x14];
    puVar7[5] = uVar12;
    puVar7 = puVar7 + 4;
  } while (iVar13 != 0);
  bVar1 = *(byte *)((int)puVar5 + 6);
  uVar20 = (uint)bVar1;
  puVar7 = (undefined4 *)func_0010BA78(uVar20 << 3);
  puVar5[8] = (undefined4)(uintptr_t)(puVar7);
  if (uVar20 != 0) {
    puVar9 = puVar7 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = puVar6[5];
      *puVar7 = puVar6[4];
      puVar7[1] = uVar12;
      puVar9 = puVar7;
    }
    for (iVar10 = (int)uVar20 >> 1; iVar10 != 0; iVar10 = iVar10 + -1) {
      uVar12 = puVar6[5];
      puVar9[2] = puVar6[4];
      puVar9[3] = uVar12;
      uVar12 = puVar6[5];
      puVar9[4] = puVar6[4];
      puVar9[5] = uVar12;
      puVar9 = puVar9 + 4;
    }
  }
  puVar7 = (undefined4 *)func_0010CEE0(0x98,(int *)0x0,4);
  iVar10 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    *puVar7 = 0x24;
    puVar7[1] = 4;
    iVar10 = func_00100118((int)(puVar7 + 2),DAT_001bd870,0x24,4);
  }
  if (iVar10 != 0) {
    puVar5[2] = 4;
    puVar5[3] = iVar10;
  }
  iVar10 = DAT_001bd874;
  puVar5[-0x2e] = (undefined4)(uintptr_t)(local_60);
  *(undefined2 *)(iVar10 + (int)puVar17) = 4;
  local_64 = (uint *)s_cState_WaitShot_001bd878;
  local_68 = iVar8;
  iVar10 = puVar5[3];
  local_58 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  puVar18 = local_58;
  uVar20 = 0;
  do {
    if (*(char *)((int)local_64 + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_001bd8b4;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_001bd8b4:
  iVar10 = *(int *)(iVar10 + 8);
  if (iVar10 <= (int)uVar20) {
    uVar20 = iVar10 - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar20);
  *(undefined1 *)((int)local_58 + uVar20) = 0;
  puVar7 = (undefined4 *)puVar5[6];
  uVar15 = DAT_001bd844[1];
  uVar22 = DAT_001bd844[2];
  uVar23 = DAT_001bd844[3];
  uVar24 = DAT_001bd844[4];
  uVar12 = DAT_001bd844[5];
  *puVar7 = *DAT_001bd844;
  puVar7[1] = uVar15;
  puVar7 = (undefined4 *)puVar5[7];
  *puVar7 = uVar22;
  puVar7[1] = uVar23;
  puVar7 = (undefined4 *)puVar5[8];
  *puVar7 = uVar24;
  puVar7[1] = uVar12;
  local_64 = (uint *)s_cState_PrepareShot_001bdcbc;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 2) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x24;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_64 + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_001bd97c;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_001bd97c:
  if (*(int *)(iVar10 + 8) <= (int)uVar20) {
    uVar20 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar20);
  puVar7 = DAT_001bd844;
  *(undefined1 *)((int)puVar18 + uVar20) = 0;
  iVar10 = puVar5[6];
  uVar12 = puVar7[4];
  uVar15 = puVar7[8];
  uVar23 = puVar7[7];
  uVar24 = puVar7[9];
  uVar22 = puVar7[5];
  *(undefined4 *)(iVar10 + 8) = puVar7[6];
  *(undefined4 *)(iVar10 + 0xc) = uVar23;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 8) = uVar15;
  *(undefined4 *)(iVar10 + 0xc) = uVar24;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 8) = uVar12;
  *(undefined4 *)(iVar10 + 0xc) = uVar22;
  local_64 = (uint *)s_cState_Vibration_001bdcd0;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 3) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x48;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_64 + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_001bda54;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_001bda54:
  if (*(int *)(iVar10 + 8) <= (int)uVar20) {
    uVar20 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar20);
  *(undefined1 *)((int)puVar18 + uVar20) = 0;
  puVar7 = DAT_001bd844;
  iVar10 = puVar5[6];
  uVar12 = DAT_001bd844[0xc];
  uVar22 = DAT_001bd844[0xd];
  uVar15 = DAT_001bd844[4];
  uVar24 = DAT_001bd844[5];
  uVar23 = DAT_001bd844[0xb];
  *(undefined4 *)(iVar10 + 0x10) = DAT_001bd844[10];
  *(undefined4 *)(iVar10 + 0x14) = uVar23;
  iVar10 = puVar5[7];
  *(undefined4 *)(iVar10 + 0x10) = uVar12;
  *(undefined4 *)(iVar10 + 0x14) = uVar22;
  iVar10 = puVar5[8];
  *(undefined4 *)(iVar10 + 0x10) = uVar15;
  *(undefined4 *)(iVar10 + 0x14) = uVar24;
  local_64 = (uint *)s_cState_WaitSwitchOn_001bdce4;
  local_68 = iVar8;
  if ((uint)puVar5[2] < 4) {
    iVar10 = puVar5[3];
  }
  else {
    iVar10 = puVar5[3] + 0x6c;
  }
  puVar18 = *(uint **)(iVar10 + 4);
  (**(code **)(iVar8 + 8))(&local_68);
  uVar20 = 0;
  do {
    if (*(char *)((int)local_64 + uVar20) == '\0') {
      if ((int)uVar20 < 0x40001) goto LAB_001bdb2c;
      break;
    }
    uVar20 = uVar20 + 1;
  } while ((int)uVar20 < 0x40001);
  uVar20 = 0;
LAB_001bdb2c:
  if (*(int *)(iVar10 + 8) <= (int)uVar20) {
    uVar20 = *(int *)(iVar10 + 8) - 1;
  }
  (**(code **)(local_68 + 8))(&local_68);
  func_0010E3C4(puVar18,local_64,uVar20);
  *(undefined1 *)((int)puVar18 + uVar20) = 0;
  iVar8 = puVar5[6];
  uVar12 = puVar7[0x10];
  uVar15 = puVar7[4];
  uVar22 = puVar7[0xf];
  uVar24 = puVar7[0x11];
  uVar23 = puVar7[5];
  *(undefined4 *)(iVar8 + 0x18) = puVar7[0xe];
  *(undefined4 *)(iVar8 + 0x1c) = uVar22;
  iVar8 = puVar5[7];
  *(undefined4 *)(iVar8 + 0x18) = uVar12;
  *(undefined4 *)(iVar8 + 0x1c) = uVar24;
  iVar8 = puVar5[8];
  *(undefined4 *)(iVar8 + 0x18) = uVar15;
  *(undefined4 *)(iVar8 + 0x1c) = uVar23;
  if (*(char *)(puVar5 + 0x11) == '\0') {
    func_0065B3E0(local_60,0);
  }
  else {
    bVar3 = func_00588BF0((int)puVar17,0);
    *(bool *)((int)puVar5 + 0x45) = bVar3;
    func_0065B3E0(local_60,3);
  }
  fVar11 = ALBW_AS_F32(puVar5[-0xf]);
  fVar14 = ALBW_AS_F32(puVar5[-0xe]);
  uVar12 = puVar5[-0xd];
  fVar21 = func_0054DE3C((int)(uintptr_t)(puVar17),0,1);
  local_60 = (undefined4 *)0xe4;
  *(undefined2 *)(puVar5[0x14] + 0x28) = 0xe4;
  iVar8 = *local_48;
  *(float *)(iVar8 + 4) = fVar11;
  *(float *)(iVar8 + 8) = fVar14 - fVar21;
  *(undefined4 *)(iVar8 + 0xc) = uVar12;
  func_004356B4((int *)*local_48);
  uVar12 = puVar7[0x12];
  uVar15 = puVar7[0x13];
  puVar5[0x16] = (undefined4)(uintptr_t)(puVar17);
  puVar5[0x17] = uVar12;
  puVar5[0x18] = uVar15;
  fVar11 = DAT_001bdcfc;
  pfVar2 = DAT_001bdcf8;
  local_60 = (undefined4 *)0x224;
  *(undefined2 *)(puVar5[0x13] + 0x28) = 0x224;
  local_5c = *pfVar2;
  local_58 = (uint *)CF_FBITS(pfVar2[1]);
  fStack_54 = pfVar2[2];
  func_004D8054(&local_5c,puVar5[-9],fVar11);
  iVar8 = *piVar19;
  func_00115C54((float *)&local_48,(float *)&stack0xffffff30,&local_5c);
  *(int **)(iVar8 + 4) = local_48;
  *(undefined4 *)(iVar8 + 8) = uStack_44;
  *(undefined4 *)(iVar8 + 0xc) = uStack_40;
  func_004356B4((int *)*piVar19);
  *(int *)(puVar5[0x12] + 0x18) = *piVar19;
  func_004ED9C8(*piVar4);
  local_3c[0] = puVar5[-0x50];
  func_004EDAD0(*piVar4,local_3c);
  *(undefined2 *)(*piVar4 + 0x2c) = *(undefined2 *)(puVar5 + -0xee);
  func_004A879C(*DAT_001bdd64,*piVar4,2);
  return puVar17;
}

