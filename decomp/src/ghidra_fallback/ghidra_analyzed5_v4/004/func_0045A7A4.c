#include "ghidra_types.h"

extern int func_0045A090(int param_1);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int func_0066E58C(undefined4 *param_1,char param_2);
extern int DAT_0045a7dc;

// USA 0045A7A4 <- EU 0045A77C (Ghidra, non-matching)
// GLOBAL DAT_0045a7dc int

undefined4 func_0045A7A4(int param_1)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x1fc) = *(undefined4 *)(DAT_0045a7dc + 4);
  if (*(char *)(param_1 + 0x1a4) == '\0') {
    func_0066D544((undefined4 *)(param_1 + 0x1a0),'\x01');
  }
  else if (*(char *)(param_1 + 0x1a4) == '\x02') {
    func_0045A090(param_1);
  }
  piVar1 = (int *)(param_1 + 0x1e4);
  if (*(uint *)(param_1 + 0x214) < 3) {
    piVar1 = piVar1 + *(uint *)(param_1 + 0x214);
  }
  return func_0066E58C((undefined4 *)(*piVar1 + 200),'\x05');
}

