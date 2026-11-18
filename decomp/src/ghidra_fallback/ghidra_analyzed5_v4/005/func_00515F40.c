#include "ghidra_types.h"

extern int func_0014F4EC(int param_1);
extern int func_00516174(int param_1);
extern int func_0066BA90(undefined4 *param_1,undefined1 param_2);
extern float DAT_005160cc;
extern float DAT_005160d0;
extern int DAT_005160d4;
extern float DAT_005160d8;
extern int DAT_005160dc;
extern float DAT_005160e0;
extern int DAT_005160e4;
extern float DAT_005160e8;
extern int *DAT_005160ec;

// USA 00515F40 <- EU 00515F18 (Ghidra, non-matching)
// GLOBAL DAT_005160cc float
// GLOBAL DAT_005160d0 float
// GLOBAL DAT_005160d4 int
// GLOBAL DAT_005160d8 float
// GLOBAL DAT_005160dc int
// GLOBAL DAT_005160e0 float
// GLOBAL DAT_005160e4 int
// GLOBAL DAT_005160e8 float
// GLOBAL DAT_005160ec int *

undefined4 func_00515F40(int param_1,undefined4 param_2,uint param_3,float fparam_0,float fparam_1)

{
  uint uVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  fVar6 = DAT_005160cc;
  uVar1 = *(uint *)(param_1 + 0x470);
  if (uVar1 != 0) {
    param_3 = *(uint *)(param_1 + 0x46c);
  }
  fVar3 = DAT_005160cc;
  if ((uVar1 != 0 && param_3 != 0) && (fVar3 = DAT_005160d0, param_3 < uVar1)) {
    fVar3 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * *(float *)(param_1 + 0x474);
  }
  fVar5 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  pfVar2 = (float *)(param_1 + 0x47c);
  if ((int)ALBW_AS_U32(fVar3) < DAT_005160d4) {
    iVar4 = (int)((DAT_005160d8 - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = *pfVar2 + (DAT_005160d0 - *pfVar2) * (DAT_005160d0 / fVar3);
  }
  else if (DAT_005160dc < (int)ALBW_AS_U32(fVar3)) {
    iVar4 = (int)((DAT_005160d0 - fVar3) * fVar5);
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    fVar3 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar2 = *pfVar2 + (DAT_005160cc - *pfVar2) * (DAT_005160d0 / fVar3);
  }
  else {
    *(float *)(param_1 + 0x47c) = DAT_005160d0;
  }
  uVar1 = *(uint *)(param_1 + 0x478);
  pfVar2 = (float *)(DAT_005160e4 + (uVar1 >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (*pfVar2 + pfVar2[1] * fVar3 * DAT_005160e0) * DAT_005160e8 * *(float *)(param_1 + 0x47c);
  *(float *)(param_1 + 0x468) = fVar3;
  *(float *)(param_1 + 0x460) = fVar3;
  *(uint *)(param_1 + 0x478) = uVar1 + *DAT_005160ec;
  if (*(uint *)(param_1 + 0x46c) < *(uint *)(param_1 + 0x470)) {
    *(uint *)(param_1 + 0x46c) = *(uint *)(param_1 + 0x46c) + 1;
  }
  else {
    func_0014F4EC(*(int *)(param_1 + 0x40c));
    *(float *)(param_1 + 0x460) = fVar6;
    *(float *)(param_1 + 0x464) = fVar6;
    *(float *)(param_1 + 0x468) = fVar6;
    func_0066BA90((undefined4 *)(param_1 + 0x414),0);
  }
  return func_00516174(param_1);
}

