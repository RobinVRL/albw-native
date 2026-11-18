#include "ghidra_types.h"

extern int func_0010B954(int param_1,int param_2,int *param_3,int param_4,int param_5);
extern int func_001E0C5C(int param_1,int param_2);
extern int func_001E0F00(int param_1,uint param_2);
extern undefined4 DAT_001e1834;
extern char s_Res_Get_001e182c[];
extern char s_Res_LinkAnm2_001e1848[];
extern char s_Res_PlayerItem_001e1838[];
extern char s_cf_001e182c[];
extern char s_cf_001e1838[];
extern char s_cf_001e1848[];

// USA 001E1750 <- EU 001E1750 (Ghidra, non-matching)
// GLOBAL DAT_001e1834 undefined4
// GLOBAL s_cf_001e182c string
// GLOBAL s_cf_001e1848 string
// GLOBAL s_cf_001e1838 string

void func_001E1750(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  func_001E0F00(param_1,1);
  func_001E0C5C(param_1,1);
  uVar1 = DAT_001e1834;
  puVar3 = (undefined4 *)(param_1 + 0x1fa8);
  local_24 = s_Res_Get_001e182c;
  local_28 = DAT_001e1834;
  piVar2 = func_0010B954(0xf000,(int)&local_28,(int *)*puVar3,1,0);
  *(int **)(param_1 + 0x1628) = piVar2;
  *(undefined4 *)(param_1 + 0x1634) = 0;
  local_24 = s_Res_PlayerItem_001e1838;
  local_28 = uVar1;
  piVar2 = func_0010B954(0xb4000,(int)&local_28,(int *)*puVar3,1,0);
  *(int **)(param_1 + 0x1950) = piVar2;
  *(undefined4 *)(param_1 + 0x195c) = 0;
  local_24 = s_Res_LinkAnm2_001e1848;
  local_28 = uVar1;
  piVar2 = func_0010B954(0x18000,(int)&local_28,(int *)*puVar3,1,0);
  *(int **)(param_1 + 0x1c78) = piVar2;
  *(undefined4 *)(param_1 + 0x1c84) = 0;
  return;
}

