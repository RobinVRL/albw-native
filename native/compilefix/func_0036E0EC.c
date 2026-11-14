/* compilefix: USA 0036E0EC (EU 0036E0C8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0032C004(int param_1,int param_2,undefined4 param_3,int param_4);
extern int func_0032C84C(int param_1);
extern int func_0036E490(byte *param_1,uint param_2,undefined4 param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int DAT_0036e264;
extern float DAT_0036e2cc;
extern char s_SE_BlackShueyes_BEAM_1_0036e268[];
extern char s_SE_BlackShueyes_BEAM_2_0036e280[];
extern char s_SE_BlackShueyes_BEAM_3_0036e298[];
extern char s_TriAttackSmall_0036e2bc[];
extern char s_TriAttack_0036e2b0[];

// USA 0036E0EC <- EU 0036E0C8 (Ghidra, non-matching)
// GLOBAL DAT_0036e264 int
// GLOBAL DAT_0036e2cc float
// GLOBAL s_SE_BlackShueyes_BEAM_1_0036e268 string
// GLOBAL s_SE_BlackShueyes_BEAM_2_0036e280 string
// GLOBAL s_SE_BlackShueyes_BEAM_3_0036e298 string
// GLOBAL s_TriAttackSmall_0036e2bc string
// GLOBAL s_TriAttack_0036e2b0 string

undefined4 func_0036E0EC(byte *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(int *)(albw_frame + 0x0))
  #define local_2c (*(char * *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define iStack_14 (*(int *)(albw_frame + 0x1c))
  *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + 1;
  if (param_1[0x6a] == 0) {
    iVar1 = param_2[0x291];
  }
  else {
    iVar1 = param_2[0x25b];
  }
  *(undefined1 *)(iVar1 + 0x61) = 0;
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 == 0x19) {
    local_30 = DAT_0036e264;
    local_2c = s_SE_BlackShueyes_BEAM_1_0036e268;
    func_00150A84(param_2,&local_30,0);
    func_0032C004((int)param_2,(int)(char)param_1[0x6a],0x14,0);
  }
  else {
    if (iVar1 == 0x1e) {
      local_30 = DAT_0036e264;
      local_2c = s_SE_BlackShueyes_BEAM_2_0036e280;
      func_00150A84(param_2,&local_30,0);
      return func_0032C004((int)param_2,(int)(char)param_1[0x6a],0x14,0);
    }
    if (iVar1 == 0x50) {
      local_20 = DAT_0036e264;
      local_1c = s_SE_BlackShueyes_BEAM_3_0036e298;
      func_00150A84(param_2,&local_20,0);
      func_0032C004((int)param_2,(int)(char)param_1[0x6a],0x1e,1);
      if (param_1[0x6a] == 0) {
        piVar2 = param_2 + 0x267;
      }
      else {
        piVar2 = param_2 + 0x231;
      }
      func_0032C84C((int)piVar2);
      if (param_1[0x6a] == 0) {
        pcVar3 = s_TriAttackSmall_0036e2bc;
      }
      else {
        pcVar3 = s_TriAttack_0036e2b0;
      }
      iVar1 = 0;
      iVar4 = 0;
      if (param_2[0xd1] != 0) {
        func_004A1B9C(&local_18,param_2[0xd1],(uint *)pcVar3);
        iVar1 = local_18;
        iVar4 = iStack_14;
      }
      local_30 = *(int *)(param_1 + 0x10);
      uStack_28 = *(undefined4 *)(param_1 + 0x18);
      local_2c = (char *)CF_FBITS((*(float *)(param_1 + 0x14) + DAT_0036e2cc));
      if (iVar1 != 0) {
        if (*(int *)(iVar1 + 0x1c) == iVar4) {
          func_004A2F38(iVar1,&local_30);
        }
        return 0;
      }
    }
    else if (iVar1 == 0x6e) {
      return func_0036E490(param_1,7,(undefined4)(uintptr_t)(param_2));
    }
  }
  return 0;
}

