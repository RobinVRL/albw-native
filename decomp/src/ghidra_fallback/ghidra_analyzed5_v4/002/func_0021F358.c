#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_0021f494;
extern float DAT_0021f498;
extern float DAT_0021f49c;
extern float DAT_0021f4a0;
extern float DAT_0021f4a4;

// USA 0021F358 <- EU 0021F358 (Ghidra, non-matching)
// GLOBAL DAT_0021f494 undefined4
// GLOBAL DAT_0021f498 float
// GLOBAL DAT_0021f49c float
// GLOBAL DAT_0021f4a0 float
// GLOBAL DAT_0021f4a4 float

void func_0021F358(int param_1)

{
  uint uVar1;
  float fVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define local_20 (*(float *)(albw_frame + 0x10))
  if (*(char *)(param_1 + 0x8e4) == '\0') {
    uVar7 = func_0058AB74(param_1);
    if ((int)uVar7 == 0x11) {
      func_004FC07C(param_1,0x10,0xc,0);
    }
    else {
      func_004FC07C(param_1,0x10,0,0);
    }
  }
  uVar6 = DAT_0021f494;
  if (*(char *)(param_1 + 0x8c5) != '\x17') {
    if (*(char *)(param_1 + 0x8e4) == '\0') {
      pfVar3 = (float *)func_00520FC0();
      func_00115C70(&local_28,pfVar3,(float *)(param_1 + 0x3d0));
      fVar2 = DAT_0021f49c;
      fVar4 = (local_28 * local_28 + local_24 * local_24 + local_20 * local_20) * DAT_0021f498;
      if (DAT_0021f49c < fVar4) {
        fVar4 = DAT_0021f49c;
      }
      uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0021f4a4 <= fVar4 * DAT_0021f4a0) << 0x1d;
      fVar4 = fVar4 * DAT_0021f4a0;
      if (!SUB41(uVar1 >> 0x1d,0)) {
        fVar4 = DAT_0021f4a4;
      }
      iVar5 = (int)fVar4;
      *(int *)(param_1 + 0xa6c) = iVar5;
      if (iVar5 == 0) {
        *(undefined4 *)(param_1 + 0xa70) = uVar6;
      }
      else {
        fVar4 = (float)VectorUnsignedToFloat(iVar5,(byte)(uVar1 >> 0x15) & 3);
        *(float *)(param_1 + 0xa70) = fVar2 / fVar4;
      }
      *(undefined4 *)(param_1 + 0xa68) = 0;
      return;
    }
    *(undefined4 *)(param_1 + 0xa6c) = 0;
    *(undefined4 *)(param_1 + 0xa70) = uVar6;
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  return;
}

