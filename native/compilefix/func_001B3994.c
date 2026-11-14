/* compilefix: USA 001B3994 (EU 001B3970), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_func_001B3C90'; did you mean 'func_001B3C90'?
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _func_<USA> read as a value: eu_usa_map.json pairs that USA function with an EU literal-pool word (the label sits on the pool), so Ghidra printed the pool float as a function symbol -> DAT_<EU pool address>, the same word (checked: vldr sN,[pc,#imm] targets it) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
extern float DAT_001b3c6c;

extern int func_00111A64(uint *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0014FDC4(int param_1,float *param_2,int param_3,float fparam_0,float fparam_1);
extern int func_001B3C90(uint param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004F8964(float *param_1,int param_2,float fparam_0);
extern float func_004F898C(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0053F480(int param_1);
extern int func_00556E94(int param_1);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *piRam001b3c70;
extern float DAT_001b3c58;
extern float DAT_001b3c5c;
extern int DAT_001b3c60;
extern int DAT_001b3c64;
extern float DAT_001b3c68;
extern int DAT_001b3c74;
extern int DAT_001b3c78;
extern float DAT_001b3c7c;
extern float DAT_001b3c80;
extern float DAT_001b3c84;
extern uint DAT_001b3c88;
extern float DAT_001b3c8c;

// GLOBAL DAT_001b3c58 float
// GLOBAL DAT_001b3c5c float
// GLOBAL DAT_001b3c60 int
// GLOBAL DAT_001b3c64 int
// GLOBAL DAT_001b3c68 float
// GLOBAL DAT_001b3c74 int
// GLOBAL DAT_001b3c78 int
// GLOBAL DAT_001b3c7c float
// GLOBAL DAT_001b3c80 float
// GLOBAL DAT_001b3c84 float
// GLOBAL DAT_001b3c88 uint
// GLOBAL DAT_001b3c8c float
// GLOBAL LAB_001b3c70 int *
// GLOBAL func_001B3C90 undefined
// USA 001B3994 <- EU 001B3970 (Ghidra, function missing from the decomp table)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001B3994(int param_1)

{
  bool bVar1;
  float *pfVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  iVar6 = DAT_001b3c60;
  fVar11 = DAT_001b3c58;
  if (*(char *)(param_1 + 0x910) != '\0') {
    return 0;
  }
  fVar10 = *(float *)(param_1 + 0x90c) + (DAT_001b3c5c - *(float *)(param_1 + 0x90c)) * DAT_001b3c58
  ;
  *(float *)(param_1 + 0x90c) = fVar10;
  iVar8 = *(int *)(param_1 + 1000);
  func_0014FDC4(param_1,(float *)(param_1 + 0x8e0),*(int *)(iVar6 + 0x10),fVar10,fVar11);
  if (*(int *)(param_1 + 0x904) != 0) {
    local_40 = ALBW_AS_F32((*(int *)(param_1 + 1000) - iVar8));
    iVar8 = func_0058E2B8((int *)&local_40);
    if (iVar8 < DAT_001b3c64) {
      iVar8 = DAT_001b3c64;
    }
    func_0051D2F4((int *)(param_1 + 0x904),0,DAT_001b3c64,iVar8,DAT_001b3c68);
  }
  fVar11 = func_004F898C();
  func_004F8964((float *)(param_1 + 0x3e0),1,fVar11);
  puVar9 = (undefined4 *)(param_1 + 0x8bc);
  fVar11 = DAT_001b3c6c;
  if (0x13 < *(ushort *)(param_1 + 0x918)) {
    iVar7 = *piRam001b3c70;
    iVar8 = func_0053F480(iVar7);
    if ((iVar8 != 0) && (bVar1 = func_00556E94(iVar7), !bVar1)) {
      iVar8 = func_00520FC0();
      fVar10 = *(float *)(iVar8 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar10 <= fVar11) {
        fVar10 = -fVar10;
      }
      if (((int)ALBW_AS_U32(fVar10) < 0x40000000) &&
         (fVar10 = **(float **)(iVar7 + 0x1c) - *(float *)(param_1 + 0x3d0),
         fVar12 = (*(float **)(iVar7 + 0x1c))[2] - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar10 * fVar10 + fVar12 * fVar12)) < DAT_001b3c74)) {
        return func_0065B158(puVar9,4);
      }
    }
  }
  fVar10 = *(float *)(param_1 + 0x8e0) - *(float *)(param_1 + 0x3d0);
  fVar12 = *(float *)(param_1 + 0x8e8) - *(float *)(param_1 + 0x3d8);
  if (DAT_001b3c78 <= (int)ALBW_AS_U32((fVar10 * fVar10 + fVar12 * fVar12))) {
    fVar10 = DAT_001b3c7c;
    iVar8 = func_00520FC0();
    fVar12 = *(float *)(iVar8 + 4) - *(float *)(param_1 + 0x3d4);
    if ((fVar10 <= fVar12) && (fVar10 = fVar12, DAT_001b3c80 < fVar12)) {
      fVar10 = DAT_001b3c80;
    }
    iVar8 = func_005211F4(param_1,DAT_001b3c84,fVar10);
    if (iVar8 != 0) {
      pfVar2 = (float *)func_00520FC0();
      func_00115C70(&local_34,pfVar2,(float *)(param_1 + 0x3d0));
      local_40 = local_34;
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      local_28[0] = func_0068C690(&local_40);
      local_28[0] = local_28[0] - *(int *)(param_1 + 1000);
      uVar3 = func_0058E2B8(local_28);
      if (uVar3 < *(uint *)(iVar6 + 8)) {
        return func_0065B158(puVar9,3);
      }
    }
    if ((0x1e < *(int *)(param_1 + 0x8bc)) && (bVar1 = func_00521018(param_1), bVar1)) {
      puVar4 = (uint *)func_0058A7D4();
      uVar3 = DAT_001b3c88;
      uVar5 = func_00111A64(puVar4);
      func_004D80A4((float *)(param_1 + 0x8e0),(uint)((ulonglong)uVar3 * (ulonglong)uVar5 >> 0x20),
                    DAT_001b3c8c);
      *(float *)(param_1 + 0x8e4) = fVar11;
      func_00115C54((float *)(param_1 + 0x8e0),(float *)(param_1 + 0x8e0),(float *)(param_1 + 8));
      *(undefined4 *)(param_1 + 0x8bc) = 0;
    }
    iVar6 = *(int *)(param_1 + 0x908) + -1;
    *(int *)(param_1 + 0x908) = iVar6;
    if (iVar6 != 0) {
      return 0;
    }
  }
  return func_0065B158(puVar9,0);
}

