#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00158f24;
extern int DAT_00158f28;
extern int DAT_00158f2c;
extern char s_SE_Ku_V_DAMAGE_00158f3c[];
extern char s_SE_Ku_V_DIE_00158f30[];

// USA 00158EB4 <- EU 00158EB8 (Ghidra, non-matching)
// GLOBAL DAT_00158f24 int
// GLOBAL DAT_00158f28 int
// GLOBAL DAT_00158f2c int
// GLOBAL s_SE_Ku_V_DAMAGE_00158f3c string
// GLOBAL s_SE_Ku_V_DIE_00158f30 string

undefined4 func_00158EB4(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_00158f28;
  iVar1 = DAT_00158f24;
  param_1[0xf7] = DAT_00158f24;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  param_1[0x24f] = 0;
  local_10 = DAT_00158f2c;
  if (*(short *)(iVar2 + (int)param_1) < 1) {
    local_c = s_SE_Ku_V_DIE_00158f30;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_Ku_V_DAMAGE_00158f3c;
  return func_00150A84(param_1,&local_10,0);
}

