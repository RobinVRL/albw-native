/* compilefix: USA 00405AE0 (EU 00405AC0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [6]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
struct _IO_FILE; extern struct _IO_FILE *stderr;
int fprintf(struct _IO_FILE *, const char *, ...);
char *getenv(const char *);

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_003E6760(undefined4 *param_1);
extern int func_00400254(undefined4 *param_1,int param_2,float *param_3);
extern int func_00403FE4(int *param_1,int param_2);
extern int func_00404138(undefined4 param_1,undefined1 param_2);
extern int func_00405910(int param_1);
extern int func_00405A44(int param_1,uint *param_2,uint param_3,uint param_4);
extern int func_004066B4(undefined4 *param_1,char *param_2,int *param_3);
extern undefined4 DAT_00405e58;
extern undefined *DAT_00405e5c;
extern undefined4 DAT_00405e60;

// USA 00405AE0 <- EU 00405AC0 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:1 char
// GLOBAL DAT_00405e58 undefined4
// GLOBAL DAT_00405e5c undefined *
// GLOBAL DAT_00405e60 undefined4

int * func_00405AE0(undefined4 *param_1,int param_2,int param_3,float *param_4,char param_5)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  byte bVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(uint * *)(albw_frame + 0x8))
  #define local_34 (*(uint *)(albw_frame + 0xc))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(uint *)(albw_frame + 0x14))
  puVar4 = (undefined4 *)(uintptr_t)(func_00400254(param_1,param_2,param_4));
  *puVar4 = DAT_00405e58;
  iVar5 = func_00100118((int)(puVar4 + 0x2b),DAT_00405e5c,4,2);
  uVar11 = DAT_00405e60;
  *(undefined4 *)(iVar5 + 0xc) = DAT_00405e60;
  *(undefined4 *)(iVar5 + 0x10) = uVar11;
  puVar4 = (undefined4 *)(uintptr_t)(func_003E6760((undefined4 *)(iVar5 + 0x3c)));
  puVar4 = (undefined4 *)(uintptr_t)(func_003E6760(puVar4 + 1));
  piVar13 = puVar4 + -0x3b;
  if (param_3 == 0) {
    piVar15 = (int *)CF_FBITS(param_4[7]);
    param_3 = param_2;
    piVar17 = piVar15;
  }
  else {
    piVar17 = (int *)CF_FBITS(param_4[8]);
    if (((uint)ALBW_AS_U32(param_4[9]) & 1) == 0) {
      piVar15 = (int *)CF_FBITS(param_4[8]);
      param_2 = param_3;
    }
    else {
      piVar15 = (int *)CF_FBITS(param_4[7]);
    }
  }
  func_00405910((int)piVar13);
  bVar1 = *(byte *)(param_2 + 0x5e);
  uVar16 = (uint)(*(ushort *)(param_2 + 0x54) >> 1);
  if (uVar16 != 0) {
    uVar16 = uVar16 - 1;
  }
  uVar14 = (uint)(*(ushort *)(param_3 + 0x56) >> 1);
  if (uVar14 != 0) {
    uVar14 = uVar14 - 1;
  }
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    piVar13[iVar5 + 0x2b] = *(int *)(param_2 + iVar5 * 4 + 0x68);
    iVar5 = iVar6;
  } while (iVar6 < 2);
  puVar4[-0xd] = *(undefined4 *)(param_2 + 0x70);
  puVar4[-0xc] = *(undefined4 *)(param_2 + 0x74);
  *(undefined1 *)(puVar4 + -7) = *(undefined1 *)(param_2 + 0x5c);
  bVar2 = *(byte *)(puVar4 + 2);
  bVar10 = *(byte *)(param_2 + 0x5d) & 3;
  *(byte *)(puVar4 + 2) = bVar2 & 0xfc | bVar10;
  puVar4[-10] = *(undefined4 *)(param_2 + 0x78);
  puVar4[-0xb] = *(undefined4 *)(param_2 + 0x7c);
  puVar4[-6] = *(undefined4 *)(param_2 + 0x60);
  *(byte *)(puVar4 + 2) = bVar2 & 0xf4 | bVar10 | (bVar1 & 1) << 3;
  uVar11 = *(undefined4 *)(param_2 + 0x88);
  puVar4[-5] = *(undefined4 *)(param_2 + 0x84);
  puVar4[-4] = uVar11;
  uVar11 = *(undefined4 *)(param_2 + 0x90);
  puVar4[-3] = *(undefined4 *)(param_2 + 0x8c);
  puVar4[-2] = uVar11;
  puVar4[-1] = *(undefined4 *)(param_2 + 0x94);
  *puVar4 = *(undefined4 *)(param_2 + 0x98);
  puVar4[1] = *(undefined4 *)(param_2 + 0x9c);
  bVar2 = *(byte *)(puVar4 + 2);
  bVar1 = (*(byte *)(param_2 + 0x5e) & 4) << 2;
  *(byte *)(puVar4 + 2) = bVar2 & 0xef | bVar1;
  *(byte *)(puVar4 + 2) =
       bVar2 & 0x4f | bVar1 | (*(byte *)(param_2 + 0x5e) & 8) << 2 | 0x40 | param_5 << 7;
  uVar11 = (**(code **)(*(int *)piVar15[3] + 0x10))
                     ((int *)piVar15[3],
                      *(int *)(piVar15[1] + 0xc + (uint)*(ushort *)(param_2 + 0x5a) * 4) +
                      piVar15[1] + 0xc);
  puVar4[-0xe] = uVar11;
  iVar12 = piVar15[2];
  iVar6 = *(int *)(iVar12 + 0xc + (uint)*(ushort *)(param_2 + 0x58) * 4);
  puVar7 = (undefined4 *)func_00404138(0xa0,4);
  iVar5 = 0;
  if (puVar7 != (undefined4 *)0x0) {
    iVar5 = func_004066B4(puVar7,(char *)(iVar6 + iVar12),piVar15);
  }
  puVar4[3] = iVar5;
  bVar3 = false;
  if (*(int *)(param_3 + 0x80) != 0) {
    puVar4[-0x11] = *(int *)(param_3 + 0x80) + param_3;
  }
  { static int tr0 = -1;
    if (tr0 < 0) tr0 = getenv("ALBW_TEXTPROV_TRACE") != 0;
    if (tr0) {
      const unsigned char *nm = (const unsigned char *)piVar13 + 0x80;
      fprintf(stderr, "textbox-build: tb %p provider word %#x +80:", (void *)piVar13, (unsigned)ALBW_AS_U32(param_4[5]));
      for (int k = 0; k < 0x28; k++) fprintf(stderr, k % 4 ? "%02x" : " %02x", nm[k]);
      fprintf(stderr, " name %.24s\n", (const char *)piVar13 + 0x8c);
    }
  }
  if (param_4[5] != 0.0) {
    local_30 = 0;
    local_2c = 0xffffffff;
    local_38 = (uint *)0x0;
    local_34 = 0;
    if ((*(byte *)(param_2 + 0x5e) & 2) != 0) {
      local_2c = uVar16;
    }
    (**(code **)(*(int *)CF_FBITS(param_4[5]) + 8))
              ((int *)CF_FBITS(param_4[5]),&local_38,puVar4[-0x11],CF_FBITS(param_4[6]),piVar13,piVar17[4]);  /* boot agent: param_4[6] is a word (a float through an unprototyped call was promoted to double) */
    { /* debug: ALBW_TEXTPROV_TRACE=1: the text provider's result (string, length, buffer size) */
      static int tr = -1;
      if (tr < 0) tr = getenv("ALBW_TEXTPROV_TRACE") != 0;
      if (tr) fprintf(stderr, "textprov: fn %#x tb %p str %p len %u size %u limit %#x flags %#x default %u\n", (unsigned)*(int *)(*(int *)CF_FBITS(param_4[5]) + 8), (void *)piVar13,
                      (void *)local_38, (unsigned)local_34, (unsigned)local_30, (unsigned)local_2c, *(byte *)(param_2 + 0x5e), uVar16);
    }
    if (local_38 != (uint *)0x0) {
      uVar16 = local_34 & 0xffff;
      if (uVar16 == 0) {
        uVar16 = 0;
        for (puVar8 = local_38; (short)*puVar8 != 0; puVar8 = (uint *)((int)puVar8 + 2)) {
          uVar16 = uVar16 + 1;
        }
        uVar16 = uVar16 & 0xffff;
      }
      if (local_30 == 0) {
        func_00403FE4(piVar13,uVar16);
      }
      else {
        func_00403FE4(piVar13,local_30 & 0xffff);
      }
      uVar9 = 0;
      if (puVar4[-0x12] != 0) {
        uVar9 = func_00405A44((int)piVar13,local_38,0,uVar16);
      }
      bVar3 = true;
      goto LAB_00405e90;
    }
  }
  if (uVar16 < uVar14) {
    uVar16 = uVar14;
  }
  uVar9 = func_00403FE4(piVar13,uVar16 & 0xffff);
LAB_00405e90:
  if (uVar14 != 0) {
    uVar9 = puVar4[-0x12];
  }
  if ((uVar14 != 0 && uVar9 != 0) && (!bVar3)) {
    func_00405A44((int)piVar13,(uint *)(*(int *)(param_3 + 100) + param_3),0,uVar14 & 0xffff);
  }
  return piVar13;
}

