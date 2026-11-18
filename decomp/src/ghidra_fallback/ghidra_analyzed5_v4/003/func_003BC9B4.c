#include "ghidra_types.h"

extern int func_00462A34(int param_1);
extern int func_00462AA0(int param_1);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern float DAT_003bca44;
extern float DAT_003bca48;
extern float DAT_003bca4c;

// USA 003BC9B4 <- EU 003BC990 (Ghidra, non-matching)
// GLOBAL DAT_003bca44 float
// GLOBAL DAT_003bca48 float
// GLOBAL DAT_003bca4c float

undefined4 func_003BC9B4(int param_1,char *param_2)

{
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  #define local_10 (*(float *)(albw_frame + 0x10))
  #define local_c (*(float *)(albw_frame + 0x14))
  if (*param_2 == '\x02') {
    fVar1 = *(float *)(param_1 + 0x1e4) * DAT_003bca44;
    local_c = DAT_003bca48;
    if ((DAT_003bca48 <= fVar1) && (local_c = fVar1, DAT_003bca4c < fVar1)) {
      local_c = DAT_003bca4c;
    }
    local_18 = DAT_003bca48;
    local_14 = DAT_003bca48;
    local_10 = DAT_003bca48;
    func_00539418(param_1,*(int *)(param_2 + 4),&local_18);
  }
  else {
    if (*(char *)(param_1 + 0x1e9) == '\x01') {
      if (*(int *)(param_1 + 0x1ec) == 0) {
        return 0;
      }
      func_00462AA0(*(int *)(param_1 + 0x1ec));
    }
    if ((*(char *)(param_1 + 0x1e9) == '\x03') && (*(int *)(param_1 + 0x1ec) != 0)) {
      return func_00462A34(*(int *)(param_1 + 0x1ec));
    }
  }
  return 0;
}

