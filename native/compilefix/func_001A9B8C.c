/* compilefix: USA 001A9B8C (EU 001A9B8C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_001a9caf[];
extern char s_cf_001a9cb0[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001A9610(uint param_1);
extern int func_00520FC0(void);
extern int func_0065A984(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int DAT_001a9ca8;
extern undefined DAT_001a9cac;
extern int DAT_001a9cc0;
extern undefined4 _DAT_001a9cac;

// USA 001A9B8C <- EU 001A9B8C (Ghidra, non-matching)
// GLOBAL DAT_001a9ca8 int
// GLOBAL DAT_001a9cac undefined
// GLOBAL DAT_001a9cc0 int
// GLOBAL s_cf_001a9caf string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001A9B8C(int *param_1)

{
  bool bVar1;
  float *pfVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  if (((uint)param_1[0x23a] <= (uint)param_1[0x239]) &&
     (pfVar2 = (float *)func_00520FC0(),
     (int)ALBW_AS_U32(((ALBW_AS_F32(param_1[0xf4]) - *pfVar2) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar2) +
          (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar2[2]))) < DAT_001a9ca8))
  {
    param_1[0xf4] = param_1[2];
    param_1[0xf5] = param_1[3];
    param_1[0xf6] = param_1[4];
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(&local_24,pfVar2,(float *)(param_1 + 0xf4));
    local_30 = local_24;
    uStack_2c = uStack_20;
    uStack_28 = uStack_1c;
    iVar3 = func_0068C690(&local_30);
    param_1[0xfa] = iVar3;
    bVar1 = func_001A9610((uint)param_1);
    iVar3 = _DAT_001a9cac;
    if (!bVar1) {
      param_1[0x167] = param_1[0x167] | 0x84;
      func_0065A984(param_1 + 0x22f,1);
      local_14 = s_cf_001a9cb0;
      local_18 = DAT_001a9cc0;
      return func_00150A84(param_1,&local_18,0);
    }
    param_1[0x23a] = 0x3c;
    param_1[0x23b] = iVar3;
    param_1[0x239] = 0;
  }
  return 0;
}

