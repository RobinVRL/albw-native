#include "ghidra_types.h"

extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern int DAT_002abf64;
extern char s_SE_EN_DAMAGE_002abf68[];
extern char s_SE_EN_DAMAGE_FIRE_002abf78[];
extern char s_SE_EN_DAMAGE_ICE_002abfa4[];
extern char s_SE_EN_DAMAGE_TORNADE_002abf8c[];

// USA 002ABEC8 <- EU 002ABEA4 (Ghidra, non-matching)
// GLOBAL DAT_002abf64 int
// GLOBAL s_SE_EN_DAMAGE_002abf68 string
// GLOBAL s_SE_EN_DAMAGE_FIRE_002abf78 string
// GLOBAL s_SE_EN_DAMAGE_ICE_002abfa4 string
// GLOBAL s_SE_EN_DAMAGE_TORNADE_002abf8c string

undefined4 func_002ABEC8(int *param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  cVar1 = *(char *)(param_2 + 0x24);
  if (cVar1 == '\x01' || *(char *)(param_2 + 0x25) == '\x01') {
    local_c = s_SE_EN_DAMAGE_FIRE_002abf78;
    local_10 = DAT_002abf64;
    uVar2 = func_0014DBF4(param_1,&local_10,param_2,0);
    return uVar2;
  }
  if (cVar1 != '\v') {
    local_10 = DAT_002abf64;
    if (cVar1 != '\x02') {
      local_c = s_SE_EN_DAMAGE_002abf68;
      uVar2 = func_0014DBF4(param_1,&local_10,param_2,0);
      return uVar2;
    }
    local_c = s_SE_EN_DAMAGE_ICE_002abfa4;
    uVar2 = func_0014DBF4(param_1,&local_10,param_2,0);
    return uVar2;
  }
  local_c = s_SE_EN_DAMAGE_TORNADE_002abf8c;
  local_10 = DAT_002abf64;
  uVar2 = func_0014DBF4(param_1,&local_10,param_2,0);
  return uVar2;
}

