#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0065C988(undefined4 *param_1,undefined1 param_2);
extern char s_WaterCrown_001d6e1c[];

// USA 001D6DE4 <- EU 001D6DE4 (Ghidra, non-matching)
// GLOBAL s_WaterCrown_001d6e1c string

undefined4 func_001D6DE4(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define aiStack_10 ((int *)(albw_frame + 0x0))
  if (*(int *)(param_1 + 0x344) != 0) {
    func_004A1B9C(aiStack_10,*(int *)(param_1 + 0x344),(uint *)s_WaterCrown_001d6e1c);
  }
  return func_0065C988((undefined4 *)(param_1 + 0x4d4),7);
}

