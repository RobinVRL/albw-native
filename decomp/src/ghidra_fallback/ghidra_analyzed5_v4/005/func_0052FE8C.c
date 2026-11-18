#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_004D7F70(float *param_1,uint param_2);
extern int *DAT_0052ff94;
extern float *DAT_0052ff98;
extern int DAT_0052ff9c;
extern float DAT_0052ffa0;
extern int DAT_0052ffa4;

// USA 0052FE8C <- EU 0052FE64 (Ghidra, non-matching)
// GLOBAL DAT_0052ff94 int *
// GLOBAL DAT_0052ff98 float *
// GLOBAL DAT_0052ff9c int
// GLOBAL DAT_0052ffa0 float
// GLOBAL DAT_0052ffa4 int

undefined4 func_0052FE8C(int param_1)

{
  int *piVar1;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define local_1c (*(float *)(albw_frame + 0x24))
  #define fStack_18 (*(float *)(albw_frame + 0x28))
  #define fStack_14 (*(float *)(albw_frame + 0x2c))
  piVar1 = DAT_0052ff94;
  if (((*(float *)(param_1 + 0x480) != *(float *)(param_1 + 0x4a4)) &&
      (*(float *)(param_1 + 0x480) == *(float *)(param_1 + 0x498))) &&
     (*(float *)(param_1 + 0x3d8) <= *(float *)(*(int *)(*DAT_0052ff94 + 0x1c) + 8))) {
    local_38 = *DAT_0052ff98;
    local_34 = DAT_0052ff98[1];
    local_30 = DAT_0052ff98[2];
    func_004D7F70(&local_38,**(uint **)(*DAT_0052ff94 + 0x24));
    func_00115C70(&local_1c,(float *)(param_1 + 0x478),*(float **)(*piVar1 + 0x1c));
    local_28 = local_1c;
    local_24 = fStack_18;
    local_20 = fStack_14;
    func_00115DC8(&local_28);
    if (((*(char *)(param_1 + 0x475) != '\x01') ||
        (DAT_0052ff9c <= (int)ALBW_AS_U32((local_28 * local_28 + local_20 * local_20)))) &&
       (*(float *)(param_1 + 0x4a8) <
        local_38 * local_28 + local_34 * local_24 + local_30 * local_20)) {
      if (local_24 <= DAT_0052ffa0) {
        local_24 = -local_24;
      }
      if ((int)ALBW_AS_U32(local_24) < DAT_0052ffa4) {
        return 0x13;
      }
    }
  }
  return 0;
}

