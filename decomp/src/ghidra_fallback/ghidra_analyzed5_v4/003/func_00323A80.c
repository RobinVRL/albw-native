#include "ghidra_types.h"

extern int func_00532CC0(int param_1,uint param_2,float fparam_0);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern float DAT_00323afc;
extern float DAT_00323b00;
extern undefined4 DAT_00323b04;

// USA 00323A80 <- EU 00323A5C (Ghidra, non-matching)
// GLOBAL DAT_00323afc float
// GLOBAL DAT_00323b00 float
// GLOBAL DAT_00323b04 undefined4

void func_00323A80(int param_1,char *param_2)

{
  float fparam_0;
  float fVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  #define local_c (*(float *)(albw_frame + 0x14))
  fVar1 = *(float *)(param_1 + 0x1e4) * DAT_00323afc;
  fparam_0 = DAT_00323b00;
  if (fVar1 < DAT_00323b00) {
    fparam_0 = fVar1;
  }
  if (*param_2 == '\x02') {
    local_18 = DAT_00323b04;
    local_14 = DAT_00323b04;
    local_10 = DAT_00323b04;
    local_c = fparam_0;
    func_00539418(param_1,*(int *)(param_2 + 4),&local_18);
  }
  else if ((*(int *)(param_1 + 0x1d4) != 0) &&
          (*(char *)(*(int *)(param_1 + 0x1ec) + 0x50) == '\x02')) {
    if (*(char *)(param_1 + 0x1e9) != '\x03') {
      fparam_0 = DAT_00323b00;
    }
    func_00532CC0(*(int *)(param_1 + 0x1ec),(uint)(*param_2 == '\0'),fparam_0);
    return;
  }
  return;
}

