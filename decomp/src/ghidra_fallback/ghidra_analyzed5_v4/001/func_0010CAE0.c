#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_0010cbd4;
extern undefined4 DAT_0010cbd8;
extern undefined4 DAT_0010cbdc;
extern undefined4 DAT_0010cbe0;
extern undefined4 DAT_0010cbe4;

// USA 0010CAE0 <- EU 0010CAE0 (Ghidra, non-matching)
// GLOBAL DAT_0010cbd4 undefined4
// GLOBAL DAT_0010cbd8 undefined4
// GLOBAL DAT_0010cbdc undefined4
// GLOBAL DAT_0010cbe0 undefined4
// GLOBAL DAT_0010cbe4 undefined4

undefined4 * func_0010CAE0(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = param_1;
  param_1[7] = 0;
  puVar2 = func_0010CE7C(param_1);
  *puVar2 = DAT_0010cbd4;
  puVar2[9] = puVar2 + 0xb;
  puVar2[10] = 0x20;
  *(undefined1 *)(puVar2[9] + 0x1f) = 0;
  uVar1 = DAT_0010cbdc;
  *(undefined1 *)puVar2[9] = 0;
  puVar2[8] = DAT_0010cbe0;
  *(undefined1 *)(puVar2 + 0x13) = 1;
  puVar4 = (uint *)puVar2[9];
  (**(code **)(*param_2 + 8))(param_2,*(code **)(*param_2 + 8),uVar1);
  uVar3 = 0;
  do {
    if (*(char *)(param_2[1] + uVar3) == '\0') {
      if ((int)uVar3 < 0x40001) goto LAB_0010cb8c;
      break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x40001);
  uVar3 = 0;
LAB_0010cb8c:
  if ((int)puVar2[10] <= (int)uVar3) {
    uVar3 = puVar2[10] - 1;
  }
  (**(code **)(*param_2 + 8))(param_2);
  func_0010E3C4(puVar4,(uint *)param_2[1],uVar3);
  uVar1 = DAT_0010cbe4;
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  *puVar2 = uVar1;
  puVar2[0x14] = 0;
  *(undefined1 *)(puVar2 + 0x15) = 0;
  return puVar2;
}

