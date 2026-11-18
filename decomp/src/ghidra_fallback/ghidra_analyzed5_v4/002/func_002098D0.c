#include "ghidra_types.h"

extern int func_0036BE78();
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_00209994;
extern undefined4 DAT_00209998;
extern float *DAT_0020999c;
extern int DAT_002099a0;
extern float DAT_002099a4;

// USA 002098D0 <- EU 002098D0 (Ghidra, non-matching)
// GLOBAL DAT_00209994 undefined4
// GLOBAL DAT_00209998 undefined4
// GLOBAL DAT_0020999c float *
// GLOBAL DAT_002099a0 int
// GLOBAL DAT_002099a4 float

void func_002098D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  pfVar4 = DAT_0020999c;
  uVar1 = DAT_00209998;
  *(undefined4 *)(param_1 + 0x574) = DAT_00209994;
  *(undefined4 *)(param_1 + 0x3d4) = uVar1;
  fVar3 = DAT_002099a4;
  iVar2 = DAT_002099a0;
  fVar5 = *(float *)(param_1 + 0x3d0) + *pfVar4;
  *(float *)(param_1 + 0xb84) = fVar5;
  fVar6 = *(float *)(param_1 + 0xd34) + pfVar4[1];
  *(float *)(param_1 + 0xb88) = fVar6;
  fVar7 = *(float *)(param_1 + 0x3d8) + pfVar4[2];
  *(float *)(param_1 + 0xb8c) = fVar7;
  pfVar4 = (float *)(iVar2 + (*(uint *)(param_1 + 0xd1c) >> 0x18) * 0x10);
  fVar8 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0xd1c) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xd24) =
       fVar5 + (*pfVar4 + pfVar4[1] * fVar8 * fVar3) * *(float *)(param_1 + 0xd20);
  *(float *)(param_1 + 0xd28) = fVar6;
  *(float *)(param_1 + 0xd2c) = fVar7;
  func_0036BE78(param_1 + 0xa7c);
  if (100 < *(int *)(param_1 + 0x8bc)) {
    func_0065D630((undefined4 *)(param_1 + 0x8bc),5);
  }
  return;
}

