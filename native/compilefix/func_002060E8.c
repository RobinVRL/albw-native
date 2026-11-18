/* compilefix: func_002060E8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002060E8.c): 1 inlined atan2Idx copies replaced by
 * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */
int albw_atan2_inline(float a, float b);
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_004905E0(float fparam_0);
extern void func_0051D0B0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_00520FC0(void);
extern int func_00521018(int param_1);
extern int func_0058A8F0(int param_1);
extern int func_0065D4EC(undefined4 *param_1,undefined1 param_2);
extern float DAT_00206398;
extern float DAT_0020639c;
extern float DAT_002063a0;

// USA 002060E8 <- EU 002060E8 (Ghidra, non-matching)
// GLOBAL DAT_00206398 float
// GLOBAL DAT_0020639c float
// GLOBAL DAT_002063a0 float

undefined4 func_002060E8(int param_1)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_48 (*(float *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define local_3c ((float *)(albw_frame + 0x24))
  #define local_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(float *)(albw_frame + 0x3c))
  #define local_20 (*(float *)(albw_frame + 0x40))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x48))
  bVar3 = func_00521018(param_1);
  if (bVar3) {
    func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x3dc),DAT_00206398);
  }
  pfVar4 = (float *)func_00520FC0();
  pfVar6 = (float *)(param_1 + 0x3d0);
  func_00115C70(local_3c,pfVar4,pfVar6);
  fVar9 = DAT_0020639c;
  uVar7 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
  iVar5 = albw_atan2_inline(local_34,local_3c[0]);   /* inlined atan2Idx (atan2_inline_fix) */
  pfVar4 = *(float **)(param_1 + 0x930);
  if (pfVar4 != (float *)0x0) {
    pfVar6 = *(float **)(param_1 + 0x92c);
  }
  fVar8 = fVar9;
  if ((pfVar4 != (float *)0x0 && pfVar6 != (float *)0x0) && (fVar8 = DAT_002063a0, pfVar6 < pfVar4))
  {
    fVar8 = (float)VectorUnsignedToFloat(pfVar6,(byte)(uVar7 >> 0x15) & 3);
    fVar8 = fVar8 * *(float *)(param_1 + 0x934);
  }
  fVar10 = DAT_002063a0;
  func_0051D0B0((undefined4 *)(param_1 + 1000),*(undefined4 *)(param_1 + 0x938),iVar5,fVar8);
  if (*(uint *)(param_1 + 0x920) < *(uint *)(param_1 + 0x924)) {
    iVar5 = *(uint *)(param_1 + 0x924) - *(uint *)(param_1 + 0x920);
    if (iVar5 < 2) {
      iVar5 = 1;
    }
    local_30 = *(float *)(param_1 + 0x93c);
    uStack_2c = *(undefined4 *)(param_1 + 0x940);
    uStack_28 = *(undefined4 *)(param_1 + 0x944);
    pfVar6 = (float *)(param_1 + 0x3dc);
    fVar9 = (float)VectorSignedToFloat(iVar5,(byte)(uVar7 >> 0x15) & 3);
    fVar10 = fVar10 / fVar9;
    func_00115C70(&local_20,&local_30,pfVar6);
    local_48 = local_20;
    uStack_44 = uStack_1c;
    uStack_40 = uStack_18;
    func_00115D70(&local_24,&local_48,fVar10);
    local_54 = local_24;
    fStack_50 = local_20;
    uStack_4c = uStack_1c;
    func_00115C54(pfVar6,pfVar6,&local_54);
  }
  else {
    *(float *)(param_1 + 0x3dc) = fVar9;
    *(float *)(param_1 + 0x3e0) = fVar9;
    *(float *)(param_1 + 0x3e4) = fVar9;
  }
  iVar5 = func_0058A8F0(param_1);
  if (iVar5 == 0) {
    if (*(uint *)(param_1 + 0x920) < *(uint *)(param_1 + 0x924)) {
      *(uint *)(param_1 + 0x920) = *(uint *)(param_1 + 0x920) + 1;
    }
    if (*(uint *)(param_1 + 0x92c) < *(uint *)(param_1 + 0x930)) {
      *(uint *)(param_1 + 0x92c) = *(uint *)(param_1 + 0x92c) + 1;
    }
    return 0;
  }
  return func_0065D4EC((undefined4 *)(param_1 + 0x8bc),5);
}

