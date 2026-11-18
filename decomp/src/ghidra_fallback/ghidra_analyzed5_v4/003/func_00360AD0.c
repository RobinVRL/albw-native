#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int DAT_00360b1c;
extern char s_SE_MediumGanonBall_SHOT_00360b04[];

// USA 00360AD0 <- EU 00360AAC (Ghidra, non-matching)
// GLOBAL DAT_00360b1c int
// GLOBAL s_SE_MediumGanonBall_SHOT_00360b04 string

bool func_00360AD0(int *param_1)

{
  bool bVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  bVar1 = (char)param_1[0x104] == '\0';
  if (bVar1) {
    local_c = s_SE_MediumGanonBall_SHOT_00360b04;
    local_10 = DAT_00360b1c;
    func_00150A84(param_1,&local_10,0);
    func_00666D48(param_1 + 0x103,1);
  }
  return bVar1;
}

