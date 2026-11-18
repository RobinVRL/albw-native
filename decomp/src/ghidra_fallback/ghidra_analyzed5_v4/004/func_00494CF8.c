#include "ghidra_types.h"

extern int func_0010CE7C(undefined4 *param_1);
extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_00494dc4;
extern undefined4 DAT_00494dc8;
extern undefined4 DAT_00494dcc;
extern undefined4 DAT_00494dd0;

// USA 00494CF8 <- EU 00494CD0 (Ghidra, non-matching)
// GLOBAL DAT_00494dc4 undefined4
// GLOBAL DAT_00494dc8 undefined4
// GLOBAL DAT_00494dcc undefined4
// GLOBAL DAT_00494dd0 undefined4

undefined4 * func_00494CF8(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  
  puVar2 = func_0010CE7C(param_1);
  *puVar2 = DAT_00494dc4;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = param_2;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xf] = puVar2 + 0x11;
  puVar2[0x10] = 0x40;
  *(undefined1 *)(puVar2[0xf] + 0x3f) = 0;
  puVar2[0xe] = DAT_00494dcc;
  puVar4 = (uint *)puVar2[0xf];
  (**(code **)(*param_3 + 8))(param_3);
  uVar3 = 0;
  do {
    if (*(char *)(param_3[1] + uVar3) == '\0') {
      if ((int)uVar3 < 0x40001) goto LAB_00494d84;
      break;
    }
    uVar3 = uVar3 + 1;
  } while ((int)uVar3 < 0x40001);
  uVar3 = 0;
LAB_00494d84:
  if ((int)puVar2[0x10] <= (int)uVar3) {
    uVar3 = puVar2[0x10] - 1;
  }
  (**(code **)(*param_3 + 8))(param_3);
  func_0010E3C4(puVar4,(uint *)param_3[1],uVar3);
  uVar1 = DAT_00494dd0;
  *(undefined1 *)((int)puVar4 + uVar3) = 0;
  puVar2[0xe] = uVar1;
  return puVar2;
}

