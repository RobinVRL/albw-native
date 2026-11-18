#include "ghidra_types.h"

extern int func_0065D3A8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00204440;
extern undefined4 DAT_00204444;

// USA 002043A0 <- EU 002043A0 (Ghidra, non-matching)
// GLOBAL DAT_00204440 int
// GLOBAL DAT_00204444 undefined4

undefined4 func_002043A0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  
  if (*(short *)(param_1 + 0x30) == 1) {
    uVar2 = (uint)*(byte *)(*(int *)(param_1 + 0x510) + 4);
    bVar4 = 0x1d < uVar2;
    bVar3 = uVar2 != 0x1e;
    if (bVar3) {
      uVar2 = uVar2 - 0xe;
      bVar4 = 2 < uVar2;
    }
    if (((bVar4 && (bVar3 && uVar2 != 3)) || (DAT_00204440 < *(int *)(param_1 + 0x8c4))) ||
       (*(short *)(param_1 + 0x508) < 1)) {
      *(undefined1 *)(param_1 + 0x8c8) = 1;
    }
  }
  uVar1 = DAT_00204444;
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    *(undefined4 *)(param_1 + 0x4e4) = DAT_00204444;
    *(undefined4 *)(param_1 + 0x4e8) = uVar1;
    *(undefined4 *)(param_1 + 0x4ec) = uVar1;
    if (0 < *(short *)(param_1 + 0x508)) {
      return func_0065D3A8((undefined4 *)(param_1 + 0x8f0),4);
    }
    func_0065D3A8((undefined4 *)(param_1 + 0x8f0),8);
  }
  return 0;
}

