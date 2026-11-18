#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern uint DAT_0058c11c;
extern float DAT_0058c120;
extern int DAT_0058c124;
extern float DAT_0058c128;
extern int DAT_0058c12c;
extern float DAT_0058c130;

// USA 0058C060 <- EU 0058C038 (Ghidra, non-matching)
// GLOBAL DAT_0058c11c uint
// GLOBAL DAT_0058c120 float
// GLOBAL DAT_0058c124 int
// GLOBAL DAT_0058c128 float
// GLOBAL DAT_0058c12c int
// GLOBAL DAT_0058c130 float

undefined4 func_0058C060(int param_1,uint param_2)

{
  uint uVar1;
  float *pfVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  undefined8 uVar7;
  
  uVar7 = func_00114608(DAT_0058c11c,param_2);
  iVar3 = *(int *)(param_1 + 1000);
  uVar1 = *(uint *)(param_1 + 0x43c);
  if ((uint)((int)uVar7 + iVar3) >> 0x1d == 0) {
    pfVar2 = (float *)(DAT_0058c124 + (uVar1 >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat(uVar1 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    uVar1 = *(int *)(param_1 + 0x438) + 0x20000000U >> 0x1e;
    fVar6 = *pfVar2 + pfVar2[1] * fVar6 * DAT_0058c120;
    if (*(char *)(param_1 + 0x534) == '\0') {
      if (uVar1 != 0) {
        return 0;
      }
      if (DAT_0058c128 <= fVar6) {
        return 0;
      }
      if ((uint)ALBW_AS_U32(DAT_0058c130) <= (uint)ALBW_AS_U32(fVar6)) {
        return 0;
      }
    }
    else if (((uVar1 != 0) || (fVar6 <= DAT_0058c128)) || (DAT_0058c12c <= (int)ALBW_AS_U32(fVar6))) {
      return 0;
    }
  }
  else {
    bVar5 = iVar3 - 0x5b05b0U <= uVar1;
    bVar4 = uVar1 == iVar3 - 0x5b05b0U;
    if (bVar5 && !bVar4) {
      bVar5 = uVar1 <= iVar3 + 0x5b05b0U;
      bVar4 = iVar3 + 0x5b05b0U == uVar1;
    }
    if (!bVar5 || bVar4) {
      return 0;
    }
  }
  return 1;
}

