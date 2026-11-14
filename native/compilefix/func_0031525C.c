/* compilefix: USA 0031525C (EU 00315238), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00100174(int *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014F85C(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_003150D8(int *param_1);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern int func_0068C690(float *param_1);
extern int DAT_00315484;
extern undefined4 DAT_00315488;
extern int DAT_0031548c;
extern float DAT_00315490;
extern undefined4 DAT_00315494;
extern int *DAT_00315498;
extern uint *DAT_0031549c;
extern undefined4 *DAT_003154a0;
extern undefined4 DAT_003154a4;
extern int *DAT_003154a8;
extern int *DAT_003154ac;
extern int *DAT_003154c8;
extern float DAT_003154cc;
extern char s_SE_Boomerang_FLY_00315470[];
extern char s_SE_PL_Boomerang_CHATCH_003154b0[];

// USA 0031525C <- EU 00315238 (Ghidra, non-matching)
// GLOBAL DAT_00315484 int
// GLOBAL DAT_00315488 undefined4
// GLOBAL DAT_0031548c int
// GLOBAL DAT_00315490 float
// GLOBAL DAT_00315494 undefined4
// GLOBAL DAT_00315498 int *
// GLOBAL DAT_0031549c uint *
// GLOBAL DAT_003154a0 undefined4 *
// GLOBAL DAT_003154a4 undefined4
// GLOBAL DAT_003154a8 int *
// GLOBAL DAT_003154ac int *
// GLOBAL DAT_003154c8 int *
// GLOBAL DAT_003154cc float
// GLOBAL s_SE_Boomerang_FLY_00315470 string
// GLOBAL s_SE_PL_Boomerang_CHATCH_003154b0 string

undefined4 func_0031525C(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  float *pfVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define iStack_40 (*(int *)(albw_frame + 0x10))
  #define iStack_3c (*(int *)(albw_frame + 0x14))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  #define local_30 (*(int *)(albw_frame + 0x20))
  #define local_2c (*(char * *)(albw_frame + 0x24))
  #define local_28 (*(int *)(albw_frame + 0x28))
  iVar4 = DAT_00315484;
  local_34 = s_SE_Boomerang_FLY_00315470;
  local_38 = DAT_00315484;
  func_001507D8((int)param_1,&local_38,0);
  uVar6 = CONCAT44(DAT_00315488,DAT_0031548c);
  pfVar5 = (float *)(param_1 + 0x11e);
  if (param_1[0x125] != 0) {
    local_30 = DAT_0031548c;
    local_2c = (char *)CF_FBITS(DAT_00315490);
    local_28 = DAT_0031548c;
    iVar1 = func_0014F85C((int)param_1,0,&local_30,DAT_00315494,DAT_00315490);
    if (iVar1 != 0) {
      param_1[0x125] = 0;
      func_003150D8(param_1);
    }
    if (param_1[0x125] != 0) {
      param_1[0x125] = param_1[0x125] + -1;
      *pfVar5 = *pfVar5 + -*pfVar5 * ALBW_AS_F32(((ulonglong)uVar6 >> 0x20));
      return 0;
    }
  }
  puVar2 = (undefined4 *)func_0052FBA0(*DAT_00315498 + 0x3dbbc,param_1[0x14]);
  local_44 = ALBW_AS_F32(param_1[0xf4]);
  iStack_40 = param_1[0xf5];
  iStack_3c = param_1[0xf6];
  if (puVar2 == (undefined4 *)0x0) {
    local_50 = ALBW_AS_F32(uVar6);
    local_4c = local_50;
    local_48 = local_50;
  }
  else {
    if (((*DAT_0031549c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0031549c), iVar1 != 0)) {
      *DAT_003154a0 = DAT_003154a4;
    }
    iVar1 = (**(code **)*puVar2)(puVar2,DAT_003154a0);
    puVar3 = (undefined4 *)0x0;
    if (iVar1 != 0) {
      puVar3 = puVar2;
    }
    func_00115C70(&local_50,(float *)(puVar3 + 0xf4),&local_44);
  }
  if ((int)ALBW_AS_U32((local_50 * local_50 + local_48 * local_48)) < 0x3d800000) {
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = func_00588BE4((int)puVar2);
    local_30 = iVar4;
    local_2c = s_SE_PL_Boomerang_CHATCH_003154b0;
    if (iVar1 != *DAT_003154a8) {
      return func_004EA104(*DAT_003154ac,&local_30,0);
    }
    return func_004EABB8(*DAT_003154ac,&local_30,(undefined4 *)0x0);
  }
  *pfVar5 = *pfVar5 + (ALBW_AS_F32(param_1[0x11f]) - *pfVar5) * ALBW_AS_F32(((ulonglong)uVar6 >> 0x20));
  iVar4 = func_0068C690(&local_50);
  return func_0051D2F4(param_1 + 0xfa,iVar4,0,*DAT_003154c8,DAT_003154cc);
}

