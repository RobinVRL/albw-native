/* compilefix: USA 005138B8 (EU 00513890), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's__'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - implicit float<->int conversions (Ghidra COPY between a float and an int-typed variable or
 *    pool word) made bit copies
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_005139f2[];
extern char s_cf_005139f4[];
#include "compilefix.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_0066B94C(undefined4 *param_1,undefined1 param_2);
extern int DAT_005139dc;
extern undefined DAT_005139f0;
extern char s_SE_KinSta_FALL_WATER_S_005139fc[];
extern char s_SE_KinSta_JUMP_005139e0[];
extern undefined4 _DAT_005139f0;

// USA 005138B8 <- EU 00513890 (Ghidra, non-matching)
// GLOBAL DAT_005139dc int
// GLOBAL DAT_005139f0 undefined
// GLOBAL s_cf_005139f2 string
// GLOBAL s_SE_KinSta_FALL_WATER_S_005139fc string
// GLOBAL s_SE_KinSta_JUMP_005139e0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_005138B8(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_005139dc;
  if (param_1[0x165] == 0) {
    param_1[0xf8] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf8]) - ALBW_AS_F32(_DAT_005139f0)));
    func_00115C54((float *)(param_1 + 0xf4),(float *)(param_1 + 0xf4),(float *)(param_1 + 0xf7));
    if (param_1[0x164] == 8) {
      piVar3 = param_1 + 0x173;
      if (param_1[0xd1] == 0) {
        *piVar3 = 0;
        param_1[0x174] = 0;
      }
      else {
        iVar2 = *piVar3;
        if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x174])) {
          func_00110848(iVar2);
        }
        func_004A1B9C(&local_28,param_1[0xd1],(uint *)(s_cf_005139f4));
        *piVar3 = local_28;
        param_1[0x174] = (int)local_24;
      }
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x174])) {
        func_004A2F38(iVar2,param_1 + 0xf4);
      }
    }
    if (param_1[0x164] < 1) {
      local_24 = s_SE_KinSta_FALL_WATER_S_005139fc;
      local_28 = iVar1;
      func_00150A84(param_1,&local_28,0);
      func_0066B94C(param_1 + 0x123,0xb);
    }
    param_1[0x164] = param_1[0x164] + -1;
    return;
  }
  iVar2 = param_1[0x165] + -1;
  param_1[0x165] = iVar2;
  if (iVar2 == 0) {
    local_24 = s_SE_KinSta_JUMP_005139e0;
    local_28 = iVar1;
    func_00150A84(param_1,&local_28,0);
  }
  return;
}

