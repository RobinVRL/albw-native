/* compilefix: USA 004E4E80 (EU 004E4E58), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_004e4f64[];
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00151148(int param_1,int param_2);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int iRam004e4f78;
extern undefined4 uRam004e4f5c;
extern undefined4 uRam004e4f60;

// USA 004E4E80 <- EU 004E4E58 (Ghidra, non-matching)
// GLOBAL UNK_004e4f5c undefined4
// GLOBAL UNK_004e4f60 undefined4
// GLOBAL UNK_004e4f78 int

undefined4 func_004E4E80(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define aiStack_80 ((int *)(albw_frame + 0x0))
  #define iStack_20 (*(int *)(albw_frame + 0x60))
  #define pcStack_1c (*(char * *)(albw_frame + 0x64))
  func_004CF478(*(int *)(param_1 + 0x478),1);
  func_00151148(*(int *)(param_1 + 0x4cc),1);
  puVar2 = (uint *)func_002C11E8(aiStack_80,3,0,0);
  func_0016898C(*(int *)(param_1 + 0x47c),puVar2);
  uVar3 = uRam004e4f5c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x47c) + 0x14) + 0x10) = uRam004e4f5c;
  puVar2 = (uint *)func_002C11E8(aiStack_80,1,10,0);
  func_0016898C(*(int *)(param_1 + 0x480),puVar2);
  uVar1 = uRam004e4f60;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x480) + 0x14) + 0x10) = uVar3;
  *(undefined4 *)(param_1 + 0x4c4) = 0x28;
  *(undefined4 *)(param_1 + 0x4c8) = uVar1;
  *(undefined4 *)(param_1 + 0x4c0) = 0;
  if (*(short *)(param_1 + 0x36) != 0) {
    func_00588C14(param_1,0,1);
  }
  pcStack_1c = (char *)((int)s_cf_004e4f64);
  iStack_20 = iRam004e4f78;
  return func_00150A84((int *)param_1,&iStack_20,0);
}

