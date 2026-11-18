#include "ghidra_types.h"

extern int func_00332B3C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);

// USA 003324CC <- EU 003324A8 (Ghidra, non-matching)

undefined4 func_003324CC(int param_1)

{
  bool bVar1;
  ushort uVar2;
  
  if ((*(char *)(param_1 + 0x516) == '\0') &&
     ((uVar2 = *(ushort *)(param_1 + 0x2e) & 0xff, uVar2 == 1 || uVar2 == 3 ||
      (uVar2 == 4 || uVar2 == 6)))) {
    if (*(char *)(param_1 + 0x4bd) != '\0') {
      func_006657B4((undefined4 *)(param_1 + 0x4c0),6);
      func_00332B3C(param_1);
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      *(undefined1 *)(param_1 + 0x516) = 1;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x50c) == 0) {
    bVar1 = func_00588BF0(param_1,1);
    if (bVar1) {
      return func_006657B4((undefined4 *)(param_1 + 0x4c0),6);
    }
  }
  else if (*(char *)(param_1 + 0x4bd) != '\0') {
    func_006657B4((undefined4 *)(param_1 + 0x4c0),6);
    *(undefined1 *)(param_1 + 0x4bd) = 0;
    *(undefined1 *)(param_1 + 0x516) = 1;
  }
  return 0;
}

