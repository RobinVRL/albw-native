#include "ghidra_types.h"

extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_0066645C(undefined4 *param_1,undefined1 param_2);
extern int DAT_00357f40;

// USA 00357F08 <- EU 00357EE4 (Ghidra, non-matching)
// GLOBAL DAT_00357f40 int

undefined4 func_00357F08(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    if (0 < *(short *)(DAT_00357f40 + param_1)) {
      func_0066645C((undefined4 *)(param_1 + 0x8bc),1);
      return func_004FABDC(param_1,1,0xffffffff,0);
    }
    func_0066645C((undefined4 *)(param_1 + 0x8bc),3);
  }
  return 0;
}

