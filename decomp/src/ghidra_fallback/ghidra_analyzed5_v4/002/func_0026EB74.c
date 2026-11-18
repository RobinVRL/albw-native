#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern uint DAT_0026ec18;
extern uint DAT_0026ec1c;

// USA 0026EB74 <- EU 0026EB9C (Ghidra, non-matching)
// GLOBAL DAT_0026ec18 uint
// GLOBAL DAT_0026ec1c uint

undefined8 func_0026EB74(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  if (*(char *)(param_1 + 0x524) != '\0') {
    *(undefined1 *)(param_1 + 0x524) = 0;
  }
  uVar1 = DAT_0026ec18;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    uVar2 = 5;
  }
  *param_2 = uVar2 | (uint)(*(char *)(param_1 + 0x2cd) != '\0') << 0x10;
  uVar2 = DAT_0026ec1c;
  param_2[1] = uVar1;
  param_2[2] = *(uint *)(param_1 + 0x2ce) & 0xffffff;
  puVar3 = param_2 + 4;
  param_2[3] = uVar2;
  uVar4 = 0;
  if (*(char *)(param_1 + 0x2cc) != '\0') {
    uVar5 = func_00110D44(puVar3,(byte *)(param_1 + 0x2d4),0x210);
    uVar4 = (undefined4)((ulonglong)uVar5 >> 0x20);
    puVar3 = param_2 + 0x88;
  }
  return CONCAT44(uVar4,puVar3);
}

