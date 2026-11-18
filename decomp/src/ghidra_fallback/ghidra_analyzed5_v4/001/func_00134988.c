#include "ghidra_types.h"

extern int func_001344C0(uint *param_1,int param_2,int *param_3);
extern int func_002C40D8(int param_1);
extern int DAT_001349d0;

// USA 00134988 <- EU 00134988 (Ghidra, non-matching)
// GLOBAL DAT_001349d0 int

undefined4 func_00134988(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  func_002C40D8(param_1);
  local_c = *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x530) + 0x50) + 8) + 0x84);
  local_10 = DAT_001349d0;
  return func_001344C0((uint *)(param_1 + 0x40c),param_1,&local_10);
}

