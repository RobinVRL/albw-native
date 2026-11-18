#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00163A30(int *param_1,int param_2);
extern int func_004F87F8(int param_1,int param_2);
extern int func_004F8864(int param_1,undefined4 *param_2,uint param_3,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern int DAT_00163c4c;
extern int DAT_00163c50;
extern float DAT_00163c54;
extern undefined4 *DAT_00163c58;
extern float DAT_00163c5c;

// USA 00163B88 <- EU 00163B8C (Ghidra, non-matching)
// GLOBAL DAT_00163c4c int
// GLOBAL DAT_00163c50 int
// GLOBAL DAT_00163c54 float
// GLOBAL DAT_00163c58 undefined4 *
// GLOBAL DAT_00163c5c float

undefined4 func_00163B88(int *param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  int iVar5;
  
  iVar5 = DAT_00163c4c;
  param_1[0x139] = DAT_00163c4c;
  param_1[0x13a] = iVar5;
  param_1[0x13b] = iVar5;
  func_004FC07C((int)param_1,0,0xffffffff,0);
  func_00163A30(param_1,1);
  iVar5 = DAT_00163c50;
  param_1[0xf7] = DAT_00163c50;
  param_1[0xf9] = iVar5;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x96 >> 0x20) + 0x1e;
  param_1[0x243] = iVar3;
  if (iVar3 == 0) {
    param_1[0x244] = iVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x244] = (int)ALBW_AS_U32((DAT_00163c54 / fVar4));
  }
  param_1[0x242] = 0;
  func_004F87F8((int)param_1,1);
  func_004F8864((int)param_1,DAT_00163c58,0,DAT_00163c5c);
  return (undefined4)param_1;
}

