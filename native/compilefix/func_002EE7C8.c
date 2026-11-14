/* compilefix: USA 002EE7C8 (EU 002EE7A4), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - explicit casts at pointer-type mismatches (identity on the ARM) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002eeb67[];
extern char s_cf_002eeb68[];
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0024C3A8(void);
extern int func_002F061C(int param_1,float *param_2);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FD14(int param_1,undefined4 *param_2);
extern int func_005841D8(int param_1,undefined4 param_2);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern int func_0068C794(float *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern float DAT_002eeb3c;
extern float DAT_002eeb40;
extern float DAT_002eeb44;
extern int *DAT_002eeb48;
extern undefined4 *DAT_002eeb4c;
extern float DAT_002eeb50;
extern undefined4 DAT_002eeb54;
extern undefined4 DAT_002eeb58;
extern float *DAT_002eeb5c;
extern undefined4 *DAT_002eeb60;
extern undefined DAT_002eeb64;
extern int DAT_002eeb70;
extern undefined4 _DAT_002eeb64;

// USA 002EE7C8 <- EU 002EE7A4 (Ghidra, non-matching)
// GLOBAL DAT_002eeb3c float
// GLOBAL DAT_002eeb40 float
// GLOBAL DAT_002eeb44 float
// GLOBAL DAT_002eeb48 int *
// GLOBAL DAT_002eeb4c undefined4 *
// GLOBAL DAT_002eeb50 float
// GLOBAL DAT_002eeb54 undefined4
// GLOBAL DAT_002eeb58 undefined4
// GLOBAL DAT_002eeb5c float *
// GLOBAL DAT_002eeb60 undefined4 *
// GLOBAL DAT_002eeb64 undefined
// GLOBAL DAT_002eeb70 int
// GLOBAL s_cf_002eeb67 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_002EE7C8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((float * *)(albw_frame + 0x8))
  #define local_40 (*(int *)(albw_frame + 0x10))
  #define local_3c (*(char * *)(albw_frame + 0x14))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  fVar11 = DAT_002eeb40;
  func_0068C794((float *)(param_1 + 0xc08),DAT_002eeb40,DAT_002eeb44,DAT_002eeb40,DAT_002eeb3c);
  local_48[0] = (float *)func_00520FC0();
  piVar1 = DAT_002eeb48;
  func_0052FBA0(*DAT_002eeb48 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  iVar4 = func_005841D8(*piVar1,*DAT_002eeb4c);
  uVar2 = _DAT_002eeb64;
  fVar12 = DAT_002eeb50;
  iVar5 = *(int *)(param_1 + 0xb7c);
  puVar8 = (uint *)(param_1 + 0xb0c);
  if (iVar5 == 0) {
    uVar6 = *(uint *)(param_1 + 0xb0c);
    uVar7 = *(uint *)(param_1 + 0xb10);
    if (uVar6 < uVar7) {
      uVar6 = uVar6 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar6;
    }
    if (uVar7 != 0) {
      uVar6 = *puVar8;
    }
    if ((uVar7 != 0 && uVar6 != 0) && (fVar11 = fVar12, uVar6 < uVar7)) {
      fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
      fVar11 = fVar11 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar12 - fVar11);
    uVar2 = DAT_002eeb54;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar2;
      uVar2 = DAT_002eeb58;
      *puVar8 = 0;
      *(undefined4 *)(param_1 + 0xba0) = 0x4b;
      *(undefined4 *)(param_1 + 0xba4) = uVar2;
      *(uint *)(param_1 + 0xb9c) = 0;
LAB_002eea2c:
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return 0;
    }
  }
  else {
    pfVar9 = (float *)(param_1 + 0xbb4);
    if (iVar5 == 1) {
      bVar3 = func_0024C3A8();
      if (!bVar3) {
        local_48[0] = DAT_002eeb5c;
        iVar5 = func_0052FD14(*piVar1 + 0x3dbbc,(undefined4 *)(local_48));
        if ((((iVar5 == 0) && (iVar5 = func_005841D8(*piVar1,*DAT_002eeb60), iVar5 == 0)) &&
            (iVar5 = func_005841D8(*piVar1,*DAT_002eeb4c), iVar5 == 0)) && (iVar4 == 0)) {
          iVar4 = func_002F061C(param_1,pfVar9);
          if (iVar4 != 0) {
            *(float *)(param_1 + 0xba8) = *(float *)(param_1 + 0x3d0);
            *(undefined4 *)(param_1 + 0xbac) = *(undefined4 *)(param_1 + 0x3d4);
            *(undefined4 *)(param_1 + 0xbb0) = *(undefined4 *)(param_1 + 0x3d8);
            *(undefined4 *)(param_1 + 3000) = *(undefined4 *)(param_1 + 0xbac);
          }
          goto LAB_002eea2c;
        }
      }
    }
    else {
      if (iVar5 == 2) {
        if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) {
          *(uint *)(param_1 + 0xb0c) = *(uint *)(param_1 + 0xb0c) + 1;
        }
        else {
          *(undefined4 *)(param_1 + 0xb10) = 0x23;
          *(undefined4 *)(param_1 + 0xb14) = uVar2;
          local_40 = DAT_002eeb70;
          *puVar8 = 0;
          local_3c = s_cf_002eeb68;
          func_00352198(param_1 + 0x324,&local_40);
          func_00115C70(afStack_38,local_48[0],pfVar9);
          iVar4 = func_0068C690(afStack_38);
          *(int *)(param_1 + 0xc88) = iVar4;
          *(int *)(param_1 + 1000) = iVar4;
          *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
        }
LAB_002eeac4:
        uVar6 = *(uint *)(param_1 + 0xb9c);
        uVar7 = *(uint *)(param_1 + 0xba0);
        if (uVar6 < uVar7) {
          uVar6 = uVar6 + 1;
          *(uint *)(param_1 + 0xb9c) = uVar6;
        }
        if (uVar7 != 0) {
          uVar6 = *(uint *)(param_1 + 0xb9c);
        }
        fVar10 = fVar11;
        if ((uVar7 != 0 && uVar6 != 0) && (fVar10 = fVar12, uVar6 < uVar7)) {
          fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = fVar10 * *(float *)(param_1 + 0xba4);
        }
        fVar12 = func_003E19E8(fVar11,fVar11,fVar12,fVar11,fVar10);
        return func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),pfVar9,fVar12);
      }
      if (iVar5 == 3) {
        uVar6 = *(uint *)(param_1 + 0xb0c);
        uVar7 = *(uint *)(param_1 + 0xb10);
        if (uVar6 < uVar7) {
          uVar6 = uVar6 + 1;
          *(uint *)(param_1 + 0xb0c) = uVar6;
        }
        if (uVar7 != 0) {
          uVar6 = *puVar8;
        }
        fVar10 = fVar11;
        if ((uVar7 != 0 && uVar6 != 0) && (fVar10 = fVar12, uVar6 < uVar7)) {
          fVar10 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = fVar10 * *(float *)(param_1 + 0xb14);
        }
        func_002F618C(param_1,fVar10);
        if (*(uint *)(param_1 + 0xb0c) < *(uint *)(param_1 + 0xb10)) goto LAB_002eeac4;
        func_006640EC((undefined4 *)(param_1 + 0x8c8),0xd,fVar10);
      }
    }
  }
  return 0;
}

