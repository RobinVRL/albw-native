/* compilefix: USA 002FA8BC (EU 002FA898), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [4]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "../include/ghidra_concat44.h"
extern char s_cf_002faf2c[];
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010A794(undefined4 *param_1);
extern int func_0010BA78(undefined4 param_1);
extern int func_0010BAB4(undefined4 param_1);
extern int func_0010BEC4(int param_1,uint param_2,int *param_3);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00111A64(uint *param_1);
extern int func_0026171C(int param_1,float *param_2,uint *param_3,float *param_4);
extern int func_00261A8C(undefined4 *param_1,undefined4 param_2,int *param_3,int param_4,uint param_5, int param_6,uint param_7,int param_8,uint param_9,byte param_10);
extern int func_002AF5FC(int param_1,undefined2 param_2,int param_3);
extern int func_0032427C(int param_1,float fparam_0,float fparam_1);
extern int func_0036CF6C(undefined4 *param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FACA4(int param_1,uint param_2,int *param_3);
extern int func_004FB344(int param_1,int param_2);
extern int func_004FB468(int param_1);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBA18(int param_1,undefined1 param_2,undefined1 param_3,int param_4,int param_5, undefined1 param_6,ushort param_7,float fparam_0,float fparam_1);
extern int func_004FD464(undefined4 *param_1,uint *param_2,uint *param_3);
extern int func_005330BC(int param_1,int *param_2);
extern int func_00564A78(int param_1,int *param_2);
extern int func_00664230(undefined4 *param_1,undefined1 param_2);
extern float fRam002faf24;
extern float fRam002faf44;
extern int iRam002fac80;
extern int iRam002fac88;
extern int iRam002fac98;
extern undefined4 uRam002faf28;
extern undefined4 uRam002faf3c;
extern undefined4 uRam002faf40;
extern int *piRam002faf38;
extern undefined4 *puRam002fac7c;
extern undefined4 *puRam002fac84;
extern uint *DAT_002fac64;
extern int DAT_002fac68;
extern undefined4 DAT_002fac6c;
extern undefined *DAT_002fac70;
extern undefined4 DAT_002fac74;
extern int DAT_002fac78;
extern char s_cState_Die_002faf18[];
extern char s_cState_Fall_002fac8c[];
extern char s_cState_Reaction_002faf08[];
extern char s_cState_Throw_002facb4[];
extern char s_cState_Wait_002faca8[];
extern char s_cState_Walk_002fac9c[];

// USA 002FA8BC <- EU 002FA898 (Ghidra, non-matching)
// GLOBAL DAT_002fac64 uint *
// GLOBAL DAT_002fac68 int
// GLOBAL DAT_002fac6c undefined4
// GLOBAL DAT_002fac70 undefined *
// GLOBAL DAT_002fac74 undefined4
// GLOBAL DAT_002fac78 int
// GLOBAL UNK_002fac7c undefined4 *
// GLOBAL UNK_002fac80 int
// GLOBAL UNK_002fac84 undefined *
// GLOBAL UNK_002fac88 int
// GLOBAL UNK_002fac98 int
// GLOBAL UNK_002faf24 float
// GLOBAL UNK_002faf28 undefined4
// GLOBAL UNK_002faf38 int *
// GLOBAL UNK_002faf3c undefined4
// GLOBAL UNK_002faf40 undefined4
// GLOBAL UNK_002faf44 float
// GLOBAL s_cState_Die_002faf18 string
// GLOBAL s_cState_Fall_002fac8c string
// GLOBAL s_cState_Reaction_002faf08 string
// GLOBAL s_cState_Throw_002facb4 string
// GLOBAL s_cState_Wait_002faca8 string
// GLOBAL s_cState_Walk_002fac9c string

int func_002FA8BC(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define iStack_40 (*(int *)(albw_frame + 0x0))
  #define pcStack_3c (*(char * *)(albw_frame + 0x4))
  piVar2 = (int *)(uintptr_t)(func_004FD464(param_1,param_2,DAT_002fac64));
  iVar4 = DAT_002fac68;
  *piVar2 = DAT_002fac68;
  piVar2[200] = iVar4 + 0x84;
  puVar3 = (undefined4 *)(uintptr_t)(func_0010A794(piVar2 + 0x22f));
  puVar3[5] = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  puVar3[9] = 0;
  uVar12 = DAT_002fac6c;
  puVar3[10] = 0;
  puVar3[0xb] = uVar12;
  iVar4 = func_00100118((int)(puVar3 + 0xc),DAT_002fac70,0x10,8);
  *(undefined4 *)(iVar4 + 0x80) = 0;
  *(undefined4 *)(iVar4 + 0x84) = 0;
  *(undefined4 *)(iVar4 + 0x88) = 0;
  uVar15 = DAT_002fac74;
  uVar17 = CONCAT44(uVar12,DAT_002fac74);
  *(undefined4 *)(iVar4 + 0x8c) = 0;
  if (iVar4 + 0x90 != 0) {
    *(int *)(iVar4 + 0x80) = iVar4 + 0x90;
    *(undefined4 *)(iVar4 + 0x84) = 10;
  }
  *(undefined4 *)(iVar4 + 0x108) = uVar15;
  iVar8 = iVar4 + -0x8ec;
  *(undefined4 *)(iVar4 + 0x10c) = uVar15;
  *(undefined1 *)(iVar4 + 0x110) = 0;
  *(undefined4 *)(iVar4 + 0x114) = 0;
  *(undefined4 *)(iVar4 + 0x118) = 0;
  *(undefined4 *)(iVar4 + 0x11c) = 0;
  *(undefined4 *)(iVar4 + 0x120) = 0;
  *(undefined4 *)(iVar4 + 0x124) = uVar15;
  *(undefined1 *)(iVar4 + 0x128) = 4;
  *(undefined4 *)(iVar4 + 300) = 0;
  *(undefined1 *)(iVar4 + 0x130) = 0;
  *(undefined4 *)(iVar4 + 0x134) = 0;
  *(undefined4 *)(iVar4 + 0x138) = 0;
  *(undefined4 *)(iVar4 + 0x13c) = uVar12;
  *(undefined1 *)(iVar4 + 0x140) = 0;
  *(undefined4 *)(iVar4 + -0x510) = uVar15;
  *(undefined4 *)(iVar4 + -0x50c) = uVar15;
  piVar2 = (int *)(iVar4 + 0x120);
  *(undefined4 *)(iVar4 + -0x508) = uVar15;
  func_004FB344(iVar8,0xc);
  iVar10 = DAT_002fac78;
  uVar9 = 0;
  do {
    func_004FACA4(iVar8,uVar9,(int *)(iVar10 + uVar9 * 8));
    uVar9 = uVar9 + 1;
  } while ((int)uVar9 < 0xc);
  func_004FB468(iVar8);
  func_004FABDC(iVar8,6,0xffffffff,0);
  func_004FB4E0(iVar8,ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)));
  iVar10 = *(int *)(iVar4 + -0x4dc);
  uVar13 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(*(int *)(iVar10 + 0x14) + 0x14)),3);
  uVar9 = func_00111A64((uint *)*puRam002fac7c);
  iVar10 = *(int *)(iVar10 + 0x14);
  fVar14 = (float)VectorUnsignedToFloat
                            ((int)((ulonglong)uVar13 * (ulonglong)uVar9 >> 0x20),
                             (byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(iVar10 + 8) != fVar14) {
    *(float *)(iVar10 + 8) = fVar14;
    *(undefined1 *)(iVar10 + 0x26) = 1;
  }
  *(int *)(iVar4 + -0x1c) = iVar8;
  puVar11 = (undefined4 *)(iVar4 + -0x30);
  *(undefined1 *)(iVar4 + -0x2a) = 6;
  iVar5 = func_0010BA78(0x60);
  iVar10 = iRam002fac80;
  *(int *)(iVar4 + -0x18) = iVar5;
  *(uint *)(iVar4 + -0x14) = iVar5 + (uint)*(byte *)(iVar4 + -0x2a) * 8;
  iVar7 = 6;
  puVar3 = (undefined4 *)(iVar5 + -8);
  do {
    uVar12 = *(undefined4 *)(iVar10 + 0x70);
    iVar7 = iVar7 + -1;
    puVar3[2] = *(undefined4 *)(iVar10 + 0x6c);
    puVar3[3] = uVar12;
    uVar12 = *(undefined4 *)(iVar10 + 0x70);
    puVar3[4] = *(undefined4 *)(iVar10 + 0x6c);
    puVar3[5] = uVar12;
    puVar3 = puVar3 + 4;
  } while (iVar7 != 0);
  bVar1 = *(byte *)(iVar4 + -0x2a);
  uVar9 = (uint)bVar1;
  puVar3 = (undefined4 *)func_0010BA78(uVar9 << 3);
  *(undefined4 **)(iVar4 + -0x10) = puVar3;
  if (uVar9 != 0) {
    puVar6 = puVar3 + -2;
    if ((bVar1 & 1) != 0) {
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      *puVar3 = *(undefined4 *)(iVar10 + 0x14);
      puVar3[1] = uVar12;
      puVar6 = puVar3;
    }
    for (iVar5 = (int)uVar9 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      puVar6[2] = *(undefined4 *)(iVar10 + 0x14);
      puVar6[3] = uVar12;
      uVar12 = *(undefined4 *)(iVar10 + 0x18);
      puVar6[4] = *(undefined4 *)(iVar10 + 0x14);
      puVar6[5] = uVar12;
      puVar6 = puVar6 + 4;
    }
  }
  puVar3 = (undefined4 *)func_0010CEE0(0xe0,(int *)0x0,4);
  iVar5 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0x24;
    puVar3[1] = 6;
    iVar5 = func_00100118((int)(puVar3 + 2),(undefined *)(puRam002fac84),0x24,6);
  }
  if (iVar5 != 0) {
    *(int *)(iVar4 + -0x24) = iVar5;
    *(undefined4 *)(iVar4 + -0x28) = 6;
  }
  iVar5 = iRam002fac88;
  *(undefined4 **)(iVar4 + -0x598) = puVar11;
  iVar7 = iRam002fac98;
  *(undefined2 *)(iVar5 + iVar8) = 6;
  pcStack_3c = s_cState_Fall_002fac8c;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,0,&iStack_40);
  puVar3 = *(undefined4 **)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0xc);
  uVar15 = *(undefined4 *)(iVar10 + 8);
  uVar16 = *(undefined4 *)(iVar10 + 0x10);
  uVar18 = *(undefined8 *)(iVar10 + 0x14);
  *puVar3 = *(undefined4 *)(iVar10 + 4);
  puVar3[1] = uVar15;
  puVar3 = *(undefined4 **)(iVar4 + -0x14);
  *puVar3 = uVar12;
  puVar3[1] = uVar16;
  puVar3 = *(undefined4 **)(iVar4 + -0x10);
  *puVar3 = (int)uVar18;
  puVar3[1] = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_3c = s_cState_Walk_002fac9c;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,1,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0x20);
  uVar15 = *(undefined4 *)(iVar10 + 0x24);
  uVar16 = *(undefined4 *)(iVar10 + 0x28);
  *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar10 + 0x1c);
  *(undefined4 *)(iVar5 + 0xc) = uVar12;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(undefined4 *)(iVar5 + 8) = uVar15;
  *(undefined4 *)(iVar5 + 0xc) = uVar16;
  iVar5 = *(int *)(iVar4 + -0x10);
  *(int *)(iVar5 + 8) = (int)uVar18;
  *(int *)(iVar5 + 0xc) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_3c = s_cState_Wait_002faca8;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,2,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0x30);
  uVar15 = *(undefined4 *)(iVar10 + 0x34);
  uVar16 = *(undefined4 *)(iVar10 + 0x38);
  *(undefined4 *)(iVar5 + 0x10) = *(undefined4 *)(iVar10 + 0x2c);
  *(undefined4 *)(iVar5 + 0x14) = uVar12;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(undefined4 *)(iVar5 + 0x10) = uVar15;
  *(undefined4 *)(iVar5 + 0x14) = uVar16;
  iVar5 = *(int *)(iVar4 + -0x10);
  *(int *)(iVar5 + 0x10) = (int)uVar18;
  *(int *)(iVar5 + 0x14) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_3c = s_cState_Throw_002facb4;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,3,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0x40);
  uVar15 = *(undefined4 *)(iVar10 + 0x44);
  uVar16 = *(undefined4 *)(iVar10 + 0x48);
  *(undefined4 *)(iVar5 + 0x18) = *(undefined4 *)(iVar10 + 0x3c);
  *(undefined4 *)(iVar5 + 0x1c) = uVar12;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(undefined4 *)(iVar5 + 0x18) = uVar15;
  *(undefined4 *)(iVar5 + 0x1c) = uVar16;
  iVar5 = *(int *)(iVar4 + -0x10);
  *(int *)(iVar5 + 0x18) = (int)uVar18;
  *(int *)(iVar5 + 0x1c) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_3c = s_cState_Reaction_002faf08;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,4,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0x50);
  uVar15 = *(undefined4 *)(iVar10 + 0x54);
  uVar16 = *(undefined4 *)(iVar10 + 0x58);
  *(undefined4 *)(iVar5 + 0x20) = *(undefined4 *)(iVar10 + 0x4c);
  *(undefined4 *)(iVar5 + 0x24) = uVar12;
  iVar5 = *(int *)(iVar4 + -0x14);
  *(undefined4 *)(iVar5 + 0x20) = uVar15;
  *(undefined4 *)(iVar5 + 0x24) = uVar16;
  iVar5 = *(int *)(iVar4 + -0x10);
  *(int *)(iVar5 + 0x20) = (int)uVar18;
  *(int *)(iVar5 + 0x24) = (int)((ulonglong)uVar18 >> 0x20);
  pcStack_3c = s_cState_Die_002faf18;
  iStack_40 = iVar7;
  func_0010BEC4((int)puVar11,5,&iStack_40);
  iVar5 = *(int *)(iVar4 + -0x18);
  uVar12 = *(undefined4 *)(iVar10 + 0x60);
  uVar15 = *(undefined4 *)(iVar10 + 100);
  uVar16 = *(undefined4 *)(iVar10 + 0x68);
  *(undefined4 *)(iVar5 + 0x28) = *(undefined4 *)(iVar10 + 0x5c);
  *(undefined4 *)(iVar5 + 0x2c) = uVar12;
  fVar14 = fRam002faf24;
  iVar10 = *(int *)(iVar4 + -0x14);
  *(undefined4 *)(iVar10 + 0x28) = uVar15;
  *(undefined4 *)(iVar10 + 0x2c) = uVar16;
  iVar10 = *(int *)(iVar4 + -0x10);
  *(int *)(iVar10 + 0x28) = (int)uVar18;
  *(int *)(iVar10 + 0x2c) = (int)((ulonglong)uVar18 >> 0x20);
  func_0032427C(iVar4,ALBW_AS_F32(((ulonglong)uVar17 >> 0x20)),fVar14);
  fVar14 = ALBW_AS_F32(uVar17);
  puVar6 = (undefined4 *)func_0010BAB4(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar6 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(uintptr_t)(func_0036CF6C(puVar6,4));
  }
  *(undefined4 **)(iVar4 + 0x114) = puVar3;
  func_00664230(puVar11,2);
  *(undefined4 *)(iVar4 + -0x3fc) = uRam002faf28;
  pcStack_3c = (char *)((int)s_cf_002faf2c);
  iStack_40 = iVar7;
  uVar9 = func_005330BC(*(int *)(*(int *)(iVar4 + -0x61c) + 0x1cc),&iStack_40);
  puVar11 = (undefined4 *)func_0010BAB4(0x34);
  puVar3 = (undefined4 *)0x0;
  if (puVar11 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(uintptr_t)(func_00261A8C(puVar11,iVar8,piRam002faf38,1,uVar9,0,0,0,0,0xb));
  }
  *(undefined4 **)(iVar4 + 0x120) = puVar3;
  iVar10 = 0;
  if (puVar3 != (undefined4 *)0x0) {
    iVar10 = puVar3[6];
  }
  if (puVar3 != (undefined4 *)0x0 && iVar10 != 0) {
    *(float *)(iVar10 + 0x134) = fVar14;
    *(undefined1 *)(*piVar2 + 0x24) = 0;
    func_004CF478(*(int *)(*piVar2 + 0x18),1);
    uVar12 = uRam002faf3c;
    iVar10 = *(int *)(*piVar2 + 0x18);
    *(uint *)(iVar10 + 0x164) = *(uint *)(iVar10 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar10 + 0x74) = uVar12;
    *(undefined4 *)(iVar10 + 0x78) = uVar12;
    *(undefined4 *)(iVar10 + 0x7c) = uVar12;
    uVar12 = uRam002faf40;
    *(undefined4 *)(iVar4 + 0x138) = 5;
    *(undefined4 *)(iVar4 + 0x13c) = uVar12;
    *(undefined4 *)(iVar4 + 0x134) = 0;
    func_0026171C(*(int *)(iVar4 + 0x120),(float *)0x0,(uint *)0x0,(float *)0x0);
    uVar9 = func_00564A78(*(int *)(iVar4 + -0x4e0),piRam002faf38);
    *(uint *)(iVar4 + 0x11c) = uVar9;
    func_002AF5FC(iVar8,7,-1);
    *(undefined1 *)(iVar4 + -0x16f) = 0xb;
    *(undefined1 *)(iVar4 + -0x16e) = 0xff;
    *(undefined1 *)(iVar4 + -0x16d) = 0;
    func_004FBA18(iVar8,9,10,-1,0xc,0,0x7fff,fRam002faf44,fVar14);
  }
  else {
    *(undefined1 *)(iVar4 + -0x615) = 1;
  }
  return iVar8;
}

