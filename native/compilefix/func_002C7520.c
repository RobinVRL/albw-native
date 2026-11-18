/* compilefix: func_002C7520, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/002/func_002C7520.c): 1 inlined atan2Idx copies replaced by
 * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */
int albw_atan2_inline(float a, float b);
#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern float DAT_002c768c;
extern int DAT_002c7690;

// USA 002C7520 <- EU 002C74FC (Ghidra, non-matching)
// GLOBAL DAT_002c768c float
// GLOBAL DAT_002c7690 int

undefined4 func_002C7520(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  short sVar4;
  int iVar3;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar7 = *(float *)(param_2 + 8);
  if (fVar7 <= DAT_002c768c) {
    fVar7 = -fVar7;
  }
  if ((int)ALBW_AS_U32(fVar7) < DAT_002c7690) {
    fVar8 = *(float *)(param_2 + 0xc);
    fVar7 = *(float *)(param_2 + 4);
    fVar9 = DAT_002c768c;
    uVar6 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
    sVar4 = (short)((uint)albw_atan2_inline(fVar8,fVar7) >> 0x10);   /* inlined atan2Idx (atan2_inline_fix) */
    iVar3 = *(int *)(param_1 + 1000);
    if (*(char *)(param_1 + 0x468) == '\0') {
      iVar3 = iVar3 + -0x80000000;
    }
    fVar7 = (float)VectorSignedToFloat((int)(short)((short)((uint)iVar3 >> 0x10) - sVar4),
                                       (byte)(uVar6 >> 0x15) & 3);
    if (fVar7 <= fVar9) {
      fVar7 = -fVar7;
    }
    if ((int)fVar7 * 0x10000 < 0x20000000) {
      *(undefined1 *)(param_1 + 0x469) = 1;
    }
  }
  return 0;
}

