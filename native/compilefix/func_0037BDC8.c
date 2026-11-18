/* compilefix: func_0037BDC8, the converted stage-2 text (build/decomp/ghidra_fallback/ghidra_analyzed5_v4/003/func_0037BDC8.c): 1 inlined atan2Idx copies replaced by
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
extern float DAT_0037c03c;
extern float DAT_0037c040;
extern float DAT_0037c044;

// USA 0037BDC8 <- EU 0037BDA4 (Ghidra, non-matching)
// GLOBAL DAT_0037c03c float
// GLOBAL DAT_0037c040 float
// GLOBAL DAT_0037c044 float

undefined4 func_0037BDC8(int *param_1)

{
  byte bVar1;
  bool bVar2;
  float *pfVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_30 (*(float *)(albw_frame + 0x20))
  #define iStack_2c (*(int *)(albw_frame + 0x24))
  #define iStack_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  bVar2 = func_00521018(*param_1);
  if (bVar2) {
    func_00115D70((float *)(*param_1 + 0x3dc),(float *)(*param_1 + 0x3dc),DAT_0037c03c);
  }
  fVar9 = DAT_0037c040;
  fVar10 = DAT_0037c044;
  if ((char)param_1[0xb] != '\0') {
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_50,pfVar3,(float *)(*param_1 + 0x3d0));
    uVar4 = in_fpscr & 0xfffffff;   /* rounding-mode bits, still read below */
    uVar4 = albw_atan2_inline(local_48,local_50);   /* inlined atan2Idx (atan2_inline_fix) */
    uVar7 = param_1[5];
    uVar5 = uVar4;
    if (uVar7 != 0) {
      uVar5 = param_1[4];
    }
    fVar8 = fVar9;
    if ((uVar7 != 0 && uVar5 != 0) && (fVar8 = fVar10, uVar5 < uVar7)) {
      fVar8 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = fVar8 * ALBW_AS_F32(param_1[6]);
    }
    func_0051D0B0((undefined4 *)(*param_1 + 1000),param_1[7],uVar4,fVar8);
  }
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    iVar6 = *param_1;
    *(float *)(iVar6 + 0x3dc) = fVar9;
    *(float *)(iVar6 + 0x3e0) = fVar9;
    *(float *)(iVar6 + 0x3e4) = fVar9;
    return 1;
  }
  iVar6 = param_1[2] - param_1[1];
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  local_30 = ALBW_AS_F32(param_1[8]);
  iStack_2c = param_1[9];
  iStack_28 = param_1[10];
  fVar9 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
  pfVar3 = (float *)(*param_1 + 0x3dc);
  fVar10 = fVar10 / fVar9;
  func_00115C70(&local_24,&local_30,pfVar3);
  local_40 = local_24;
  uStack_3c = uStack_20;
  uStack_38 = uStack_1c;
  func_00115D70(&local_24,&local_40,fVar10);
  local_4c = local_24;
  local_48 = ALBW_AS_F32(uStack_20);
  uStack_44 = uStack_1c;
  func_00115C54(pfVar3,pfVar3,&local_4c);
  if ((uint)param_1[1] < (uint)param_1[2]) {
    param_1[1] = param_1[1] + 1;
  }
  if ((uint)param_1[4] < (uint)param_1[5]) {
    param_1[4] = param_1[4] + 1;
  }
  return 0;
}

