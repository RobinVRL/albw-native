/* compilefix: USA 00205310 (EU 00205310), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: member reference base type 'uint' (aka 'unsigned int') is not a structure or union
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - arr[i]._O_S_ -> typed byte access at (char *)&arr[i] + O [1]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [8]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_002AED68(int param_1,undefined2 param_2);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_002C41BC(int *param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004F5174(int param_1,int param_2);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F8774(int param_1,uint param_2,int param_3,uint param_4);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAC70(int param_1,uint param_2,int *param_3);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB30C(int param_1,int param_2);
extern int func_004FB344(int param_1,int param_2);
extern float func_004FB408(int param_1);
extern int func_004FB468(int param_1);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FC218(int param_1,char param_2,int param_3,ushort param_4);
extern int func_004FC5EC(int param_1,undefined1 param_2);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_00521028(int param_1);
extern int func_005330BC(int param_1,int *param_2);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_00205704;
extern int DAT_00205708;
extern int DAT_0020570c;
extern int DAT_00205710;
extern float DAT_00205714;
extern int DAT_00205718;
extern int DAT_0020571c;
extern int DAT_002057a4;
extern undefined *DAT_00205c58;
extern int DAT_00205c5c;
extern undefined4 *DAT_00205cdc;
extern float DAT_00205ce0;
extern undefined4 DAT_00205ce4;
extern float DAT_00205ce8;
extern float DAT_00205cec;
extern char s_BuzzBlob_00205720[];
extern char s_BuzzBlob_Thunder_0020572c[];
extern char s_cState_Appear_00205c6c[];
extern char s_cState_BiriBiri_00205ca4[];
extern char s_cState_Chase_00205cb4[];
extern char s_cState_Die_00205cd0[];
extern char s_cState_Hide_00205c60[];
extern char s_cState_Home_00205cc4[];
extern char s_cState_Reaction_00205c7c[];
extern char s_cState_Wait_00205c8c[];
extern char s_cState_Walk_00205c98[];

// USA 00205310 <- EU 00205310 (Ghidra, non-matching)
// GLOBAL DAT_00205704 uint *
// GLOBAL DAT_00205708 int
// GLOBAL DAT_0020570c int
// GLOBAL DAT_00205710 int
// GLOBAL DAT_00205714 float
// GLOBAL DAT_00205718 int
// GLOBAL DAT_0020571c int
// GLOBAL DAT_002057a4 int
// GLOBAL DAT_00205c58 undefined *
// GLOBAL DAT_00205c5c int
// GLOBAL DAT_00205cdc undefined4 *
// GLOBAL DAT_00205ce0 float
// GLOBAL DAT_00205ce4 undefined4
// GLOBAL DAT_00205ce8 float
// GLOBAL DAT_00205cec float
// GLOBAL s_BuzzBlob_00205720 string
// GLOBAL s_BuzzBlob_Thunder_0020572c string
// GLOBAL s_cState_Appear_00205c6c string
// GLOBAL s_cState_BiriBiri_00205ca4 string
// GLOBAL s_cState_Chase_00205cb4 string
// GLOBAL s_cState_Die_00205cd0 string
// GLOBAL s_cState_Hide_00205c60 string
// GLOBAL s_cState_Home_00205cc4 string
// GLOBAL s_cState_Reaction_00205c7c string
// GLOBAL s_cState_Wait_00205c8c string
// GLOBAL s_cState_Walk_00205c98 string

int * func_00205310(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x90]; /* entry_sp - 0x90 .. entry_sp + 0x0 */
#define stack0xffffff70 (*(undefined4 *)(albw_frame + 0x0))
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined2 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  ushort uVar11;
  int iVar12;
  float *pfVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fparam_0;
  undefined8 uVar21;
  int iVar22;
  #define local_80 (*(int *)(albw_frame + 0x10))
  #define local_7c (*(char * *)(albw_frame + 0x14))
  #define local_78 (*(int *)(albw_frame + 0x18))
  #define local_74 (*(uint * *)(albw_frame + 0x1c))
  #define local_70 (*(int *)(albw_frame + 0x20))
  #define local_6c ((uint *)(albw_frame + 0x24))
  #define uStack_59 (*(undefined1 *)(albw_frame + 0x37))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x38))
  #define local_40 (*(uint *)(albw_frame + 0x50))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x64))
  #define local_28 (*(uint * *)(albw_frame + 0x68))
  puVar10 = (undefined1 *)(&stack0xffffff70);
  puStack_2c = param_1;
  local_28 = param_2;
  piVar2 = (int *)(uintptr_t)(func_004FD464(param_1,param_2,DAT_00205704));
  iVar22 = DAT_0020570c;
  iVar15 = DAT_00205710 + 0x84;
  *piVar2 = DAT_00205710;
  iVar12 = DAT_00205708;
  piVar2[200] = iVar15;
  piVar2[0x22f] = iVar22;
  piVar2[0x230] = iVar12;
  piVar2[0x231] = iVar12;
  *(undefined2 *)((int)piVar2 + 0x8ca) = 0xffff;
  *(undefined2 *)(piVar2 + 0x233) = 0;
  piVar2[0x234] = 0;
  fparam_0 = DAT_00205714;
  piVar2[0x235] = 0;
  piVar2[0x236] = 0;
  piVar2[0x237] = (int)ALBW_AS_U32(fparam_0);
  piVar2[0x238] = 0;
  piVar2[0x239] = 0;
  piVar2[0x23a] = (int)ALBW_AS_U32(fparam_0);
  piVar2[0x23b] = 0;
  puVar3 = (undefined4 *)(uintptr_t)(func_0010A794(piVar2 + 0x23c));
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  iVar12 = DAT_00205718;
  piVar2 = puVar3 + -0x23c;
  local_70 = 0x14;
  uStack_59 = 0;
  (*(undefined1 *)((char *)&local_6c[0] + 0)) = 0;
  local_78 = DAT_0020571c;
  if (*(short *)(puVar3 + -0x230) == 0) {
    pcVar4 = s_BuzzBlob_00205720;
  }
  else {
    pcVar4 = s_BuzzBlob_Thunder_0020572c;
  }
  iVar22 = DAT_00205718;
  local_74 = local_6c;
  if (*(short *)(puVar3 + -0x230) == 0) {
    (**(code **)(DAT_00205718 + 8))(&stack0xffffff70);
    uVar14 = 0;
    do {
      if (*(char *)((int)pcVar4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_00205468;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_00205468:
    if ((int)uVar14 < local_70) goto LAB_00205494;
  }
  else {
    (**(code **)(DAT_00205718 + 8))();
    uVar14 = 0;
    do {
      if (*(char *)((int)pcVar4 + uVar14) == '\0') {
        if ((int)uVar14 < 0x40001) goto LAB_00205488;
        break;
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x40001);
    uVar14 = 0;
LAB_00205488:
    if ((int)uVar14 < local_70) goto LAB_00205494;
  }
  uVar14 = local_70 - 1;
LAB_00205494:
  (**(code **)(iVar22 + 8))(&stack0xffffff70);
  func_0010E3C4(local_6c,(uint *)pcVar4,uVar14);
  *(undefined1 *)((int)local_6c + uVar14) = 0;
  piVar5 = (int *)func_005330BC(*(int *)(puVar3[-0x188] + 0x1c8),&local_78);
  func_004F8774((int)piVar2,DAT_00205704[1],0,(uint)piVar5);
  func_004FB344((int)piVar2,10);
  func_004FACA4((int)piVar2,0,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,1,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,2,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,3,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,4,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,5,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,6,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,7,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,8,(int *)&stack0xffffff70);
  func_004FACA4((int)piVar2,9,(int *)&stack0xffffff70);
  func_004FB468((int)piVar2);
  if (*(short *)(puVar3 + -0x230) == 1) {
    func_004FB30C((int)piVar2,1);
    func_004FAC70((int)piVar2,0,(int *)&stack0xffffff70);
    func_004FB408((int)piVar2);
    func_004FB4C4((int)piVar2,fparam_0);
    func_004FACD4((int)piVar2,(int *)0x0,(undefined4)(uintptr_t)(puVar10),piVar5);
    puVar6 = (undefined2 *)func_0054DDF4((int)piVar2,1);
    puVar3[-8] = (undefined4)(uintptr_t)(puVar6);
    func_004F88A0(piVar2,puVar6);
    uVar14 = *(uint *)(puVar3[-0x133] + 0x2c);
    *(uint *)(puVar3[-0x133] + 0x2c) = uVar14 | 0x20000;
    *(uint *)(puVar3[-0x133] + 0x2c) = uVar14 | 0x60000;
  }
  func_004FC5EC((int)piVar2,0);
  puVar3[5] = (undefined4)(uintptr_t)(piVar2);
  *(undefined1 *)((int)puVar3 + 6) = 9;
  iVar15 = func_0010BA78(0x90);
  iVar22 = DAT_002057a4;
  puVar3[6] = iVar15;
  puVar3[7] = iVar15 + (uint)*(byte *)((int)puVar3 + 6) * 8;
  iVar7 = 9;
  puVar8 = (undefined4 *)(iVar15 + -8);
  do {
    uVar16 = *(undefined4 *)(iVar22 + 0xb0);
    iVar7 = iVar7 + -1;
    puVar8[2] = *(undefined4 *)(iVar22 + 0xac);
    puVar8[3] = uVar16;
    uVar16 = *(undefined4 *)(iVar22 + 0xb0);
    puVar8[4] = *(undefined4 *)(iVar22 + 0xac);
    puVar8[5] = uVar16;
    puVar8 = puVar8 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)((int)puVar3 + 6);
  uVar14 = (uint)bVar1;
  puVar8 = (undefined4 *)func_0010BA78(uVar14 << 3);
  puVar3[8] = (undefined4)(uintptr_t)(puVar8);
  if (uVar14 != 0) {
    puVar9 = puVar8 + -2;
    if ((bVar1 & 1) != 0) {
      uVar16 = *(undefined4 *)(iVar22 + 0x18);
      *puVar8 = *(undefined4 *)(iVar22 + 0x14);
      puVar8[1] = uVar16;
      puVar9 = puVar8;
    }
    for (iVar15 = (int)uVar14 >> 1; iVar15 != 0; iVar15 = iVar15 + -1) {
      uVar16 = *(undefined4 *)(iVar22 + 0x18);
      puVar9[2] = *(undefined4 *)(iVar22 + 0x14);
      puVar9[3] = uVar16;
      uVar16 = *(undefined4 *)(iVar22 + 0x18);
      puVar9[4] = *(undefined4 *)(iVar22 + 0x14);
      puVar9[5] = uVar16;
      puVar9 = puVar9 + 4;
    }
  }
  puVar8 = (undefined4 *)func_0010CEE0(0x14c,(int *)0x0,4);
  iVar15 = 0;
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0x24;
    puVar8[1] = 9;
    iVar15 = func_00100118((int)(puVar8 + 2),DAT_00205c58,0x24,9);
  }
  if (iVar15 != 0) {
    puVar3[2] = 9;
    puVar3[3] = iVar15;
  }
  iVar15 = DAT_00205c5c;
  puVar3[-0x167] = (undefined4)(uintptr_t)(puVar3);
  *(undefined2 *)(iVar15 + (int)piVar2) = 9;
  local_7c = s_cState_Hide_00205c60;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,0,&local_80);
  puVar8 = (undefined4 *)puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 8);
  uVar17 = *(undefined4 *)(iVar22 + 0xc);
  uVar18 = *(undefined4 *)(iVar22 + 0x10);
  uVar19 = *(undefined4 *)(iVar22 + 0x14);
  uVar20 = *(undefined4 *)(iVar22 + 0x18);
  *puVar8 = *(undefined4 *)(iVar22 + 4);
  puVar8[1] = uVar16;
  puVar8 = (undefined4 *)puVar3[7];
  *puVar8 = uVar17;
  puVar8[1] = uVar18;
  puVar8 = (undefined4 *)puVar3[8];
  *puVar8 = uVar19;
  puVar8[1] = uVar20;
  local_7c = s_cState_Appear_00205c6c;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,1,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x20);
  uVar17 = *(undefined4 *)(iVar22 + 0x24);
  uVar18 = *(undefined4 *)(iVar22 + 0x28);
  uVar19 = *(undefined4 *)(iVar22 + 0x2c);
  uVar20 = *(undefined4 *)(iVar22 + 0x30);
  *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(iVar22 + 0x1c);
  *(undefined4 *)(iVar15 + 0xc) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 8) = uVar17;
  *(undefined4 *)(iVar15 + 0xc) = uVar18;
  iVar15 = puVar3[8];
  *(undefined4 *)(iVar15 + 8) = uVar19;
  *(undefined4 *)(iVar15 + 0xc) = uVar20;
  local_7c = s_cState_Reaction_00205c7c;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,2,&local_80);
  iVar15 = puVar3[6];
  uVar17 = *(undefined4 *)(iVar22 + 0x48);
  uVar19 = *(undefined4 *)(iVar22 + 0x44);
  uVar20 = *(undefined4 *)(iVar22 + 0x38);
  uVar16 = *(undefined4 *)(iVar22 + 0x3c);
  uVar18 = *(undefined4 *)(iVar22 + 0x40);
  *(undefined4 *)(iVar15 + 0x10) = *(undefined4 *)(iVar22 + 0x34);
  *(undefined4 *)(iVar15 + 0x14) = uVar20;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x10) = uVar16;
  *(undefined4 *)(iVar15 + 0x14) = uVar18;
  iVar15 = puVar3[8];
  *(undefined4 *)(iVar15 + 0x10) = uVar19;
  *(undefined4 *)(iVar15 + 0x14) = uVar17;
  local_7c = s_cState_Wait_00205c8c;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,3,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x50);
  uVar17 = *(undefined4 *)(iVar22 + 0x54);
  uVar18 = *(undefined4 *)(iVar22 + 0x58);
  uVar21 = *(undefined8 *)(iVar22 + 0x14);
  *(undefined4 *)(iVar15 + 0x18) = *(undefined4 *)(iVar22 + 0x4c);
  *(undefined4 *)(iVar15 + 0x1c) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x18) = uVar17;
  *(undefined4 *)(iVar15 + 0x1c) = uVar18;
  iVar15 = puVar3[8];
  *(int *)(iVar15 + 0x18) = (int)uVar21;
  *(int *)(iVar15 + 0x1c) = (int)((ulonglong)uVar21 >> 0x20);
  local_7c = s_cState_Walk_00205c98;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,4,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x60);
  uVar17 = *(undefined4 *)(iVar22 + 100);
  uVar18 = *(undefined4 *)(iVar22 + 0x68);
  *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar22 + 0x5c);
  *(undefined4 *)(iVar15 + 0x24) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x20) = uVar17;
  *(undefined4 *)(iVar15 + 0x24) = uVar18;
  iVar15 = puVar3[8];
  *(int *)(iVar15 + 0x20) = (int)uVar21;
  *(int *)(iVar15 + 0x24) = (int)((ulonglong)uVar21 >> 0x20);
  local_7c = s_cState_BiriBiri_00205ca4;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,5,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x70);
  uVar17 = *(undefined4 *)(iVar22 + 0x74);
  uVar18 = *(undefined4 *)(iVar22 + 0x78);
  *(undefined4 *)(iVar15 + 0x28) = *(undefined4 *)(iVar22 + 0x6c);
  *(undefined4 *)(iVar15 + 0x2c) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x28) = uVar17;
  *(undefined4 *)(iVar15 + 0x2c) = uVar18;
  iVar15 = puVar3[8];
  *(int *)(iVar15 + 0x28) = (int)uVar21;
  *(int *)(iVar15 + 0x2c) = (int)((ulonglong)uVar21 >> 0x20);
  local_7c = s_cState_Chase_00205cb4;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,6,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x80);
  uVar17 = *(undefined4 *)(iVar22 + 0x84);
  uVar18 = *(undefined4 *)(iVar22 + 0x88);
  *(undefined4 *)(iVar15 + 0x30) = *(undefined4 *)(iVar22 + 0x7c);
  *(undefined4 *)(iVar15 + 0x34) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x30) = uVar17;
  *(undefined4 *)(iVar15 + 0x34) = uVar18;
  iVar15 = puVar3[8];
  *(int *)(iVar15 + 0x30) = (int)uVar21;
  *(int *)(iVar15 + 0x34) = (int)((ulonglong)uVar21 >> 0x20);
  local_7c = s_cState_Home_00205cc4;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,7,&local_80);
  iVar15 = puVar3[6];
  uVar16 = *(undefined4 *)(iVar22 + 0x90);
  uVar17 = *(undefined4 *)(iVar22 + 0x94);
  uVar18 = *(undefined4 *)(iVar22 + 0x98);
  *(undefined4 *)(iVar15 + 0x38) = *(undefined4 *)(iVar22 + 0x8c);
  *(undefined4 *)(iVar15 + 0x3c) = uVar16;
  iVar15 = puVar3[7];
  *(undefined4 *)(iVar15 + 0x38) = uVar17;
  *(undefined4 *)(iVar15 + 0x3c) = uVar18;
  iVar15 = puVar3[8];
  *(int *)(iVar15 + 0x38) = (int)uVar21;
  *(int *)(iVar15 + 0x3c) = (int)((ulonglong)uVar21 >> 0x20);
  local_7c = s_cState_Die_00205cd0;
  local_80 = iVar12;
  func_0010BEC4((int)puVar3,8,&local_80);
  uVar16 = *(undefined4 *)(iVar22 + 0xa8);
  iVar12 = puVar3[6];
  uVar17 = *(undefined4 *)(iVar22 + 0xa0);
  uVar18 = *(undefined4 *)(iVar22 + 0xa4);
  *(undefined4 *)(iVar12 + 0x40) = *(undefined4 *)(iVar22 + 0x9c);
  *(undefined4 *)(iVar12 + 0x44) = uVar17;
  iVar12 = puVar3[7];
  *(undefined4 *)(iVar12 + 0x40) = uVar18;
  *(undefined4 *)(iVar12 + 0x44) = uVar16;
  iVar12 = puVar3[8];
  *(int *)(iVar12 + 0x40) = (int)uVar21;
  *(int *)(iVar12 + 0x44) = (int)((ulonglong)uVar21 >> 0x20);
  piVar5 = (int *)func_00521028((int)piVar2);
  (**(code **)(*piVar5 + 8))(piVar5);
  func_003529A0(auStack_58,piVar5[1],(undefined4)(uintptr_t)(puVar3 + -0x174));
  local_40 = (uint)(*(short *)(puVar3 + -0x230) != 0);
  func_002C41BC(puVar3 + -0x174,auStack_58,0);
  puVar3[-0xd5] = puVar3[-0xd5] | 0x8000;
  if (*(short *)((int)local_28 + 0x2a) == 0) {
    func_0065D3A8(puVar3,4);
  }
  else {
    func_0065D3A8(puVar3,0);
  }
  func_004F8864((int)piVar2,DAT_00205cdc,0,DAT_00205ce0);
  func_002AF5FC((int)piVar2,8,-1);
  *(undefined1 *)((int)puVar3 + -0x173) = 9;
  *(undefined1 *)((int)puVar3 + -0x172) = 0xff;
  *(undefined1 *)((int)puVar3 + -0x171) = 0;
  func_002AED68((int)piVar2,8);
  uVar11 = (ushort)DAT_00205ce4;
  func_004FC218((int)piVar2,'\x06',-1,uVar11);
  pfVar13 = (float *)0xffffffff;
  func_004FBA18((int)piVar2,7,0xff,-1,0x1e,0,uVar11,DAT_00205cec,DAT_00205ce8);
  func_004FC5EC((int)piVar2,8);
  func_004F5174((int)piVar2,(uint)(*(char *)(puVar3 + 1) != '\0'));
  func_004F5BD8((int)piVar2,(uint *)0x0,(int **)0x0,pfVar13);
  return piVar2;
}

