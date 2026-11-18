#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern undefined4 DAT_00562dcc;
extern int DAT_00562dd0;

// USA 00562D5C <- EU 00562D34 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_00562dcc undefined4
// GLOBAL DAT_00562dd0 int

undefined4 *
func_00562D5C(undefined4 param_1,undefined4 *param_2,uint param_3,undefined4 *param_4,uint param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar1 = DAT_00562dcc;
  for (; iVar2 = DAT_00562dd0, 0x80 < param_5; param_5 = param_5 - 0x80) {
    *param_2 = *param_4;
    param_2[1] = param_3 | 0x7ff0000;
    func_00110D44(param_2 + 2,(byte *)(param_4 + 1),0x1fc);
    param_2[0x81] = uVar1;
    param_4 = param_4 + 0x80;
    param_2 = param_2 + 0x82;
  }
  *param_2 = *param_4;
  puVar4 = param_2 + 2;
  param_2[1] = iVar2 + param_5 * 0x100000 | param_3 | 0xf0000;
  func_00110D44(puVar4,(byte *)(param_4 + 1),param_5 * 4 - 4);
  puVar4 = puVar4 + param_5;
  puVar3 = puVar4 + -1;
  if ((param_5 & 1) == 0) {
    puVar4[-1] = uVar1;
    puVar3 = puVar4;
  }
  return puVar3;
}

