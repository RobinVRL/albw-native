#include "ghidra_types.h"

extern int func_00491260(undefined4 *param_1);
extern int func_00539418(undefined4 param_1,int param_2,undefined4 *param_3);
extern int func_0057EAC0(int param_1);
extern float DAT_003c21c8;
extern float DAT_003c21cc;

// USA 003C2184 <- EU 003C2160 (Ghidra, non-matching)
// GLOBAL DAT_003c21c8 float
// GLOBAL DAT_003c21cc float

undefined4 func_003C2184(int param_1,int param_2)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x110];
  #define auStack_108 ((undefined4 *)(albw_frame + 0x8))
  #define local_20 (*(undefined4 *)(albw_frame + 0xf0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0xf4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0xf8))
  #define local_14 (*(float *)(albw_frame + 0xfc))
  iVar1 = *(int *)(param_2 + 4);
  func_00491260(auStack_108);
  func_0057EAC0((int)auStack_108);
  local_14 = *(float *)(param_1 + 0x1e4) * DAT_003c21c8;
  local_20 = *(undefined4 *)(param_1 + 0x1ec);
  uStack_1c = *(undefined4 *)(param_1 + 0x1f0);
  uStack_18 = *(undefined4 *)(param_1 + 500);
  if (DAT_003c21cc <= local_14) {
    local_14 = DAT_003c21cc;
  }
  return func_00539418(param_1,iVar1,&local_20);
}

