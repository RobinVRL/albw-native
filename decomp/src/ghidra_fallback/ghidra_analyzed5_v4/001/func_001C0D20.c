#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_004CEAF0(int param_1);
extern int func_0065B7AC(undefined4 *param_1,undefined1 param_2);
extern float DAT_001c0fbc;
extern float DAT_001c0fc0;
extern float DAT_001c0fc4;
extern uint *DAT_001c0fc8;
extern float DAT_001c0fcc;

// USA 001C0D20 <- EU 001C0D20 (Ghidra, non-matching)
// GLOBAL DAT_001c0fbc float
// GLOBAL DAT_001c0fc0 float
// GLOBAL DAT_001c0fc4 float
// GLOBAL DAT_001c0fc8 uint *
// GLOBAL DAT_001c0fcc float

undefined4 func_001C0D20(int param_1)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(float *)(albw_frame + 0x8))
  #define local_24 ((float *)(albw_frame + 0xc))
  fVar8 = DAT_001c0fc4;
  fVar6 = DAT_001c0fc0;
  fVar5 = DAT_001c0fbc;
  iVar1 = 0x5a - *(int *)(param_1 + 0x40c);
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = (int)(fVar3 * DAT_001c0fbc);
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  iVar2 = iVar1;
  if (iVar1 < 2) {
    iVar2 = 1;
  }
  fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = *(float *)(param_1 + 0x440);
  *(float *)(param_1 + 0x440) = fVar3 + (DAT_001c0fc0 - fVar3) * (DAT_001c0fc4 / fVar7);
  fVar3 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = *(float *)(param_1 + 0x444);
  *(float *)(param_1 + 0x444) = fVar7 + (fVar6 - fVar7) * (fVar8 / fVar3);
  fVar3 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  iVar1 = (int)(fVar3 * fVar5);
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  fVar5 = (float)VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = *(float *)(param_1 + 0x448);
  *(float *)(param_1 + 0x448) = fVar3 + (fVar6 - fVar3) * (fVar8 / fVar5);
  if (*(int *)(param_1 + 0x40c) == 0x5a) {
    func_0065B7AC((undefined4 *)(param_1 + 0x40c),3);
  }
  if (*(int *)(param_1 + 0x44c) == 0) {
    func_00115154(&local_28,local_24,*DAT_001c0fc8);
    fVar5 = DAT_001c0fcc;
    iVar1 = *(int *)(param_1 + 0x430);
    local_28 = -local_28;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    fVar13 = *(float *)(param_1 + 0x45c);
    fVar15 = *(float *)(param_1 + 0x468);
    fVar6 = *(float *)(param_1 + 0x450) * fVar5;
    fVar14 = fVar13 * fVar5;
    fVar16 = fVar15 * fVar5;
    fVar7 = *(float *)(param_1 + 0x454);
    fVar9 = *(float *)(param_1 + 0x460);
    fVar10 = *(float *)(param_1 + 0x46c);
    fVar3 = -local_28;
    fVar11 = *(float *)(param_1 + 0x458);
    fVar12 = *(float *)(param_1 + 0x464);
    fVar17 = *(float *)(param_1 + 0x470);
    *(float *)(iVar1 + 0x80) = *(float *)(param_1 + 0x450) * fVar8 + fVar7 * fVar5 + fVar11 * fVar5;
    *(float *)(iVar1 + 0x84) = fVar6 + fVar7 * local_24[0] + fVar11 * fVar3;
    *(float *)(iVar1 + 0x88) = fVar6 + fVar7 * local_28 + fVar11 * local_24[0];
    *(float *)(iVar1 + 0x90) = fVar13 * fVar8 + fVar9 * fVar5 + fVar12 * fVar5;
    *(float *)(iVar1 + 0x94) = fVar14 + fVar9 * local_24[0] + fVar12 * fVar3;
    *(float *)(iVar1 + 0x98) = fVar14 + fVar9 * local_28 + fVar12 * local_24[0];
    *(float *)(iVar1 + 0xa0) = fVar15 * fVar8 + fVar10 * fVar5 + fVar17 * fVar5;
    *(float *)(iVar1 + 0xa4) = fVar16 + fVar10 * local_24[0] + fVar17 * fVar3;
    *(float *)(iVar1 + 0xa8) = fVar16 + fVar10 * local_28 + fVar17 * local_24[0];
    iVar1 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x8c) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar1 + 0x9c) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar1 + 0xac) = *(undefined4 *)(param_1 + 0x3d8);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x430);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_001151F8((undefined4 *)(iVar1 + 0x80),(undefined4 *)(param_1 + 0x450),
                  (undefined4 *)(param_1 + 0x3d0));
  }
  iVar1 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  fVar6 = *(float *)(param_1 + 0x18);
  fVar5 = *(float *)(param_1 + 0x1c);
  fVar8 = *(float *)(param_1 + 0x444);
  fVar3 = *(float *)(param_1 + 0x448);
  *(float *)(iVar1 + 0x74) = *(float *)(param_1 + 0x14) * *(float *)(param_1 + 0x440);
  *(float *)(iVar1 + 0x78) = fVar6 * fVar8;
  *(float *)(iVar1 + 0x7c) = fVar5 * fVar3;
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

