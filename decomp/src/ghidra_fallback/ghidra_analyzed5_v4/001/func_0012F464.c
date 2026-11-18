#include "ghidra_types.h"

extern int func_0012F0E0(int param_1,int *param_2,undefined *param_3);
extern int func_00405A44(int param_1,uint *param_2,uint param_3,uint param_4);

// USA 0012F464 <- EU 0012F464 (Ghidra, non-matching)

void func_0012F464(int param_1,uint *param_2,uint param_3,uint param_4)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  #define local_20 (*(undefined * *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  if (*(char *)(param_1 + 0x148) != '\0') {
    local_1c = 0xffffffff;
    local_20 = (undefined *)(param_4 << 1);
    local_28[0] = (int)param_2 + param_3 * 2;
    local_28[1] = 0;
    func_0012F0E0(param_1,local_28,local_20);
  }
  func_00405A44(param_1,param_2,param_3,param_4);
  *(undefined1 *)(*(int *)(param_1 + 0xfc) + 6) = 0;
  return;
}

