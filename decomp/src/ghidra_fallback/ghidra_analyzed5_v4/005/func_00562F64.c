#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_003CD000(int *param_1,int param_2,int param_3);
extern int DAT_0056308c;
extern uint DAT_00563090;
extern uint DAT_00563094;
extern uint DAT_00563098;
extern uint DAT_0056309c;

// USA 00562F64 <- EU 00562F3C (Ghidra, non-matching)
// GLOBAL DAT_0056308c int
// GLOBAL DAT_00563090 uint
// GLOBAL DAT_00563094 uint
// GLOBAL DAT_00563098 uint
// GLOBAL DAT_0056309c uint

uint * func_00562F64(int *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_3 != 0) {
    param_2 = (uint *)func_003CD000((int *)param_2,(param_1[1] >> 0x1f) + 1,
                                    (uint)*(byte *)(param_1 + 0xa6));
  }
  iVar2 = param_1[1];
  if (-1 < iVar2) {
    func_00110D44(param_2,(byte *)(param_1 + iVar2 * DAT_0056308c * 2 + 0xda),
                  param_1[iVar2 + 0x4a1a] << 2);
    uVar1 = DAT_00563090;
    puVar4 = param_2 + param_1[param_1[1] + 0x4a1a];
    *puVar4 = param_1[0xa8] | 0x7fff0000;
    param_2 = puVar4 + 2;
    puVar4[1] = uVar1;
  }
  func_00110D44(param_2,(byte *)(param_1 + *param_1 * DAT_0056308c * 2 + 0xda),
                param_1[*param_1 + 0x4a1a] << 2);
  uVar1 = DAT_00563094;
  puVar4 = param_2 + param_1[*param_1 + 0x4a1a];
  *puVar4 = param_1[0xa7] | 0x7fff0000;
  puVar4[1] = uVar1;
  uVar1 = DAT_00563098;
  uVar3 = 0x100;
  if ((char)param_1[0xa6] != '\x03') {
    uVar3 = 0;
  }
  puVar4[2] = uVar3;
  uVar3 = 0x100;
  puVar4[3] = uVar1;
  uVar1 = DAT_0056309c;
  if ((char)param_1[0xa6] != '\x03') {
    uVar3 = 0;
  }
  puVar4[4] = uVar3;
  puVar4[5] = uVar1;
  func_00110D44(puVar4 + 6,(byte *)(param_1 + 0xa9),param_1[0xd9] << 2);
  return puVar4 + 6 + param_1[0xd9];
}

