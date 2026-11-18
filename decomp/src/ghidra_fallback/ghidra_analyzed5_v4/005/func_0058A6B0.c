#include "ghidra_types.h"

extern float DAT_0058a718;

// USA 0058A6B0 <- EU 0058A688 (Ghidra, non-matching)
// GLOBAL DAT_0058a718 float

void func_0058A6B0(int *param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint in_fpscr;
  float in_s0;
  float fVar3;
  
  if (*(char *)((int)param_1 + 0x84a) == '\0' || param_2 == 0) {
    return;
  }
  uVar2 = *(ushort *)(param_2 + 0x30);
  (**(code **)(*param_1 + 0x50))(param_1,param_1[0x108] == param_2);
  uVar1 = in_fpscr & 0xfffffff | (uint)(in_s0 == DAT_0058a718) << 0x1e;
  if (!SUB41(uVar1 >> 0x1e,0)) {
    if (in_s0 == 1.0) goto LAB_0058a710;
    if (uVar2 != 0) {
      fVar3 = (float)VectorUnsignedToFloat((uint)uVar2,(byte)(uVar1 >> 0x15) & 3);
      uVar2 = (ushort)(int)(fVar3 * in_s0);
      if (((int)(fVar3 * in_s0) & 0xffffU) == 0) {
        uVar2 = 1;
      }
      goto LAB_0058a710;
    }
  }
  uVar2 = 0;
LAB_0058a710:
  *(ushort *)(param_2 + 0x30) = uVar2;
  return;
}

