#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_0024b024;
extern int DAT_0024b028;
extern int *DAT_0024b02c;
extern int *DAT_0024b030;
extern uint *DAT_0024b034;
extern undefined4 *DAT_0024b038;
extern undefined4 DAT_0024b03c;

// USA 0024AEBC <- EU 0024AEBC (Ghidra, non-matching)
// GLOBAL DAT_0024b024 int *
// GLOBAL DAT_0024b028 int
// GLOBAL DAT_0024b02c int *
// GLOBAL DAT_0024b030 int *
// GLOBAL DAT_0024b034 uint *
// GLOBAL DAT_0024b038 undefined4 *
// GLOBAL DAT_0024b03c undefined4

undefined4 func_0024AEBC(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  
  piVar2 = DAT_0024b030;
  piVar1 = DAT_0024b02c;
  piVar6 = *(int **)(DAT_0024b028 + *DAT_0024b024);
  piVar5 = *(int **)(*DAT_0024b024 + 0x3dbc0);
  do {
    if (piVar5 == piVar6) {
      return 0;
    }
    if (*piVar5 != 0) {
      iVar3 = func_00588BE4(*piVar5);
      iVar4 = *piVar1;
      bVar8 = iVar3 != iVar4;
      if (bVar8) {
        iVar4 = *piVar2;
      }
      if ((!bVar8 || iVar3 == iVar4) &&
         (fVar10 = *(float *)(param_1 + 0x3d0) - *(float *)(*piVar5 + 8),
         fVar9 = *(float *)(param_1 + 0x3d8) - *(float *)(*piVar5 + 0x10),
         (int)ALBW_AS_U32(SQRT(fVar10 * fVar10 + fVar9 * fVar9)) < 0x40000001)) {
        iVar4 = func_00588BE4(*piVar5);
        if (iVar4 == *piVar1) {
          puVar7 = (undefined4 *)*piVar5;
          if (((*DAT_0024b034 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_0024b034), iVar4 != 0)
             ) {
            *DAT_0024b038 = DAT_0024b03c;
          }
          if ((puVar7 == (undefined4 *)0x0) ||
             (iVar4 = (**(code **)*puVar7)(puVar7,DAT_0024b038), iVar4 == 0)) {
            puVar7 = (undefined4 *)0x0;
          }
          if (puVar7 != (undefined4 *)0x0) {
            *(undefined4 *)(param_1 + 1000) = puVar7[0xfa] + puVar7[0x208] + puVar7[0x209];
          }
        }
        *(int *)(param_1 + 0x474) = iVar3;
        *(float *)(param_1 + 0x478) = *(float *)(param_1 + 0x10) - *(float *)(*piVar5 + 0x10);
        return 1;
      }
    }
    piVar5 = piVar5 + 1;
  } while( true );
}

