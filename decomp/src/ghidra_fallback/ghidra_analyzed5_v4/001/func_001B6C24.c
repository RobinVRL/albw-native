#include "ghidra_types.h"

extern int func_00231340(short *param_1);

// USA 001B6C24 <- EU 001B6C24 (Ghidra, non-matching)

void func_001B6C24(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0x144);
  cVar1 = *(char *)((int)piVar3 + 0xe);
  cVar2 = *(char *)((int)piVar3 + 0xd);
  if (cVar1 == '\x04') {
    if (cVar2 != '\x04') {
      (**(code **)(*piVar3 + 0x2c))(piVar3);
    }
    func_00231340((short *)(piVar3 + 0xb));
    (**(code **)(*piVar3 + 0x34))(piVar3);
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0xd) = 0;
  }
  else if (cVar1 == '\x02') {
    if (cVar2 != '\x02') {
      (**(code **)(*piVar3 + 0x1c))(piVar3);
    }
    func_00231340((short *)(piVar3 + 8));
    (**(code **)(*piVar3 + 0x34))(piVar3);
    *(undefined1 *)((int)piVar3 + 0xe) = 0;
    *(undefined1 *)((int)piVar3 + 0xd) = 0;
  }
  else {
    if (cVar2 != '\0') {
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
  }
  *(undefined1 *)((int)piVar3 + 0xe) = 1;
  return;
}

