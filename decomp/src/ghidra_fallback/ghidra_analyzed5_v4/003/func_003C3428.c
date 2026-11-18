#include "ghidra_types.h"


// USA 003C3428 <- EU 003C3404 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 undefined4 *
// PARAM param_6 Stack[0x4]:4 undefined4 *

void func_003C3428(undefined4 *param_1,uint param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,undefined4 *param_6,float fparam_0,float fparam_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  bVar3 = param_2 < 3;
  puVar1 = param_1 + param_2 * 9;
  puVar2 = puVar1;
  if (!bVar3) {
    puVar2 = param_1;
  }
  *puVar2 = 0;
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = puVar1;
  }
  puVar2[1] = 0;
  puVar2 = puVar1;
  if (!bVar3) {
    puVar2 = param_1;
  }
  puVar2[2] = *param_3;
  puVar2 = puVar1;
  if (!bVar3) {
    puVar2 = param_1;
  }
  puVar2[3] = *param_4;
  puVar2 = puVar1;
  if (!bVar3) {
    puVar2 = param_1;
  }
  puVar2[4] = *param_5;
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = puVar1;
  }
  puVar2[5] = *param_6;
  puVar2 = param_1;
  if (bVar3) {
    puVar2 = puVar1;
  }
  puVar2[6] = ALBW_AS_U32(fparam_0);
  if (bVar3) {
    param_1 = puVar1;
  }
  param_1[7] = ALBW_AS_U32(fparam_1);
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

