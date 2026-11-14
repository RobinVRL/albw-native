/* compilefix: USA 00254EFC (EU 00254F24), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'LAB_0025508c'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - &LAB_<ADDR> (a string in the code section Ghidra left as a code label, taken with add rX,pc,#imm) -> s_cf_<ADDR>, the same bytes ("Loop" / "%u") [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
extern char s_cf_0025508c[]; /* string in the code section (Ghidra left it as a code label) */

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_001B6E04(undefined4 *param_1);
extern int func_002313DC(int param_1);
extern int func_002C00D4(undefined4 *param_1,undefined4 param_2,int *param_3);
extern int func_002C0294(undefined4 *param_1);
extern undefined4 DAT_00255078;
extern undefined4 DAT_0025507c;
extern undefined DAT_00255080;
extern int DAT_00255084;
extern undefined DAT_00255088;

// USA 00254EFC <- EU 00254F24 (Ghidra, non-matching)
// GLOBAL DAT_00255078 undefined4
// GLOBAL DAT_0025507c undefined4
// GLOBAL DAT_00255080 undefined
// GLOBAL DAT_00255084 int
// GLOBAL DAT_00255088 undefined
// GLOBAL LAB_0025508c undefined

undefined4 * func_00254EFC(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined * *)(albw_frame + 0x4))
  puVar3 = (undefined4 *)(uintptr_t)(func_001B6E04(param_1));
  *puVar3 = DAT_00255078;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  uVar1 = DAT_0025507c;
  *(undefined2 *)((int)puVar3 + 0x3a) = 0xffff;
  puVar3[0xf] = uVar1;
  puVar3[0x10] = 0;
  puVar4 = (undefined4 *)func_0010BAB4(0x74);
  if (puVar4 == (undefined4 *)0x0) {
    piVar6 = (int *)0x0;
  }
  else {
    piVar6 = (int *)(uintptr_t)(func_00168434(puVar4));
  }
  func_00168100(piVar6,param_2,param_3);
  puVar3[7] = (undefined4)(uintptr_t)(piVar6);
  puVar3[6] = puVar3[6] | 0x10;
  func_0016773C((int)piVar6,3);
  iVar2 = DAT_00255084;
  local_1c = &DAT_00255080;
  local_20 = DAT_00255084;
  func_00166C20(piVar6,0,&local_20,0);
  local_1c = &DAT_00255088;
  local_20 = iVar2;
  func_00166C20(piVar6,1,&local_20,0);
  local_1c = s_cf_0025508c;
  local_20 = iVar2;
  func_00166C20(piVar6,2,&local_20,0);
  puVar3[10] = (undefined4)(uintptr_t)(piVar6);
  *(undefined2 *)((int)puVar3 + 0x22) = 0;
  *(undefined2 *)(puVar3 + 8) = 0;
  puVar3[0xd] = (undefined4)(uintptr_t)(piVar6);
  *(undefined2 *)((int)puVar3 + 0x2e) = 1;
  *(undefined2 *)(puVar3 + 0xb) = 0;
  puVar3[0x10] = (undefined4)(uintptr_t)(piVar6);
  *(undefined2 *)((int)puVar3 + 0x3a) = 2;
  *(undefined2 *)(puVar3 + 0xe) = 0;
  func_002313DC((int)(puVar3 + 8));
  puVar5 = (undefined4 *)func_0010BAB4(0x20);
  puVar4 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(uintptr_t)(func_002C0294(puVar5));
  }
  puVar3[5] = (undefined4)(uintptr_t)(puVar4);
  func_002C00D4(puVar4,(undefined4)(uintptr_t)(puVar3),piVar6);
  return puVar3;
}

