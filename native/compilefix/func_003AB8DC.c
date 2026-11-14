/* compilefix: USA 003AB8DC (EU 003AB8B8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_local_18'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _local_XX (Ghidra's 4-byte view of the stack slot local_XX) -> *(undefined4 *)&local_XX (same frame offset) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites, this function's sites checked);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_0014ED58(int param_1);
extern int func_0014F4EC(int param_1);
extern int func_001505D0(int param_1);
extern int func_001506F8(int param_1);
extern int func_004CF5DC(int param_1,int param_2,int param_3,undefined4 *param_4);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern int func_0058A1F4(int param_1);
extern undefined1 *DAT_003ab96c;

// USA 003AB8DC <- EU 003AB8B8 (Ghidra, non-matching)
// GLOBAL DAT_003ab96c undefined1 *

undefined4 func_003AB8DC(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined1 *)(albw_frame + 0x8))
  #define uStack_17 (*(undefined1 *)(albw_frame + 0x9))
  #define uStack_16 (*(undefined1 *)(albw_frame + 0xa))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0xb))
  iVar2 = func_001505D0(*(int *)(param_1 + 4));
  func_004D0194(param_2,iVar2);
  iVar2 = func_001506F8(*(int *)(param_1 + 4));
  func_004D0268(param_2,iVar2);
  uVar3 = func_0058A1F4(*(int *)(param_1 + 4));
  if (uVar3 != 0) {
    return func_0014ED58(param_2);
  }
  func_0014F4EC(param_2);
  puVar1 = DAT_003ab96c;
  iVar2 = 0;
  iVar4 = *(int *)(*(int *)(param_2 + 0x20) + 4);
  if (0 < iVar4) {
    do {
      (*(undefined4 *)&local_18) = CONCAT13(*puVar1,CONCAT12(puVar1[1],CONCAT11(puVar1[2],puVar1[3])));
      func_004CF5DC(param_2,iVar2,2,(undefined4 *)&local_18);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar4);
  }
  return 0;
}

