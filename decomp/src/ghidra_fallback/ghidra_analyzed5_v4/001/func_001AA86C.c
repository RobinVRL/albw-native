#include "ghidra_types.h"

extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern int func_00289120(int param_1,undefined4 *param_2,undefined4 param_3,uint param_4);
extern int func_00520ED8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0058A8F0(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_0065AAC8(undefined4 *param_1,undefined1 param_2);
extern float DAT_001aa9b4;
extern float DAT_001aa9b8;
extern float DAT_001aa9bc;
extern int *DAT_001aa9c0;

// USA 001AA86C <- EU 001AA86C (Ghidra, non-matching)
// GLOBAL DAT_001aa9b4 float
// GLOBAL DAT_001aa9b8 float
// GLOBAL DAT_001aa9bc float
// GLOBAL DAT_001aa9c0 int *

void func_001AA86C(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  lVar8 = func_0058ACC8(param_1,DAT_001aa9b4);
  if ((int)lVar8 != 0) {
    iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
            *(int *)(param_1 + 0x938) * 0x30;
    local_30 = *(float *)(iVar3 + 0xc);
    local_2c = *(float *)(iVar3 + 0x1c);
    local_28 = *(undefined4 *)(iVar3 + 0x2c);
    func_00115DAC(&local_30,(float *)(param_1 + 0x374),&local_30,DAT_001aa9b8);
    iVar3 = func_00520ED8(param_1);
    piVar2 = DAT_001aa9c0;
    if (iVar3 != 0) {
      local_2c = local_2c + DAT_001aa9bc;
    }
    uVar5 = *(uint *)(param_1 + 0x8c0);
    uVar6 = *(undefined4 *)(param_1 + 1000);
    uVar7 = *(uint *)(param_1 + 0x2cc);
    while ((puVar1 = (uint *)(uVar5 - 4), puVar1 != (uint *)(param_1 + 0x8b8) &&
           ((iVar3 = func_0052FBA0(*piVar2 + 0x3dbbc,*puVar1), iVar3 == 0 ||
            (iVar3 = func_00289120(iVar3,&local_30,uVar6,uVar7), iVar3 == 0))))) {
      uVar5 = puVar1[2];
    }
    *(int *)(param_1 + 0x93c) = *(int *)(param_1 + 0x93c) + 1;
  }
  iVar3 = func_0058A8F0(param_1);
  if (iVar3 != 0) {
    if (*(uint *)(param_1 + 0x93c) < 8) {
      uVar4 = 6;
    }
    else {
      *(undefined4 *)(param_1 + 0x93c) = 0;
      uVar4 = 7;
    }
    func_0065AAC8((undefined4 *)(param_1 + 0x904),uVar4);
  }
  return;
}

