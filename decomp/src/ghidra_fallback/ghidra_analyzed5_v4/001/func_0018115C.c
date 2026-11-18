#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00588BE4(int param_1);
extern int *DAT_001812c8;
extern uint *DAT_001812cc;
extern int *DAT_001812d0;
extern undefined4 DAT_001812d4;
extern undefined4 *DAT_001812d8;
extern int *DAT_001812dc;
extern int DAT_001812e0;
extern int DAT_001812e4;

// USA 0018115C <- EU 0018115C (Ghidra, non-matching)
// GLOBAL DAT_001812c8 int *
// GLOBAL DAT_001812cc uint *
// GLOBAL DAT_001812d0 int *
// GLOBAL DAT_001812d4 undefined4
// GLOBAL DAT_001812d8 undefined4 *
// GLOBAL DAT_001812dc int *
// GLOBAL DAT_001812e0 int
// GLOBAL DAT_001812e4 int

undefined4 func_0018115C(int *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  uVar3 = DAT_001812d4;
  piVar2 = DAT_001812d0;
  puVar1 = DAT_001812cc;
  if ((char)param_1[0x2fb] == '\0') {
    puVar6 = *(undefined4 **)(*DAT_001812c8 + 0x3dbc0);
    puVar8 = *(undefined4 **)(*DAT_001812c8 + 0x3dbc8);
    if (puVar6 != puVar8) {
      do {
        puVar7 = (undefined4 *)*puVar6;
        if (puVar7 != (undefined4 *)0x0) {
          if (((*puVar1 & 1) == 0) && (iVar4 = func_00100174((int *)DAT_001812cc), iVar4 != 0)) {
            *DAT_001812d8 = uVar3;
          }
          iVar4 = (**(code **)*puVar7)(puVar7,DAT_001812d8);
          puVar5 = (undefined4 *)0x0;
          if (iVar4 != 0) {
            puVar5 = puVar7;
          }
          if (puVar5 == (undefined4 *)0x0) {
            iVar4 = func_00588BE4((int)puVar7);
            if ((iVar4 == *piVar2) || (iVar4 == *DAT_001812dc)) {
              puVar7[0x103] = param_1 + 0x2f5;
            }
          }
          else {
            puVar5[0x107] = param_1 + 0x2f5;
          }
        }
        puVar6 = puVar6 + 1;
      } while (puVar6 != puVar8);
    }
  }
  *(undefined1 *)(param_1 + 0x2fb) = 1;
  *(undefined1 *)((int)param_1 + 0x853) = 8;
  *(undefined1 *)(param_1 + 0x2fc) = 0;
  iVar4 = DAT_001812e0;
  param_1[0x264] = 0x14;
  param_1[0x265] = iVar4;
  iVar4 = DAT_001812e4;
  param_1[0x263] = 0;
  param_1[0x267] = 0;
  param_1[0x268] = iVar4;
  param_1[0x266] = 0;
  param_1[0x2af] = iVar4;
  param_1[0xf7] = iVar4;
  param_1[0xf8] = iVar4;
  param_1[0xf9] = iVar4;
  *(undefined1 *)((int)param_1 + 0xbf2) = 1;
                    /* WARNING: Could not recover jumptable at 0x001812c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0xac))(param_1,0,0xffffffff);
}

