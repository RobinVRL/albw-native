#include "ghidra_types.h"

extern int func_00112EA0(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4);
extern undefined8 func_00114608(uint param_1,uint param_2);
extern float DAT_002c0a6c;
extern float DAT_002c0a70;
extern float DAT_002c0a74;
extern float DAT_002c0a78;
extern int DAT_002c0a7c;
extern int DAT_002c0a80;
extern int DAT_002c0a84;
extern float DAT_002c0a88;
extern int DAT_002c0a8c;

// USA 002C0938 <- EU 002C0914 (Ghidra, non-matching)
// GLOBAL DAT_002c0a6c float
// GLOBAL DAT_002c0a70 float
// GLOBAL DAT_002c0a74 float
// GLOBAL DAT_002c0a78 float
// GLOBAL DAT_002c0a7c int
// GLOBAL DAT_002c0a80 int
// GLOBAL DAT_002c0a84 int
// GLOBAL DAT_002c0a88 float
// GLOBAL DAT_002c0a8c int

void func_002C0938(int param_1,uint param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  
  fVar1 = DAT_002c0a70;
  if (*(int *)(param_1 + 0x4c) != 0) {
    fVar9 = *(float *)(param_1 + 0x2a00) + DAT_002c0a6c;
    *(float *)(param_1 + 0x2a00) = fVar9;
    uVar12 = func_00114608((uint)ALBW_AS_U32((fVar1 * fVar9 * DAT_002c0a74)),param_2);
    fVar1 = DAT_002c0a88;
    uVar2 = (uint)uVar12;
    iVar7 = 0;
    pfVar4 = (float *)(DAT_002c0a7c + (uVar2 >> 0x18) * 0x10);
    fVar9 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = *pfVar4 + pfVar4[1] * fVar9 * DAT_002c0a78;
    pfVar5 = (float *)(DAT_002c0a7c + (uVar2 + DAT_002c0a80 >> 0x18) * 0x10);
    fVar10 = (float)VectorUnsignedToFloat
                              (uVar2 + DAT_002c0a80 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    pfVar4 = (float *)(DAT_002c0a7c + (uVar2 + DAT_002c0a84 >> 0x18) * 0x10);
    fVar10 = *pfVar5 + pfVar5[1] * fVar10 * DAT_002c0a78;
    fVar11 = (float)VectorUnsignedToFloat
                              (uVar2 + DAT_002c0a84 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = *pfVar4 + pfVar4[1] * fVar11 * DAT_002c0a78;
    *(float *)(param_1 + 0x28dc) = fVar9;
    *(float *)(param_1 + 0x28e0) = fVar10;
    *(float *)(param_1 + 0x28e4) = fVar11;
    *(undefined4 *)(param_1 + 0x28e8) = *(undefined4 *)(param_1 + 0x2a04);
    *(float *)(param_1 + 0x28ec) = fVar9;
    *(float *)(param_1 + 0x28f0) = fVar10;
    *(float *)(param_1 + 0x28f4) = fVar11;
    *(float *)(param_1 + 0x28f8) = fVar1 - *(float *)(param_1 + 0x2a04);
    iVar3 = param_1 + *(int *)(DAT_002c0a8c + param_1) * 0x14;
    piVar6 = *(int **)(iVar3 + 0x24);
    piVar8 = piVar6 + *(int *)(iVar3 + 0x1c);
    if (piVar6 != piVar8) {
      do {
        func_00112EA0((undefined4 *)(*piVar6 + 0xe48),param_1 + 0x2784,4,
                      (undefined4 *)(param_1 + iVar7 * 0x10 + 0x28dc));
        piVar6 = piVar6 + 1;
        iVar7 = iVar7 + 1;
      } while (piVar6 != piVar8);
    }
  }
  return;
}

