#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float func_0058AA40(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern undefined4 DAT_004fee48;
extern float DAT_004fee4c;

// USA 004FEDAC <- EU 004FED84 (Ghidra, non-matching)
// GLOBAL DAT_004fee48 undefined4
// GLOBAL DAT_004fee4c float

void func_004FEDAC(int param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  uVar6 = func_0058AB74(param_1);
  if ((int)uVar6 == 1) {
    fVar4 = func_0058AA40(param_1);
    func_004FC07C(param_1,0,0xffffffff,0);
    func_004FB0A4(param_1,fVar4);
  }
  else {
    func_004FC07C(param_1,0,0xffffffff,0);
  }
  uVar5 = DAT_004fee48;
  *(undefined4 *)(param_1 + 0x3dc) = DAT_004fee48;
  *(undefined4 *)(param_1 + 0x3e4) = uVar5;
  puVar1 = (uint *)func_0058A7D4();
  uVar2 = func_00111A64(puVar1);
  iVar3 = (int)((ulonglong)uVar2 * 0x96 >> 0x20) + 0x1e;
  *(int *)(param_1 + 0x8f8) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(param_1 + 0x8fc) = uVar5;
  }
  else {
    fVar4 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(param_1 + 0x8fc) = DAT_004fee4c / fVar4;
  }
  *(undefined4 *)(param_1 + 0x8f4) = 0;
  return;
}

