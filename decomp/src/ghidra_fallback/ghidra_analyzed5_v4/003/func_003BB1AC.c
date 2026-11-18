#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_004EABB8(int param_1,int *param_2,undefined4 *param_3);
extern undefined4 DAT_003bb254;
extern undefined4 DAT_003bb258;
extern undefined4 DAT_003bb25c;
extern int DAT_003bb260;
extern int *DAT_003bb264;
extern int DAT_003bb268;
extern char s_SE_PL_TornadeRod_BLOWUP_003bb288[];
extern char s_SE_PL_TornadeRod_BLOWUP_Lv2_003bb26c[];

// USA 003BB1AC <- EU 003BB188 (Ghidra, non-matching)
// GLOBAL DAT_003bb254 undefined4
// GLOBAL DAT_003bb258 undefined4
// GLOBAL DAT_003bb25c undefined4
// GLOBAL DAT_003bb260 int
// GLOBAL DAT_003bb264 int *
// GLOBAL DAT_003bb268 int
// GLOBAL s_SE_PL_TornadeRod_BLOWUP_003bb288 string
// GLOBAL s_SE_PL_TornadeRod_BLOWUP_Lv2_003bb26c string

undefined4 func_003BB1AC(int param_1)

{
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
  local_68 = DAT_003bb258;
  local_64 = DAT_003bb254;
  local_60 = DAT_003bb25c;
  local_58 = in_r12 | 0xff;
  local_5c = DAT_003bb254;
  func_0016898C(*(int *)(param_1 + 0x38),local_78);
  local_18 = DAT_003bb268;
  if ('\x01' < *(char *)(*(int *)(param_1 + 4) + DAT_003bb260)) {
    local_14 = s_SE_PL_TornadeRod_BLOWUP_Lv2_003bb26c;
    return func_004EABB8(*DAT_003bb264,&local_18,(undefined4 *)0x0);
  }
  local_14 = s_SE_PL_TornadeRod_BLOWUP_003bb288;
  return func_004EABB8(*DAT_003bb264,&local_18,(undefined4 *)0x0);
}

