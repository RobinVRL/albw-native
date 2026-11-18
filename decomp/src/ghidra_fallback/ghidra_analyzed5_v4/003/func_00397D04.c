#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002B7E1C(int param_1);
extern int func_003974A0(int param_1,undefined4 param_2);
extern int func_004CD1D8(int param_1,int param_2,int param_3);
extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int func_0055A360(int param_1);
extern int *DAT_00397dac;
extern int DAT_00397dd0;
extern int *DAT_00397dd4;
extern char s_SE_CrossOldMan_V_MEDICINE_PURPRE_00397dd8[];
extern char s_SE_PL_MEDICINE_PURPRE_EXPLOSION_00397db0[];

// USA 00397D04 <- EU 00397CE0 (Ghidra, non-matching)
// GLOBAL DAT_00397dac int *
// GLOBAL DAT_00397dd0 int
// GLOBAL DAT_00397dd4 int *
// GLOBAL s_SE_CrossOldMan_V_MEDICINE_PURPRE_00397dd8 string
// GLOBAL s_SE_PL_MEDICINE_PURPRE_EXPLOSION_00397db0 string

undefined4 func_00397D04(int param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (param_2 == 0x12) {
    func_002B7E1C(*(int *)(param_1 + 4));
  }
  else if (param_2 == 0x13) {
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = func_0055A360(iVar2 + 0xbd4);
    func_004CD1D8(*DAT_00397dac,iVar2,(uint)uVar1);
    iVar2 = DAT_00397dd0;
    local_1c = s_SE_PL_MEDICINE_PURPRE_EXPLOSION_00397db0;
    local_20 = DAT_00397dd0;
    func_004EABB8(*DAT_00397dd4,&local_20,(undefined4 *)0x0);
    if (**(char **)(*(int *)(param_1 + 4) + 0x8bc) != '\0') {
      local_14 = s_SE_CrossOldMan_V_MEDICINE_PURPRE_00397dd8;
      local_18 = iVar2;
      func_00150A84(*(int **)(param_1 + 4),&local_18,0);
    }
    goto LAB_00397d94;
  }
  func_003974A0(param_1,0);
LAB_00397d94:
  return func_004CEA18(*(int *)(param_1 + 0x34),0,1);
}

