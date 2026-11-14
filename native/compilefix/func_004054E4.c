/* compilefix: USA 004054E4 (EU 004054C4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
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
extern undefined4 DAT_004055ec;
extern undefined *DAT_004055f0;

// USA 004054E4 <- EU 004054C4 (Ghidra, non-matching)
// GLOBAL DAT_004055ec undefined4
// GLOBAL DAT_004055f0 undefined *

byte * func_004054E4(undefined4 *param_1,int param_2,int param_3,float *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)(uintptr_t)(func_00400254(param_1,param_2,param_4));
  *puVar1 = DAT_004055ec;
  iVar2 = func_00100118((int)(puVar1 + 0x2a),DAT_004055f0,4,4);
  pbVar3 = (byte *)(uintptr_t)(func_00407524((undefined1 *)(iVar2 + 0x10)));
  if (param_3 == 0) {
    piVar7 = (int *)CF_FBITS(param_4[7]);
    param_3 = param_2;
  }
  else {
    piVar7 = (int *)CF_FBITS(param_4[8]);
  }
  uVar8 = (uint)*(byte *)(param_3 + 0x66);
  if (3 < uVar8) {
    uVar8 = 3;
  }
  if (uVar8 != 0) {
    func_004074A4(pbVar3,uVar8);
  }
  uVar4 = 0;
  do {
    iVar2 = uVar4 * 4;
    iVar5 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    *(undefined4 *)(pbVar3 + -0xb8 + iVar5 + 0xa8) = *(undefined4 *)(param_3 + iVar2 + 0x54);
  } while ((int)uVar4 < 4);
  if (uVar8 != 0) {
    uVar4 = (uint)*pbVar3;
  }
  if (uVar8 != 0 && uVar4 != 0) {
    func_004073FC((int)pbVar3,param_3 + 0x68,uVar8);
  }
  iVar6 = piVar7[2];
  iVar5 = *(int *)(iVar6 + 0xc + (uint)*(ushort *)(param_3 + 100) * 4);
  puVar1 = (undefined4 *)func_00404138(0xa0,4);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = func_004066B4(puVar1,(char *)(iVar6 + iVar5),piVar7);
  }
  *(int *)(pbVar3 + -0x14) = iVar2;
  return pbVar3 + -0xb8;
}

