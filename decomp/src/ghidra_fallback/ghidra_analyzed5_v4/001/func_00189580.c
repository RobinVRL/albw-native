#include "ghidra_types.h"

extern int func_0019B04C(uint param_1);
extern int func_002DFF7C(undefined4 *param_1);
extern int func_004C4AF4(int param_1,int *param_2,int param_3);
extern int func_004E97FC(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_00581D60(int param_1);
extern uint *DAT_00189684;
extern int *DAT_00189688;
extern int *DAT_0018968c;
extern undefined4 DAT_00189690;
extern int *DAT_001896a4;
extern char s_SE_BombS_SET_00189694[];
extern char s_SE_BombS_SET_Lv2_001896a8[];

// USA 00189580 <- EU 00189580 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// GLOBAL DAT_00189684 uint *
// GLOBAL DAT_00189688 int *
// GLOBAL DAT_0018968c int *
// GLOBAL DAT_00189690 undefined4
// GLOBAL DAT_001896a4 int *
// GLOBAL s_SE_BombS_SET_00189694 string
// GLOBAL s_SE_BombS_SET_Lv2_001896a8 string

int * func_00189580(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                   int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x2f0];
  #define local_2f0 (*(int *)(albw_frame + 0x0))
  #define local_2ec (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_2e8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_2e4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_2d4 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_2d0 (*(undefined4 *)(albw_frame + 0x20))
  #define local_2cc (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c8 (*(undefined2 *)(albw_frame + 0x28))
  #define local_2c6 (*(undefined2 *)(albw_frame + 0x2a))
  #define local_2c4 (*(undefined2 *)(albw_frame + 0x2c))
  #define local_2a8 (*(undefined4 *)(albw_frame + 0x48))
  #define local_2a4 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_2a0 (*(undefined2 *)(albw_frame + 0x50))
  #define local_30 (*(uint *)(albw_frame + 0x2c0))
  #define local_28 (*(undefined4 *)(albw_frame + 0x2c8))
  #define local_24 (*(char * *)(albw_frame + 0x2cc))
  local_2d0 = 0;
  local_2cc = 0;
  local_2d4 = 0;
  local_2a8 = 0;
  local_2a4 = 0;
  local_30 = 0;
  func_002DFF7C(&local_2f0);
  local_2f0 = func_0019B04C(*DAT_00189684);
  local_2a4 = *param_4;
  local_2ec = *param_1;
  uStack_2e8 = param_1[1];
  uStack_2e4 = param_1[2];
  uVar1 = local_2ec;
  if (param_3 == 0) {
    uVar1 = 0xffffffff;
  }
  local_2a0 = (undefined2)uVar1;
  local_2c8 = 0;
  local_2c6 = (undefined2)param_5;
  local_2c4 = (undefined2)param_3;
  local_2d0 = param_2;
  if (param_3 != 0) {
    uVar1 = func_00581D60(*DAT_00189688);
    local_2a0 = (undefined2)uVar1;
  }
  local_30 = local_30 | 1;
  local_28 = DAT_00189690;
  if (param_5 == 3) {
    local_24 = s_SE_BombS_SET_Lv2_001896a8;
    func_004E97FC(*DAT_0018968c,&local_28,param_1);
  }
  else {
    local_24 = s_SE_BombS_SET_00189694;
    func_004E97FC(*DAT_0018968c,&local_28,param_1);
  }
  piVar2 = func_004C4AF4(*DAT_001896a4,&local_2f0,0);
  return piVar2;
}

