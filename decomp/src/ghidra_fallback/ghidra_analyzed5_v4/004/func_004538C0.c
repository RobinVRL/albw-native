#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_00532C78(int param_1);
extern float DAT_00453924;

// USA 004538C0 <- EU 00453898 (Ghidra, non-matching)
// GLOBAL DAT_00453924 float

undefined4 func_004538C0(int *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar2 = (**(code **)(*param_1 + 0x4c))(param_1);
  fVar4 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  VectorSignedToFloat((int)(fVar4 * DAT_00453924),(byte)(in_fpscr >> 0x15) & 3);
  if (param_1[0x29] != 5) {
    iVar3 = (**(code **)(*param_1 + 0x4c))(param_1);
    return func_0023194C((int)(param_1 + 0x1d),param_1[0x29] * 0x3c - iVar3);
  }
  bVar1 = func_00532C78((int)(param_1 + 0x1d));
  if (!bVar1) {
    return func_0012C718((int)param_1);
  }
  return 0;
}

