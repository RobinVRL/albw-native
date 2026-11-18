#include "ghidra_types.h"

extern int func_002DF0B0(int param_1,int *param_2,int param_3);
extern int func_004E97BC(int param_1,int *param_2,int param_3,int *param_4);
extern int func_00540304(int param_1);
extern int *DAT_0025a468;
extern int *DAT_0025a46c;
extern int DAT_0025a470;
extern char s_SE_ENV_FOREST_SWORD_0025a474[];

// USA 0025A374 <- EU 0025A39C (Ghidra, non-matching)
// GLOBAL DAT_0025a468 int *
// GLOBAL DAT_0025a46c int *
// GLOBAL DAT_0025a470 int
// GLOBAL s_SE_ENV_FOREST_SWORD_0025a474 string

void func_0025A374(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar2 = DAT_0025a470;
  piVar1 = DAT_0025a46c;
  if (*DAT_0025a468 != 0) {
    iVar3 = *(int *)(*DAT_0025a468 + 0x44);
    if (*(int *)(param_1 + 0x54) == 0) {
      if ((iVar3 == 0) && (iVar3 = func_00540304(*DAT_0025a46c), iVar3 == 0)) {
        local_1c = s_SE_ENV_FOREST_SWORD_0025a474;
        local_20 = iVar2;
        func_004E97BC(*piVar1,&local_20,param_1 + 0x78,param_4);
        *(undefined4 *)(param_1 + 0x54) = 1;
      }
    }
    else if ((iVar3 != 0) || (iVar3 = func_00540304(*DAT_0025a46c), iVar3 != 0)) {
      local_1c = s_SE_ENV_FOREST_SWORD_0025a474;
      local_20 = iVar2;
      func_002DF0B0(*piVar1,&local_20,0x78);
      *(undefined4 *)(param_1 + 0x54) = 0;
      return;
    }
  }
  return;
}

