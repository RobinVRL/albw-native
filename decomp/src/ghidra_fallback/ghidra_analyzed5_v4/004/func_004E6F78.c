#include "ghidra_types.h"

extern int func_002B9EA4(int param_1,int param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_00547514(int param_1);
extern int func_0066AA1C(undefined4 *param_1,undefined1 param_2);
extern int DAT_004e6ffc;
extern int *DAT_004e7000;
extern char s_SE_PL_FAIRY_GET_004e6fec[];

// USA 004E6F78 <- EU 004E6F50 (Ghidra, non-matching)
// GLOBAL DAT_004e6ffc int
// GLOBAL DAT_004e7000 int *
// GLOBAL s_SE_PL_FAIRY_GET_004e6fec string

undefined4 func_004E6F78(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if ((*(char *)(param_1 + 0x4e8) == '\0') && (param_2 != 0)) {
    func_002B9EA4(param_2,0x14);
    local_14 = s_SE_PL_FAIRY_GET_004e6fec;
    local_18 = DAT_004e6ffc;
    func_004EABB8(*DAT_004e7000,&local_18,(undefined4 *)0x0);
    if (*(short *)(param_1 + 0x2c) == 1) {
      func_00547514(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x563) = 1;
    *(undefined4 *)(param_1 + 0x508) = *(undefined4 *)(param_2 + 0x2cc);
    func_0066AA1C((undefined4 *)(param_1 + 0x4e4),1);
    return 1;
  }
  return 0;
}

