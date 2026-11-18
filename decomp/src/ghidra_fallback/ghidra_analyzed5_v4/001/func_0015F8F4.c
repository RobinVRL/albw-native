#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FCA4(int param_1,undefined4 *param_2,int *param_3);
extern int *DAT_0015fa80;
extern uint *DAT_0015fa84;
extern undefined4 DAT_0015fa88;
extern undefined4 DAT_0015fa8c;
extern undefined4 *DAT_0015fa90;

// USA 0015F8F4 <- EU 0015F8F8 (Ghidra, non-matching)
// GLOBAL DAT_0015fa80 int *
// GLOBAL DAT_0015fa84 uint *
// GLOBAL DAT_0015fa88 undefined4
// GLOBAL DAT_0015fa8c undefined4
// GLOBAL DAT_0015fa90 undefined4 *

void func_0015F8F4(int param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(undefined4 *)(albw_frame + 0x0))
  #define local_2c (*(uint *)(albw_frame + 0x4))
  uVar3 = DAT_0015fa8c;
  uVar2 = DAT_0015fa88;
  puVar1 = DAT_0015fa84;
  piVar6 = DAT_0015fa80;
  if ((*(ushort *)(param_1 + 0x2e) & 0xff) != 0) {
    uVar8 = 0;
    piVar10 = (int *)(param_1 + 0xdf4);
    do {
      piVar5 = piVar10;
      if (uVar8 < 2) {
        piVar5 = piVar10 + uVar8;
      }
      if (*piVar5 < 0) {
        local_30 = uVar2;
        iVar4 = *piVar6;
        local_2c = uVar8;
        piVar5 = func_0052FCA4(iVar4 + 0x3dbbc,&local_30,*(int **)(iVar4 + 0x3dbc0));
        puVar9 = (undefined4 *)*piVar5;
        if (puVar9 != (undefined4 *)0x0) {
          if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0015fa84), iVar4 != 0)) {
            *DAT_0015fa90 = uVar3;
          }
          iVar4 = (**(code **)*puVar9)(puVar9,DAT_0015fa90);
          puVar7 = (undefined4 *)0x0;
          if (iVar4 != 0) {
            puVar7 = puVar9;
          }
          if (puVar7 != (undefined4 *)0x0) {
            piVar5 = piVar10;
            if (uVar8 < 2) {
              piVar5 = piVar10 + uVar8;
            }
            *piVar5 = (int)*(short *)(puVar9 + 0x16);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 2);
    if (*(int *)(param_1 + 0xdfc) < 0) {
      local_2c = 0xffffffff;
      local_30 = uVar2;
      iVar4 = *piVar6;
      piVar6 = func_0052FCA4(iVar4 + 0x3dbbc,&local_30,*(int **)(iVar4 + 0x3dbc0));
      puVar9 = (undefined4 *)*piVar6;
      if (puVar9 != (undefined4 *)0x0) {
        if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0015fa84), iVar4 != 0)) {
          *DAT_0015fa90 = uVar3;
        }
        iVar4 = (**(code **)*puVar9)(puVar9,DAT_0015fa90);
        puVar7 = (undefined4 *)0x0;
        if (iVar4 != 0) {
          puVar7 = puVar9;
        }
        if (puVar7 != (undefined4 *)0x0) {
          *(int *)(param_1 + 0xdfc) = (int)*(short *)(puVar9 + 0x16);
        }
      }
    }
  }
  return;
}

