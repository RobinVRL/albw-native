#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00338DD0(int param_1,int param_2);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined DAT_003390c0;
extern int DAT_003390dc;
extern char s_SE_WindowSunlight_SHINE_UNDER_003390e8[];
extern char s_Switch_003390e0[];
extern char s_cf_003390c4[];
extern undefined4 _DAT_003390c0;

// USA 00339034 <- EU 00339010 (Ghidra, non-matching)
// GLOBAL DAT_003390c0 undefined
// GLOBAL DAT_003390dc int
// GLOBAL s_SE_WindowSunlight_SHINE_UNDER_003390e8 string
// GLOBAL s_Switch_003390e0 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00339034(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define aiStack_18 ((int *)(albw_frame + 0x18))
  func_00338DD0((int)param_1,*(ushort *)((int)param_1 + 0x2e) + 1 & 0xff);
  iVar1 = _DAT_003390c0;
  param_1[0x132] = 0x2d;
  param_1[0x133] = iVar1;
  param_1[0x131] = 0;
  func_00588C14((int)param_1,0,1);
  iVar1 = DAT_003390dc;
  local_24 = s_cf_003390c4;
  local_28 = DAT_003390dc;
  func_00150A84(param_1,&local_28,0);
  if ((char)param_1[0x134] != '\0') {
    if (param_1[0xd1] != 0) {
      func_004A1B9C(aiStack_18,param_1[0xd1],(uint *)s_Switch_003390e0);
    }
    local_1c = s_SE_WindowSunlight_SHINE_UNDER_003390e8;
    local_20 = iVar1;
    func_00150A84(param_1,&local_20,0);
  }
  return;
}

