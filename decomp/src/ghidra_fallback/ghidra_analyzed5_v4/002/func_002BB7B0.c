#include "ghidra_types.h"

extern undefined8 func_0058AB74(int param_1);
extern int func_006628D0(undefined4 *param_1,undefined1 param_2);
extern float DAT_002bb848;
extern float DAT_002bb84c;
extern int DAT_002bb850;
extern float DAT_002bb854;

// USA 002BB7B0 <- EU 002BB78C (Ghidra, non-matching)
// GLOBAL DAT_002bb848 float
// GLOBAL DAT_002bb84c float
// GLOBAL DAT_002bb850 int
// GLOBAL DAT_002bb854 float

void func_002BB7B0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  
  if (*(short *)(param_1 + 0x508) < 1) {
    uVar5 = func_0058AB74(param_1);
    fVar3 = DAT_002bb84c;
    if (((int)uVar5 == 5) &&
       (fVar3 = DAT_002bb854, *(uint *)(param_1 + 0x900) < *(uint *)(param_1 + 0x904))) {
      *(uint *)(param_1 + 0x900) = *(uint *)(param_1 + 0x900) + 1;
    }
    else {
      fVar4 = *(float *)(param_1 + 0x8f4);
      *(float *)(param_1 + 0x8f4) = fVar4 + (fVar3 - fVar4) * DAT_002bb848;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x8f4);
    *(undefined4 *)(param_1 + 0x4e4) = uVar1;
    *(undefined4 *)(param_1 + 0x4e8) = uVar1;
    *(undefined4 *)(param_1 + 0x4ec) = uVar1;
  }
  if ((*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') ||
     (*(int *)(param_1 + 0x8f4) <= DAT_002bb850)) {
    if (*(short *)(param_1 + 0x508) < 1) {
      uVar2 = 4;
    }
    else {
      uVar2 = 2;
    }
    func_006628D0((undefined4 *)(param_1 + 0x8bc),uVar2);
  }
  return;
}

