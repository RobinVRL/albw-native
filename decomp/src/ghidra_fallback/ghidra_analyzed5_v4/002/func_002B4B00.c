#include "ghidra_types.h"

extern int func_0037BDC8(int *param_1);
extern int func_0058A8F0(int param_1);
extern float func_0058AA40(int param_1);
extern float func_0058AC38(int param_1);
extern int func_00662638(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_002b4b74;
extern float DAT_002b4b78;

// USA 002B4B00 <- EU 002B4ADC (Ghidra, non-matching)
// GLOBAL DAT_002b4b74 undefined4
// GLOBAL DAT_002b4b78 float

void func_002B4B00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  iVar2 = func_0037BDC8((int *)(param_1 + 0x8bc));
  uVar1 = DAT_002b4b74;
  if (iVar2 != 0) {
    *(undefined4 *)(param_1 + 0x3dc) = DAT_002b4b74;
    *(undefined4 *)(param_1 + 0x3e0) = uVar1;
    *(undefined4 *)(param_1 + 0x3e4) = uVar1;
  }
  iVar2 = *(int *)(param_1 + 0x958);
  if (iVar2 != 0) {
    fVar3 = func_0058AA40(param_1);
    fVar4 = func_0058AC38(param_1);
    *(float *)(*(int *)(iVar2 + 0x14) + 0x10) = DAT_002b4b78 - fVar3 / fVar4;
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    func_00662638((undefined4 *)(param_1 + 0x8ec),2);
  }
  return;
}

