#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_001a97b0;
extern int DAT_001a97b4;
extern int DAT_001a97b8;
extern char s_SE_Ku_V_DAMAGE_001a97c8[];
extern char s_SE_Ku_V_DIE_001a97bc[];

// USA 001A9744 <- EU 001A9744 (Ghidra, non-matching)
// GLOBAL DAT_001a97b0 int
// GLOBAL DAT_001a97b4 int
// GLOBAL DAT_001a97b8 int
// GLOBAL s_SE_Ku_V_DAMAGE_001a97c8 string
// GLOBAL s_SE_Ku_V_DIE_001a97bc string

undefined4 func_001A9744(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_001a97b4;
  iVar1 = DAT_001a97b0;
  param_1[0xf7] = DAT_001a97b0;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  param_1[0x251] = 0;
  local_10 = DAT_001a97b8;
  if (*(short *)(iVar2 + (int)param_1) < 1) {
    local_c = s_SE_Ku_V_DIE_001a97bc;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_Ku_V_DAMAGE_001a97c8;
  return func_00150A84(param_1,&local_10,0);
}

