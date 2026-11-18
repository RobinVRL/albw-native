#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern uint DAT_0044af64;

// USA 0044AEC8 <- EU 0044AEA0 (Ghidra, non-matching)
// GLOBAL DAT_0044af64 uint

void func_0044AEC8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar6;
  uint uVar7;
  
  uVar1 = DAT_0044af64;
  if (*(char *)(param_1 + 0x292) == '\0') {
    uVar6 = 0;
    uVar7 = DAT_0044af64 | DAT_0044af64 << 0xe;
    do {
      uVar2 = uVar6 & 0xff;
      if (uVar2 == 0) {
        uVar2 = *(uint *)(param_1 + 0x24c);
joined_r0x0044aeec:
        if (uVar7 <= uVar2) goto LAB_0044af20;
LAB_0044af40:
        puVar5 = (undefined4 *)(param_1 + 0x188);
        if (uVar6 < 4) {
          puVar5 = puVar5 + uVar6;
        }
        func_001B6C2C((int *)*puVar5,param_2,param_3,param_4);
        param_2 = extraout_r1_00;
      }
      else {
        if (uVar2 == 1) {
          iVar3 = *(int *)(param_1 + 0x24c);
        }
        else {
          if (uVar2 != 2) {
            if (uVar2 == 3) {
              uVar2 = *(uint *)(param_1 + 0x248);
              goto joined_r0x0044aeec;
            }
            goto LAB_0044af40;
          }
          iVar3 = *(int *)(param_1 + 0x248);
        }
        if (iVar3 < (int)uVar1) goto LAB_0044af40;
LAB_0044af20:
        piVar4 = (int *)(param_1 + 0x188);
        if (uVar6 < 4) {
          piVar4 = piVar4 + uVar6;
        }
        func_0012C790(*piVar4);
        param_2 = extraout_r1;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < 4);
  }
  return;
}

