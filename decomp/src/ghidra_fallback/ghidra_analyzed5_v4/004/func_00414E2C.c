#include "ghidra_types.h"

extern int func_003E0C30(int param_1,undefined4 *param_2);
extern int func_00414038(int param_1,int param_2,float *param_3);
extern float DAT_00414ed0;

// USA 00414E2C <- EU 00414E0C (Ghidra, non-matching)
// GLOBAL DAT_00414ed0 float

void func_00414E2C(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 ((float *)(albw_frame + 0x0))
  local_40[0] = 0.0;
  local_40[1] = 0.0;
  local_40[2] = 0.0;
  local_40[3] = 0.0;
  local_40[4] = 0.0;
  local_40[5] = 0.0;
  local_40[6] = 0.0;
  local_40[7] = 0.0;
  local_40[8] = 0.0;
  local_40[9] = 0.0;
  local_40[10] = 0.0;
  local_40[0xb] = 0.0;
  iVar1 = 0;
  fVar3 = DAT_00414ed0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        func_00414038(param_1,iVar1,local_40);
        func_003E0C30(iVar2,local_40);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
  }
  return;
}

