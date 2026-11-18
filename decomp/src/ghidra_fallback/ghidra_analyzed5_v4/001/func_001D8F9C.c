#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_0052FC3C(int param_1,uint param_2,uint param_3,int param_4);
extern int func_00588BE4(int param_1);
extern int *DAT_001d90cc;
extern int *DAT_001d90d0;
extern uint *DAT_001d90d4;
extern undefined4 *DAT_001d90d8;
extern undefined4 DAT_001d90dc;
extern undefined4 DAT_001d90e0;
extern undefined4 DAT_001d90e4;
extern undefined4 DAT_001d90e8;

// USA 001D8F9C <- EU 001D8F9C (Ghidra, non-matching)
// GLOBAL DAT_001d90cc int *
// GLOBAL DAT_001d90d0 int *
// GLOBAL DAT_001d90d4 uint *
// GLOBAL DAT_001d90d8 undefined4 *
// GLOBAL DAT_001d90dc undefined4
// GLOBAL DAT_001d90e0 undefined4
// GLOBAL DAT_001d90e4 undefined4
// GLOBAL DAT_001d90e8 undefined4

void func_001D8F9C(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  
  piVar1 = DAT_001d90cc;
  if (*(char *)(param_1 + 0x49d) == '\0') {
    if (*(short *)(param_1 + 0x5e) < 1) {
      *(undefined1 *)(param_1 + 0x49d) = 1;
    }
    else {
      iVar4 = func_0052FC3C(*DAT_001d90cc + 0x3dbbc,(int)*(short *)(param_1 + 0x5e),
                            (uint)*(byte *)(param_1 + 0x2d4),0);
      if (((iVar4 != 0) && (iVar5 = func_00588BE4(iVar4), iVar5 == *DAT_001d90d0)) &&
         (fVar9 = *(float *)(iVar4 + 0x3d0) - *(float *)(param_1 + 0x3d0),
         fVar8 = *(float *)(iVar4 + 0x3d8) - *(float *)(param_1 + 0x3d8),
         (int)ALBW_AS_U32(SQRT(fVar9 * fVar9 + fVar8 * fVar8)) < 0x3f800000)) {
        uVar7 = *(uint *)(iVar4 + 0x2cc);
        *(uint *)(param_1 + 0x438) = uVar7;
        puVar6 = (undefined4 *)func_0052FBA0(*piVar1 + 0x3dbbc,uVar7);
        if (((*DAT_001d90d4 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001d90d4), iVar4 != 0))
        {
          *DAT_001d90d8 = DAT_001d90dc;
        }
        if ((puVar6 == (undefined4 *)0x0) ||
           (iVar4 = (**(code **)*puVar6)(puVar6,DAT_001d90d8), iVar4 == 0)) {
          puVar6 = (undefined4 *)0x0;
        }
        uVar3 = DAT_001d90e8;
        uVar2 = DAT_001d90e4;
        if (puVar6 != (undefined4 *)0x0) {
          *(undefined4 *)(param_1 + 0x46c) = DAT_001d90e0;
          *(undefined4 *)(param_1 + 0x470) = uVar2;
          *(undefined4 *)(param_1 + 0x474) = uVar3;
          *(undefined1 *)(param_1 + 0x49d) = 1;
        }
      }
    }
  }
  return;
}

