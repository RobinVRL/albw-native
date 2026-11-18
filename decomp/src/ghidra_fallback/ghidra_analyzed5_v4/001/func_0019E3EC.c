#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_0065A1EC(undefined4 *param_1,undefined1 param_2);
extern float DAT_0019e4bc;
extern float DAT_0019e4c0;
extern int DAT_0019e4c4;
extern float DAT_0019e4c8;
extern int DAT_0019e4cc;
extern int DAT_0019e4d0;

// USA 0019E3EC <- EU 0019E3EC (Ghidra, non-matching)
// GLOBAL DAT_0019e4bc float
// GLOBAL DAT_0019e4c0 float
// GLOBAL DAT_0019e4c4 int
// GLOBAL DAT_0019e4c8 float
// GLOBAL DAT_0019e4cc int
// GLOBAL DAT_0019e4d0 int

void func_0019E3EC(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  
  iVar1 = DAT_0019e4c4;
  fVar4 = DAT_0019e4c0;
  fVar5 = DAT_0019e4bc;
  *(float *)(param_1 + 0x3dc) = DAT_0019e4bc;
  *(float *)(param_1 + 0x3e0) = fVar5;
  *(float *)(param_1 + 0x3e4) = fVar5;
  pfVar2 = (float *)(iVar1 + (*(uint *)(param_1 + 0x8e4) >> 0x18) * 0x10);
  fVar3 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x8e4) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3e0) = (*pfVar2 + pfVar2[1] * fVar3 * fVar4) * DAT_0019e4c8;
  pfVar2 = (float *)func_00520FC0();
  fVar4 = pfVar2[1] - *(float *)(param_1 + 0xc);
  if (fVar4 <= fVar5) {
    fVar4 = -fVar4;
  }
  if (((int)ALBW_AS_U32(fVar4) < DAT_0019e4cc) &&
     (fVar5 = *pfVar2 - *(float *)(param_1 + 0x3d0), fVar4 = pfVar2[2] - *(float *)(param_1 + 0x3d8)
     , (int)ALBW_AS_U32((fVar5 * fVar5 + fVar4 * fVar4)) <= DAT_0019e4d0)) {
    func_0065A1EC((undefined4 *)(param_1 + 0x8bc),1);
  }
  return;
}

