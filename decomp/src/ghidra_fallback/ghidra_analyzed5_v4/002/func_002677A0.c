#include "ghidra_types.h"

extern int func_0035E240(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern float DAT_002678e0;
extern float DAT_002678e4;
extern float DAT_002678e8;
extern int DAT_002678ec;
extern float DAT_002678f0;

// USA 002677A0 <- EU 002677C8 (Ghidra, non-matching)
// GLOBAL DAT_002678e0 float
// GLOBAL DAT_002678e4 float
// GLOBAL DAT_002678e8 float
// GLOBAL DAT_002678ec int
// GLOBAL DAT_002678f0 float

void func_002677A0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(int *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  local_30 = *(undefined4 *)(param_1 + 0x3d0);
  uStack_28 = *(undefined4 *)(param_1 + 0x3d8);
  local_2c = *(float *)(param_1 + 0x3d4) + DAT_002678e0;
  local_24 = *(int *)(param_1 + 1000);
  local_1c = *(undefined4 *)(param_1 + 0x2cc);
  func_0035E240(&local_30,&local_24,&local_1c);
  if (*(int *)(param_1 + 0xb28) < 1) {
    iVar1 = 5;
  }
  else {
    iVar1 = 3;
  }
  iVar2 = 0;
  iVar1 = (iVar1 + -1) / 2;
  fVar7 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat(*(undefined4 *)(DAT_002678ec + 0x54),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = fVar4 * (DAT_002678e4 / fVar7) * DAT_002678e8;
  iVar5 = (int)fVar4;
  fVar6 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = fVar6;
  if (fVar6 != fVar4) {
    fVar7 = DAT_002678f0;
  }
  if (fVar4 <= fVar7 && (fVar6 != fVar4 && DAT_002678f0 != fVar4)) {
    iVar5 = iVar5 + -1;
  }
  if (0 < iVar1) {
    do {
      iVar3 = iVar5 * (iVar2 + 1);
      local_20 = local_24 + iVar3;
      func_0035E240(&local_30,&local_20,&local_1c);
      local_20 = local_24 - iVar3;
      func_0035E240(&local_30,&local_20,&local_1c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  return;
}

