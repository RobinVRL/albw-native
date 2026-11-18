#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033bc50;
extern char s_SE_LightArrow_FLY_0033bc3c[];

// USA 0033BBD8 <- EU 0033BBB4 (Ghidra, non-matching)
// GLOBAL DAT_0033bc50 int
// GLOBAL s_SE_LightArrow_FLY_0033bc3c string

undefined4 func_0033BBD8(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(uint *)(param_1 + 0x474) < *(uint *)(param_1 + 0x478)) {
    if (*(char *)(param_1 + 0x45c) != '\0') {
      func_00665E08((undefined4 *)(param_1 + 0x40c),1);
    }
    local_10 = DAT_0033bc50;
    if (*(uint *)(param_1 + 0x474) < *(uint *)(param_1 + 0x478)) {
      *(uint *)(param_1 + 0x474) = *(uint *)(param_1 + 0x474) + 1;
    }
    local_c = s_SE_LightArrow_FLY_0033bc3c;
    return func_001507D8(param_1,&local_10,0);
  }
  return func_00665E08((undefined4 *)(param_1 + 0x40c),5);
}

