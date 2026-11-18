#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014EB3C(int param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0058A7D4(void);
extern float DAT_001aa780;
extern undefined4 DAT_001aa784;
extern float DAT_001aa788;

// USA 001AA6BC <- EU 001AA6BC (Ghidra, non-matching)
// GLOBAL DAT_001aa780 float
// GLOBAL DAT_001aa784 undefined4
// GLOBAL DAT_001aa788 float

void func_001AA6BC(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  bool bVar5;
  uint in_fpscr;
  float fVar6;
  
  func_004FC07C(param_1,0,0xffffffff,0);
  func_0014EB3C(param_1);
  func_00115D70((float *)(param_1 + 0x3dc),(float *)(param_1 + 0x374),DAT_001aa780);
  uVar2 = param_1 + 0x900;
  bVar5 = *(char *)(param_1 + 0x964) == '\0';
  if (bVar5) {
    uVar2 = (uint)*(byte *)(param_1 + 0x966);
  }
  if (bVar5 && uVar2 == 0) {
    puVar3 = (uint *)func_0058A7D4();
    uVar2 = func_00111A64(puVar3);
    uVar1 = DAT_001aa784;
    iVar4 = (int)((ulonglong)uVar2 * 0x28 >> 0x20) + 0x32;
    *(int *)(param_1 + 0x930) = iVar4;
    if (iVar4 == 0) {
      *(undefined4 *)(param_1 + 0x934) = uVar1;
    }
    else {
      fVar6 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0x934) = DAT_001aa788 / fVar6;
    }
    *(undefined4 *)(param_1 + 0x92c) = 0;
    *(undefined4 *)(param_1 + 0x94c) = 0;
    *(undefined4 *)(param_1 + 0x950) = uVar1;
    *(undefined4 *)(param_1 + 0x948) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x964) = 0;
  *(undefined1 *)(param_1 + 0x966) = 0;
  return;
}

