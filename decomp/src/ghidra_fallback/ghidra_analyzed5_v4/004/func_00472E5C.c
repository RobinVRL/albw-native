#include "ghidra_types.h"

extern int func_00231340(short *param_1);

// USA 00472E5C <- EU 00472E34 (Ghidra, non-matching)

void func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)((int)param_1 + 0xe);
  cVar2 = *(char *)((int)param_1 + 0xd);
  if (cVar1 == '\x04') {
    if (cVar2 != '\x04') {
      (**(code **)(*param_1 + 0x2c))(param_1);
    }
    func_00231340((short *)(param_1 + 0xb));
    (**(code **)(*param_1 + 0x34))(param_1);
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else if (cVar1 == '\x02') {
    if (cVar2 != '\x02') {
      (**(code **)(*param_1 + 0x1c))(param_1);
    }
    func_00231340((short *)(param_1 + 8));
    (**(code **)(*param_1 + 0x34))(param_1);
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  else {
    if (cVar2 != '\0') {
      return;
    }
    if (cVar1 != '\0') {
      return;
    }
  }
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  return;
}

