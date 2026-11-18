#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588BF0(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern int func_00663578(undefined4 *param_1,undefined1 param_2);
extern int DAT_002c9158;
extern char s_SE_SwitchCandle_OFF_002c9144[];

// USA 002C9104 <- EU 002C90E0 (Ghidra, non-matching)
// GLOBAL DAT_002c9158 int
// GLOBAL s_SE_SwitchCandle_OFF_002c9144 string

undefined4 func_002C9104(int *param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  bVar1 = func_00588BF0((int)param_1,0);
  if (bVar1) {
    func_00588C14((int)param_1,0,0);
  }
  func_00663578(param_1 + 0x103,0);
  local_c = s_SE_SwitchCandle_OFF_002c9144;
  local_10 = DAT_002c9158;
  return func_00150A84(param_1,&local_10,0);
}

