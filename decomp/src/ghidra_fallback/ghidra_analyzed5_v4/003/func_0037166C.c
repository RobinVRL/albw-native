#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int func_00667114(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00371784;
extern undefined4 *DAT_00371788;
extern int DAT_0037178c;
extern uint *DAT_00371790;
extern undefined4 DAT_00371794;
extern undefined4 *DAT_00371798;
extern int DAT_0037179c;

// USA 0037166C <- EU 00371648 (Ghidra, non-matching)
// GLOBAL DAT_00371784 int *
// GLOBAL DAT_00371788 undefined4 *
// GLOBAL DAT_0037178c int
// GLOBAL DAT_00371790 uint *
// GLOBAL DAT_00371794 undefined4
// GLOBAL DAT_00371798 undefined4 *
// GLOBAL DAT_0037179c int

undefined4 func_0037166C(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  
  puVar3 = DAT_00371788;
  piVar2 = DAT_00371784;
  bVar1 = true;
  puVar6 = (undefined4 *)
           func_005841A8(*DAT_00371784,*DAT_00371788,*(int **)(DAT_0037178c + *DAT_00371784));
  uVar5 = DAT_00371794;
  puVar4 = DAT_00371790;
  if (*(undefined4 **)(*piVar2 + 0x3dbc8) != puVar6) {
    do {
      puVar8 = (undefined4 *)*puVar6;
      if (((*puVar4 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_00371790), iVar7 != 0)) {
        *DAT_00371798 = uVar5;
      }
      if ((puVar8 == (undefined4 *)0x0) ||
         (iVar7 = (**(code **)*puVar8)(puVar8,DAT_00371798), iVar7 == 0)) {
        puVar8 = (undefined4 *)0x0;
      }
      if (puVar8 != (undefined4 *)0x0) {
        iVar7 = puVar8[0xca] - (int)*(short *)(DAT_0037179c + (int)puVar8);
        if (*(char *)(param_1 + 0x438) == '\0') {
          if (0 < iVar7) {
            *(undefined1 *)(param_1 + 0x438) = 1;
          }
        }
        else if (iVar7 < 1) goto LAB_0037172c;
        bVar1 = false;
      }
LAB_0037172c:
      puVar6 = (undefined4 *)func_005841A8(*piVar2,*puVar3,puVar6 + 1);
    } while (*(undefined4 **)(*piVar2 + 0x3dbc8) != puVar6);
    if (!bVar1) {
      return 0;
    }
  }
  return func_00667114((undefined4 *)(param_1 + 0x40c),1);
}

