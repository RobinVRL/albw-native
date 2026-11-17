/* USA 0030D6D0 <- EU 0030D6AC (stage-2 Ghidra text) with the dropped third argument of the
 * look-at virtual (vtable +0x8c = 006143E4 for NPCs) restored: the ARM passes
 * r2 = (param_4 != 0) (EU 0030D85C..0030D874: cmp r5, #0; movne r2, #1; moveq r2, #0). Ghidra
 * called it with two arguments, so the receiver read a stack garbage / 0 third argument and only
 * stored the look target without starting the turn (flag +0x85F, target angle +0x818): Gulley
 * kept his back to the camera at "WAKE UP!" (BOOT_LOG 129). */
// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0030DC44(int *param_1,int param_2);
extern int func_0030DFA0(int *param_1,int param_2);
extern int func_00361640();
extern int func_00556068(int param_1);
extern int *DAT_0030d880;
extern uint *DAT_0030d884;
extern undefined4 DAT_0030d888;
extern undefined4 *DAT_0030d88c;

// USA 0030D6D0 <- EU 0030D6AC (Ghidra, non-matching)
// GLOBAL DAT_0030d880 int *
// GLOBAL DAT_0030d884 uint *
// GLOBAL DAT_0030d888 undefined4
// GLOBAL DAT_0030d88c undefined4 *

uint * func_0030D6D0(int *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  
  uVar3 = func_0030DC44(param_1,param_3);
  if (param_2 == 0) {
    puVar6 = (uint *)param_1[7];
    if ((puVar6 != (uint *)0x0) && (uVar3 != 0)) {
      puVar6[6] = uVar3;
    }
  }
  else if (param_2 == 100) {
    puVar6 = (uint *)0x0;
    if (uVar3 != 0) {
      *(bool *)(param_1 + 0x56) = param_4 != 0;
      piVar8 = DAT_0030d880;
      iVar7 = func_00361640(*DAT_0030d880);
      *(bool *)(iVar7 + 0x10) = param_4 != 0;
      puVar6 = (uint *)func_00361640(*piVar8);
      puVar6[6] = uVar3;
      return puVar6;
    }
  }
  else {
    puVar4 = (uint *)func_0030DC44(param_1,param_2);
    if (puVar4 == (uint *)0x0) {
      func_0030DFA0(param_1,param_2);
      puVar4 = (uint *)func_0030DC44(param_1,param_2);
    }
    puVar6 = puVar4;
    if (uVar3 != 0 && puVar4 != (uint *)0x0) {
      puVar5 = func_00556068((int)puVar4);
      puVar6 = (uint *)(uint)*(byte *)((int)puVar5 + 0x2d7);
      if (puVar6 == (uint *)0x0) {
        puVar5 = func_00556068((int)puVar4);
        uVar2 = DAT_0030d888;
        puVar1 = DAT_0030d884;
        puVar6 = (uint *)*DAT_0030d884;
        if ((*DAT_0030d884 & 1) == 0) {
          iVar7 = func_00100174((int *)DAT_0030d884);
          puVar6 = (uint *)0x0;
          if (iVar7 != 0) {
            *DAT_0030d88c = uVar2;
            puVar6 = puVar1;
          }
        }
        if (puVar5 != (undefined4 *)0x0) {
          iVar7 = (**(code **)*puVar5)(puVar5,DAT_0030d88c);
          puVar6 = (uint *)0x0;
          if (iVar7 != 0) {
            piVar8 = func_00556068((int)puVar4);
            if (((*puVar1 & 1) == 0) && (iVar7 = func_00100174((int *)DAT_0030d884), iVar7 != 0)) {
              *DAT_0030d88c = uVar2;
            }
            if ((piVar8 == (int *)0x0) ||
               (iVar7 = (**(code **)*piVar8)(piVar8,DAT_0030d88c), iVar7 == 0)) {
              piVar8 = (int *)0x0;
            }
            puVar5 = func_00556068(uVar3);
            puVar6 = (uint *)(**(code **)(*piVar8 + 0x8c))(piVar8,puVar5,(uint)(param_4 != 0));
          }
        }
        puVar4[6] = uVar3;
        return puVar6;
      }
    }
  }
  return puVar6;
}

