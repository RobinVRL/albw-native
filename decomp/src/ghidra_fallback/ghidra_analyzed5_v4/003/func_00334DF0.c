#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0054E778(int *param_1,float fparam_0);
extern int func_006658F8(undefined4 *param_1,undefined1 param_2);
extern float DAT_00334e9c;
extern float DAT_00334ea0;
extern int DAT_00334ea4;

// USA 00334DF0 <- EU 00334DCC (Ghidra, non-matching)
// GLOBAL DAT_00334e9c float
// GLOBAL DAT_00334ea0 float
// GLOBAL DAT_00334ea4 int

void func_00334DF0(int *param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define iStack_10 (*(int *)(albw_frame + 0x10))
  iVar1 = func_0054E778(param_1,DAT_00334e9c);
  if (iVar1 != -1) {
    if (iVar1 == 4) {
      param_1[0xda] = param_1[2];
      param_1[0xdb] = param_1[3];
      param_1[0xdc] = param_1[4];
      local_18 = ALBW_AS_F32(param_1[2]);
      iVar1 = param_1[3];
      iStack_10 = param_1[4];
    }
    else {
      func_004D80A4(&local_18,iVar1 << 0x1e,DAT_00334ea0);
      local_14 = DAT_00334ea4;
      func_00115C54(&local_18,&local_18,(float *)(param_1 + 2));
      param_1[0xda] = (int)ALBW_AS_U32(local_18);
      param_1[0xdb] = local_14;
      param_1[0xdc] = iStack_10;
      iVar1 = local_14;
    }
    param_1[0xf4] = (int)ALBW_AS_U32(local_18);
    param_1[0xf5] = iVar1;
    param_1[0xf6] = iStack_10;
    param_1[0x11e] = param_1[0xf4];
    param_1[0x11f] = param_1[0xf5];
    param_1[0x120] = param_1[0xf6];
    param_1[0x121] = param_1[0xf4];
    param_1[0x122] = param_1[0xf5];
    param_1[0x123] = param_1[0xf6];
    *(byte *)((int)param_1 + 0x397) = *(byte *)((int)param_1 + 0x397) | 1;
    func_006658F8(param_1 + 0x141,0);
  }
  return;
}

