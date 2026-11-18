#include "ghidra_types.h"

extern int func_003BB8EC(int param_1,int param_2);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern float DAT_003bc278;
extern float DAT_003bc27c;
extern undefined4 DAT_003bc280;

// USA 003BC218 <- EU 003BC1F4 (Ghidra, non-matching)
// GLOBAL DAT_003bc278 float
// GLOBAL DAT_003bc27c float
// GLOBAL DAT_003bc280 undefined4

undefined4 func_003BC218(int param_1,byte *param_2)

{
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(float *)(albw_frame + 0x14))
  if (*param_2 == 2) {
    local_c = *(float *)(param_1 + 0x1e4) * DAT_003bc278;
    if (DAT_003bc27c <= local_c) {
      local_c = DAT_003bc27c;
    }
    local_18 = DAT_003bc280;
    local_14 = DAT_003bc280;
    local_10 = DAT_003bc280;
    func_00539418(param_1,*(int *)(param_2 + 4),&local_18);
  }
  else if ((*(int *)(param_1 + 0x1d4) != 0) &&
          (*(char *)(*(int *)(param_1 + 0x1ec) + 0x50) == '\x02')) {
    return func_003BB8EC(param_1,(uint)*param_2);
  }
  return 0;
}

