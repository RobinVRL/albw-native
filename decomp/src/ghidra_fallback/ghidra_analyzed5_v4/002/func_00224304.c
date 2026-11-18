#include "ghidra_types.h"

extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_002244a0;
extern float DAT_002244a4;
extern int DAT_002244a8;
extern float DAT_002244ac;
extern int DAT_002244b0;
extern int DAT_002244b4;
extern float DAT_002244b8;
extern float DAT_002244bc;
extern int DAT_002244c0;

// USA 00224304 <- EU 00224304 (Ghidra, non-matching)
// GLOBAL DAT_002244a0 float
// GLOBAL DAT_002244a4 float
// GLOBAL DAT_002244a8 int
// GLOBAL DAT_002244ac float
// GLOBAL DAT_002244b0 int
// GLOBAL DAT_002244b4 int
// GLOBAL DAT_002244b8 float
// GLOBAL DAT_002244bc float
// GLOBAL DAT_002244c0 int

void func_00224304(int param_1,float fparam_0,float fparam_1)

{
  float fVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  int iVar6;
  float fVar7;
  
  fVar7 = DAT_002244a4;
  fVar1 = DAT_002244a0;
  if (*(short *)(param_1 + 0x742) == 0) {
    uVar4 = *(uint *)(param_1 + 0x720);
    if (*(uint *)(param_1 + 0x71c) < uVar4) {
      uVar2 = *(uint *)(param_1 + 0x71c) + 1;
      if (uVar4 == 0 || uVar2 == 0) {
        fparam_1 = DAT_002244a0;
      }
      *(uint *)(param_1 + 0x71c) = uVar2;
      if ((uVar4 != 0 && uVar2 != 0) && (fparam_1 = fVar7, uVar2 < uVar4)) {
        fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
        fparam_1 = fVar5 * *(float *)(param_1 + 0x724);
      }
      fVar5 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
      pfVar3 = (float *)(param_1 + 0x72c);
      if ((int)ALBW_AS_U32(fparam_1) < DAT_002244a8) {
        iVar6 = (int)((DAT_002244ac - fparam_1) * fVar5);
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        *pfVar3 = *pfVar3 + (fVar7 - *pfVar3) * (fVar7 / fVar5);
      }
      else if (DAT_002244b0 < (int)ALBW_AS_U32(fparam_1)) {
        iVar6 = (int)((fVar7 - fparam_1) * fVar5);
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        fVar5 = (float)VectorSignedToFloat(iVar6,(byte)(in_fpscr >> 0x15) & 3);
        *pfVar3 = *pfVar3 + (fVar1 - *pfVar3) * (fVar7 / fVar5);
      }
      else {
        *(float *)(param_1 + 0x72c) = fVar7;
      }
      uVar4 = *(uint *)(param_1 + 0x728);
      pfVar3 = (float *)(DAT_002244b4 + (uVar4 >> 0x18) * 0x10);
      fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
      iVar6 = uVar4 + DAT_002244c0;
      fVar7 = (*pfVar3 + pfVar3[1] * fVar7 * DAT_002244b8) * DAT_002244bc *
              *(float *)(param_1 + 0x72c);
      *(float *)(param_1 + 0x738) = fVar7;
      *(float *)(param_1 + 0x730) = fVar7;
      *(float *)(param_1 + 0x734) = fVar1;
      *(int *)(param_1 + 0x728) = iVar6;
      return;
    }
    func_0065E774((undefined4 *)(param_1 + 0x468),4);
  }
  else {
    *(short *)(param_1 + 0x742) = *(short *)(param_1 + 0x742) + -1;
  }
  return;
}

