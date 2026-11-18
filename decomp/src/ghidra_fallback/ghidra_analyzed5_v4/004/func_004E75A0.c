#include "ghidra_types.h"

extern int func_004C6654(int param_1,uint param_2);
extern int func_004EA104(int param_1,int *param_2,int param_3);
extern int func_00547514(int param_1);
extern int func_0066AA1C(undefined4 *param_1,undefined1 param_2);
extern int DAT_004e7608;
extern int *DAT_004e760c;
extern int *DAT_004e7610;
extern char s_SE_PL_FAIRY_GET_004e75f8[];

// USA 004E75A0 <- EU 004E7578 (Ghidra, non-matching)
// GLOBAL DAT_004e7608 int
// GLOBAL DAT_004e760c int *
// GLOBAL DAT_004e7610 int *
// GLOBAL s_SE_PL_FAIRY_GET_004e75f8 string

undefined4 func_004E75A0(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    local_c = s_SE_PL_FAIRY_GET_004e75f8;
    local_10 = DAT_004e7608;
    func_004EA104(*DAT_004e760c,&local_10,0);
    if (*(short *)(param_1 + 0x2c) == 1) {
      func_00547514(param_1 + 4);
    }
    if (*DAT_004e7610 != 0) {
      func_004C6654(*DAT_004e7610,0x20);
    }
    func_0066AA1C((undefined4 *)(param_1 + 0x4e4),1);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

