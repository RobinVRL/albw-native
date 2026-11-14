/* compilefix: USA 001749FC (EU 001749FC), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_00174ba4;
extern float DAT_00174ba8;
extern undefined4 DAT_00174bac;
extern float DAT_00174bb0;
extern int *DAT_00174bb4;
extern float DAT_00174bb8;
extern char s_SE_PillarUp_DOWN_00174bd0[];
extern char s_SE_PillarUp_DOWN_L_00174bbc[];

// USA 001749FC <- EU 001749FC (Ghidra, non-matching)
// GLOBAL DAT_00174ba4 undefined4
// GLOBAL DAT_00174ba8 float
// GLOBAL DAT_00174bac undefined4
// GLOBAL DAT_00174bb0 float
// GLOBAL DAT_00174bb4 int *
// GLOBAL DAT_00174bb8 float
// GLOBAL s_SE_PillarUp_DOWN_00174bd0 string
// GLOBAL s_SE_PillarUp_DOWN_L_00174bbc string

undefined4 func_001749FC(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  float fVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((uint *)(albw_frame + 0x0))
  #define local_88 (*(undefined4 * *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(float *)(albw_frame + 0x10))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_70 (*(uint *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x54))
  #define local_38 (*(undefined1 *)(albw_frame + 0x58))
  #define local_34 (*(float *)(albw_frame + 0x5c))
  #define local_30 (*(float *)(albw_frame + 0x60))
  #define local_2c (*(char * *)(albw_frame + 0x64))
  #define local_28 (*(float *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x70))
  local_90[1] = 3;
  local_88 = &local_84;
  local_38 = 0;
  local_3c = 10;
  local_90[0] = 1;
  local_84 = 1;
  local_70 = param_4 | 0xff;
  local_80 = DAT_00174ba8;
  uStack_7c = DAT_00174ba4;
  uStack_78 = DAT_00174bac;
  uStack_74 = DAT_00174ba4;
  fVar2 = DAT_00174ba8;
  uVar3 = DAT_00174ba4;
  func_0016898C(param_1[0x10d],local_90);
  iVar1 = *(int *)(param_1[0x10d] + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x10d] + 0x14) + 0x10) = uVar3;
  func_00168E9C((int *)param_1[0x10d],param_1[0x10c],(int *)0x0);
  func_004CEAF0(param_1[0x10c]);
  if (param_1[0x10f] != 0) {
    local_30 = *(float *)(param_1[0x10f] + 0x5c) * DAT_00174bb0;
    iVar1 = param_1[0x10f];
    local_34 = fVar2;
    local_2c = (char *)CF_FBITS(fVar2);
    func_00115C54(&local_28,(float *)(param_1 + 0xf4),&local_34);
    *(float *)(iVar1 + 4) = local_28;
    *(undefined4 *)(iVar1 + 8) = uStack_24;
    *(undefined4 *)(iVar1 + 0xc) = uStack_20;
    func_004356B4((int *)param_1[0x10f]);
  }
  local_34 = 5.60519e-45;
  *(undefined2 *)(param_1[0x10f] + 0x28) = 4;
  iVar1 = func_00588BE4((int)param_1);
  local_30 = DAT_00174bb8;
  if (iVar1 == *DAT_00174bb4) {
    local_2c = s_SE_PillarUp_DOWN_L_00174bbc;
    return func_00150A84(param_1,(int *)&local_30,0);
  }
  local_2c = s_SE_PillarUp_DOWN_00174bd0;
  return func_00150A84(param_1,(int *)&local_30,0);
}

