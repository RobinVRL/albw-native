#include "ghidra_types.h"

extern int func_0012DB6C(int param_1,undefined4 param_2);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern float DAT_00323c60;
extern float DAT_00323c64;
extern undefined4 DAT_00323c68;
extern int *DAT_00323c6c;

// USA 00323BFC <- EU 00323BD8 (Ghidra, non-matching)
// GLOBAL DAT_00323c60 float
// GLOBAL DAT_00323c64 float
// GLOBAL DAT_00323c68 undefined4
// GLOBAL DAT_00323c6c int *

undefined4 func_00323BFC(int param_1,char *param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(undefined4 *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(float *)(albw_frame + 0xc))
  iVar1 = *(int *)(param_2 + 4);
  func_0057EAC0(param_1 + 0x1f0);
  local_14 = *(float *)(param_1 + 0x1e4) * DAT_00323c60;
  if (DAT_00323c64 <= local_14) {
    local_14 = DAT_00323c64;
  }
  local_20 = DAT_00323c68;
  local_1c = DAT_00323c68;
  local_18 = DAT_00323c68;
  func_00539418(param_1,iVar1,&local_20);
  if (*param_2 != '\x02') {
    return func_0012DB6C(*DAT_00323c6c,*(undefined4 *)(param_1 + 0x1ec));
  }
  return 0;
}

