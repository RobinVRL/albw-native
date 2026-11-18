#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);
extern undefined4 DAT_003fb174;

// USA 003FB084 <- EU 003FB064 (Ghidra, non-matching)
// GLOBAL DAT_003fb174 undefined4

undefined4 func_003FB084(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  bVar2 = false;
  bVar1 = false;
  if ((uint)param_1[1] < *(uint *)(param_2 + 0x1c)) {
    uVar3 = 0x80000001;
  }
  else {
    uVar7 = 0;
    if (*(uint *)(param_2 + 0x1c) != 0) {
      do {
        if (*(int *)(*param_1 + uVar7 * 4) == 0) {
          iVar6 = *(int *)(param_3 + 0x30);
          iVar8 = 0;
          puVar5 = *(uint **)(*(int *)(param_2 + 0x18) + uVar7 * 4);
          uVar4 = func_00103CBC((char *)puVar5);
          uVar4 = func_00564ABC((short *)(iVar6 + 0x28),puVar5,uVar4);
          if (uVar4 != 0xffff) {
            iVar8 = *(int *)(*(int *)(*(int *)(param_3 + 0x30) + 0x24) + uVar4 * 4);
          }
          if (iVar8 == 0) {
            bVar2 = true;
          }
          else {
            bVar1 = true;
          }
          *(int *)(*param_1 + uVar7 * 4) = iVar8;
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(uint *)(param_2 + 0x1c));
    }
    uVar7 = *(uint *)(param_2 + 0x1c);
    if (uVar7 < (uint)param_1[1]) {
      do {
        uVar4 = uVar7 + 1;
        *(undefined4 *)(*param_1 + uVar7 * 4) = 0;
        uVar7 = uVar4;
      } while (uVar4 < (uint)param_1[1]);
    }
    if (bVar1) {
      if (bVar2) {
        return 0x4000;
      }
    }
    else if (bVar2) {
      return DAT_003fb174;
    }
    uVar3 = 0;
  }
  return uVar3;
}

