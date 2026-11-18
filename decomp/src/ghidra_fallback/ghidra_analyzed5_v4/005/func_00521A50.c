#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_0058E2B8(int *param_1);
extern int func_0068C690(float *param_1);
extern int *DAT_00521adc;
extern int DAT_00521ae0;
extern float DAT_00521ae4;
extern int DAT_00521ae8;

// USA 00521A50 <- EU 00521A28 (Ghidra, non-matching)
// GLOBAL DAT_00521adc int *
// GLOBAL DAT_00521ae0 int
// GLOBAL DAT_00521ae4 float
// GLOBAL DAT_00521ae8 int

undefined4 func_00521A50(int param_1)

{
  uint uVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define local_c (*(float *)(albw_frame + 0x14))
  func_00115C70(&local_14,*(float **)(*DAT_00521adc + 0x1c),(float *)(param_1 + 0x3d0));
  local_18 = func_0068C690(&local_14);
  local_18 = *(int *)(param_1 + 1000) - local_18;
  uVar1 = func_0058E2B8(&local_18);
  if ((uVar1 < 0x40000001) && ((int)ALBW_AS_U32((local_14 * local_14 + local_c * local_c)) < DAT_00521ae0)) {
    if (local_10 <= DAT_00521ae4) {
      local_10 = -local_10;
    }
    if (((int)ALBW_AS_U32(local_10) < DAT_00521ae8) && (*(uint *)(param_1 + 0xa38) <= *(uint *)(param_1 + 0xa34))
       ) {
      return 1;
    }
  }
  return 0;
}

