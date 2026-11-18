#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00227138;
extern char s_SE_Togegoma_PARTS_OFF_00227120[];

// USA 002270E4 <- EU 002270E4 (Ghidra, non-matching)
// GLOBAL DAT_00227138 int
// GLOBAL s_SE_Togegoma_PARTS_OFF_00227120 string

void func_002270E4(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00227138;
  local_c = s_SE_Togegoma_PARTS_OFF_00227120;
  func_00150A84(param_1,&local_10,0);
  *(undefined1 *)((int)param_1 + 0x74e) = 0;
  return;
}

