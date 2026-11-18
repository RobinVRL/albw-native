#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0058A7D4(void);
extern float DAT_001b4848;
extern uint DAT_001b484c;

// USA 001B47B0 <- EU 001B47B0 (Ghidra, non-matching)
// GLOBAL DAT_001b4848 float
// GLOBAL DAT_001b484c uint

int func_001B47B0(int param_1)

{
  short *psVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  
  iVar5 = 0;
  iVar6 = -1;
  uVar10 = (ulonglong)DAT_001b484c;
  uVar4 = 0;
  fVar9 = DAT_001b4848;
  do {
    psVar1 = (short *)(param_1 + 0x958);
    if (uVar4 < 4) {
      psVar1 = (short *)(param_1 + 0x958) + uVar4;
    }
    if (*psVar1 == 0) {
      iVar5 = iVar5 + 1;
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      fVar7 = fVar9 / fVar7;
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      fVar8 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
      in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar7 <= fVar8 * ALBW_AS_F32(uVar10) * fVar9) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        iVar6 = (int)(char)uVar4;
      }
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 4);
  return iVar6;
}

