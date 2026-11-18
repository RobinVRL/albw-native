/* compilefix: func_0052EB98, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/005/func_0052EB98.c): 1 inlined atan2Idx copies replaced by
 * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */
int albw_atan2_inline(float a, float b);
#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_0054C998(int param_1,int param_2);
extern int func_0058E2B8(int *param_1);
extern float DAT_0052ecf4;
extern float DAT_0052ecf8;
extern int DAT_0052ecfc;

// USA 0052EB98 <- EU 0052EB70 (Ghidra, non-matching)
// GLOBAL DAT_0052ecf4 float
// GLOBAL DAT_0052ecf8 float
// GLOBAL DAT_0052ecfc int

bool func_0052EB98(int param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define afStack_20 ((float *)(albw_frame + 0x0))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  iVar3 = *(int *)(param_1 + 0x10);
  func_00115C70(afStack_20,param_2,(float *)(iVar3 + 0x3d0));
  iVar3 = func_0054C998(*(int *)(iVar3 + 0x5fc),*(int *)(iVar3 + 1000));
  uVar6 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
  iVar4 = albw_atan2_inline(fStack_18,afStack_20[0]);   /* inlined atan2Idx (atan2_inline_fix) */
  afStack_20[0] = ALBW_AS_F32((iVar3 - iVar4));
  iVar3 = func_0058E2B8((int *)afStack_20);
  fVar7 = (float)VectorUnsignedToFloat(iVar3,(byte)(uVar6 >> 0x15) & 3);
  return (int)ALBW_AS_U32((fVar7 * DAT_0052ecf8)) < DAT_0052ecfc;
}

