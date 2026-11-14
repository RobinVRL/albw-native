/* compilefix: USA 003807B0 (EU 0038078C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier 's_'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - Ghidra string label with punctuation (s_T<SE_..._ADDR + n) -> s_cf_<ADDR+n>, the same code-section address (checked: add rX,pc,#imm in the ARM) [2]
 *  - call to a callee the dump names FUN_<EU> (mapped to func_<USA> without a declaration; implicit int(...) would promote float args): extern prototype from the callee's Ghidra signature [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
extern char s_cf_00380b0b[];
extern char s_cf_00380b0c[];
#include "compilefix.h"
/* callee named FUN_<EU> in the dump: prototype from its own Ghidra signature */
extern void func_004FC570(int *param_1);

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0037EB40(int param_1);
extern int func_0038063C(int param_1);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern int func_0058ACC8(int param_1,float fparam_0);
extern int func_006678C0(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern float DAT_00380aec;
extern float *DAT_00380af0;
extern float DAT_00380af4;
extern int DAT_00380af8;
extern float DAT_00380afc;
extern float DAT_00380b00;
extern float DAT_00380b04;
extern undefined DAT_00380b08;
extern int DAT_00380b20;
extern int DAT_00380b24;
extern float DAT_00380b28;
extern float DAT_00380b2c;
extern undefined4 *DAT_00380b30;
extern int DAT_00380b34;
extern int DAT_00380b38;
extern int DAT_00380b3c;
extern undefined4 _DAT_00380b08;

// USA 003807B0 <- EU 0038078C (Ghidra, non-matching)
// GLOBAL DAT_00380aec float
// GLOBAL DAT_00380af0 float *
// GLOBAL DAT_00380af4 float
// GLOBAL DAT_00380af8 int
// GLOBAL DAT_00380afc float
// GLOBAL DAT_00380b00 float
// GLOBAL DAT_00380b04 float
// GLOBAL DAT_00380b08 undefined
// GLOBAL DAT_00380b20 int
// GLOBAL DAT_00380b24 int
// GLOBAL DAT_00380b28 float
// GLOBAL DAT_00380b2c float
// GLOBAL DAT_00380b30 undefined4 *
// GLOBAL DAT_00380b34 int
// GLOBAL DAT_00380b38 int
// GLOBAL DAT_00380b3c int
// GLOBAL s_cf_00380b0b string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_003807B0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  float *pfVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fparam_2;
  float fparam_0;
  float fparam_1;
  longlong lVar10;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define fStack_68 (*(float *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define local_40 (*(int *)(albw_frame + 0x30))
  #define local_3c (*(char * *)(albw_frame + 0x34))
  iVar4 = DAT_00380af8;
  local_6c = *DAT_00380af0;
  fStack_68 = DAT_00380af0[1];
  fStack_64 = DAT_00380af0[2];
  local_44 = DAT_00380aec;
  local_48 = DAT_00380aec;
  piVar7 = param_1 + 0x2b5;
  pfVar6 = (float *)(param_1 + 0x2af);
  fVar9 = DAT_00380aec;
  fparam_2 = DAT_00380b00;
  fparam_0 = DAT_00380afc;
  fparam_1 = DAT_00380af4;
  switch((char)param_1[0x2c9]) {
  case '\0':
    iVar4 = func_0058A8F0((int)param_1);
    if (iVar4 != 0) {
      func_004FC07C((int)param_1,7,0xffffffff,0);
      *(undefined1 *)(param_1 + 0x2c9) = 1;
    }
    break;
  case '\x01':
    lVar10 = func_0058ACC8((int)param_1,DAT_00380b04);
    iVar2 = _DAT_00380b08;
    if ((int)lVar10 != 0) {
      param_1[0x2be] = 4;
      param_1[0x2bf] = iVar2;
      param_1[0x2bd] = 0;
      param_1[0x167] = param_1[0x167] | 8;
      func_004FC570(param_1);
      param_1[0x2b4] = param_1[0xfa];
      func_00115154(&local_48,&local_44,param_1[0xfa]);
      local_40 = DAT_00380b20;
      *pfVar6 = local_48 * fparam_2;
      param_1[0x2b0] = (int)ALBW_AS_U32(fVar9);
      param_1[0x2b1] = (int)ALBW_AS_U32((local_44 * fparam_2));
      *(undefined1 *)((int)param_1 + 0xb2d) = 1;
      local_3c = s_cf_00380b0c;
      func_00150A84(param_1,&local_40,0);
    }
    iVar2 = func_0058A8F0((int)param_1);
    if (iVar2 == 0) break;
    func_004FC07C((int)param_1,8,0xffffffff,0);
    *(undefined1 *)(param_1 + 0x2c9) = 2;
  case '\x02':
    if (DAT_00380b24 <= param_1[0x2c4]) {
      func_004D838C(pfVar6,DAT_00380af0,DAT_00380b28,DAT_00380b28,fparam_2);
    }
    fVar8 = (float)VectorSignedToFloat(*DAT_00380b30,(byte)(in_fpscr >> 0x15) & 3);
    *piVar7 = (int)(SQRT(*pfVar6 * *pfVar6 + ALBW_AS_F32(param_1[0x2b1]) * ALBW_AS_F32(param_1[0x2b1])) *
                    DAT_00380b2c * fVar8) + *piVar7;
    bVar1 = func_0037EB40((int)param_1);
    if ((bVar1) ||
       ((int)ALBW_AS_U32(SQRT(*pfVar6 * *pfVar6 + ALBW_AS_F32(param_1[0x2b1]) * ALBW_AS_F32(param_1[0x2b1]))) <= DAT_00380b34
       )) {
switchD_003807f4_caseD_3:
      func_00115C70(&local_6c,(float *)(param_1 + 0x29e),(float *)(param_1 + 0x2a4));
      uVar3 = func_0068C690(&local_6c);
      param_1[0x2b4] = uVar3;
      func_00115154(&local_48,&local_44,uVar3);
      param_1[0x2b0] = (int)ALBW_AS_U32(fVar9);
      *pfVar6 = fVar9;
      param_1[0x2b1] = (int)ALBW_AS_U32(fVar9);
      param_1[0x167] = param_1[0x167] & 0xfffffff7;
      func_004D838C((float *)(param_1 + 0x2a4),(float *)(param_1 + 0x2a1),fparam_0,fparam_1,fparam_2
                   );
      func_0051D2F4(piVar7,0,iVar4,DAT_00380b38,fparam_0);
      func_004FC07C((int)param_1,9,0xffffffff,0);
      *(undefined1 *)(param_1 + 0x2c9) = 4;
    }
    break;
  case '\x03':
    goto switchD_003807f4_caseD_3;
  case '\x04':
    fVar9 = DAT_00380afc;
    func_004D838C((float *)(param_1 + 0x2a4),(float *)(param_1 + 0x2a1),DAT_00380afc,DAT_00380af4,
                  DAT_00380b00);
    func_0051D2F4(piVar7,0,iVar4,DAT_00380b38,fVar9);
    iVar4 = func_0058A8F0((int)param_1);
    if ((iVar4 != 0) && (param_1[0x2c4] < DAT_00380b3c)) {
      *(undefined1 *)((int)param_1 + 0xb2d) = 0;
      param_1[0x2b5] = 0;
      iVar4 = func_0038063C((int)param_1);
      if (iVar4 == 0) {
        uVar5 = 2;
      }
      else {
        uVar5 = 6;
      }
      func_006678C0(param_1 + 0x292,uVar5);
    }
  }
  return func_00115C54((float *)(param_1 + 0x2a4),(float *)(param_1 + 0x2a4),pfVar6);
}

