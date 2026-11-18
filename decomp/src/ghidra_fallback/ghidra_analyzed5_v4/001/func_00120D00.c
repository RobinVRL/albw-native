#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_00588BE4(int param_1);
extern int *DAT_00120e34;
extern uint *DAT_00120e38;
extern int *DAT_00120e3c;
extern undefined4 DAT_00120e40;
extern undefined4 *DAT_00120e44;
extern int *DAT_00120e48;
extern int *DAT_00120e4c;

// USA 00120D00 <- EU 00120D00 (Ghidra, non-matching)
// GLOBAL DAT_00120e34 int *
// GLOBAL DAT_00120e38 uint *
// GLOBAL DAT_00120e3c int *
// GLOBAL DAT_00120e40 undefined4
// GLOBAL DAT_00120e44 undefined4 *
// GLOBAL DAT_00120e48 int *
// GLOBAL DAT_00120e4c int *

void func_00120D00(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  float in_s0;
  
  if (param_1 != (undefined4 *)0x0) {
    iVar5 = func_00588BE4((int)param_1);
    uVar4 = DAT_00120e40;
    piVar3 = DAT_00120e3c;
    puVar2 = DAT_00120e38;
    if (iVar5 == *DAT_00120e34) {
      bVar1 = *(byte *)(param_1 + 0x17);
      iVar5 = 0;
      if (bVar1 != 0) {
        do {
          iVar6 = (int)*(short *)((int)param_1 + iVar5 * 6 + 0x5e);
          if ((0 < iVar6) && (iVar6 == param_2)) {
            if (((*puVar2 & 1) == 0) && (iVar6 = func_00100174((int *)DAT_00120e38), iVar6 != 0)) {
              *DAT_00120e44 = uVar4;
            }
            if ((param_1 == (undefined4 *)0x0) ||
               (iVar6 = (**(code **)*param_1)(param_1,DAT_00120e44), puVar7 = param_1, iVar6 == 0))
            {
              puVar7 = (undefined4 *)0x0;
            }
            if ((puVar7 != (undefined4 *)0x0) && (*(short *)((int)puVar7 + 0x7ba) < 1)) {
              func_004AD9E8(*piVar3,(uint)*(ushort *)((int)param_1 + 0x36),
                                    (uint)*(byte *)(param_1 + 0xd),1,in_s0);
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)(uint)bVar1);
      }
    }
    else if ((*(char *)(*DAT_00120e48 + 0x18) == '\x10') &&
            (iVar5 = func_00588BE4((int)param_1), iVar5 == *DAT_00120e4c)) {
      param_1[0xb8] = param_1[0xb8] | 2;
      return;
    }
  }
  return;
}

