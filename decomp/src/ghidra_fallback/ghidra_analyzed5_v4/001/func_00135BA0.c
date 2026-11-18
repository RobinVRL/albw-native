#include "ghidra_types.h"

extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_00656DE8(undefined4 *param_1,undefined1 param_2);
extern int DAT_00135c1c;
extern int *DAT_00135c20;
extern char s_SE_Barrier_EXIST_00135c08[];

// USA 00135BA0 <- EU 00135BA0 (Ghidra, non-matching)
// GLOBAL DAT_00135c1c int
// GLOBAL DAT_00135c20 int *
// GLOBAL s_SE_Barrier_EXIST_00135c08 string

void func_00135BA0(int param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  local_10 = DAT_00135c1c;
  local_c = s_SE_Barrier_EXIST_00135c08;
  func_001507D8(param_1,&local_10,0);
  if ((*(int *)(*DAT_00135c20 + 0x44) != 0) && (*(int *)(*DAT_00135c20 + 0x44) == param_1 + 0x4fc))
  {
    func_00656DE8((undefined4 *)(param_1 + 0x4b8),1);
  }
  return;
}

