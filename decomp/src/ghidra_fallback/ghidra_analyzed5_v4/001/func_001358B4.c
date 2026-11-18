// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00361658();
extern int func_004EBB28(int param_1,int *param_2,int param_3);
extern undefined4 DAT_0013597c;
extern undefined4 DAT_00135980;
extern undefined4 DAT_00135984;
extern int *DAT_00135988;
extern int DAT_001359a4;
extern undefined4 *DAT_001359a8;
extern int *DAT_001359ac;
extern char s_SE_Barrier_VANISH_FIN_0013598c[];

// USA 001358B4 <- EU 001358B4 (Ghidra, non-matching)
// GLOBAL DAT_0013597c undefined4
// GLOBAL DAT_00135980 undefined4
// GLOBAL DAT_00135984 undefined4
// GLOBAL DAT_00135988 int *
// GLOBAL DAT_001359a4 int
// GLOBAL DAT_001359a8 undefined4 *
// GLOBAL DAT_001359ac int *
// GLOBAL s_SE_Barrier_VANISH_FIN_0013598c string

undefined4 func_001358B4(int *param_1)

{
  int iVar1;
  uint in_r12;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  #define local_18 (*(int *)(albw_frame + 0x68))
  #define local_14 (*(char * *)(albw_frame + 0x6c))
  local_78[1] = 3;
  local_70 = &local_6c;
  local_24 = 10;
  local_20 = 0;
  local_78[0] = 1;
  local_6c = 0;
  local_68 = DAT_00135980;
  local_64 = DAT_0013597c;
  local_60 = DAT_00135984;
  local_58 = in_r12 | 0xff;
  local_5c = DAT_0013597c;
  func_0016898C(param_1[0x13d],local_78);
  func_00361658(*DAT_00135988);
  iVar1 = DAT_001359a4;
  local_14 = s_SE_Barrier_VANISH_FIN_0013598c;
  local_18 = DAT_001359a4;
  func_00150A84(param_1,&local_18,0);
  local_14 = (char *)*DAT_001359a8;
  local_18 = iVar1;
  return func_004EBB28(*DAT_001359ac,&local_18,0);
}

