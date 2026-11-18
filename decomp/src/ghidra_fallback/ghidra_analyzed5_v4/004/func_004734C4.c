#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern float DAT_004734ec;

// USA 004734C4 <- EU 0047349C (Ghidra, non-matching)
// GLOBAL DAT_004734ec float

void func_004734C4(int param_1,undefined1 param_2)

{
  float fparam_0;
  
  if (*(char *)(param_1 + 0x160) != '\x01' && *(char *)(param_1 + 0x160) != '\x02') {
    *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x156) = 7;
    fparam_0 = DAT_004734ec;
    *(undefined2 *)(param_1 + 0x154) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x154),fparam_0);
    *(undefined1 *)(param_1 + 0x161) = param_2;
    *(undefined1 *)(param_1 + 0x160) = 1;
  }
  return;
}

