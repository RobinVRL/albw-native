// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00231340(short *param_1);
extern int func_002313DC(int param_1);
extern int func_00232478(int param_1);
extern int func_00556A74(int param_1);
extern int func_00659E20(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0019925c;

// USA 001991F0 <- EU 001991F0 (Ghidra, non-matching)
// GLOBAL DAT_0019925c int *

undefined4 func_001991F0(int param_1)

{
  char cVar1;
  
  func_00232478(param_1);
  cVar1 = func_00556A74(*DAT_0019925c);
  if (cVar1 == '\0') {
    func_00659E20((undefined4 *)(param_1 + 0x20),3);
  }
  else {
    func_00659E20((undefined4 *)(param_1 + 0x20),1);
  }
  func_00231340((short *)(param_1 + 0x44));
  *(undefined1 *)(param_1 + 0x79) = 0;
  *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x6a) = 3;
  *(undefined2 *)(param_1 + 0x68) = 0;
  return func_002313DC(param_1 + 0x68);
}

