#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);

// USA 001D6CA8 <- EU 001D6CA8 (Ghidra, non-matching)

undefined4 func_001D6CA8(int param_1)

{
  if (*(short *)(param_1 + 0x36) != 0) {
    func_00588C14(param_1,0,1);
  }
  func_004CF478(*(int *)(param_1 + 0x40c),0);
  func_00151148(*(int *)(param_1 + 0x410),0);
  return func_0065C988((undefined4 *)(param_1 + 0x4d4),8);
}

