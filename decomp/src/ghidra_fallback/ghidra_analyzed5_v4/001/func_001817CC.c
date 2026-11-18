#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_003AAE2C(int param_1,undefined4 *param_2);
extern int *DAT_001818e4;
extern uint *DAT_001818e8;
extern int DAT_001818ec;
extern undefined4 DAT_001818f0;
extern undefined4 *DAT_001818f4;

// USA 001817CC <- EU 001817CC (Ghidra, non-matching)
// GLOBAL DAT_001818e4 int *
// GLOBAL DAT_001818e8 uint *
// GLOBAL DAT_001818ec int
// GLOBAL DAT_001818f0 undefined4
// GLOBAL DAT_001818f4 undefined4 *

void func_001817CC(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  uVar3 = DAT_001818f0;
  iVar2 = DAT_001818ec;
  puVar1 = DAT_001818e8;
  iVar4 = *DAT_001818e4;
  if (iVar4 != 0) {
    puVar5 = *(undefined4 **)(iVar4 + 0x3dbc0);
    puVar7 = *(undefined4 **)(iVar4 + 0x3dbc8);
    local_28 = param_4;
    if (puVar5 != puVar7) {
      do {
        puVar6 = (undefined4 *)*puVar5;
        if (puVar6 != (undefined4 *)0x0) {
          if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001818e8), iVar4 != 0)) {
            *DAT_001818f4 = uVar3;
          }
          iVar4 = (**(code **)*puVar6)(puVar6,DAT_001818f4);
          if (iVar4 == 0) {
            puVar6 = (undefined4 *)0x0;
          }
          if ((puVar6 != (undefined4 *)0x0) &&
             (fVar8 = *(float *)(param_1 + 0x3d0) - ALBW_AS_F32(puVar6[0xf4]),
             fVar10 = *(float *)(param_1 + 0x3d4) - ALBW_AS_F32(puVar6[0xf5]),
             fVar9 = *(float *)(param_1 + 0x3d8) - ALBW_AS_F32(puVar6[0xf6]),
             (int)ALBW_AS_U32((fVar8 * fVar8 + fVar10 * fVar10 + fVar9 * fVar9)) < iVar2)) {
            local_28 = *(undefined4 *)(param_1 + 0x2cc);
            func_003AAE2C((int)puVar6,&local_28);
            puVar6[0xb8] = puVar6[0xb8] | 2;
            *(undefined4 *)(param_1 + 0xb9c) = puVar6[0xb3];
            return;
          }
        }
        puVar5 = puVar5 + 1;
        if (puVar5 == puVar7) {
          return;
        }
      } while( true );
    }
  }
  return;
}

