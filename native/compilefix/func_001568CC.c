/* compilefix: USA 001568CC (EU 001568D0), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_00581D48(int param_1,float *param_2);
extern int func_00588BE4(int param_1);
extern int func_00657E5C(undefined4 *param_1,undefined1 param_2);
extern int DAT_001569ac;
extern int *DAT_001569b0;
extern int *DAT_001569b4;
extern int DAT_001569b8;
extern char s_SE_Crowly_V_FLY_START_001569d4[];
extern char s_SE_Kyune_V_FLY_START_001569bc[];

// USA 001568CC <- EU 001568D0 (Ghidra, non-matching)
// GLOBAL DAT_001569ac int
// GLOBAL DAT_001569b0 int *
// GLOBAL DAT_001569b4 int *
// GLOBAL DAT_001569b8 int
// GLOBAL s_SE_Crowly_V_FLY_START_001569d4 string
// GLOBAL s_SE_Kyune_V_FLY_START_001569bc string

int * func_001568CC(int *param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  pfVar1 = (float *)func_00520FC0();
  piVar3 = (int *)CF_FBITS(((*pfVar1 - ALBW_AS_F32(param_1[0xf4])) * (*pfVar1 - ALBW_AS_F32(param_1[0xf4])) +
                  (pfVar1[2] - ALBW_AS_F32(param_1[0xf6])) * (pfVar1[2] - ALBW_AS_F32(param_1[0xf6]))));
  if (((int)piVar3 <= DAT_001569ac) && (iVar2 = param_1[0x15], piVar3 = param_1, -1 < (short)iVar2))
  {
    pfVar1 = (float *)func_00520FC0();
    piVar3 = (int *)func_00581D48(*DAT_001569b0,pfVar1);
    if (piVar3 == (int *)(int)(short)iVar2) {
      func_00657E5C(param_1 + 0x22f,1);
      iVar2 = func_00588BE4((int)param_1);
      local_18 = DAT_001569b8;
      if (iVar2 != *DAT_001569b4) {
        local_14 = s_SE_Crowly_V_FLY_START_001569d4;
        piVar3 = (int *)func_00150A84(param_1,&local_18,0);
        return piVar3;
      }
      local_14 = s_SE_Kyune_V_FLY_START_001569bc;
      piVar3 = (int *)func_00150A84(param_1,&local_18,0);
    }
  }
  return piVar3;
}

