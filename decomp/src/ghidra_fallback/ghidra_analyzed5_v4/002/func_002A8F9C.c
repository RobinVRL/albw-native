#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001D3EA4(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4, undefined2 param_5,undefined2 param_6);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern void func_004F48F0(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_00564A78(int param_1,int *param_2);
extern int DAT_002a90bc;
extern int DAT_002a90c0;
extern char s_mouth_002a90b4[];

// USA 002A8F9C <- EU 002A8F78 (Ghidra, non-matching)
// GLOBAL DAT_002a90bc int
// GLOBAL DAT_002a90c0 int
// GLOBAL s_mouth_002a90b4 string

void func_002A8F9C(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  float *pfVar4;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(char * *)(albw_frame + 0x4))
  #define auStack_58 ((undefined4 *)(albw_frame + 0x8))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(undefined4 *)(albw_frame + 0x38))
  #define local_24 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_20 (*(undefined4 *)(albw_frame + 0x40))
  pfVar4 = (float *)(*(char *)(param_1 + 0x8c0) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x8d8) + (int)pfVar4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x8d8) + *(char *)(param_1 + 0x8c0) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x8d0) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x8d0)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x8bc) + 1;
  *(int *)(param_1 + 0x8bc) = iVar2;
  if (*(int *)(param_1 + 0x8cc) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x8cc),1,fparam_0);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x40c) + 0x158) = *(undefined4 *)(param_1 + 0x8e4);
  func_004F48F0(param_1);
  func_004F5BD8(param_1,(uint *)0x0,(int **)0x0,pfVar4);
  if (*(char *)(param_1 + 0x90d) != '\0') {
    iVar2 = *(int *)(param_1 + 0x40c);
    local_5c = s_mouth_002a90b4;
    local_60 = DAT_002a90bc;
    uVar1 = func_00564A78(*(int *)(param_1 + 0x40c),&local_60);
    func_001119F4(auStack_58,(undefined4 *)(*(int *)(*(int *)(iVar2 + 0x24) + 0x14) + uVar1 * 0x30))
    ;
    local_28 = local_4c;
    local_24 = local_3c;
    local_20 = local_2c;
    func_001D3EA4(&local_28,*(undefined4 *)(param_1 + 1000),(undefined4 *)(param_1 + 0x50),
                  *(undefined4 *)(DAT_002a90c0 + 0x18),2,2);
    *(undefined1 *)(param_1 + 0x90d) = 0;
  }
  return;
}

