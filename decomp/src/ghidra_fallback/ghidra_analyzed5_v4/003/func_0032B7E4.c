#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00588FD4(int param_1,float *param_2);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0032b8d4;
extern undefined4 *DAT_0032b8d8;
extern float DAT_0032b8dc;
extern float DAT_0032b8e0;
extern float *DAT_0032b8e4;

// USA 0032B7E4 <- EU 0032B7C0 (Ghidra, non-matching)
// GLOBAL DAT_0032b8d4 int *
// GLOBAL DAT_0032b8d8 undefined4 *
// GLOBAL DAT_0032b8dc float
// GLOBAL DAT_0032b8e0 float
// GLOBAL DAT_0032b8e4 float *

void func_0032B7E4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define afStack_3c ((float *)(albw_frame + 0x14))
  #define local_20 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x38))
  #define local_14 (*(undefined2 *)(albw_frame + 0x3c))
  if (param_2 != 0) {
    return;
  }
  if (*(char *)(param_1 + 0xc90) == '\x01') {
    afStack_3c[1] = 0.0;
    afStack_3c[2] = 0.0;
    func_00588FD4(*DAT_0032b8d4,afStack_3c);
    local_20 = *DAT_0032b8d8;
    uStack_1c = DAT_0032b8d8[1];
    uStack_18 = DAT_0032b8d8[2];
    local_14 = 0x3c;
    piVar2 = *(int **)(*(int *)(param_1 + 0xa94) + 0x28);
    if (((piVar2 == (int *)0x0) || (*(int *)(*(int *)(param_1 + 0xa94) + 0x20) == 0)) ||
       (iVar1 = *piVar2, iVar1 == 0)) {
      local_48 = *(float *)(param_1 + 8);
      local_40 = *(float *)(param_1 + 0x10) - DAT_0032b8dc;
    }
    else {
      local_40 = *(float *)(iVar1 + 0x20);
      local_48 = *(float *)(iVar1 + 0x18);
    }
    local_44 = *(float *)(param_1 + 0xc) + DAT_0032b8e0;
    func_00115C54(&local_48,&local_48,DAT_0032b8e4);
    iVar1 = (**(code **)(**(int **)(param_1 + 0xa9c) + 0x34))
                      (*(int **)(param_1 + 0xa9c),&local_48,afStack_3c,0);
    if (iVar1 != 0) {
      func_00665670((undefined4 *)(param_1 + 0xba8),0x10);
    }
  }
  return;
}

