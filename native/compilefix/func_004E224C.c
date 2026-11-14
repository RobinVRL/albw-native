/* compilefix: USA 004E224C (EU 004E2224), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 'BADSPACEBASE'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - ((int)(BADSPACEBASE *)0 + ADDR) + n (a pc-relative address) -> s_cf_<ADDR+n> (string in the code section) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_004e2344[];
#include "compilefix.h"

extern int func_00110848(int param_1);
extern int func_001509A4(int param_1,int *param_2,int param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float func_00151148(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int iRam004e2354;
extern undefined4 uRam004e2340;
extern char s_ReactInvalid_004e2330[];
extern char s_SE_Arrow_STICK_004e2358[];

// USA 004E224C <- EU 004E2224 (Ghidra, non-matching)
// GLOBAL UNK_004e2340 undefined4
// GLOBAL UNK_004e2354 int
// GLOBAL s_ReactInvalid_004e2330 string
// GLOBAL s_SE_Arrow_STICK_004e2358 string

undefined4 func_004E224C(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define iStack_20 (*(int *)(albw_frame + 0x0))
  #define pcStack_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(char *)(param_1 + 0x52c) != '\0') {
    piVar3 = (int *)(param_1 + 0x4fc);
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar3 = 0;
      *(undefined4 *)(param_1 + 0x500) = 0;
    }
    else {
      iVar2 = *piVar3;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
        func_00110848(iVar2);
      }
      func_004A1B9C(&local_18,*(int *)(param_1 + 0x344),(uint *)s_ReactInvalid_004e2330);
      *piVar3 = local_18;
      *(undefined4 *)(param_1 + 0x500) = uStack_14;
    }
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x500))) {
      func_004A2F38(iVar2,(undefined4 *)(param_1 + 0x3d0));
    }
  }
  func_00151148(*(int *)(param_1 + 0x458),0);
  uVar1 = uRam004e2340;
  *(undefined4 *)(param_1 + 0x518) = 8;
  *(undefined4 *)(param_1 + 0x51c) = uVar1;
  *(undefined4 *)(param_1 + 0x514) = 0;
  iVar2 = iRam004e2354;
  pcStack_1c = (char *)((int)s_cf_004e2344);
  iStack_20 = iRam004e2354;
  func_001509A4(param_1,&iStack_20,0);
  pcStack_1c = s_SE_Arrow_STICK_004e2358;
  iStack_20 = iVar2;
  return func_00150A84((int *)param_1,&iStack_20,0);
}

