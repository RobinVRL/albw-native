#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00520FC0(void);
extern int func_0065D630(undefined4 *param_1,undefined1 param_2);
extern int DAT_0020e3a0;
extern undefined4 DAT_0020e3a4;
extern int DAT_0020e3a8;

// USA 0020E30C <- EU 0020E30C (Ghidra, non-matching)
// GLOBAL DAT_0020e3a0 int
// GLOBAL DAT_0020e3a4 undefined4
// GLOBAL DAT_0020e3a8 int

undefined4 func_0020E30C(int *param_1)

{
  float *pfVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  pfVar1 = (float *)func_00520FC0();
  if ((int)ALBW_AS_U32(SQRT((ALBW_AS_F32(param_1[0xf4]) - *pfVar1) * (ALBW_AS_F32(param_1[0xf4]) - *pfVar1) +
                (ALBW_AS_F32(param_1[0xf6]) - pfVar1[2]) * (ALBW_AS_F32(param_1[0xf6]) - pfVar1[2]))) <
      DAT_0020e3a0) {
    return func_0065D630(param_1 + 0x22f,0x24);
  }
  func_0065D630(param_1 + 0x22f,0x15);
  param_1[0x2f2] = 0;
  local_c = DAT_0020e3a4;
  local_10 = DAT_0020e3a8;
  return func_00150A84(param_1,&local_10,0);
}

