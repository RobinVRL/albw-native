#include "ghidra_types.h"

extern undefined8 func_00106388(void);
extern int func_003CD95C(uint *param_1);
extern undefined4 DAT_004a1658;
extern undefined4 *DAT_004a165c;

// USA 004A15B8 <- EU 004A1590 (Ghidra, non-matching)
// GLOBAL DAT_004a1658 undefined4
// GLOBAL DAT_004a165c undefined4 *

int func_004A15B8(undefined4 *param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  
  *param_1 = DAT_004a1658;
  for (puVar3 = (undefined4 *)param_1[6]; puVar3 != param_1 + 5; puVar3 = (undefined4 *)puVar3[1]) {
    (**(code **)(*(int *)puVar3[2] + 0x18))((int *)puVar3[2],0);
  }
  do {
    bVar2 = true;
    for (puVar3 = (undefined4 *)param_1[6]; puVar3 != param_1 + 5; puVar3 = (undefined4 *)puVar3[1])
    {
      bVar2 = (bool)(bVar2 & (*(int *)(puVar3[2] + 0x78) == 3 || *(int *)(puVar3[2] + 0x78) == 4));
    }
    func_00106388();
  } while (!bVar2);
  for (puVar3 = (undefined4 *)param_1[6]; puVar3 != param_1 + 5; puVar3 = (undefined4 *)puVar3[1]) {
    (**(code **)(*(int *)puVar3[2] + 0x1c))((int *)puVar3[2]);
  }
  *DAT_004a165c = 0;
  puVar1 = func_003CD95C(param_1 + 9);
  return (int)(puVar1 + -9);
}

