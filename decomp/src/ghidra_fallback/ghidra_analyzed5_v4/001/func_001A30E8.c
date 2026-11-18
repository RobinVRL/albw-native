#include "ghidra_types.h"

extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_0065A474(undefined4 *param_1,undefined1 param_2);
extern int DAT_001a31a4;

// USA 001A30E8 <- EU 001A30E8 (Ghidra, non-matching)
// GLOBAL DAT_001a31a4 int

undefined4 func_001A30E8(int *param_1)

{
  undefined1 uVar1;
  
  if ((uint)param_1[0x262] <= (uint)param_1[0x261]) {
    func_004F9554(param_1[0x259],5,4,1);
    func_004F9554(param_1[0x10c],5,4,1);
    func_004F9554(param_1[0x10d],5,4,1);
    func_004F88A0(param_1,(undefined2 *)param_1[0x238]);
  }
  if (*(char *)(param_1[0x144] + 4) != '\0') {
    return 0;
  }
  if (*(short *)(DAT_001a31a4 + (int)param_1) < 1) {
    uVar1 = 6;
  }
  else {
    if ((uint)param_1[0x262] <= (uint)param_1[0x261]) {
      return func_0065A474(param_1 + 0x22f,3);
    }
    uVar1 = 2;
  }
  return func_0065A474(param_1 + 0x22f,uVar1);
}

