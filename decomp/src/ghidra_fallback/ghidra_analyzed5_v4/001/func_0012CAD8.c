#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_00656CA4(undefined4 *param_1,undefined1 param_2);
extern float DAT_0012cb5c;

// USA 0012CAD8 <- EU 0012CAD8 (Ghidra, non-matching)
// GLOBAL DAT_0012cb5c float

undefined4 func_0012CAD8(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x14);
  uVar1 = *(ushort *)(iVar2 + 0x16);
  if ((uVar1 & 4) == 0 && (uVar1 & 0x10) == 0) {
    if (((uVar1 & 8) != 0) && (*(int *)(iVar2 + 8) == 0)) {
      func_002317C0((undefined2 *)(param_1 + 0x44),DAT_0012cb5c);
      return 0;
    }
    if (((uVar1 & 0x20) != 0) || ((uVar1 & 2) == 0)) {
      *(ushort *)(iVar2 + 0x16) = uVar1 & 0xfffd;
      func_00231448(param_1 + 0x50);
      return func_00656CA4((undefined4 *)(param_1 + 0x68),0);
    }
  }
  else {
    func_00656CA4((undefined4 *)(param_1 + 0x68),2);
  }
  return 0;
}

