#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_00520FC0(void);
extern int func_0058E2B8(int *param_1);
extern float DAT_002f9250;
extern int DAT_002f9254;
extern float DAT_002f9258;
extern uint *DAT_002f925c;
extern int DAT_002f9260;
extern int DAT_002f9264;

// USA 002F9100 <- EU 002F90DC (Ghidra, non-matching)
// GLOBAL DAT_002f9250 float
// GLOBAL DAT_002f9254 int
// GLOBAL DAT_002f9258 float
// GLOBAL DAT_002f925c uint *
// GLOBAL DAT_002f9260 int
// GLOBAL DAT_002f9264 int

int func_002F9100(int param_1)

{
  float *pfVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((int *)(albw_frame + 0xc))
  if (*(short *)(param_1 + 0x32) == 0) {
    *(undefined1 *)(param_1 + 0x908) = 0;
    pfVar1 = (float *)func_00520FC0();
    func_00115C70(&local_30,pfVar1,(float *)(param_1 + 0x3d0));
    if (local_2c <= DAT_002f9250) {
      local_2c = -local_2c;
    }
    if ((DAT_002f9254 <= (int)ALBW_AS_U32(local_2c)) ||
       (fVar5 = *(float *)(param_1 + 0x8e8) + DAT_002f9258,
       fVar7 = *(float *)(param_1 + 0x10) - pfVar1[2], fVar6 = *(float *)(param_1 + 8) - *pfVar1,
       fVar5 * fVar5 <= fVar6 * fVar6 + fVar7 * fVar7)) {
      return 0;
    }
    fVar5 = local_30 * local_30 + local_28 * local_28;
    if (*(float *)(param_1 + 0x8f8) * *(float *)(param_1 + 0x8f8) <= fVar5) {
      iVar2 = *(int *)(param_1 + 1000);
      iVar4 = *(int *)(param_1 + 0x8cc);
      local_24[0] = func_004904CC(local_30,local_28);
      local_24[0] = (iVar2 + iVar4) - local_24[0];
      uVar3 = func_0058E2B8(local_24);
      if (((uVar3 <= *DAT_002f925c) && ((int)ALBW_AS_U32(fVar5) < DAT_002f9260)) &&
         (fVar5 = *pfVar1 - *(float *)(param_1 + 8), fVar6 = pfVar1[2] - *(float *)(param_1 + 0x10),
         fVar5 * fVar5 + fVar6 * fVar6 < *(float *)(param_1 + 0x8ec))) {
        *(undefined1 *)(param_1 + 0x908) = 1;
      }
      return (int)*(char *)(DAT_002f9264 + param_1);
    }
  }
  return 1;
}

