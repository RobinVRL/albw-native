#include "ghidra_types.h"

extern int func_0045FCA4(int param_1);
extern int func_0066BFFC(undefined4 *param_1,char param_2);
extern int func_0066E7A0(undefined4 *param_1,char param_2);
extern int *DAT_0047a1b4;

// USA 0047A160 <- EU 0047A138 (Ghidra, non-matching)
// GLOBAL DAT_0047a1b4 int *

undefined4 func_0047A160(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 500);
  iVar2 = *(int *)(*DAT_0047a1b4 + 0xe8);
  if (iVar2 != 0) {
    param_3 = (uint)*(byte *)(iVar2 + 0x78);
  }
  if (iVar2 != 0 && param_3 != 3) {
    if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 4) != 0) ||
       (*(char *)(iVar1 + 0x3c) == '\x05')) {
      return func_0045FCA4(iVar2);
    }
  }
  else {
    if (*(char *)(iVar1 + 0x3c) == '\x03') {
      func_0066BFFC((undefined4 *)(iVar1 + 0x38),'\x05');
    }
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\t');
  }
  return 0;
}

