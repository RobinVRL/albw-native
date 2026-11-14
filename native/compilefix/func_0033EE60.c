/* compilefix: USA 0033EE60 (EU 0033EE3C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_B'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [3]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_0033f0be[];
extern char s_cf_0033f0c0[];
extern char s_cf_0033f0da[];
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_0010A464(undefined4 *param_1);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_001507A8(int param_1,int param_2);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001BF70C(int *param_1);
extern int func_0025B860(int param_1,int param_2,float fparam_0,float fparam_1);
extern int func_0025B874(undefined4 *param_1);
extern int func_0052108C(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0033f098;
extern int *DAT_0033f09c;
extern uint *DAT_0033f0a0;
extern undefined4 *DAT_0033f0a4;
extern undefined4 DAT_0033f0a8;
extern float DAT_0033f0ac;
extern int DAT_0033f0b0;
extern int DAT_0033f0b4;
extern int DAT_0033f0b8;
extern undefined DAT_0033f0bc;
extern float DAT_0033f0d0;
extern int DAT_0033f0d4;
extern undefined DAT_0033f0d8;
extern float DAT_0033f0f0;
extern char s_u_SE_GoroIwa_HIT_WALL_0033f0da[];
extern undefined4 _DAT_0033f0bc;
extern undefined4 _DAT_0033f0d8;

// USA 0033EE60 <- EU 0033EE3C (Ghidra, non-matching)
// GLOBAL DAT_0033f098 int *
// GLOBAL DAT_0033f09c int *
// GLOBAL DAT_0033f0a0 uint *
// GLOBAL DAT_0033f0a4 undefined4 *
// GLOBAL DAT_0033f0a8 undefined4
// GLOBAL DAT_0033f0ac float
// GLOBAL DAT_0033f0b0 int
// GLOBAL DAT_0033f0b4 int
// GLOBAL DAT_0033f0b8 int
// GLOBAL DAT_0033f0bc undefined
// GLOBAL DAT_0033f0d0 float
// GLOBAL DAT_0033f0d4 int
// GLOBAL DAT_0033f0d8 undefined
// GLOBAL DAT_0033f0f0 float
// GLOBAL s_cf_0033f0be string
// GLOBAL s_cf_0033f0da string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool func_0033EE60(int *param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define auStack_88 ((undefined4 *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  piVar3 = (int *)func_0052FBA0(*DAT_0033f098 + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if ((piVar3 != (int *)0x0) && (iVar4 = func_00588BE4((int)piVar3), iVar4 == *DAT_0033f09c)) {
    if (((*DAT_0033f0a0 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0033f0a0), iVar4 != 0)) {
      *DAT_0033f0a4 = DAT_0033f0a8;
    }
    iVar4 = (**(code **)*piVar3)(piVar3,DAT_0033f0a4);
    if (iVar4 == 0) {
      piVar3 = (int *)0x0;
    }
    if (piVar3 != (int *)0x0) {
      func_001BF70C(piVar3);
      return true;
    }
  }
  bVar1 = func_001507A8((int)param_1,param_2);
  iVar4 = DAT_0033f0b0;
  fVar7 = DAT_0033f0ac;
  if (((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 7U) != 0) ||
     (DAT_0033f0b4 < *(int *)(param_2 + 8))) {
    param_1[0xf8] = DAT_0033f0b8;
    param_1[0x123] = *(int *)(param_2 + 4);
    param_1[0x124] = *(int *)(param_2 + 8);
    param_1[0x125] = *(int *)(param_2 + 0xc);
    if (_DAT_0033f0bc < *(int *)(param_2 + 0x1c)) {
      func_0010A464(auStack_88);
      local_24 = s_cf_0033f0c0;
      local_28 = iVar4;
      func_00150A84(param_1,&local_28,(int)auStack_88);
      bVar2 = func_00539200((int)auStack_88);
      if (bVar2) {
        fVar6 = *(float *)(param_2 + 0x1c) * DAT_0033f0d0;
        if (fVar7 < fVar6) {
          fVar6 = fVar7;
        }
        func_0025B860((int)auStack_88,0,fVar6,DAT_0033f0d0);
      }
      func_0025B874(auStack_88);
    }
  }
  iVar5 = func_0052108C((int)param_1);
  if (iVar5 != 0) {
    param_1[0x132] = *(int *)(param_2 + 0x14);
  }
  if (*(int *)(param_2 + 8) < DAT_0033f0d4) {
    param_1[0x126] = *(int *)(param_2 + 4);
    param_1[0x127] = *(int *)(param_2 + 8);
    param_1[0x128] = *(int *)(param_2 + 0xc);
    if (_DAT_0033f0d8 < *(int *)(param_2 + 0x1c)) {
      func_0010A464(auStack_88);
      local_24 = s_u_SE_GoroIwa_HIT_WALL_0033f0da + 2;
      local_28 = iVar4;
      func_0014DBF4(param_1,&local_28,param_2 + 0x10,(int)auStack_88);
      bVar2 = func_00539200((int)auStack_88);
      if (bVar2) {
        fVar6 = *(float *)(param_2 + 0x1c) * DAT_0033f0f0;
        if (fVar7 < fVar6) {
          fVar6 = fVar7;
        }
        func_0025B860((int)auStack_88,0,fVar6,DAT_0033f0f0);
      }
      func_0025B874(auStack_88);
    }
  }
  return bVar1;
}

