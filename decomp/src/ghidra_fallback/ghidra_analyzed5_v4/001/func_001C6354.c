#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00275438(int param_1);
extern int func_004356B4(int *param_1);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_0053B348(int param_1,float *param_2);

// USA 001C6354 <- EU 001C6354 (Ghidra, non-matching)

void func_001C6354(int param_1)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(float *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined4 *)(albw_frame + 0x10))
  if (**(int **)(param_1 + 0x438) != 0) {
    if (*(char *)(param_1 + 0x418) == '\0') {
      func_00275438((int)*(int **)(param_1 + 0x438));
      func_0053B348(*(int *)(param_1 + 0x438),(float *)(param_1 + 0x3d0));
    }
    iVar1 = *(int *)(param_1 + 0x4a0);
    *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_1 + 0x3d0);
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_1 + 0x3d4);
    *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
    func_004356B4(*(int **)(param_1 + 0x4a0));
    func_00115C54(&local_18,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x4a4));
    iVar1 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    func_00491938((float *)(iVar1 + 0x80),0,*(uint *)(param_1 + 1000),0);
    iVar1 = *(int *)(param_1 + 0x40c);
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(float *)(iVar1 + 0x8c) = local_18;
    *(undefined4 *)(iVar1 + 0x9c) = local_14;
    *(undefined4 *)(iVar1 + 0xac) = local_10;
    func_004CEAF0(*(int *)(param_1 + 0x40c));
    func_001512B4(*(int *)(param_1 + 0x410),&local_18);
  }
  return;
}

