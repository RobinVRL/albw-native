#include "ghidra_types.h"

extern int func_00429FCC(int param_1);
extern int func_0066C748(undefined4 *param_1,undefined1 param_2);

// USA 00440E6C <- EU 00440E4C (Ghidra, non-matching)

undefined4 func_00440E6C(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xdc);
  if ((iVar2 == 0) || ((*(char *)(iVar2 + 0xd) == '\0' && (*(char *)(iVar2 + 0xe) == '\0')))) {
    iVar2 = *(int *)(param_1 + 0x74);
    if ((*(char *)(iVar2 + 0x28) != '\0') && (*(short *)(iVar2 + 0x36) == 0)) {
      return func_0066C748((undefined4 *)(param_1 + 0x8c),4);
    }
    uVar1 = func_00429FCC(iVar2);
    *(undefined1 *)(param_1 + 0x84) = uVar1;
    func_0066C748((undefined4 *)(param_1 + 0x8c),1);
  }
  return 0;
}

