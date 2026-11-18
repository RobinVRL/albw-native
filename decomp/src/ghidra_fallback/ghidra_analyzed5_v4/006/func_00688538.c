#include "ghidra_types.h"

extern int func_0010CF28(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003BC2F0(int param_1,int *param_2,int *param_3);
extern int DAT_00688574;
extern char s_CapFader_UraOmote_00688560[];

// USA 00688538 <- EU 00688510 (Ghidra, non-matching)
// GLOBAL DAT_00688574 int
// GLOBAL s_CapFader_UraOmote_00688560 string

void func_00688538(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = func_0010CF28(0x210,*(int **)(*param_1 + *(int *)(*param_1 + 0x14) * 4),4);
  if (iVar1 != 0) {
    local_c = s_CapFader_UraOmote_00688560;
    local_10 = DAT_00688574;
    func_003BC2F0(iVar1,param_1,&local_10);
  }
  return;
}

