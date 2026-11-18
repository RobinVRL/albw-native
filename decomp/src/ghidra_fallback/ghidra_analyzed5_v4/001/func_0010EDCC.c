#include "ghidra_types.h"

extern int func_0010A98C(uint param_1);
extern ushort *DAT_0010ee38;
extern uint DAT_0010ee3c;

// USA 0010EDCC <- EU 0010EDCC (Ghidra, non-matching)
// GLOBAL DAT_0010ee38 ushort *
// GLOBAL DAT_0010ee3c uint

uint * func_0010EDCC(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = *DAT_0010ee38 >> (uVar3 & 0xff);
    uVar2 = (uint)uVar1;
    if ((uVar1 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    if (0xf < (int)uVar3) {
      uVar3 = 0xffffffff;
      goto LAB_0010ee20;
    }
  } while (uVar3 < 0x10);
  if (uVar3 < 0x10) {
    uVar2 = (uint)*DAT_0010ee38 | 1 << (uVar3 & 0xff);
    *DAT_0010ee38 = (ushort)uVar2;
  }
LAB_0010ee20:
  if ((int)uVar3 < 0) {
    uVar2 = DAT_0010ee3c;
  }
  *param_1 = uVar3;
  if ((int)uVar3 < 0) {
    func_0010A98C(uVar2);
  }
  return param_1;
}

