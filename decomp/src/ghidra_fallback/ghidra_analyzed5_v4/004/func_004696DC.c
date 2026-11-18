#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern int func_00231448(int param_1);

// USA 004696DC <- EU 004696B4 (Ghidra, non-matching)

void func_004696DC(int param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0xb0);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0xd);
  }
  bVar3 = bVar2 && cVar1 == '\x03';
  if (bVar2 && cVar1 == '\x03') {
    bVar3 = *(char *)(param_1 + 0xe) == '\x03';
  }
  if (bVar3) {
    func_00231448(param_1 + 0x38);
    func_00231448(param_1 + 0x44);
    *(undefined1 *)(param_1 + 0x88) = 0xe;
    *(undefined4 *)(param_1 + 0xa0) = 0xffffffff;
    *(undefined1 *)(param_1 + 0xa4) = 0;
    func_0012C718(param_1);
  }
  *(undefined1 *)(param_1 + 0xb0) = 0;
  return;
}

