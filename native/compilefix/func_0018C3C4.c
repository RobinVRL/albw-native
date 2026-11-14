/* compilefix: USA 0018C3C4 (EU 0018C3C4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [7]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0018c873[];
extern char s_cf_0018c874[];
#include "compilefix.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00150E40(undefined4 *param_1,uint *param_2);
extern int func_0026FC20(int param_1,int param_2,int *param_3,undefined4 *param_4);
extern int func_0034CAA0(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00435714(undefined4 *param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004EDEA0(int param_1,uint *param_2);
extern int func_004EE484(undefined4 *param_1);
extern int func_0051E5F8(int param_1,float *param_2,undefined4 param_3,float fparam_0,float fparam_1);
extern int func_0054DDF4(int param_1,uint param_2);
extern int DAT_0018c72c;
extern undefined4 DAT_0018c730;
extern int DAT_0018c734;
extern undefined4 *DAT_0018c738;
extern undefined4 DAT_0018c73c;
extern int *DAT_0018c740;
extern float DAT_0018c744;
extern float DAT_0018c748;
extern int *DAT_0018c74c;
extern undefined4 DAT_0018c750;
extern undefined4 DAT_0018c754;
extern float DAT_0018c868;
extern float DAT_0018c86c;
extern undefined DAT_0018c870;
extern int DAT_0018c888;
extern int *DAT_0018c88c;
extern undefined4 _DAT_0018c870;

// USA 0018C3C4 <- EU 0018C3C4 (Ghidra, non-matching)
// GLOBAL DAT_0018c72c int
// GLOBAL DAT_0018c730 undefined4
// GLOBAL DAT_0018c734 int
// GLOBAL DAT_0018c738 undefined4 *
// GLOBAL DAT_0018c73c undefined4
// GLOBAL DAT_0018c740 int *
// GLOBAL DAT_0018c744 float
// GLOBAL DAT_0018c748 float
// GLOBAL DAT_0018c74c int *
// GLOBAL DAT_0018c750 undefined4
// GLOBAL DAT_0018c754 undefined4
// GLOBAL DAT_0018c868 float
// GLOBAL DAT_0018c86c float
// GLOBAL DAT_0018c870 undefined
// GLOBAL DAT_0018c888 int
// GLOBAL DAT_0018c88c int *
// GLOBAL s_cf_0018c873 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * func_0018C3C4(undefined4 *param_1,uint *param_2)

{
  _Alignas(8) unsigned char albw_frame[0xa0]; /* entry_sp - 0xa0 .. entry_sp + 0x0 */
