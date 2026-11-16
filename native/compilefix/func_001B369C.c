/* compilefix: USA 001B369C (EU 001B369C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: use of undeclared identifier '_func_001B3970'; did you mean 'func_001B3970'?
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - _func_<USA> read as a value: eu_usa_map.json pairs that USA function with an EU literal-pool word (the label sits on the pool), so Ghidra printed the pool float as a function symbol -> DAT_<EU pool address>, the same word (checked: vldr sN,[pc,#imm] targets it) [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
extern float DAT_001b394c;

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_001B3970(void);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_00520FC0(void);
extern int func_005211F4(int param_1,float fparam_0,float fparam_1);
extern int func_0053F480(int param_1);
extern int func_00556E64(int param_1);
extern int func_0058E2B8(int *param_1);
extern int func_0065B158(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern int *DAT_001b3940;
extern float DAT_001b3944;
extern int DAT_001b3948;
extern float DAT_001b3950;
extern float DAT_001b3954;
extern int DAT_001b3958;
extern int *DAT_001b395c;
extern int DAT_001b3960;
extern float DAT_001b3964;
extern int DAT_001b3968;
extern int DAT_001b396c;

// USA 001B369C <- EU 001B369C [EDITED REGION: check by hand] (Ghidra, non-matching)
// GLOBAL DAT_001b3940 int *
// GLOBAL DAT_001b3944 float
// GLOBAL DAT_001b3948 int
// GLOBAL DAT_001b3950 float
// GLOBAL DAT_001b3954 float
// GLOBAL DAT_001b3958 int
// GLOBAL DAT_001b395c int *
// GLOBAL DAT_001b3960 int
// GLOBAL DAT_001b3964 float
// GLOBAL DAT_001b3968 int
// GLOBAL DAT_001b396c int
// GLOBAL func_001B3970 undefined

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_001B369C(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  #define aiStack_20 ((int *)(albw_frame + 0x20))
  if (*(char *)(param_1 + 0x910) != '\0') {
    return 0;
  }
  puVar6 = (undefined4 *)(param_1 + 0x8bc);
  if (0x13 < *(ushort *)(param_1 + 0x918)) {
    iVar5 = *DAT_001b3940;
    iVar2 = func_0053F480(iVar5);
    if ((iVar2 != 0) && (bVar1 = func_00556E64(iVar5), !bVar1)) {
      iVar2 = func_00520FC0();
      fVar8 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
      if (fVar8 <= DAT_001b3944) {
        fVar8 = -fVar8;
      }
      if (((int)ALBW_AS_U32(fVar8) < 0x40000000) &&
         (fVar8 = **(float **)(iVar5 + 0x1c) - *(float *)(param_1 + 0x3d0),
         fVar9 = (*(float **)(iVar5 + 0x1c))[2] - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9)) < DAT_001b3948)) {
        return func_0065B158(puVar6,4);
      }
    }
  }
  fVar8 = DAT_001b394c;
  iVar2 = func_00520FC0();
  fVar9 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 0x3d4);
  if ((fVar8 <= fVar9) && (fVar8 = fVar9, DAT_001b3950 < fVar9)) {
    fVar8 = DAT_001b3950;
  }
  iVar2 = func_005211F4(param_1,DAT_001b3954,fVar8);
  if (iVar2 != 0) {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&fStack_2c,pfVar3,(float *)(param_1 + 0x3d0));
    fStack_38 = fStack_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    aiStack_20[0] = func_0068C690(&fStack_38);
    aiStack_20[0] = aiStack_20[0] - *(int *)(param_1 + 1000);
    uVar4 = func_0058E2B8(aiStack_20);
    if (uVar4 < *(uint *)(DAT_001b3958 + 8)) {
      return func_0065B158(puVar6,3);
    }
  }
  piVar7 = (int *)(param_1 + 0x904);
  switch(*(undefined4 *)(param_1 + 0x908)) {
  case 0:
    iVar2 = func_0051D2F4(piVar7,DAT_001b3968,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
    goto joined_r0x001b38e4;
  case 1:
    if (*(int *)(param_1 + 0x8bc) < 0x10) {
      return 0;
    }
    iVar2 = 2;
LAB_001b38fc:
    *(int *)(param_1 + 0x908) = iVar2;
    return 0;
  case 2:
    iVar2 = func_0051D2F4(piVar7,DAT_001b396c,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
joined_r0x001b38e4:
    if (iVar2 != 0) {
      *(int *)(param_1 + 0x908) = *(int *)(param_1 + 0x908) + 1;
      *(undefined4 *)(param_1 + 0x8bc) = 0;
      return 0;
    }
    break;
  case 3:
    if (0xf < *(int *)(param_1 + 0x8bc)) {
      iVar2 = 4;
      goto LAB_001b38fc;
    }
    break;
  case 4:
    iVar2 = func_0051D2F4(piVar7,0,DAT_001b3960,*DAT_001b395c,DAT_001b3964);
    if (iVar2 != 0) {
      return func_0065B158(puVar6,2);
    }
  }
  return 0;
}

