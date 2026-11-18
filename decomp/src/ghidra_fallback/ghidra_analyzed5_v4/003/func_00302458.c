#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int DAT_00302498;
extern int DAT_0030249c;
extern int DAT_003024a0;
extern char s_SE_Crowly_V_DAMAGE_003024b4[];
extern char s_SE_Crowly_V_DIE_003024a4[];

// USA 00302458 <- EU 00302434 (Ghidra, non-matching)
// GLOBAL DAT_00302498 int
// GLOBAL DAT_0030249c int
// GLOBAL DAT_003024a0 int
// GLOBAL s_SE_Crowly_V_DAMAGE_003024b4 string
// GLOBAL s_SE_Crowly_V_DIE_003024a4 string

undefined4 func_00302458(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_0030249c;
  iVar1 = DAT_00302498;
  param_1[0xf7] = DAT_00302498;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  local_10 = DAT_003024a0;
  if (*(short *)(iVar2 + (int)param_1) < 1) {
    local_c = s_SE_Crowly_V_DIE_003024a4;
    return func_00150A84(param_1,&local_10,0);
  }
  local_c = s_SE_Crowly_V_DAMAGE_003024b4;
  return func_00150A84(param_1,&local_10,0);
}

