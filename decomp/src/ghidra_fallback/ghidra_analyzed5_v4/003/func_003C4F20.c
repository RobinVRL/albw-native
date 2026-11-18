#include "ghidra_types.h"

extern int func_003842C0(int param_1,int param_2,int param_3,int param_4);
extern int func_003A3568(int param_1,undefined4 param_2);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern int *DAT_003c4f84;
extern int DAT_003c4fa0;
extern int *DAT_003c4fa4;
extern char s_SE_PL_Boomerang_SHOT_003c4f88[];

// USA 003C4F20 <- EU 003C4EFC (Ghidra, non-matching)
// GLOBAL DAT_003c4f84 int *
// GLOBAL DAT_003c4fa0 int
// GLOBAL DAT_003c4fa4 int *
// GLOBAL s_SE_PL_Boomerang_SHOT_003c4f88 string

undefined4 func_003C4F20(int param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = func_004D80EC((float *)(iVar2 + 0x3d0),*(float **)(*DAT_003c4f84 + 0x1c),
                        *(int *)(iVar2 + 1000));
  *(int *)(iVar2 + 1000) = iVar1;
  *(int *)(iVar2 + 0xa1c) = iVar1;
  func_003A3568(*(int *)(param_1 + 0x48) + 0xbc8,0);
  func_003842C0(*(int *)(param_1 + 0x48) + 0x8c0,0x33,10,1);
  local_14 = s_SE_PL_Boomerang_SHOT_003c4f88;
  local_18 = DAT_003c4fa0;
  return func_004EABB8(*DAT_003c4fa4,&local_18,(undefined4 *)0x0);
}

