#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6B38(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_00421638(int param_1,int param_2);

// USA 0044508C <- EU 0044506C [EDITED REGION: check by hand] (Ghidra, non-matching)

void func_0044508C(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined1 in_r1;
  undefined4 extraout_r1;
  undefined4 in_r2;
  int in_r3;
  int *piVar3;
  bool bVar4;
  
  piVar3 = (int *)(param_1 + 0xc4);
  bVar2 = *(char *)(param_1 + 0x4ba) + 1;
  if (0xb < bVar2) {
    in_r1 = 0;
  }
  *(byte *)(param_1 + 0x4ba) = bVar2;
  if (0xb < bVar2) {
    *(undefined1 *)(param_1 + 0x4ba) = in_r1;
  }
  if (*(byte *)(param_1 + 0x4ba) < 0xc) {
    piVar3 = piVar3 + (uint)*(byte *)(param_1 + 0x4ba) * 0x15;
  }
  cVar1 = *(char *)((int)piVar3 + 0xd);
  bVar4 = cVar1 == '\0';
  if (bVar4) {
    cVar1 = *(char *)((int)piVar3 + 0xe);
  }
  if (!bVar4 || cVar1 != '\0') {
    func_0012C790((int)piVar3);
    func_001B6B38(piVar3,extraout_r1,in_r2,in_r3);
  }
  *(undefined2 *)(*(int *)(param_1 + 0x4b4) + 0x34) = 5;
  func_00421638((int)piVar3,*(int *)(param_1 + 0x4b4));
  *(undefined1 *)((int)piVar3 + 0xe) = 1;
  return;
}

