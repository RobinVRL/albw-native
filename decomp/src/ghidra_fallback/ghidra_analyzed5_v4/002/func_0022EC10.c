#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern int *DAT_0022ecdc;
extern int DAT_0022ece0;
extern char s_SE_Ku_V_DAMAGE_0022ed00[];
extern char s_SE_Ku_V_DIE_0022ece4[];
extern char s_SE_Zora_V_DAMAGE_0022ed10[];
extern char s_SE_Zora_V_DIE_0022ecf0[];

// USA 0022EC10 <- EU 0022EC10 (Ghidra, non-matching)
// GLOBAL DAT_0022ecdc int *
// GLOBAL DAT_0022ece0 int
// GLOBAL s_SE_Ku_V_DAMAGE_0022ed00 string
// GLOBAL s_SE_Ku_V_DIE_0022ece4 string
// GLOBAL s_SE_Zora_V_DAMAGE_0022ed10 string
// GLOBAL s_SE_Zora_V_DIE_0022ecf0 string

undefined4 func_0022EC10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = DAT_0022ece0;
  piVar1 = DAT_0022ecdc;
  if (0 < (short)param_1[0x142]) {
    iVar3 = func_00588BE4((int)param_1);
    local_18 = iVar2;
    if (iVar3 == *piVar1) {
      local_14 = s_SE_Ku_V_DAMAGE_0022ed00;
      return func_00150A84(param_1,&local_18,0);
    }
    local_14 = s_SE_Zora_V_DAMAGE_0022ed10;
    return func_00150A84(param_1,&local_18,0);
  }
  iVar3 = func_00588BE4((int)param_1);
  local_18 = iVar2;
  if (iVar3 == *piVar1) {
    local_14 = s_SE_Ku_V_DIE_0022ece4;
    return func_00150A84(param_1,&local_18,0);
  }
  local_14 = s_SE_Zora_V_DIE_0022ecf0;
  return func_00150A84(param_1,&local_18,0);
}

