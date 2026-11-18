#include "ghidra_types.h"

extern int func_00172018(int param_1,undefined4 param_2);
extern float DAT_0017172c;
extern uint DAT_00171730;
extern float DAT_00171734;
extern int DAT_00171738;

// USA 00171670 <- EU 00171670 (Ghidra, non-matching)
// GLOBAL DAT_0017172c float
// GLOBAL DAT_00171730 uint
// GLOBAL DAT_00171734 float
// GLOBAL DAT_00171738 int

undefined4 func_00171670(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  float fVar5;
  
  if (*(char *)(param_1 + 0x2f4) == '\x03') {
    uVar1 = *(uint *)(param_1 + 0x2c8);
    fVar3 = (float)VectorUnsignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)(short)(int)(fVar3 * DAT_0017172c);
    fVar3 = (float)VectorUnsignedToFloat
                             ((uVar1 + (uint)((ulonglong)uVar1 * (ulonglong)DAT_00171730 >> 0x25) *
                                       -0x3c) * 100,(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_0017172c;
    iVar4 = (int)fVar3;
    fVar5 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    if ((fVar5 != fVar3) && (DAT_00171734 <= fVar3)) {
      iVar4 = iVar4 + 1;
    }
    if ((999 < iVar2) || ((DAT_00171738 <= iVar2 && (0x62 < (short)iVar4)))) {
      func_00172018(param_1,1);
      return 0;
    }
  }
  return 1;
}

