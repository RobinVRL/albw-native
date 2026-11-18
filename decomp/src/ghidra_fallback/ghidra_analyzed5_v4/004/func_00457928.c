#include "ghidra_types.h"

extern int func_00532C78(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);

// USA 00457928 <- EU 00457904 (Ghidra, function missing from the decomp table)

void func_00457928(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  bVar1 = func_00532C78(param_1 + 0xf8);
  if (!bVar1) {
    piVar2 = (int *)(param_1 + 0x1e4);
    if (*(uint *)(param_1 + 0x214) < 3) {
      piVar2 = piVar2 + *(uint *)(param_1 + 0x214);
    }
    if (*(char *)(*piVar2 + 0xcc) == '\0') {
      func_0066D544((undefined4 *)(param_1 + 0x17c),'\0');
    }
  }
  return;
}

