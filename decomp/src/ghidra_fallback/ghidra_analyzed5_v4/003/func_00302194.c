#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int DAT_003021d8;
extern char s_SE_Crowly_HOVERING_LEV_003021c0[];

// USA 00302194 <- EU 00302170 (Ghidra, non-matching)
// GLOBAL DAT_003021d8 int
// GLOBAL s_SE_Crowly_HOVERING_LEV_003021c0 string

void func_00302194(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_003021d8;
  local_c = s_SE_Crowly_HOVERING_LEV_003021c0;
  func_001507D8(param_1,&local_10,0);
  if (*(uint *)(param_1 + 0x8e0) < *(uint *)(param_1 + 0x8e4)) {
    *(uint *)(param_1 + 0x8e0) = *(uint *)(param_1 + 0x8e0) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

