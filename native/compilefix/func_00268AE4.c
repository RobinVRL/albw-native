/* compilefix: USA 00268AE4 (EU 00268B0C), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: operand of type 'float' cannot be cast to a pointer type
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - (T *)<float expr> -> (T *)CF_FBITS(expr): 32-bit copy of the float (vmov/vstr), never a conversion [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00564A78(int param_1,int *param_2);
extern float *DAT_00268e70;
extern float *DAT_00268e74;
extern float DAT_00268e78;
extern float *DAT_00268e7c;
extern float DAT_00268e80;
extern float DAT_00268e84;
extern float *DAT_00268e88;
extern float *DAT_00268e8c;
extern undefined DAT_00268e90;
extern int DAT_00268e94;

// USA 00268AE4 <- EU 00268B0C (Ghidra, non-matching)
// GLOBAL DAT_00268e70 float *
// GLOBAL DAT_00268e74 float *
// GLOBAL DAT_00268e78 float
// GLOBAL DAT_00268e7c float *
// GLOBAL DAT_00268e80 float
// GLOBAL DAT_00268e84 float
// GLOBAL DAT_00268e88 float *
// GLOBAL DAT_00268e8c float *
// GLOBAL DAT_00268e90 undefined
// GLOBAL DAT_00268e94 int

void func_00268AE4(int param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 (*(undefined4 *)(albw_frame + 0xc))
  #define local_60 (*(float *)(albw_frame + 0x10))
  #define fStack_5c (*(float *)(albw_frame + 0x14))
  #define fStack_58 (*(float *)(albw_frame + 0x18))
  #define local_48 (*(int *)(albw_frame + 0x28))
  #define local_44 (*(undefined * *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define local_38 (*(float *)(albw_frame + 0x38))
  #define fStack_34 (*(float *)(albw_frame + 0x3c))
  #define local_30 (*(float * *)(albw_frame + 0x40))
  pfVar10 = DAT_00268e7c;
  pfVar5 = DAT_00268e70;
  bVar1 = *(int *)(param_1 + 0xb3c) < 1;
  bVar2 = *(int *)(param_1 + 0xb50) < 1;
  bVar3 = 0 < *(int *)(param_1 + 0xb64);
  bVar4 = 0 < *(int *)(param_1 + 0xb78);
  pfVar8 = (float *)(param_1 + 0x458);
  pfVar9 = (float *)(param_1 + 0x488);
  if (*(int *)(param_1 + 0xb28) < 1) {
    *pfVar8 = *DAT_00268e70;
    *(float *)(param_1 + 0x45c) = pfVar5[1];
    *(float *)(param_1 + 0x460) = pfVar5[2];
    *(float *)(param_1 + 0x470) = *pfVar5;
    *(float *)(param_1 + 0x474) = pfVar5[1];
    *(float *)(param_1 + 0x478) = pfVar5[2];
    pfVar5 = DAT_00268e74;
    *pfVar9 = *DAT_00268e74;
    *(float *)(param_1 + 0x48c) = pfVar5[1];
    *(float *)(param_1 + 0x490) = pfVar5[2];
    *(float *)(param_1 + 0x4a0) = *pfVar5;
    *(float *)(param_1 + 0x4a4) = pfVar5[1];
    *(float *)(param_1 + 0x4a8) = pfVar5[2];
  }
  else {
    fVar13 = DAT_00268e78;
    if (bVar1 && bVar2) {
      fVar11 = DAT_00268e80;
      func_00115D70(&local_3c,DAT_00268e7c + 2,DAT_00268e80);
      *pfVar8 = local_3c;
      *(float *)(param_1 + 0x45c) = local_38;
      *(float *)(param_1 + 0x460) = fStack_34;
      func_00115D70(&local_60,pfVar10 + 2,fVar11);
      *(float *)(param_1 + 0x470) = local_60;
      *(float *)(param_1 + 0x474) = fStack_5c;
      *(float *)(param_1 + 0x478) = fStack_58;
    }
    else {
      if (bVar1 || bVar2) {
        func_00115D70(&local_38,DAT_00268e8c,DAT_00268e78);
        fVar11 = local_38;
      }
      else {
        local_30 = (float *)CF_FBITS(DAT_00268e7c[4]);
        fVar11 = DAT_00268e7c[2];
        fStack_34 = DAT_00268e7c[3];
      }
      *(float **)(param_1 + 0x460) = local_30;
      if (!bVar1 && !bVar2) {
        local_30 = pfVar10 + 2;
      }
      *pfVar8 = fVar11;
      *(float *)(param_1 + 0x45c) = fStack_34;
      if (bVar1 || bVar2) {
        func_00115D70(&local_60,DAT_00268e8c,fVar13);
        local_30 = &local_60;
      }
      fVar11 = local_30[1];
      fVar12 = local_30[2];
      *(float *)(param_1 + 0x470) = *local_30;
      *(float *)(param_1 + 0x474) = fVar11;
      *(float *)(param_1 + 0x478) = fVar12;
    }
    if (bVar3 || bVar4) {
      if (bVar3 && bVar4) {
        local_40 = pfVar10[5];
        local_3c = pfVar10[6];
        local_38 = pfVar10[7];
        pfVar10 = pfVar10 + 5;
      }
      else {
        func_00115D70(&local_40,DAT_00268e88,fVar13);
      }
      *pfVar9 = local_40;
      *(float *)(param_1 + 0x48c) = local_3c;
      *(float *)(param_1 + 0x490) = local_38;
      if (bVar3 && bVar4) {
        local_60 = *pfVar10;
        fStack_5c = pfVar10[1];
        fStack_58 = pfVar10[2];
      }
      else {
        func_00115D70(&local_60,DAT_00268e88,fVar13);
      }
    }
    else {
      fVar13 = DAT_00268e84;
      func_00115D70(&local_60,DAT_00268e88,DAT_00268e84);
      *pfVar9 = local_60;
      *(float *)(param_1 + 0x48c) = fStack_5c;
      *(float *)(param_1 + 0x490) = fStack_58;
      func_00115D70(&local_60,DAT_00268e88,fVar13);
    }
    *(float *)(param_1 + 0x4a0) = local_60;
    *(float *)(param_1 + 0x4a4) = fStack_5c;
    *(float *)(param_1 + 0x4a8) = fStack_58;
  }
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
          *(int *)(param_1 + 0xbd8) * 0x30;
  local_6c = *(float *)(iVar6 + 0xc);
  local_68 = *(undefined4 *)(iVar6 + 0x1c);
  local_64 = *(undefined4 *)(iVar6 + 0x2c);
  func_00115C70(&local_6c,&local_6c,(float *)(param_1 + 0x3d0));
  local_48 = DAT_00268e94;
  *(float *)(param_1 + 0x44c) = local_6c;
  *(undefined4 *)(param_1 + 0x450) = local_68;
  *(undefined4 *)(param_1 + 0x454) = local_64;
  *(float *)(param_1 + 0x464) = local_6c;
  *(undefined4 *)(param_1 + 0x468) = local_68;
  *(undefined4 *)(param_1 + 0x46c) = local_64;
  local_44 = &DAT_00268e90;
  uVar7 = func_00564A78(*(int *)(param_1 + 0x40c),&local_48);
  iVar6 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) + uVar7 * 0x30;
  local_6c = *(float *)(iVar6 + 0xc);
  local_68 = *(undefined4 *)(iVar6 + 0x1c);
  local_64 = *(undefined4 *)(iVar6 + 0x2c);
  func_00115C70(&local_6c,&local_6c,(float *)(param_1 + 0x3d0));
  *(float *)(param_1 + 0x47c) = local_6c;
  *(undefined4 *)(param_1 + 0x480) = local_68;
  *(undefined4 *)(param_1 + 0x484) = local_64;
  *(float *)(param_1 + 0x494) = local_6c;
  *(undefined4 *)(param_1 + 0x498) = local_68;
  *(undefined4 *)(param_1 + 0x49c) = local_64;
  return;
}

