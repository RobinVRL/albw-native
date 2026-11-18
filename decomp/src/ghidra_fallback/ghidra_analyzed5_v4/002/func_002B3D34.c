#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float fRam002b3e44;
extern float fRam002b3e48;
extern int DAT_002b3e40;

// USA 002B3D34 <- EU 002B3D10 (Ghidra, non-matching)
// GLOBAL DAT_002b3e40 int
// GLOBAL UNK_002b3e44 float
// GLOBAL UNK_002b3e48 float

void func_002B3D34(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  if ((*(char *)(param_1 + 0x987) == '\0') && (-1 < *(short *)(param_1 + 0x2e))) {
    uVar1 = *(short *)(param_1 + 0x2e) * DAT_002b3e40;
  }
  else {
    puVar2 = (uint *)func_0058A7D4();
    uVar1 = func_00111A64(puVar2);
  }
  *(uint *)(param_1 + 0x95c) = uVar1;
  *(undefined1 *)(param_1 + 0x987) = 1;
  func_004FABDC(param_1,1,0xffffffff,0);
  fVar5 = fRam002b3e44;
  func_004FB4E0(param_1,fRam002b3e44);
  func_004FAB60(param_1,0,0);
  fVar4 = fRam002b3e48;
  func_004FB4C4(param_1,fRam002b3e48);
  func_004FB070(param_1,fVar4);
  if (*(int *)(param_1 + 0x958) != 0) {
    *(float *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = fVar5;
  }
  puVar2 = (uint *)func_0058A7D4();
  uVar1 = func_00111A64(puVar2);
  iVar3 = (int)((ulonglong)uVar1 * 0x78 >> 0x20) + 0xb4;
  *(int *)(param_1 + 0x938) = iVar3;
  if (iVar3 == 0) {
    *(float *)(param_1 + 0x93c) = fVar4;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x93c) = fVar5 / fVar4;
  }
  *(undefined4 *)(param_1 + 0x934) = 0;
  *(undefined4 *)(param_1 + 0x944) = 1;
  *(float *)(param_1 + 0x948) = fVar5;
  *(undefined4 *)(param_1 + 0x940) = 0;
  func_004F88A0((int *)param_1,*(undefined2 **)(param_1 + 0x3a4));
  *(undefined1 *)(param_1 + 0x984) = 0;
  return;
}

