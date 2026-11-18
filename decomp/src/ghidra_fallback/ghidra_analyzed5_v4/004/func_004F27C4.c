#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern float func_004FAD90(int param_1);
extern int DAT_004f2810;
extern int DAT_004f2828;
extern char s_SE_IceGimos_MELT_004f2814[];

// USA 004F27C4 <- EU 004F279C (Ghidra, non-matching)
// GLOBAL DAT_004f2810 int
// GLOBAL DAT_004f2828 int
// GLOBAL s_SE_IceGimos_MELT_004f2814 string

undefined4 func_004F27C4(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_004f2810;
  param_1[0xf9] = DAT_004f2810;
  param_1[0xf7] = iVar1;
  *(undefined1 *)(param_1[0x233] + 0x44) = 0;
  *(undefined1 *)(param_1[0x234] + 0x44) = 0;
  func_004FAD90((int)param_1);
  local_18 = DAT_004f2828;
  param_1[0x167] = param_1[0x167] & 0xffffff5fU | 0x4000;
  *(undefined1 *)(param_1 + 0x216) = 0;
  local_14 = s_SE_IceGimos_MELT_004f2814;
  return func_00150A84(param_1,&local_18,0);
}

