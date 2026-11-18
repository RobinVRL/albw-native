#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern int func_00231524(int param_1);
extern int func_00232478(int param_1);
extern int func_0031C3A4(int param_1);
extern int func_00584B94(int param_1,int param_2);
extern int func_006653E8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0031c37c;

// USA 0031C2F4 <- EU 0031C2D0 (Ghidra, non-matching)
// GLOBAL DAT_0031c37c int *

void func_0031C2F4(int param_1)

{
  bool bVar1;
  
  func_00232478(param_1);
  if (*(char *)(param_1 + 0xea) == '\x01') {
    func_002313DC(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0xea) = 0;
    *(undefined1 *)(param_1 + 0xe8) = 1;
    func_006653E8((undefined4 *)(param_1 + 0x50),4);
  }
  else if ((*DAT_0031c37c == 0) || (bVar1 = func_00584B94(*DAT_0031c37c,0xec), !bVar1)) {
    func_002313DC(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0xe8) = 0;
  }
  else {
    func_0031C3A4(param_1);
    func_00231524(param_1 + 0x74);
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  func_002313DC(param_1 + 0x80);
  func_002313DC(param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0xec) = 0xffffffff;
  return;
}

