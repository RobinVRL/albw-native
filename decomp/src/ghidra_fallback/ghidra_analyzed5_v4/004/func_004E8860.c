#include "ghidra_types.h"

extern int func_001DD484(int param_1,int param_2,undefined4 param_3);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int *DAT_004e88a4;
extern int DAT_004e88b8;
extern int *DAT_004e88bc;
extern char s_SE_PL_HEART_GET_004e88a8[];

// USA 004E8860 <- EU 004E8838 (Ghidra, non-matching)
// GLOBAL DAT_004e88a4 int *
// GLOBAL DAT_004e88b8 int
// GLOBAL DAT_004e88bc int *
// GLOBAL s_SE_PL_HEART_GET_004e88a8 string

void func_004E8860(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_001DD484(*DAT_004e88a4,4,1);
  if (iVar1 != 0) {
    local_c = s_SE_PL_HEART_GET_004e88a8;
    local_10 = DAT_004e88b8;
    func_004EA104(*DAT_004e88bc,&local_10,0);
    if (*(short *)(param_1 + 0x2c) == 1) {
      func_00547514(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
  }
  return;
}

