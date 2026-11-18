// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_004EC238(int param_1,int *param_2);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern int DAT_004ebbd8;
extern uint DAT_004ebbdc;
extern char s_SE_PL_LANDING_004ebbc8[];

// USA 004EBB58 <- EU 004EBB30 (Ghidra, non-matching)
// GLOBAL DAT_004ebbd8 int
// GLOBAL DAT_004ebbdc uint
// GLOBAL s_SE_PL_LANDING_004ebbc8 string

undefined4 func_004EBB58(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_c8 ((undefined4 *)(albw_frame + 0x8))
  #define aiStack_68 ((int *)(albw_frame + 0x68))
  #define local_18 (*(int *)(albw_frame + 0xb8))
  #define local_14 (*(char * *)(albw_frame + 0xbc))
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_14 = s_SE_PL_LANDING_004ebbc8;
    local_18 = DAT_004ebbd8;
    func_00688F58(aiStack_68,&local_18);
    func_004EC238(param_1,aiStack_68);
    if (*(int *)(param_1 + 0x5c) == 0) {
      uVar1 = 0;
    }
    else {
      func_0010A464(auStack_c8);
      func_0025B7D8((int)auStack_c8,DAT_004ebbdc);
      uVar1 = func_00150A84(*(int **)(param_1 + 0x5c),aiStack_68,(int)auStack_c8);
      func_0025B874(auStack_c8);
    }
  }
  return uVar1;
}

