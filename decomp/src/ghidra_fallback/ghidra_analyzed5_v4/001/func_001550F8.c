#include "ghidra_types.h"

extern int func_00520FC0(void);
extern int func_00657D18(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_001551b4;
extern float DAT_001551b8;
extern int DAT_001551bc;
extern float DAT_001551c0;
extern int DAT_001551c4;

// USA 001550F8 <- EU 001550FC (Ghidra, non-matching)
// GLOBAL DAT_001551b4 undefined4
// GLOBAL DAT_001551b8 float
// GLOBAL DAT_001551bc int
// GLOBAL DAT_001551c0 float
// GLOBAL DAT_001551c4 int

void func_001550F8(int param_1)

{
  undefined4 uVar1;
  float *pfVar2;
  undefined1 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  
  uVar1 = DAT_001551b4;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_001551b4;
  *(undefined4 *)(param_1 + 0x3e0) = uVar1;
  *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  pfVar2 = (float *)(DAT_001551bc + (*(uint *)(param_1 + 0x8fc) >> 0x18) * 0x10);
  fVar4 = (float)VectorUnsignedToFloat
                           (*(uint *)(param_1 + 0x8fc) & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x3e0) = (*pfVar2 + pfVar2[1] * fVar4 * DAT_001551b8) * DAT_001551c0;
  pfVar2 = (float *)func_00520FC0();
  fVar4 = *pfVar2 - *(float *)(param_1 + 0x3d0);
  fVar6 = pfVar2[1] - *(float *)(param_1 + 0x3d4);
  fVar5 = pfVar2[2] - *(float *)(param_1 + 0x3d8);
  if ((int)ALBW_AS_U32((fVar4 * fVar4 + fVar6 * fVar6 + fVar5 * fVar5)) <= DAT_001551c4) {
    if (*(char *)(param_1 + 0x8c0) == '\x02') {
      uVar3 = 4;
    }
    else {
      uVar3 = 3;
    }
    func_00657D18((undefined4 *)(param_1 + 0x8bc),uVar3);
  }
  return;
}

