#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00542F3C(void);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern float DAT_003ba2f8;
extern float DAT_003ba2fc;
extern float DAT_003ba300;
extern float DAT_003ba304;
extern float DAT_003ba308;

// USA 003BA244 <- EU 003BA220 (Ghidra, non-matching)
// GLOBAL DAT_003ba2f8 float
// GLOBAL DAT_003ba2fc float
// GLOBAL DAT_003ba300 float
// GLOBAL DAT_003ba304 float
// GLOBAL DAT_003ba308 float

void func_003BA244(int param_1)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar1 = func_00542F3C();
  fVar7 = DAT_003ba2f8;
  if ((bVar1) || ('\0' < *(char *)(*(int *)(*(int *)(param_1 + 0x48) + 0x8bc) + 9))) {
    fVar8 = DAT_003ba2fc;
    puVar2 = (uint *)func_0058A7D4();
    fVar6 = DAT_003ba300;
    uVar3 = func_00111A64(puVar2);
    fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x50) = fVar5 * fVar8 * fVar6 + DAT_003ba304;
    iVar4 = func_00543170(*(int *)(param_1 + 0x48));
    if (iVar4 == 0) {
      return;
    }
  }
  else {
    fVar8 = DAT_003ba2fc;
    puVar2 = (uint *)func_0058A7D4();
    fVar6 = DAT_003ba308;
    uVar3 = func_00111A64(puVar2);
    fVar5 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x50) = fVar5 * fVar8 * fVar6 + fVar6;
    iVar4 = func_00543170(*(int *)(param_1 + 0x48));
    if (iVar4 == 0) {
      return;
    }
  }
  *(float *)(param_1 + 0x50) = *(float *)(param_1 + 0x50) * fVar7;
  return;
}

