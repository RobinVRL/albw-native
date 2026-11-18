#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_00588BE4(int param_1);
extern int func_0058A7D4(void);
extern int *DAT_00201144;
extern int DAT_00201148;
extern float DAT_0020114c;

// USA 002010A8 <- EU 002010A8 (Ghidra, non-matching)
// GLOBAL DAT_00201144 int *
// GLOBAL DAT_00201148 int
// GLOBAL DAT_0020114c float

void func_002010A8(int *param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint in_fpscr;
  int in_s0;
  float fVar4;
  
  func_004F88A0(param_1,(undefined2 *)param_1[0xe9]);
  *(uint *)(param_1[0x109] + 0x2c) = *(uint *)(param_1[0x109] + 0x2c) & 0xfffdffff;
  param_1[0x167] = param_1[0x167] | 0x30;
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 != *DAT_00201144) {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    iVar1 = ((int)((ulonglong)uVar3 * 2 >> 0x20) + 2) * 0x3c;
    if (iVar1 == 0) {
      in_s0 = DAT_00201148;
    }
    param_1[0x230] = iVar1;
    if (iVar1 == 0) {
      param_1[0x231] = in_s0;
    }
    else {
      fVar4 = (float)VectorUnsignedToFloat(iVar1,(byte)(in_fpscr >> 0x15) & 3);
      param_1[0x231] = (int)ALBW_AS_U32((DAT_0020114c / fVar4));
    }
    param_1[0x22f] = 0;
  }
  return;
}

