#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EC00(int param_1,undefined4 *param_2,undefined4 param_3,int param_4);
extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_00547514(int param_1);
extern float DAT_004f4a20;
extern float DAT_004f4a24;

// USA 004F499C <- EU 004F4974 (Ghidra, non-matching)
// GLOBAL DAT_004f4a20 float
// GLOBAL DAT_004f4a24 float

void func_004F499C(int param_1,int param_2)

{
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  #define local_18 (*(float *)(albw_frame + 0x18))
  #define fStack_14 (*(float *)(albw_frame + 0x1c))
  #define local_10 (*(float *)(albw_frame + 0x20))
  if (param_2 != 0) {
    fStack_14 = *(float *)(param_1 + 0x854) + DAT_004f4a24;
    local_18 = DAT_004f4a20;
    local_10 = DAT_004f4a20;
    if (*(byte *)(param_1 + 0x780) < 0x19) {
      local_24 = *(float *)(param_1 + 0x3d0);
      uStack_20 = *(undefined4 *)(param_1 + 0x3d4);
      uStack_1c = *(undefined4 *)(param_1 + 0x3d8);
      func_00115C54(&local_24,&local_24,&local_18);
      func_0014EC00(param_1,&local_24,*(undefined4 *)(param_1 + 1000),
                    (int)*(char *)(param_1 + 0x780));
    }
    else {
      func_0014FD6C(param_1,&local_18,*(undefined4 *)(param_1 + 1000));
    }
  }
  if (*(short *)(param_1 + 0x2c) == 1) {
    func_00547514(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 0x2d7) = 1;
  return;
}

