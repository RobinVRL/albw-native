#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_001E5374(int param_1,uint param_2,uint param_3,int param_4);
extern int DAT_004c4f28;
extern uint *DAT_004c4f2c;
extern undefined4 DAT_004c4f30;
extern undefined4 DAT_004c4f34;
extern undefined4 *DAT_004c4f38;
extern uint *DAT_004c4f3c;
extern undefined4 *DAT_004c4f40;

// USA 004C4D6C <- EU 004C4D44 (Ghidra, non-matching)
// GLOBAL DAT_004c4f28 int
// GLOBAL DAT_004c4f2c uint *
// GLOBAL DAT_004c4f30 undefined4
// GLOBAL DAT_004c4f34 undefined4
// GLOBAL DAT_004c4f38 undefined4 *
// GLOBAL DAT_004c4f3c uint *
// GLOBAL DAT_004c4f40 undefined4 *

void func_004C4D6C(int param_1,uint param_2,uint param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = DAT_004c4f34;
  uVar2 = DAT_004c4f30;
  puVar1 = DAT_004c4f2c;
  puVar8 = *(undefined4 **)(DAT_004c4f28 + param_1);
  puVar7 = *(undefined4 **)(param_1 + 0x3dbc0);
  do {
    if (puVar7 == puVar8) {
      return;
    }
    puVar6 = (undefined4 *)*puVar7;
    if ((puVar6 != (undefined4 *)0x0) && (*(char *)((int)puVar6 + 0x2d7) == '\0')) {
      if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_004c4f2c), iVar4 != 0)) {
        *DAT_004c4f38 = uVar2;
      }
      iVar4 = (**(code **)*puVar6)(puVar6,DAT_004c4f38);
      if (iVar4 == 0) {
        puVar6 = (undefined4 *)0x0;
      }
      if (puVar6 == (undefined4 *)0x0) {
        puVar6 = (undefined4 *)*puVar7;
        iVar4 = 0;
        do {
          if ((*(ushort *)((int)puVar6 + iVar4 * 2 + 0x36) == param_2) &&
             (*(byte *)((int)puVar6 + iVar4 + 0x34) == param_3)) {
            if (((*DAT_004c4f3c & 1) == 0) &&
               (iVar5 = func_00100174((int *)DAT_004c4f3c), iVar5 != 0)) {
              *DAT_004c4f40 = uVar3;
            }
            if ((puVar6 == (undefined4 *)0x0) ||
               (iVar5 = (**(code **)*puVar6)(puVar6,DAT_004c4f40), iVar5 == 0)) {
              puVar6 = (undefined4 *)0x0;
            }
            if (puVar6 != (undefined4 *)0x0) {
              if (param_4 == 0) {
                if (iVar4 == 0) {
                  (**(code **)(puVar6[200] + 0x50))(puVar6 + 200);
                }
                else {
                  (**(code **)(puVar6[200] + 0x54))(puVar6 + 200);
                }
              }
              else if (iVar4 == 0) {
                (**(code **)(puVar6[200] + 0x48))(puVar6 + 200);
              }
              else {
                (**(code **)(puVar6[200] + 0x4c))(puVar6 + 200);
              }
            }
            break;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 2);
      }
      else {
        func_001E5374((int)puVar6,param_2,param_3,param_4);
      }
    }
    puVar7 = puVar7 + 1;
  } while( true );
}

