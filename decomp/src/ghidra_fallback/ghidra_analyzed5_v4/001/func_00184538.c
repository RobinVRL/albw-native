#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_00520FC0(void);
extern float DAT_001846a0;
extern int DAT_001846a4;
extern float DAT_001846a8;
extern float DAT_001846ac;

// USA 00184538 <- EU 00184538 (Ghidra, non-matching)
// GLOBAL DAT_001846a0 float
// GLOBAL DAT_001846a4 int
// GLOBAL DAT_001846a8 float
// GLOBAL DAT_001846ac float

undefined4 func_00184538(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_1c (*(float *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  pfVar1 = (float *)func_00520FC0();
  fVar5 = pfVar1[1] - *(float *)(param_1 + 0x3d4);
  if (((uint)ALBW_AS_U32(DAT_001846a0) < (uint)ALBW_AS_U32(fVar5)) || (0x3e800000 < (int)ALBW_AS_U32(fVar5))) {
    return 0;
  }
  fVar5 = *(float *)(param_1 + 0x3d0) - *pfVar1;
  fVar6 = *(float *)(param_1 + 0x3d8) - pfVar1[2];
  if (DAT_001846a4 <= (int)ALBW_AS_U32((fVar5 * fVar5 + fVar6 * fVar6))) {
    iVar2 = *(int *)(param_1 + 1000);
    iVar3 = *(int *)(param_1 + 0x820);
    iVar4 = *(int *)(param_1 + 0x824);
    local_30 = *(float *)(param_1 + 0x3d0);
    uStack_2c = *(undefined4 *)(param_1 + 0x3d4);
    local_28 = *(float *)(param_1 + 0x3d8);
    func_00115C70(&local_18,pfVar1,&local_30);
    local_24 = local_18;
    uStack_20 = uStack_14;
    fStack_1c = local_10;
    func_004D7F70(&local_24,-(iVar2 + iVar3 + iVar4));
    func_00115C54(&local_18,&local_30,&local_24);
    local_10 = local_10 - local_28;
    fVar6 = local_10 / *(float *)(param_1 + 0x9cc);
    fVar5 = DAT_001846a8;
    if ((DAT_001846a8 <= fVar6) && (fVar5 = fVar6, 0x3f800000 < (int)ALBW_AS_U32(fVar6))) {
      fVar5 = DAT_001846ac;
    }
    if (local_18 - local_30 < -(fVar5 + DAT_001846ac)) {
      return 0;
    }
    if (fVar5 + DAT_001846ac < local_18 - local_30) {
      return 0;
    }
    if (local_10 < DAT_001846a8 || *(float *)(param_1 + 0x9cc) < local_10) {
      return 0;
    }
  }
  return 1;
}

