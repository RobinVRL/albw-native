/* compilefix: USA 00174818 (EU 00174818), Ghidra-derived (build/ghidra_analyzed4).
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
extern float func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_00588BE4(int param_1);
extern undefined4 DAT_001749bc;
extern float DAT_001749c0;
extern undefined4 DAT_001749c4;
extern int *DAT_001749c8;
extern float DAT_001749cc;
extern int *DAT_001749d0;
extern float DAT_001749d4;
extern char s_SE_PillarUp_UP_001749ec[];
extern char s_SE_PillarUp_UP_L_001749d8[];

// USA 00174818 <- EU 00174818 (Ghidra, non-matching)
// GLOBAL DAT_001749bc undefined4
// GLOBAL DAT_001749c0 float
// GLOBAL DAT_001749c4 undefined4
// GLOBAL DAT_001749c8 int *
// GLOBAL DAT_001749cc float
// GLOBAL DAT_001749d0 int *
// GLOBAL DAT_001749d4 float
// GLOBAL s_SE_PillarUp_UP_001749ec string
// GLOBAL s_SE_PillarUp_UP_L_001749d8 string

undefined4 func_00174818(int *param_1)

{
  int iVar1;
  uint in_r12;
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
  local_3c = 10;
  local_38 = 0;
  local_84 = 0;
  local_90[0] = 1;
  local_70 = in_r12 | 0xff;
  local_80 = DAT_001749c0;
  uStack_7c = DAT_001749bc;
  uStack_78 = DAT_001749c4;
  uStack_74 = DAT_001749bc;
  fVar2 = DAT_001749c0;
  uVar3 = DAT_001749bc;
  func_0016898C(param_1[0x10d],local_90);
  iVar1 = *(int *)(param_1[0x10d] + 0x14);
  if (*(float *)(iVar1 + 8) != fVar2) {
    *(float *)(iVar1 + 8) = fVar2;
    *(undefined1 *)(iVar1 + 0x26) = 1;
  }
  *(undefined4 *)(*(int *)(param_1[0x10d] + 0x14) + 0x10) = uVar3;
  func_00168E9C((int *)param_1[0x10d],param_1[0x10c],(int *)0x0);
  func_004CEAF0(param_1[0x10c]);
  func_004A7F00(*DAT_001749c8,param_1[0x10e],2);
  if (param_1[0x10f] != 0) {
    local_30 = *(float *)(param_1[0x10f] + 0x5c) * DAT_001749cc;
    iVar1 = param_1[0x10f];
    local_34 = fVar2;
    local_2c = (char *)CF_FBITS(fVar2);
    func_00115C54(&local_28,(float *)(param_1 + 0xf4),&local_34);
    *(float *)(iVar1 + 4) = local_28;
    *(undefined4 *)(iVar1 + 8) = uStack_24;
    *(undefined4 *)(iVar1 + 0xc) = uStack_20;
    func_004356B4((int *)param_1[0x10f]);
  }
  iVar1 = func_00588BE4((int)param_1);
  local_30 = DAT_001749d4;
  if (iVar1 == *DAT_001749d0) {
    local_2c = s_SE_PillarUp_UP_L_001749d8;
    return func_00150A84(param_1,(int *)&local_30,0);
  }
  local_2c = s_SE_PillarUp_UP_001749ec;
  return func_00150A84(param_1,(int *)&local_30,0);
}

