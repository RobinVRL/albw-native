/* compilefix: USA 002E985C (EU 002E9838), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_002e9b73[];
extern char s_cf_002e9b74[];
#include "compilefix.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_002F618C(int param_1,float fparam_0);
extern int func_00352198(int param_1,int *param_2);
extern float func_003E19E8(float fparam_0,float fparam_1,float fparam_2,float fparam_3,float fparam_4);
extern int func_00520FC0(void);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00548E78(int param_1,undefined4 param_2,undefined4 param_3);
extern float func_0058A404(int param_1);
extern int func_0058E2B8(int *param_1);
extern float func_006640EC(undefined4 *param_1,undefined1 param_2,float fparam_0);
extern int func_0068A560(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_0068C690(float *param_1);
extern float DAT_002e9b58;
extern float DAT_002e9b5c;
extern int *DAT_002e9b60;
extern float DAT_002e9b64;
extern int *DAT_002e9b68;
extern undefined4 DAT_002e9b6c;
extern undefined DAT_002e9b70;
extern int DAT_002e9b7c;
extern undefined4 _DAT_002e9b70;

// USA 002E985C <- EU 002E9838 (Ghidra, non-matching)
// GLOBAL DAT_002e9b58 float
// GLOBAL DAT_002e9b5c float
// GLOBAL DAT_002e9b60 int *
// GLOBAL DAT_002e9b64 float
// GLOBAL DAT_002e9b68 int *
// GLOBAL DAT_002e9b6c undefined4
// GLOBAL DAT_002e9b70 undefined
// GLOBAL DAT_002e9b7c int
// GLOBAL s_cf_002e9b73 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_002E985C(int param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3,
                  float fparam_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  float fVar12;
  float fVar13;
  float fparam_2_00;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c ((char * *)(albw_frame + 0x4))
  #define local_30 ((float *)(albw_frame + 0x10))
  fparam_2_00 = DAT_002e9b5c;
  fVar13 = DAT_002e9b58;
  uVar8 = *(uint *)(param_1 + 0xb9c);
  uVar3 = *(uint *)(param_1 + 0xba0);
  if (uVar8 < uVar3) {
    uVar8 = uVar8 + 1;
    *(uint *)(param_1 + 0xb9c) = uVar8;
  }
  if (uVar3 != 0) {
    uVar8 = *(uint *)(param_1 + 0xb9c);
  }
  fVar12 = fVar13;
  if ((uVar3 != 0 && uVar8 != 0) && (fVar12 = fparam_2_00, uVar8 < uVar3)) {
    fVar12 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = fVar12 * *(float *)(param_1 + 0xba4);
  }
  fVar12 = func_003E19E8(fVar13,fVar13,fparam_2_00,fVar13,fVar12);
  func_0068A560((float *)(param_1 + 0x3d0),(float *)(param_1 + 0xba8),(float *)(param_1 + 0xbb4),
                fVar12);
  pfVar4 = (float *)func_00520FC0();
  iVar5 = func_0052FBA0(*DAT_002e9b60 + 0x3dbbc,*(uint *)(param_1 + 0xc90));
  if (iVar5 == 0) {
    iVar5 = 0;
  }
  iVar6 = *(int *)(param_1 + 0xb7c);
  puVar9 = (uint *)(param_1 + 0xb0c);
  if (iVar6 == 0) {
    uVar8 = *(uint *)(param_1 + 0xb0c);
    uVar3 = *(uint *)(param_1 + 0xb10);
    if (uVar8 < uVar3) {
      uVar8 = uVar8 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar8;
    }
    if (uVar3 != 0) {
      uVar8 = *puVar9;
    }
    if ((uVar3 != 0 && uVar8 != 0) && (fVar13 = fparam_2_00, uVar8 < uVar3)) {
      fVar13 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fparam_2_00 - fVar13);
    uVar2 = DAT_002e9b6c;
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      *(undefined4 *)(param_1 + 0xb10) = 0x28;
      *(undefined4 *)(param_1 + 0xb14) = uVar2;
      *puVar9 = 0;
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return;
    }
  }
  else if (iVar6 == 1) {
    uVar8 = *(uint *)(param_1 + 0xb0c);
    if (uVar8 < *(uint *)(param_1 + 0xb10)) {
      uVar8 = uVar8 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar8;
    }
    uVar2 = _DAT_002e9b70;
    if (*(uint *)(param_1 + 0xb10) <= uVar8) {
      *(undefined4 *)(param_1 + 0xb10) = 0x23;
      *(undefined4 *)(param_1 + 0xb14) = uVar2;
      local_40 = DAT_002e9b7c;
      *puVar9 = 0;
      local_3c[0] = s_cf_002e9b74;
      func_00352198(param_1 + 0x324,&local_40);
      func_00115C70(local_30,pfVar4,(float *)(param_1 + 0xbb4));
      iVar5 = func_0068C690(local_30);
      *(int *)(param_1 + 0xc88) = iVar5;
      *(int *)(param_1 + 1000) = iVar5;
      *(int *)(param_1 + 0xb7c) = *(int *)(param_1 + 0xb7c) + 1;
      return;
    }
  }
  else if (iVar6 == 2) {
    uVar8 = *(uint *)(param_1 + 0xb0c);
    uVar3 = *(uint *)(param_1 + 0xb10);
    if (uVar8 < uVar3) {
      uVar8 = uVar8 + 1;
      *(uint *)(param_1 + 0xb0c) = uVar8;
    }
    if (uVar3 != 0) {
      uVar8 = *puVar9;
    }
    if ((uVar3 != 0 && uVar8 != 0) && (fVar13 = fparam_2_00, uVar8 < uVar3)) {
      fVar13 = (float)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar13 * *(float *)(param_1 + 0xb14);
    }
    func_002F618C(param_1,fVar13);
    if (*(uint *)(param_1 + 0xb10) <= *(uint *)(param_1 + 0xb0c)) {
      func_00115C70((float *)local_3c,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
      iVar7 = func_0068C690((float *)local_3c);
      fVar13 = func_0058A404(param_1);
      bVar11 = SBORROW4((int)ALBW_AS_U32(fVar13),(int)ALBW_AS_U32(DAT_002e9b64));
      iVar6 = (int)ALBW_AS_U32(fVar13) - (int)ALBW_AS_U32(DAT_002e9b64);
      bVar10 = fVar13 == DAT_002e9b64;
      if ((int)ALBW_AS_U32(fVar13) <= (int)ALBW_AS_U32(DAT_002e9b64)) {
        bVar11 = SBORROW4((int)ALBW_AS_U32(fVar13),0x3f000000);
        iVar6 = (int)ALBW_AS_U32(fVar13) + -0x3f000000;
        bVar10 = fVar13 == 0.5;
      }
      puVar1 = (undefined4 *)(param_1 + 0x8c8);
      if (bVar10 || iVar6 < 0 != bVar11) {
        uVar8 = func_00111A64((uint *)(*DAT_002e9b68 + 0x660));
        uVar8 = (uint)((ulonglong)uVar8 * 100 >> 0x20);
        local_30[0] = ALBW_AS_F32((iVar7 - *(int *)(param_1 + 1000)));
        iVar7 = func_0058E2B8((int *)local_30);
        bVar10 = SBORROW4(uVar8,100);
        iVar6 = uVar8 - 100;
        if (uVar8 < 100) {
          bVar10 = SBORROW4(iVar7,0x20000000);
          iVar6 = iVar7 + -0x20000000;
        }
        if ((iVar6 < 0 != bVar10) && (iVar5 != 0)) {
          func_006640EC(puVar1,0xc,fVar13);
          return;
        }
      }
      else {
        uVar8 = func_00111A64((uint *)(*DAT_002e9b68 + 0x660));
        iVar5 = func_00548E78(param_1,0x32,0x32);
        if (iVar5 <= (int)((ulonglong)uVar8 * 100 >> 0x20)) {
          func_006640EC(puVar1,3,fVar13);
          return;
        }
      }
      func_006640EC(puVar1,6,fVar13);
      return;
    }
  }
  return;
}

