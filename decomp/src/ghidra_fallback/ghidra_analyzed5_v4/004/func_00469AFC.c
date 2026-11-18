#include "ghidra_types.h"

extern void func_001B6DE0(int param_1);
extern int func_00231448(int param_1);

// USA 00469AFC <- EU 00469AD4 (Ghidra, non-matching)

void func_00469AFC(int param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  func_001B6DE0(param_1);
  func_00231448(param_1 + 0x38);
  func_00231448(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x88) = 0xe;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
  uVar2 = 0;
  do {
    piVar3 = (int *)(param_1 + 0x68);
    if (uVar2 < 8) {
      piVar3 = piVar3 + uVar2;
    }
    iVar4 = *piVar3;
    if ((iVar4 != 0) && ((*(byte *)(iVar4 + 0x44) & 1) != 0)) {
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 8);
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 4;
  cVar1 = *(char *)(param_1 + 0xd);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0xe);
  }
  if (!bVar5 || cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return;
}

