#include "ghidra_types.h"

extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004EB658(int param_1,int *param_2,undefined4 param_3);
extern int DAT_00399bcc;
extern int *DAT_00399bd0;
extern char s_SE_PL_Shield_GARD_00399bb8[];
extern char s_Shield_00399bd4[];

// USA 00399B7C <- EU 00399B58 (Ghidra, non-matching)
// GLOBAL DAT_00399bcc int
// GLOBAL DAT_00399bd0 int *
// GLOBAL s_SE_PL_Shield_GARD_00399bb8 string
// GLOBAL s_Shield_00399bd4 string

undefined4 func_00399B7C(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  local_1c = s_SE_PL_Shield_GARD_00399bb8;
  local_20 = DAT_00399bcc;
  func_004EB658(*DAT_00399bd0,&local_20,param_2 + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x344);
  if (iVar1 != 0) {
    func_004A1B9C(aiStack_18,iVar1,(uint *)s_Shield_00399bd4);
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x28);
  return 0;
}

