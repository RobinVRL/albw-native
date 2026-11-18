#include "ghidra_types.h"

extern int func_00293C70(uint *param_1,int param_2);

// USA 0058450C <- EU 005844E4 (Ghidra, non-matching)

void func_0058450C(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    func_00293C70((uint *)(param_2 + iVar2 * 0x38),param_1 + 4 + iVar1 * 0x40);
    iVar1 = iVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar1 != 0x14);
  *(undefined4 *)(param_2 + 0x460) = *(undefined4 *)(param_1 + 0x57c);
  *(undefined4 *)(param_2 + 0x464) = *(undefined4 *)(param_1 + 0x580);
  *(undefined4 *)(param_2 + 0x468) = *(undefined4 *)(param_1 + 0x584);
  return;
}

