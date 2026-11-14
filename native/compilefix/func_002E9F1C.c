/* compilefix: USA 002E9F1C (EU 002E9EF8), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_L'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit (T)(uintptr_t) casts at int<->pointer mismatches (identity on the 32-bit ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002ea116[];
extern char s_cf_002ea118[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001696F8(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_002E8870(int param_1,int *param_2);
extern int func_0033BA80(int *param_1);
extern int func_0033CF78(int param_1);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int func_004D8054(float *param_1,uint param_2,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_00687EA0(undefined4 *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_002ea10c;
extern int *DAT_002ea110;
extern undefined DAT_002ea114;
extern float DAT_002ea120;
extern float DAT_002ea124;
extern undefined4 DAT_002ea128;
extern undefined4 _DAT_002ea114;

// USA 002E9F1C <- EU 002E9EF8 (Ghidra, non-matching)
// GLOBAL DAT_002ea10c int *
// GLOBAL DAT_002ea110 int *
// GLOBAL DAT_002ea114 undefined
// GLOBAL DAT_002ea120 float
// GLOBAL DAT_002ea124 float
// GLOBAL DAT_002ea128 undefined4
// GLOBAL s_cf_002ea116 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002E9F1C(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define iStack_80 (*(int *)(albw_frame + 0x0))
  #define local_7c (*(float *)(albw_frame + 0x4))
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define iStack_74 (*(int *)(albw_frame + 0xc))
  #define local_70 (*(uint *)(albw_frame + 0x10))
  #define uStack_6c (*(uint *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define afStack_64 ((float *)(albw_frame + 0x1c))
  #define afStack_58 ((float *)(albw_frame + 0x28))
  piVar7 = DAT_002ea10c;
  puVar4 = (undefined4 *)func_0052FBA0(*DAT_002ea10c + 0x3dbbc,*(uint *)(param_2 + 0x28));
  if (puVar4 == (undefined4 *)0x0) {
    return 1;
  }
  iVar5 = func_00588BE4((int)puVar4);
  if (iVar5 != *DAT_002ea110) {
    return 1;
  }
  cVar1 = *(char *)(param_1 + 0x8cc);
  if ((cVar1 != '\x15' && cVar1 != '\x16') &&
     ((cVar1 != '\x17' && cVar1 != '\x1d') && cVar1 != '\x19')) {
    if (cVar1 != '\x1a') {
      return 1;
    }
    if (_DAT_002ea114 <= *(int *)(param_1 + 0xe10)) {
      return 1;
    }
  }
  piVar6 = (int *)(uintptr_t)(func_00687EA0(puVar4));
  if (*(char *)(param_1 + 0x8cc) == '\x1d') {
    puVar8 = (uint *)func_002C11E8(&iStack_80,2,0,0);
    func_001696F8(*(int *)(param_1 + 0xdb4),puVar8);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_002ea128;
    if (piVar6 == (int *)0x0) goto LAB_002ea06c;
    func_0033CF78((int)piVar6);
  }
  else {
    func_006640EC((undefined4 *)(param_1 + 0x8c8),0x1b,in_s0);
    if (piVar6 == (int *)0x0) goto LAB_002ea06c;
  }
  func_0033BA80(piVar6);
  local_7c = ALBW_AS_F32(piVar6[0xf4]);
  local_78 = ALBW_AS_F32(piVar6[0xf5]);
  iStack_74 = piVar6[0xf6];
  func_00115C70(afStack_64,&local_7c,(float *)(param_1 + 0xe30));
  iVar5 = func_0068C690(afStack_64);
  if ((*(int *)(param_1 + 0x344) != 0) &&
     (func_004A1B9C((int *)&local_70,*(int *)(param_1 + 0x344),(uint *)(s_cf_002ea118)),
     uVar3 = uStack_6c, uVar2 = local_70, local_70 != 0)) {
    local_78 = local_78 + DAT_002ea120;
    func_004D8054(&local_7c,iVar5 + 0x80000000U,DAT_002ea124);
    local_68 = 0;
    local_70 = 10;
    uStack_6c = iVar5 + 0x80000000U;
    func_0049216C(afStack_58,&local_70,&local_7c);
    if ((uVar2 != 0) && (*(uint *)(uVar2 + 0x1c) == uVar3)) {
      func_004A2D1C(uVar2,afStack_58);
    }
  }
LAB_002ea06c:
  if (*(uint *)(param_1 + 0xca0) != 0) {
    puVar4 = (undefined4 *)func_0052FBA0(*piVar7 + 0x3dbbc,*(uint *)(param_1 + 0xca0));
    piVar7 = (int *)(uintptr_t)(func_00687EA0(puVar4));
    if (piVar7 != (int *)0x0) {
      func_002E8870(param_1,piVar7);
      piVar7[0xb8] = piVar7[0xb8] | 2;
    }
  }
  return 1;
}

