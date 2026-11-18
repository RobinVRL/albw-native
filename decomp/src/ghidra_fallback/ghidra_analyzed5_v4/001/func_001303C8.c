#include "ghidra_types.h"

extern int func_004CE008(int param_1,int param_2);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_005478B0(int *param_1,int *param_2);
extern int func_005568E8(int param_1);
extern int *DAT_00130494;
extern int *DAT_00130498;
extern uint DAT_0013049c;

// USA 001303C8 <- EU 001303C8 (Ghidra, non-matching)
// GLOBAL DAT_00130494 int *
// GLOBAL DAT_00130498 int *
// GLOBAL DAT_0013049c uint

void func_001303C8(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *DAT_00130494;
  if ((iVar5 != 0) && (*DAT_00130498 != 0)) {
    uVar1 = func_005568E8(*DAT_00130498);
    uVar3 = DAT_0013049c;
    *(undefined4 *)(DAT_0013049c + param_1) = 0;
    iVar4 = *(int *)(param_1 + 0x54);
    if (iVar4 != param_1 + 0x50) {
      do {
        bVar6 = *(int *)(iVar4 + 8) != 0;
        iVar2 = 0;
        if (bVar6) {
          iVar2 = *(int *)(*(int *)(iVar4 + 8) + 0x54);
        }
        if (bVar6 && iVar2 != 0) {
          uVar3 = *(uint *)(iVar2 + 4);
        }
        if ((((bVar6 && iVar2 != 0) && uVar3 != uVar1) &&
            (iVar2 = func_0052FBA0(iVar5 + 0x3dbbc,uVar3), uVar3 = extraout_r1, iVar2 != 0)) &&
           (iVar2 = func_005478B0((int *)(iVar2 + 4),param_2), uVar3 = extraout_r1_00, iVar2 != 0))
        {
          iVar2 = *(int *)(iVar4 + 8);
          func_004CE008(iVar2,1);
          uVar3 = *(uint *)(iVar2 + 0x164) | 1;
          *(uint *)(iVar2 + 0x164) = uVar3;
        }
        iVar4 = *(int *)(iVar4 + 4);
      } while (iVar4 != param_1 + 0x50);
    }
  }
  return;
}

