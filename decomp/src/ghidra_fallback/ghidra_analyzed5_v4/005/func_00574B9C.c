#include "ghidra_types.h"

extern int func_004077E4(int param_1,float *param_2);
extern float DAT_00574c2c;
extern int DAT_00574c30;
extern float DAT_00574c34;

// USA 00574B9C <- EU 00574B74 (Ghidra, non-matching)
// GLOBAL DAT_00574c2c float
// GLOBAL DAT_00574c30 int
// GLOBAL DAT_00574c34 float

undefined4 func_00574B9C(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(float *)(albw_frame + 0x0))
  #define fStack_c (*(float *)(albw_frame + 0x4))
  if (*(char *)(param_1 + 0xb4) == '\x01') {
    local_10 = *(float *)(*(int *)(param_1 + 0x11c) + 0x1c);
    fStack_c = *(float *)(*(int *)(param_1 + 0x11c) + 0x20);
    if ((((((uint)ALBW_AS_U32(DAT_00574c2c) < (uint)ALBW_AS_U32(local_10)) || (DAT_00574c30 < (int)ALBW_AS_U32(local_10))) ||
         (DAT_00574c30 + 0x3e0000 < (int)ALBW_AS_U32((fStack_c + *(float *)(*(int *)(param_1 + 0x118) + 0x20)))))
        || ((uint)ALBW_AS_U32(DAT_00574c34) < (uint)ALBW_AS_U32(fStack_c))) &&
       (((iVar1 = func_004077E4(*(int *)(param_1 + 0x128),&local_10), iVar1 == 0 &&
         (*(char *)(*(int *)(param_1 + 300) + 0x15c) == '\x02')) &&
        (*(char *)(param_1 + 0xd5) != '\0')))) {
      return 1;
    }
  }
  return 0;
}

