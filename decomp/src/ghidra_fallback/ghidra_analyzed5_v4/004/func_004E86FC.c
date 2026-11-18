#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_00547514(int param_1);
extern int DAT_004e8744;
extern int *DAT_004e8748;
extern char s_SE_PL_HEART_GET_004e8734[];

// USA 004E86FC <- EU 004E86D4 (Ghidra, non-matching)
// GLOBAL DAT_004e8744 int
// GLOBAL DAT_004e8748 int *
// GLOBAL s_SE_PL_HEART_GET_004e8734 string

void func_004E86FC(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (param_2 != 0) {
    func_002B9EA4(param_2,4);
    local_c = s_SE_PL_HEART_GET_004e8734;
    local_10 = DAT_004e8744;
    func_004EABB8(*DAT_004e8748,&local_10,(undefined4 *)0x0);
    if (*(short *)(param_1 + 0x2c) == 1) {
      func_00547514(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

