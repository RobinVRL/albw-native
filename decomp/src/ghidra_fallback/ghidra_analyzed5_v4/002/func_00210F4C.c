#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0065D774(undefined4 *param_1,undefined1 param_2);
extern int DAT_00210fb0;
extern char s_SE_Deviland_struggle_00210f98[];

// USA 00210F4C <- EU 00210F4C (Ghidra, non-matching)
// GLOBAL DAT_00210fb0 int
// GLOBAL s_SE_Deviland_struggle_00210f98 string

void func_00210F4C(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00210fb0;
  local_c = s_SE_Deviland_struggle_00210f98;
  func_001507D8(param_1,&local_10,0);
  if (0xb4 < *(int *)(param_1 + 0x8bc)) {
    func_0065D774((undefined4 *)(param_1 + 0x8bc),0xb);
  }
  return;
}

