#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0037EC94(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_004FC570();
extern int func_0058A7D4(void);
extern float DAT_0038136c;
extern float DAT_00381370;
extern float DAT_00381374;
extern int DAT_00381378;
extern int DAT_0038137c;

// USA 003812BC <- EU 00381298 (Ghidra, non-matching)
// GLOBAL DAT_0038136c float
// GLOBAL DAT_00381370 float
// GLOBAL DAT_00381374 float
// GLOBAL DAT_00381378 int
// GLOBAL DAT_0038137c int

undefined4 func_003812BC(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  puVar1 = (uint *)func_0058A7D4();
  fVar6 = DAT_0038136c;
  uVar2 = func_00111A64(puVar1);
  fVar3 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  iVar4 = VectorFloatToUnsigned(DAT_00381374 + fVar3 * DAT_00381370 * fVar6 * DAT_00381374,3);
  iVar5 = iVar4;
  if (iVar4 == 0) {
    iVar5 = DAT_00381378;
  }
  param_1[699] = iVar4;
  if (iVar4 == 0) {
    param_1[700] = iVar5;
  }
  else {
    fVar3 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
    param_1[700] = (int)ALBW_AS_U32((fVar6 / fVar3));
  }
  param_1[0x2ba] = 0;
  iVar5 = DAT_0038137c;
  param_1[0x2be] = 4;
  param_1[0x2bf] = iVar5;
  param_1[0x2bd] = 0;
  func_0037EC94((int)param_1);
  param_1[0x167] = param_1[0x167] | 8;
  func_004FC570(param_1);
  *(undefined1 *)(param_1 + 0x2cb) = 1;
  return func_004FC07C((int)param_1,4,0xffffffff,0);
}

