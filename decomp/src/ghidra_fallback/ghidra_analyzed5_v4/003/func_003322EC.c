#include "ghidra_types.h"

extern int func_00332B3C(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_006657B4(undefined4 *param_1,undefined1 param_2);

// USA 003322EC <- EU 003322C8 (Ghidra, non-matching)

undefined4 func_003322EC(int param_1)

{
  bool bVar1;
  ushort uVar2;
  
  if ((*(char *)(param_1 + 0x517) == '\0') &&
     ((uVar2 = *(ushort *)(param_1 + 0x2e) & 0xff, uVar2 == 2 || uVar2 == 3 ||
      (uVar2 == 5 || uVar2 == 6)))) {
    if (*(char *)(param_1 + 0x4bd) != '\0') {
      func_006657B4((undefined4 *)(param_1 + 0x4c0),2);
      func_00332B3C(param_1);
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      *(undefined1 *)(param_1 + 0x517) = 1;
      return 0;
    }
  }
  else if (*(int *)(param_1 + 0x510) == 0) {
    if (*(short *)(param_1 + 0x30) == 0) {
      bVar1 = func_00588BF0(param_1,0);
      if (bVar1) goto LAB_003323a8;
    }
    else {
      bVar1 = func_00588BF0(param_1,1);
      if (!bVar1) {
LAB_003323a8:
        return func_006657B4((undefined4 *)(param_1 + 0x4c0),2);
      }
    }
  }
  else if (*(char *)(param_1 + 0x4bd) != '\0') {
    func_006657B4((undefined4 *)(param_1 + 0x4c0),2);
    *(undefined1 *)(param_1 + 0x4bd) = 0;
    *(undefined1 *)(param_1 + 0x517) = 1;
  }
  return 0;
}

