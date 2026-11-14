/* compilefix: USA 0023D438 (EU 0023D438), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word, e.g. `fVar = _DAT_xxx;`, `puVar[3] = fVar;`) made bit copies [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0023d4c7[];
extern char s_cf_0023d4c8[];
#include "compilefix.h"

extern int func_0023D2BC(int *param_1,int param_2);
extern int func_00291518(int param_1,undefined4 param_2,float fparam_0);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_005211BC(int param_1);
extern int func_005568E8(int param_1);
extern int *DAT_0023d4c0;
extern undefined DAT_0023d4c4;
extern int DAT_0023d4e0;
extern int *DAT_0023d4e4;
extern undefined4 _DAT_0023d4c4;

// USA 0023D438 <- EU 0023D438 (Ghidra, non-matching)
// GLOBAL DAT_0023d4c0 int *
// GLOBAL DAT_0023d4c4 undefined
// GLOBAL DAT_0023d4e0 int
// GLOBAL DAT_0023d4e4 int *
// GLOBAL s_cf_0023d4c7 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_0023D438(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_0023d4c0;
  if ((*DAT_0023d4c0 != 0) && (iVar2 = func_005568E8(*DAT_0023d4c0), *param_2 == iVar2)) {
    iVar2 = func_005211BC((int)param_1);
    iVar2 = func_00291518(*piVar1,iVar2 + -0x80000000,ALBW_AS_F32(_DAT_0023d4c4));
    if (iVar2 != 0) {
      local_14 = s_cf_0023d4c8;
      local_18 = DAT_0023d4e0;
      func_004EA104(*DAT_0023d4e4,&local_18,0);
      func_0023D2BC(param_1,1);
    }
  }
  return;
}

