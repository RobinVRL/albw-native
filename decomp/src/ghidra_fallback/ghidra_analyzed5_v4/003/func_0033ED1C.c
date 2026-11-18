#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int DAT_0033ed9c;
extern int DAT_0033eda0;
extern undefined DAT_0033eda4;
extern int DAT_0033edc0;
extern char s_SE_OBJ_FALL_LAVA_0033edac[];

// USA 0033ED1C <- EU 0033ECF8 (Ghidra, non-matching)
// GLOBAL DAT_0033ed9c int
// GLOBAL DAT_0033eda0 int
// GLOBAL DAT_0033eda4 undefined
// GLOBAL DAT_0033edc0 int
// GLOBAL s_SE_OBJ_FALL_LAVA_0033edac string

undefined4 func_0033ED1C(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define iStack_24 (*(int *)(albw_frame + 0xc))
  #define local_1c (*(int *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(int *)(albw_frame + 0x1c))
  #define local_10 (*(int *)(albw_frame + 0x20))
  #define local_c (*(char * *)(albw_frame + 0x24))
  iVar2 = DAT_0033eda0;
  iVar1 = DAT_0033ed9c;
  param_1[0xf7] = DAT_0033ed9c;
  param_1[0xf8] = iVar2;
  param_1[0xf9] = iVar1;
  if (param_1[0xd1] == 0) {
    iStack_24 = 0;
    local_28 = 0;
  }
  else {
    func_004A1B9C(&local_28,param_1[0xd1],(uint *)&DAT_0033eda4);
  }
  if ((local_28 != 0) && (*(int *)(local_28 + 0x1c) == iStack_24)) {
    local_1c = param_1[0xf4];
    local_18 = param_1[0x132];
    local_14 = param_1[0xf6];
    func_004A2F38(local_28,&local_1c);
  }
  local_c = s_SE_OBJ_FALL_LAVA_0033edac;
  local_10 = DAT_0033edc0;
  return func_00150A84(param_1,&local_10,0);
}

