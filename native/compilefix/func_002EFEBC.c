/* compilefix: USA 002EFEBC (EU 002EFE98), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002f0237[];
extern char s_cf_002f0238[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002EAE8C(int param_1,float *param_2);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern int func_003ADA40(void);
extern int func_003ADD04(void);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005841D8(int param_1,undefined4 param_2);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002f0214;
extern undefined4 *DAT_002f0218;
extern float DAT_002f021c;
extern float DAT_002f0220;
extern undefined4 DAT_002f0224;
extern undefined4 DAT_002f0228;
extern float DAT_002f022c;
extern undefined4 DAT_002f0230;
extern undefined DAT_002f0234;
extern int DAT_002f0244;
extern undefined4 _DAT_002f0234;

// USA 002EFEBC <- EU 002EFE98 (Ghidra, non-matching)
// GLOBAL DAT_002f0214 int *
// GLOBAL DAT_002f0218 undefined4 *
// GLOBAL DAT_002f021c float
// GLOBAL DAT_002f0220 float
// GLOBAL DAT_002f0224 undefined4
// GLOBAL DAT_002f0228 undefined4
// GLOBAL DAT_002f022c float
// GLOBAL DAT_002f0230 undefined4
// GLOBAL DAT_002f0234 undefined
// GLOBAL DAT_002f0244 int
// GLOBAL s_cf_002f0237 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002EFEBC(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fparam_2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define afStack_48 ((float *)(albw_frame + 0x8))
  #define local_38 (*(int *)(albw_frame + 0x18))
  #define local_34 (*(char * *)(albw_frame + 0x1c))
  pfVar2 = (float *)func_00520FC0();
  piVar7 = DAT_002f0214;
  func_0052FBA0(*DAT_002f0214 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  func_005841D8(*piVar7,*DAT_002f0218);
  uVar1 = _DAT_002f0234;
  fparam_2 = DAT_002f0220;
  fVar10 = DAT_002f021c;
  piVar7 = (int *)(param_1 + 0xb7c);
  pfVar8 = (float *)(param_1 + 0xbb4);
  puVar6 = (uint *)(param_1 + 0xb0c);
  switch(*(undefined4 *)(param_1 + 0xb7c)) {
  case 0:
    uVar5 = *(uint *)(param_1 + 0xb0c);
    uVar4 = *(uint *)(param_1 + 0xb10);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *puVar6;
    }
    if ((uVar4 != 0 && uVar5 != 0) && (fVar10 = fparam_2, uVar5 < uVar4)) {
      fVar10 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = fVar10 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fparam_2 - fVar10);
    uVar1 = DAT_002f0224;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x1e;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      uVar1 = DAT_002f0228;
      *puVar6 = 0;
      *(undefined4 *)(param_1 + 0xba0) = 0x4b;
      *(undefined4 *)(param_1 + 0xba4) = uVar1;
      *(uint *)(param_1 + 0xb9c) = 0;
      *piVar7 = *(int *)(param_1 + 0xb7c) + 1;
    }
    break;
  case 1:
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      func_003ADA40();
      *piVar7 = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
    *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
    break;
  case 2:
    iVar3 = func_003ADD04();
    if (iVar3 != 0) {
      iVar3 = func_002EAE8C(param_1,pfVar8);
      if (iVar3 != 0) {
        func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),pfVar8,DAT_002f022c);
        *(float *)(param_1 + 0xba8) = *(float *)(param_1 + 0x3d0);
        *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x3d8);
      }
      uVar1 = DAT_002f0230;
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      *puVar6 = 0;
      *piVar7 = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
    break;
  case 3:
    if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
      *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xb10) = 0x23;
      *(undefined4 *)(param_1 + 0xb14) = uVar1;
      local_38 = DAT_002f0244;
      *puVar6 = 0;
      local_34 = s_cf_002f0238;
      func_00352198(param_1 + 0x324,&local_38);
      func_00115C70(afStack_48,pfVar2,pfVar8);
      iVar3 = func_0068C690(afStack_48);
      *(int *)(param_1 + 0xc88) = iVar3;
      *(int *)(param_1 + 1000) = iVar3;
      *piVar7 = *(int *)(param_1 + 0xb7c) + 1;
    }
    goto LAB_002f01a0;
  case 4:
    uVar4 = *(uint *)(param_1 + 0xb10);
    uVar5 = *(uint *)(param_1 + 0xb0c);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *puVar6;
    }
    fVar9 = fVar10;
    if ((uVar4 != 0 && uVar5 != 0) && (fVar9 = fparam_2, uVar5 < uVar4)) {
      fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar9);
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      func_006640EC((undefined4 *)(param_1 + 0x8c8),2,fVar9);
      return 0;
    }
LAB_002f01a0:
    uVar4 = *(uint *)(param_1 + 0xba0);
    uVar5 = *(uint *)(param_1 + 0xb9c);
    if (uVar5 < uVar4) {
      uVar5 = uVar5 + 1;
      *(uint *)(param_1 + 0xb9c) = uVar5;
    }
    if (uVar4 != 0) {
      uVar5 = *(uint *)(param_1 + 0xb9c);
    }
    fVar9 = fVar10;
    if ((uVar4 != 0 && uVar5 != 0) && (fVar9 = fparam_2, uVar5 < uVar4)) {
      fVar9 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar9 = fVar9 * *(float *)(param_1 + 0xba4);
    }
    fVar10 = func_003E19E8(fVar10,fVar10,fparam_2,fVar10,fVar9);
    return func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),pfVar8,fVar10);
  }
  return 0;
}

