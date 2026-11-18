#include "ghidra_types.h"

extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_00533078(undefined4 param_1,int *param_2,undefined4 param_3);
extern undefined DAT_00425ab4;
extern int DAT_00425ad0;
extern int *DAT_00425ad4;
extern char s_SE_S_TALK_DECIDE_NO_00425af0[];
extern char s_SE_S_TALK_DECIDE_YES_00425ad8[];
extern char s__SE_S_TALK_SELECT_START_00425ab7[];
extern undefined4 _DAT_00425ab4;

// USA 00425A34 <- EU 00425A14 (Ghidra, non-matching)
// GLOBAL DAT_00425ab4 undefined
// GLOBAL DAT_00425ad0 int
// GLOBAL DAT_00425ad4 int *
// GLOBAL s_SE_S_TALK_DECIDE_NO_00425af0 string
// GLOBAL s_SE_S_TALK_DECIDE_YES_00425ad8 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00425A34(int param_1)

{
  float fparam_0;
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x5e) = 2;
  fparam_0 = ALBW_AS_F32(_DAT_00425ab4);
  *(undefined2 *)(param_1 + 0x5c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x5c),fparam_0);
  iVar1 = DAT_00425ad0;
  local_1c = s__SE_S_TALK_SELECT_START_00425ab7 + 1;
  local_20 = DAT_00425ad0;
  func_002DF0B0(*DAT_00425ad4,&local_20,0);
  local_18 = iVar1;
  if (*(char *)(param_1 + 0x78) != '\0') {
    local_14 = s_SE_S_TALK_DECIDE_YES_00425ad8;
    return func_00533078(param_1,&local_18,0);
  }
  local_14 = s_SE_S_TALK_DECIDE_NO_00425af0;
  return func_00533078(param_1,&local_18,0);
}

