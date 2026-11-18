#include "ghidra_types.h"

extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00663578(undefined4 *param_1,undefined1 param_2);
extern uint DAT_002c9434;
extern char s_SE_SwitchCandle_OFF_002c9420[];

// USA 002C93B8 <- EU 002C9394 (Ghidra, non-matching)
// GLOBAL DAT_002c9434 uint
// GLOBAL s_SE_SwitchCandle_OFF_002c9420 string

/* WARNING: Variable defined which should be unmapped: objStack_10 */

void func_002C93B8(int *param_1)

{
  _Alignas(8) unsigned char albw_frame[0x10];
  #define objStack_10 ((uint *)(albw_frame + 0x0))
  objStack_10[0] = 0;
  objStack_10[1] = 0;
  func_0014E2A0((int)param_1,param_1[0x10e],param_1 + 0x116,0x1200,0,0);
  if ((((char)param_1[0x113] == '\0') && (*(char *)((int)param_1 + 0x479) == '\0')) &&
     (600 < param_1[0x103])) {
    func_00663578(param_1 + 0x103,0);
    objStack_10[1] = (uint)s_SE_SwitchCandle_OFF_002c9420;
    objStack_10[0] = DAT_002c9434;
    func_00150A84(param_1,(int *)objStack_10,0);
  }
  return;
}

