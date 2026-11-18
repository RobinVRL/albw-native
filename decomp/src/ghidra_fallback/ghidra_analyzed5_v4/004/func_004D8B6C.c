#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0066A3C8(undefined4 *param_1,undefined1 param_2);
extern undefined4 DAT_004d8c18;
extern undefined4 DAT_004d8c1c;
extern undefined4 DAT_004d8c20;
extern int DAT_004d8c38;
extern char s_SE_Cloud_DISAPPEAR_004d8c24[];

// USA 004D8B6C <- EU 004D8B44 (Ghidra, non-matching)
// GLOBAL DAT_004d8c18 undefined4
// GLOBAL DAT_004d8c1c undefined4
// GLOBAL DAT_004d8c20 undefined4
// GLOBAL DAT_004d8c38 int
// GLOBAL s_SE_Cloud_DISAPPEAR_004d8c24 string

void func_004D8B6C(int *param_1)

{
  bool bVar1;
  uint unaff_r6;
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
  if ((*(short *)((int)param_1 + 0x36) != 0) &&
     (bVar1 = func_00588BF0((int)param_1,0), local_68 = DAT_004d8c1c, local_64 = DAT_004d8c18, bVar1
     )) {
    *(undefined4 *)(*(int *)(param_1[0x10f] + 0x14) + 0x10) = DAT_004d8c18;
    local_70 = &local_6c;
    local_78[1] = 3;
    local_24 = 10;
    local_20 = 0;
    local_6c = 0;
    local_78[0] = 1;
    local_60 = DAT_004d8c20;
    local_58 = unaff_r6 | 0xff;
    local_5c = local_64;
    func_0016898C(param_1[0x10f],local_78);
    local_14 = s_SE_Cloud_DISAPPEAR_004d8c24;
    local_18 = DAT_004d8c38;
    func_00150A84(param_1,&local_18,0);
    func_0066A3C8(param_1 + 0x103,1);
  }
  return;
}

