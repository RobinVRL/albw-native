#include "ghidra_types.h"

extern int func_0066E7A0(undefined4 *param_1,char param_2);

// USA 00478E08 <- EU 00478DE0 (Ghidra, non-matching)

undefined4 func_00478E08(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  
  if (*(char *)(param_1 + 0xd0) == '\x02') {
    cVar2 = '\v';
    puVar1 = (undefined4 *)(param_1 + 0xf0);
  }
  else {
    if ((4 < (int)*(char *)(*(int *)(param_1 + 500) + 0x3c) - 1U) &&
       (4 < (int)*(char *)(*(int *)(param_1 + 0x1f8) + 0x3c) - 1U)) goto LAB_00478e40;
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\v');
    cVar2 = '\x02';
    puVar1 = (undefined4 *)(param_1 + 0xcc);
  }
  func_0066E7A0(puVar1,cVar2);
LAB_00478e40:
  if (*(char *)(param_1 + 0xd0) == '\0' || *(char *)(param_1 + 0xd0) == '\x02') {
    func_0066E7A0((undefined4 *)(param_1 + 0xcc),'\x03');
    if (param_2 == 1) {
      return func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\f');
    }
    func_0066E7A0((undefined4 *)(param_1 + 0xf0),'\x0e');
  }
  return 0;
}

