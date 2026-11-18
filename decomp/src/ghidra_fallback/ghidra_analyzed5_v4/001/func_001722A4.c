#include "ghidra_types.h"

extern int func_0017222C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4);
extern int func_00429F94(float fparam_0);
extern int func_0051B70C(int param_1);
extern int *DAT_00172348;

// USA 001722A4 <- EU 001722A4 (Ghidra, non-matching)
// GLOBAL DAT_00172348 int *

undefined4 func_001722A4(int param_1,int param_2)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  
  *(char *)(param_1 + 0x2e4) = (char)param_2;
  *(undefined1 *)(param_1 + 0x2ec) = 1;
  if (param_2 == 1) {
    fVar2 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_1 + 0x2e8),(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = func_00429F94(fVar2);
  }
  else if ((param_2 == 2) && ((*(byte *)(param_1 + 0x34) & 0x10) != 0)) {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  else {
    fVar2 = (float)VectorUnsignedToFloat
                             ((uint)*(ushort *)(param_1 + 0x2e6),(byte)(in_fpscr >> 0x15) & 3);
    iVar1 = func_00429F94(fVar2);
  }
  *(int *)(param_1 + 0x2c0) = iVar1;
  *(undefined4 *)(param_1 + 0x2c4) = 0;
  func_0051B70C(*DAT_00172348);
  return func_0017222C(param_1,4,*(undefined4 *)(param_1 + 0x2c0),*(undefined4 *)(param_1 + 0x2c4));
}

