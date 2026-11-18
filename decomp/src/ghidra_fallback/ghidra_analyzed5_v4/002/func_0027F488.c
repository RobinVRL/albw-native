#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_0027f4f8;
extern char s_SE_SwitchWatter_MOVE_START_0027f4dc[];

// USA 0027F488 <- EU 0027F4B0 (Ghidra, non-matching)
// GLOBAL DAT_0027f4f8 int
// GLOBAL s_SE_SwitchWatter_MOVE_START_0027f4dc string

undefined4 func_0027F488(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_c = s_SE_SwitchWatter_MOVE_START_0027f4dc;
  local_10 = DAT_0027f4f8;
  return func_00150A84(param_1,&local_10,0);
}

