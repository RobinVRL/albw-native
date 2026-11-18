#include "ghidra_types.h"

extern int func_00103CBC(char *param_1);
extern int func_0011F6B4(int param_1,uint param_2,uint param_3);
extern int func_00564ABC(short *param_1,uint *param_2,uint param_3);

// USA 00584D1C <- EU 00584CF4 (Ghidra, non-matching)

void func_00584D1C(int param_1,int param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = *(int *)(*(int *)(param_1 + 0x50) + 8);
  (**(code **)(*param_3 + 8))(param_3);
  puVar5 = (uint *)param_3[1];
  uVar1 = func_00103CBC((char *)puVar5);
  uVar1 = func_00564ABC((short *)(iVar4 + 0x74),puVar5,uVar1);
  iVar4 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 8);
  }
  if ((int)uVar1 <= iVar4) {
    uVar3 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0x24);
      if (*(uint *)(iVar4 + 8) <= uVar3) break;
      if ((uVar3 == uVar1) ||
         ((uVar2 = (uint)*(ushort *)(*(int *)(iVar4 + 4) + uVar3 * 2), uVar2 < *(uint *)(iVar4 + 8)
          && (iVar4 = func_0011F6B4(iVar4,uVar2,uVar1), iVar4 != 0)))) {
        iVar4 = *(int *)(param_2 + 0x98);
        if (iVar4 < *(int *)(param_2 + 0x9c)) {
          *(int *)(param_2 + 0x98) = iVar4 + 1;
          *(short *)(*(int *)(param_2 + 0xa0) + iVar4 * 2) = (short)uVar3;
        }
      }
      uVar3 = uVar3 + 1 & 0xffff;
    }
  }
  return;
}

