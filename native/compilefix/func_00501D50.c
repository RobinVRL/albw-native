/* compilefix: func_00501D50, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/005/func_00501D50.c): 1 inlined atan2Idx copies replaced by
 * albw_atan2_inline (tools/atan2_inline_fix.py, BOOT_LOG 160d). */
int albw_atan2_inline(float a, float b);
#include "ghidra_types.h"

extern int func_004905E0(float fparam_0);
extern int func_004F4A68();
extern int func_004FB220(int param_1,int param_2,int param_3);
extern float DAT_00501efc;
extern int DAT_00501f00;

// USA 00501D50 <- EU 00501D28 (Ghidra, non-matching)
// GLOBAL DAT_00501efc float
// GLOBAL DAT_00501f00 int

undefined4 func_00501D50(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  bool bVar5;
  uint in_fpscr;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar2 = func_004FB220(param_1,*(ushort *)(param_2 + 0x20) & 0x1f,
                        (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5);
  if (iVar2 == 0) {
    fVar7 = *(float *)(param_2 + 8);
    if (fVar7 <= DAT_00501efc) {
      fVar7 = -fVar7;
    }
    if ((int)ALBW_AS_U32(fVar7) < DAT_00501f00) {
      fVar8 = *(float *)(param_2 + 0xc);
      fVar7 = *(float *)(param_2 + 4);
      fVar9 = DAT_00501efc;
      uVar6 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
      uVar3 = albw_atan2_inline(fVar8,fVar7);   /* inlined atan2Idx (atan2_inline_fix) */
      fVar7 = (float)VectorSignedToFloat((int)(short)((short)((uint)(*(int *)(param_1 + 1000) +
                                                                    -0x80000000) >> 0x10) -
                                                     (short)(uVar3 >> 0x10)),
                                         (byte)(uVar6 >> 0x15) & 3);
      if (fVar7 <= fVar9) {
        fVar7 = -fVar7;
      }
      if ((int)fVar7 * 0x10000 < 0x60000000) {
        *(uint *)(param_1 + 0xa64) = *(int *)(param_1 + 0xa64) + (uVar3 >> 0x10);
        *(char *)(param_1 + 0xa68) = *(char *)(param_1 + 0xa68) + '\x01';
      }
    }
    uVar4 = func_004F4A68(param_1,param_2);
    return uVar4;
  }
  return 0;
}

