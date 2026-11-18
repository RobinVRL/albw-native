// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern uint DAT_004ec498;
extern int DAT_004ec49c;
extern char s_SE_PL_HookShot_RELEASE_004ec4bc[];
extern char s_SE_PL_HookShot_RELEASE_Lv2_004ec4a0[];

// USA 004EC410 <- EU 004EC3E8 (Ghidra, non-matching)
// GLOBAL DAT_004ec498 uint
// GLOBAL DAT_004ec49c int
// GLOBAL s_SE_PL_HookShot_RELEASE_004ec4bc string
// GLOBAL s_SE_PL_HookShot_RELEASE_Lv2_004ec4a0 string

undefined4 func_004EC410(int param_1)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define auStack_78 ((undefined4 *)(albw_frame + 0x8))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  #define local_10 (*(int *)(albw_frame + 0x70))
  #define local_c (*(char * *)(albw_frame + 0x74))
  uVar1 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    func_0010A464(auStack_78);
    func_0025B7D8((int)auStack_78,DAT_004ec498);
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x1128) < '\x02') {
      local_18 = DAT_004ec49c;
      local_14 = s_SE_PL_HookShot_RELEASE_004ec4bc;
      uVar1 = func_001507D8(*(int *)(param_1 + 0x5c),&local_18,(int)auStack_78);
      func_0025B874(auStack_78);
      return uVar1;
    }
    local_10 = DAT_004ec49c;
    local_c = s_SE_PL_HookShot_RELEASE_Lv2_004ec4a0;
    uVar1 = func_001507D8(*(int *)(param_1 + 0x5c),&local_10,(int)auStack_78);
    func_0025B874(auStack_78);
  }
  return uVar1;
}

