#include "ghidra_types.h"

extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_00408030(int param_1,int param_2);
extern int func_00408468(int param_1);
extern int func_004084F8(int param_1,int param_2);
extern int func_0040854C(int param_1);

// USA 0048EF78 <- EU 0048EF50 (Ghidra, non-matching)

void func_0048EF78(int *param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define local_2c (*(undefined4 *)(albw_frame + 0x14))
  #define iStack_28 (*(int *)(albw_frame + 0x18))
  #define iStack_24 (*(int *)(albw_frame + 0x1c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x20))
  #define iStack_1c (*(int *)(albw_frame + 0x24))
  #define local_18 (*(int *)(albw_frame + 0x28))
  *(undefined1 *)(param_1 + 0x15) = 1;
  param_1[0xc] = param_1[2];
  param_1[0xe] = param_1[4];
  param_1[0x10] = param_1[3];
  param_1[0x11] = param_1[5];
  param_1[0xd] = (uint)*(byte *)(param_1 + 9);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)((int)param_1 + 0x25);
  *(undefined1 *)((int)param_1 + 0x4d) = *(undefined1 *)((int)param_1 + 0x26);
  param_1[0x14] = param_1[10];
  *(char *)((int)param_1 + 0x4e) = (char)param_1[0xb];
  if ((char)param_1[0x17] != '\0') {
    piVar2 = (int *)param_1[6];
    iVar1 = func_0040854C((int)(param_1 + 0xc));
    iVar1 = func_0010CEE0(iVar1,piVar2,0x20);
    param_1[0x16] = iVar1;
    func_004084F8((int)(param_1 + 0xc),iVar1);
    local_38 = param_1[0xc];
    iStack_34 = param_1[0xd];
    iStack_30 = param_1[0xe];
    iStack_28 = param_1[0x10];
    iStack_24 = param_1[0x11];
    iStack_1c = param_1[0x13];
    local_18 = param_1[0x14];
    local_2c = 0;
    local_20 = 0;
    iVar1 = func_00408468((int)&local_38);
    param_1[8] = iVar1;
    iVar1 = func_0010CEE0(iVar1,(int *)param_1[6],0x20);
    param_1[7] = iVar1;
    return;
  }
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = func_00408468((int)(param_1 + 0xc));
  param_1[8] = iVar1;
  iVar1 = func_0010CEE0(iVar1,(int *)param_1[6],0x20);
  param_1[7] = iVar1;
  func_00408030((int)(param_1 + 0xc),iVar1);
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  return;
}

