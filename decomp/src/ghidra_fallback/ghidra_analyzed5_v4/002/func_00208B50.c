#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern float func_004FAD90(int param_1);
extern int DAT_00208c24;
extern undefined DAT_00208c28;
extern int DAT_00208c40;
extern char s_ReactStun_00208c44[];
extern char s__SE_EN_DAMAGE_FAINT_00208c2b[];
extern undefined4 _DAT_00208c28;

// USA 00208B50 <- EU 00208B50 (Ghidra, non-matching)
// GLOBAL DAT_00208c24 int
// GLOBAL DAT_00208c28 undefined
// GLOBAL DAT_00208c40 int
// GLOBAL s_;SE_EN_DAMAGE_FAINT_00208c2b string
// GLOBAL s_ReactStun_00208c44 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00208B50(int *param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define iStack_1c (*(int *)(albw_frame + 0x14))
  iVar1 = DAT_00208c24;
  param_1[0x328] = 0;
  param_1[0x326] = iVar1;
  iVar1 = _DAT_00208c28;
  param_1[0x31c] = 0xb4;
  param_1[0x31d] = iVar1;
  param_1[0x31b] = 0;
  func_004FAD90((int)param_1);
  local_24 = s__SE_EN_DAMAGE_FAINT_00208c2b + 1;
  local_28 = DAT_00208c40;
  func_00150A84(param_1,&local_28,0);
  piVar2 = param_1 + 0x332;
  if (param_1[0xd1] == 0) {
    *piVar2 = 0;
    param_1[0x333] = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x333])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_20,param_1[0xd1],(uint *)s_ReactStun_00208c44);
    *piVar2 = local_20;
    param_1[0x333] = iStack_1c;
  }
  return func_004FABDC((int)param_1,0x1b,6,0);
}

