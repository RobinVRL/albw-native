#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int DAT_001564d8;
extern int *DAT_001564dc;
extern int DAT_001564e0;
extern char s_SE_Crowly_V_DAMAGE_00156518[];
extern char s_SE_Crowly_V_DIE_001564f4[];
extern char s_SE_Kyune_V_DAMAGE_00156504[];
extern char s_SE_Kyune_V_DIE_001564e4[];

// USA 001563F8 <- EU 001563FC (Ghidra, non-matching)
// GLOBAL DAT_001564d8 int
// GLOBAL DAT_001564dc int *
// GLOBAL DAT_001564e0 int
// GLOBAL s_SE_Crowly_V_DAMAGE_00156518 string
// GLOBAL s_SE_Crowly_V_DIE_001564f4 string
// GLOBAL s_SE_Kyune_V_DAMAGE_00156504 string
// GLOBAL s_SE_Kyune_V_DIE_001564e4 string

undefined4 func_001563F8(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_001564d8;
  param_1[0xf7] = DAT_001564d8;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  iVar1 = DAT_001564e0;
  piVar2 = DAT_001564dc;
  if (0 < (short)param_1[0x142]) {
    iVar3 = func_00588BE4((int)param_1);
    local_18 = iVar1;
    if (iVar3 == *piVar2) {
      local_14 = s_SE_Kyune_V_DAMAGE_00156504;
      return func_00150A84(param_1,&local_18,0);
    }
    local_14 = s_SE_Crowly_V_DAMAGE_00156518;
    return func_00150A84(param_1,&local_18,0);
  }
  iVar3 = func_00588BE4((int)param_1);
  local_18 = iVar1;
  if (iVar3 == *piVar2) {
    local_14 = s_SE_Kyune_V_DIE_001564e4;
    return func_00150A84(param_1,&local_18,0);
  }
  local_14 = s_SE_Crowly_V_DIE_001564f4;
  return func_00150A84(param_1,&local_18,0);
}

