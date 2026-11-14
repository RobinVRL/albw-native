/* compilefix: USA 00405138 (EU 00405118), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_004066B4(undefined4 *param_1,char *param_2,int *param_3);
extern int func_004073FC(int param_1,int param_2,uint param_3);
extern int func_004074A4(byte *param_1,uint param_2);
extern int func_00407524(undefined1 *param_1);
extern undefined4 DAT_0040548c;
extern undefined *DAT_00405490;

// USA 00405138 <- EU 00405118 (Ghidra, non-matching)
// GLOBAL DAT_0040548c undefined4
// GLOBAL DAT_00405490 undefined *

byte * func_00405138(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined1 *puVar14;
  int *piVar15;
  uint uVar16;
  bool bVar17;
  uint in_fpscr;
  undefined4 uVar18;
  
  puVar4 = (undefined4 *)(uintptr_t)(func_00400254(param_1,param_2,param_4));
  *puVar4 = DAT_0040548c;
  iVar5 = func_00100118((int)(puVar4 + 0x2d),DAT_00405490,4,4);
  pbVar6 = (byte *)(uintptr_t)(func_00407524((undefined1 *)(iVar5 + 0x10)));
  bVar17 = param_3 == 0;
  if (bVar17) {
    param_3 = param_2;
  }
  pbVar6[8] = 0;
  pbVar6[10] = 0;
  if (bVar17) {
    piVar15 = (int *)CF_FBITS(param_4[7]);
  }
  else {
    piVar15 = (int *)CF_FBITS(param_4[8]);
  }
  pbVar6[8] = (byte)(((uint)*(byte *)(param_3 + 0x65) << 0x1c) >> 0x1e);
  if ((*(byte *)(param_3 + 0x65) & 2) != 0) {
    pbVar6[10] = 1;
  }
  if ((*(byte *)(param_3 + 0x65) & 1) != 0) {
    pbVar6[10] = pbVar6[10] | 2;
  }
  if ((*(byte *)(param_3 + 0x65) & 0x10) != 0) {
    pbVar6[10] = pbVar6[10] | 4;
  }
  iVar5 = *(int *)(param_3 + 0x68) + param_3;
  uVar16 = (uint)*(byte *)(iVar5 + 0x12);
  if (3 < uVar16) {
    uVar16 = 3;
  }
  if (uVar16 != 0) {
    func_004074A4(pbVar6,uVar16);
  }
  *(undefined2 *)(pbVar6 + -0x20) = *(undefined2 *)(param_3 + 0x54);
  *(undefined2 *)(pbVar6 + -0x1e) = *(undefined2 *)(param_3 + 0x56);
  *(undefined2 *)(pbVar6 + -0x1c) = *(undefined2 *)(param_3 + 0x58);
  sVar3 = *(short *)(param_3 + 0x5a);
  *(short *)(pbVar6 + -0x1a) = sVar3;
  sVar2 = *(short *)(pbVar6 + -0x20);
  bVar17 = sVar2 == 0;
  if (bVar17) {
    sVar2 = *(short *)(pbVar6 + -0x1e);
  }
  if ((!bVar17 || sVar2 != 0) || (*(short *)(pbVar6 + -0x1c) != 0 || sVar3 != 0)) {
    pbVar6[10] = pbVar6[10] | 8;
  }
  if (pbVar6[8] == 1) {
    *(undefined2 *)(pbVar6 + -0x18) = *(undefined2 *)(param_3 + 0x5c);
    *(undefined2 *)(pbVar6 + -0x16) = *(undefined2 *)(param_3 + 0x5e);
    pbVar6[-0xffffffff00000014] = 0;
    pbVar6[-0xffffffff00000013] = 0;
    pbVar6[-0xffffffff00000012] = 0;
    pbVar6[-0xffffffff00000011] = 0;
    uVar18 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0x60),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(pbVar6 + -0x84) = uVar18;
    pbVar6[-0x80] = pbVar6[-0x80] & 0xef | 0x10;
  }
  else if (pbVar6[8] == 2) {
    uVar18 = VectorFloatToUnsigned(ALBW_AS_F32(*(undefined4 *)(pbVar6 + -0x88)),3);
    *(short *)(pbVar6 + -0x18) = (short)uVar18 - *(short *)(param_3 + 0x5e);
    *(undefined2 *)(pbVar6 + -0x16) = *(undefined2 *)(param_3 + 0x5e);
    pbVar6[-0xffffffff00000014] = 0;
    pbVar6[-0xffffffff00000013] = 0;
    pbVar6[-0xffffffff00000012] = 0;
    pbVar6[-0xffffffff00000011] = 0;
    uVar18 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(ushort *)(param_3 + 0x60),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(pbVar6 + -0x84) = uVar18;
    pbVar6[-0x80] = pbVar6[-0x80] & 0xef | 0x10;
  }
  else {
    *(undefined2 *)(pbVar6 + -0x18) = *(undefined2 *)(param_3 + 0x5c);
    *(undefined2 *)(pbVar6 + -0x16) = *(undefined2 *)(param_3 + 0x5e);
    *(undefined2 *)(pbVar6 + -0x14) = *(undefined2 *)(param_3 + 0x60);
    *(undefined2 *)(pbVar6 + -0x12) = *(undefined2 *)(param_3 + 0x62);
  }
  iVar7 = piVar15[2];
  uVar8 = 0;
  do {
    iVar9 = uVar8 * 4;
    iVar12 = uVar8 * 4;
    uVar8 = uVar8 + 1;
    *(undefined4 *)(pbVar6 + -0xc4 + iVar12 + 0xb4) = *(undefined4 *)(iVar5 + iVar9);
  } while ((int)uVar8 < 4);
  if (uVar16 != 0) {
    uVar8 = (uint)*pbVar6;
  }
  if (uVar16 != 0 && uVar8 != 0) {
    func_004073FC((int)pbVar6,iVar5 + 0x14,uVar16);
  }
  iVar9 = piVar15[2];
  iVar12 = *(int *)(iVar7 + 0xc + (uint)*(ushort *)(iVar5 + 0x10) * 4);
  puVar4 = (undefined4 *)func_00404138(0xa0,4);
  iVar5 = 0;
  if (puVar4 != (undefined4 *)0x0) {
    iVar5 = func_004066B4(puVar4,(char *)(iVar9 + iVar12),piVar15);
  }
  *(int *)(pbVar6 + 0x10) = iVar5;
  pbVar6[9] = 0;
  pbVar6[0xc] = 0;
  pbVar6[0xd] = 0;
  pbVar6[0xe] = 0;
  pbVar6[0xf] = 0;
  bVar1 = *(byte *)(param_3 + 100);
  uVar16 = (uint)bVar1;
  if (uVar16 != 0) {
    iVar5 = func_00404138(uVar16 << 3,4);
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      uVar8 = 0;
      if (uVar16 != 0) {
        do {
          puVar14 = (undefined1 *)(iVar5 + uVar8 * 8);
          uVar8 = uVar8 + 1;
          if (puVar14 != (undefined1 *)0x0) {
            *puVar14 = 0;
            *(undefined4 *)(puVar14 + 4) = 0;
          }
        } while (uVar8 < uVar16);
      }
    }
    *(int *)(pbVar6 + 0xc) = iVar5;
    if (iVar5 != 0) {
      pbVar6[9] = bVar1;
    }
    iVar5 = *(int *)(param_3 + 0x6c);
    iVar9 = 0;
    if (pbVar6[9] != 0) {
      do {
        puVar10 = (ushort *)(*(int *)(iVar5 + param_3 + iVar9 * 4) + param_3);
        *(char *)(*(int *)(pbVar6 + 0xc) + iVar9 * 8) = (char)puVar10[1];
        iVar13 = piVar15[2];
        iVar11 = *(int *)(iVar7 + 0xc + (uint)*puVar10 * 4);
        puVar4 = (undefined4 *)func_00404138(0xa0,4);
        iVar12 = 0;
        if (puVar4 != (undefined4 *)0x0) {
          iVar12 = func_004066B4(puVar4,(char *)(iVar13 + iVar11),piVar15);
        }
        iVar11 = iVar9 * 8;
        iVar9 = iVar9 + 1;
        *(int *)(*(int *)(pbVar6 + 0xc) + iVar11 + 4) = iVar12;
      } while (iVar9 < (int)(uint)pbVar6[9]);
    }
  }
  return pbVar6 + -0xc4;
}

