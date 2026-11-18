#include "ghidra_types.h"

extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002a1794;
extern undefined4 DAT_002a1798;

// USA 002A1754 <- EU 002A1730 (Ghidra, non-matching)
// GLOBAL DAT_002a1794 float
// GLOBAL DAT_002a1798 undefined4

undefined4 func_002A1754(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  if (*(short *)(param_1 + 0x2c) != 1) {
    local_18 = DAT_002a1794;
    uStack_14 = DAT_002a1798;
    local_10 = DAT_002a1794;
    func_0014FD6C(param_1,&local_18,*(undefined4 *)(param_1 + 1000));
    return func_00661FE4((undefined4 *)(param_1 + 0x938),0);
  }
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x1000;
  return 0;
}

