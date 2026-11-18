#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00196330(int param_1,undefined4 param_2);
extern undefined4 DAT_0019631c;
extern int *DAT_00196320;
extern float DAT_00196324;

// USA 0019629C <- EU 0019629C (Ghidra, non-matching)
// GLOBAL DAT_0019631c undefined4
// GLOBAL DAT_00196320 int *
// GLOBAL DAT_00196324 float

void func_0019629C(int param_1)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = DAT_0019631c;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_0019631c;
  *(undefined4 *)(param_1 + 0x3e0) = uVar4;
  *(undefined4 *)(param_1 + 0x3e4) = uVar4;
  func_00196330(param_1,(uint)(*(char *)(param_1 + 0x440) != '\0'));
  uVar1 = func_00111A64((uint *)(*DAT_00196320 + 0x660));
  iVar2 = (int)((ulonglong)uVar1 * 0x3c >> 0x20) + 0x78;
  *(int *)(param_1 + 0x46c) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x470) = uVar4;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x470) = DAT_00196324 / fVar3;
  }
  *(undefined4 *)(param_1 + 0x468) = 0;
  return;
}

