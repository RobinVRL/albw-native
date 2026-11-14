/* compilefix: USA 001A424C (EU 001A424C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001a433b[];
extern char s_cf_001a433c[];
#include "compilefix.h"

extern int func_0014FAFC(int param_1,uint param_2,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058E2B8(int *param_1);
extern int func_0065A5B8(undefined4 *param_1,undefined1 param_2);
extern uint *DAT_001a4330;
extern int *DAT_001a4334;
extern undefined DAT_001a4338;
extern int DAT_001a4350;
extern undefined4 _DAT_001a4338;

// USA 001A424C <- EU 001A424C (Ghidra, non-matching)
// GLOBAL DAT_001a4330 uint *
// GLOBAL DAT_001a4334 int *
// GLOBAL DAT_001a4338 undefined
// GLOBAL DAT_001a4350 int
// GLOBAL s_cf_001a433b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001A424C(int param_1)

{
  uint uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x8fc) != '\0') {
    *(uint *)(param_1 + 0x8f8) = *(uint *)(param_1 + 0x8f4);
    *(undefined1 *)(param_1 + 0x8fc) = 0;
    func_0014FAFC(param_1,*(uint *)(param_1 + 0x8f4),*(float *)(param_1 + 0x8f0));
    local_1c = *(int *)(param_1 + 1000) - *(int *)(param_1 + 0x8f8);
    uVar1 = func_0058E2B8(&local_1c);
    if (*DAT_001a4330 < uVar1) {
      *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x8f8);
    }
  }
  if (*(int *)(param_1 + 0x8f8) != *(int *)(param_1 + 1000)) {
    func_0051D2F4((int *)(param_1 + 1000),*(int *)(param_1 + 0x8f8),*DAT_001a4334,0x7fffffff,
                  ALBW_AS_F32(_DAT_001a4338));
  }
  iVar2 = 0x78;
  if (*(char *)(param_1 + 0x8fd) != '\0') {
    iVar2 = 0xf0;
  }
  if (iVar2 <= *(int *)(param_1 + 0x8bc)) {
    func_0065A5B8((undefined4 *)(param_1 + 0x8bc),7);
  }
  local_14 = s_cf_001a433c;
  local_18 = DAT_001a4350;
  return func_001507D8(param_1,&local_18,0);
}

