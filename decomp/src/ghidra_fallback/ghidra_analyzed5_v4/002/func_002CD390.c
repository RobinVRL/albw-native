#include "ghidra_types.h"

extern int func_0016898C(int param_1,uint *param_2);
extern int func_004CF478(int param_1,int param_2);
extern float DAT_002cd4b0;
extern undefined4 DAT_002cd4b4;
extern undefined4 DAT_002cd4b8;

// USA 002CD390 <- EU 002CD36C (Ghidra, non-matching)
// GLOBAL DAT_002cd4b0 float
// GLOBAL DAT_002cd4b4 undefined4
// GLOBAL DAT_002cd4b8 undefined4

undefined4 func_002CD390(int *param_1,int param_2)

{
  int iVar1;
  uint in_r12;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((uint *)(albw_frame + 0x8))
  #define local_70 (*(undefined4 * *)(albw_frame + 0x10))
  #define local_6c (*(undefined4 *)(albw_frame + 0x14))
  #define local_68 (*(float *)(albw_frame + 0x18))
  #define local_64 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_60 (*(undefined4 *)(albw_frame + 0x20))
  #define local_5c (*(undefined4 *)(albw_frame + 0x24))
  #define local_58 (*(uint *)(albw_frame + 0x28))
  #define local_24 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_20 (*(undefined1 *)(albw_frame + 0x60))
  if (param_2 == 1) {
    fVar2 = DAT_002cd4b0;
    (**(code **)(*param_1 + 0xac))(param_1,2,0xffffffff);
    local_70 = &local_6c;
    local_78[1] = 3;
    local_24 = 0;
    local_20 = 0;
    local_78[0] = 1;
    local_6c = 0;
    local_64 = DAT_002cd4b4;
    local_60 = DAT_002cd4b8;
    local_58 = in_r12 | 0xff;
    local_5c = DAT_002cd4b4;
    local_68 = fVar2;
    func_0016898C(param_1[0x264],local_78);
  }
  else if (param_2 == 2) {
    iVar1 = *(int *)(param_1[0x1eb] + 0x14);
    if (*(char *)(iVar1 + 0x1c) != '\0') {
      return 0;
    }
    if (*(float *)(iVar1 + 0x10) < DAT_002cd4b0) {
      if (DAT_002cd4b0 < *(float *)(iVar1 + 8)) {
        return 0;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return 0;
    }
    func_004CF478(param_1[0x263],0);
    (**(code **)(*param_1 + 0xac))(param_1,5,0xffffffff);
    *(undefined1 *)((int)param_1 + 0x855) = 5;
  }
  return 1;
}