#define stack0xffffff68 (*(undefined4 *)(albw_frame + 0x8))
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint in_fpscr;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  #define local_8c ((uint *)(albw_frame + 0x14))
  #define local_84 (*(float *)(albw_frame + 0x1c))
  #define local_80 (*(int *)(albw_frame + 0x20))
  #define local_7c (*(char * *)(albw_frame + 0x24))
  #define afStack_78 ((float *)(albw_frame + 0x28))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(float *)(albw_frame + 0x50))
  #define local_4c (*(undefined4 *)(albw_frame + 0x54))
  #define local_48 (*(float *)(albw_frame + 0x58))
  #define local_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define fStack_40 (*(float *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  piVar3 = (int *)(uintptr_t)(func_00150E40(param_1,param_2));
  iVar5 = DAT_0018c72c;
  piVar3[200] = DAT_0018c72c + 0x58;
  *piVar3 = iVar5;
  local_44 = 6;
  piVar4 = (int *)(uintptr_t)(func_00435714(&local_44));
  piVar3[0x103] = (int)piVar4;
  iVar5 = func_004EE484(piVar3 + 0x104);
  local_44 = 6;
  piVar3 = (int *)(uintptr_t)(func_00435714(&local_44));
  *(int **)(iVar5 + 100) = piVar3;
  iVar6 = func_004EE484((undefined4 *)(iVar5 + 0x68));
  iVar7 = iVar6 + -0x478;
  *(undefined4 *)(iVar6 + 100) = 0;
  *(undefined1 *)(iVar6 + 0x75) = 0;
  *(undefined1 *)(iVar6 + 0x76) = 0;
  *(undefined1 *)(iVar6 + 0x77) = 0;
  *(undefined1 *)(iVar6 + 0x78) = 0;
  uVar13 = DAT_0018c730;
  *(undefined1 *)(iVar6 + 0x79) = 0;
  *(undefined1 *)(iVar6 + 0x7b) = 0;
  *(undefined4 *)(iVar6 + 0x7c) = uVar13;
  *(undefined4 *)(iVar6 + 0x80) = uVar13;
  *(undefined4 *)(iVar6 + 0x84) = uVar13;
  *(undefined4 *)(iVar6 + 0x94) = 0;
  *(int *)(iVar6 + 0x98) = iVar7;
  *(int *)(iVar6 + 0x9c) = iVar6 + 0x68;
  *(int *)(iVar6 + 0xa0) = iVar6 + -0x9c;
  *(undefined1 *)(iVar6 + 0xa4) = 0;
  *(undefined1 *)(iVar6 + 0xa5) = 0;
  *(undefined1 *)(iVar6 + 0xa6) = 0;
  *(undefined1 *)(iVar6 + 0xa7) = 0;
  *(undefined1 *)(iVar6 + 0xa8) = 1;
  *(undefined4 *)(iVar6 + 0xb0) = 0;
  iVar5 = DAT_0018c734;
  *(undefined1 *)(iVar6 + 0xc1) = 0;
  *(undefined1 *)(iVar6 + 0xc2) = 0;
  *(undefined1 *)(iVar6 + 0xc3) = 0;
  *(undefined1 *)(iVar6 + 0xc4) = 0;
  *(undefined2 *)(iVar5 + iVar7) = 0;
  puVar8 = DAT_0018c738;
  uVar10 = *DAT_0018c738;
  uVar11 = DAT_0018c738[1];
  *(int *)(iVar6 + 0xcc) = iVar7;
  *(undefined4 *)(iVar6 + 0xd0) = uVar10;
  *(undefined4 *)(iVar6 + 0xd4) = uVar11;
  uVar10 = DAT_0018c73c;
  *(undefined4 *)(iVar6 + 200) = DAT_0018c73c;
  uVar11 = puVar8[2];
  *(undefined4 *)(iVar6 + 0xe4) = puVar8[3];
  *(undefined4 *)(iVar6 + 0xd8) = uVar10;
  *(int *)(iVar6 + 0xdc) = iVar7;
  *(undefined4 *)(iVar6 + 0xe0) = uVar11;
  puVar8 = (undefined4 *)(uintptr_t)(func_0034CAA0((undefined4 *)(iVar6 + 0xe8)));
  piVar3 = DAT_0018c740;
  piVar4 = puVar8 + -0x158;
  puVar8[0x12] = 0xd;
  iVar5 = *piVar3;
  if (((iVar5 != 0) && (*(char *)(iVar5 + 0x18) == '\x01')) &&
     (iVar5 = *(int *)(iVar5 + 0x1c), (iVar5 == 2 || iVar5 == 3) || iVar5 == 4)) {
    puVar8[0x12] = 0xe;
  }
  fVar14 = DAT_0018c744;
  puVar8[-0xd] = puVar8[-100];
  puVar8[-0xc] = puVar8[-99];
  puVar8[-0xb] = puVar8[-0x62];
  *(undefined1 *)(puVar8 + -10) = 1;
  func_004D80A4(&fStack_40,puVar8[-0x5e],fVar14);
  fVar12 = DAT_0018c748;
  local_3c = uVar13;
  func_0051E5F8(*DAT_0018c74c,afStack_78,(undefined4)(uintptr_t)(&fStack_40),fVar14,DAT_0018c748);
  func_00115CE4((float *)&stack0xffffff68,afStack_78,(float *)&stack0xffffff68);
  func_00115C54((float *)(puVar8 + -100),(float *)(puVar8 + -100),(float *)&stack0xffffff68);
  *(bool *)(puVar8 + -0x1d) = (short)param_2[10] != 0;
  puVar8[-0x15] = param_2[0x13];
  iVar5 = puVar8[-0x55];
  *(undefined4 *)(iVar5 + 4) = puVar8[-100];
  *(undefined4 *)(iVar5 + 8) = puVar8[-99];
  *(undefined4 *)(iVar5 + 0xc) = puVar8[-0x62];
  *(float *)(puVar8[-0x55] + 0x58) = fVar12;
  func_004356B4((int *)puVar8[-0x55]);
  iVar5 = puVar8[-0x3b];
  *(undefined4 *)(iVar5 + 4) = puVar8[-100];
  *(undefined4 *)(iVar5 + 8) = puVar8[-99];
  *(undefined4 *)(iVar5 + 0xc) = puVar8[-0x62];
  *(float *)(puVar8[-0x3b] + 0x58) = fVar12;
  func_004356B4((int *)puVar8[-0x3b]);
  uVar10 = DAT_0018c750;
  puVar8[-0x20] = DAT_0018c750;
  puVar8[-0x1f] = uVar10;
  puVar8[-0x1e] = uVar10;
  puVar8[-0x50] = puVar8[-0x55];
  local_8c[0] = puVar8[-0xa5];
  func_004EDEA0((int)(puVar8 + -0x54),local_8c);
  puVar8[-0x36] = puVar8[-0x3b];
  local_8c[0] = puVar8[-0xa5];
  func_004EDEA0((int)(puVar8 + -0x3a),local_8c);
  iVar5 = func_0054DDF4((int)piVar4,(uint)(*(char *)(puVar8 + -0x1d) != '\0'));
  puVar8[-0x70] = iVar5;
  puVar8[-0x6f] = iVar5;
  puVar9 = (undefined2 *)func_0054DDF4((int)piVar4,(uint)(*(char *)(puVar8 + -0x1d) != '\0'));
  local_8c[0] = puVar8[-0xa5];
  uVar2 = (undefined2)DAT_0018c754;
  func_0014EB8C((int)(puVar8 + -0x54),puVar8[-0x55],puVar9,local_8c,*(undefined2 *)(puVar8 + -0x143)
                ,(undefined4)(uintptr_t)(puVar8 + -4),uVar2);
  puVar9 = (undefined2 *)func_0054DDF4((int)piVar4,(uint)(*(char *)(puVar8 + -0x1d) != '\0'));
  local_8c[0] = puVar8[-0xa5];
  func_0014EB8C((int)(puVar8 + -0x3a),puVar8[-0x3b],puVar9,local_8c,*(undefined2 *)(puVar8 + -0x143)
                ,(undefined4)(uintptr_t)(puVar8 + -4),uVar2);
  cVar1 = *(char *)(*piVar3 + 0x18);
  if (cVar1 == '\a' || cVar1 == '%') {
    if (*(char *)(puVar8 + -0x1d) == '\0') {
      uVar2 = 4;
    }
    else {
      uVar2 = 8;
    }
    *(undefined2 *)(puVar8 + -0x48) = uVar2;
    *(undefined2 *)(puVar8 + -0x2e) = uVar2;
  }
  puVar8[-0xf] = puVar8[-99];
  func_00115154(&local_84,&local_54,puVar8[-0x5e]);
  uVar10 = _DAT_0018c870;
  fVar14 = DAT_0018c868;
  fVar12 = (float)VectorSignedToFloat((int)*(short *)((int)param_2 + 0x2a),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar12 = DAT_0018c86c + fVar12 * DAT_0018c868;
  puVar8[-0x5f] = ALBW_AS_U32(local_54 * fVar12);
  puVar8[-0x61] = ALBW_AS_U32(local_84 * fVar12);
  puVar8[-0x60] = uVar10;
  fVar12 = (float)VectorSignedToFloat((int)(short)param_2[0xb],(byte)(in_fpscr >> 0x15) & 3);
  local_48 = local_84 * fVar12 * fVar14;
  local_50 = -(local_54 * fVar12 * fVar14);
  local_4c = uVar13;
  func_00115C54((float *)(puVar8 + -0x61),(float *)(puVar8 + -0x61),&local_50);
  local_7c = s_cf_0018c874;
  local_80 = DAT_0018c888;
  func_00150A84(piVar4,&local_80,0);
  local_8c[0] = puVar8[-0xa5];
  func_0026FC20(*(int *)(*DAT_0018c88c + 0xf9c),(int)(char)puVar8[0x12],(int *)local_8c,
                puVar8 + -100);
  return piVar4;
}

