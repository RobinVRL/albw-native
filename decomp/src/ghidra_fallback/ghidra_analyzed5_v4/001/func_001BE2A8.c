#include "ghidra_types.h"

extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0011549C(float *param_1,float *param_2,float *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CA8(float *param_1,float *param_2,float *param_3);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float func_004D8AEC(float *param_1,uint param_2,float *param_3);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined4 *DAT_001be3b8;
extern float DAT_001be3bc;
extern undefined4 DAT_001be3c0;
extern float DAT_001be3c4;

// USA 001BE2A8 <- EU 001BE2A8 (Ghidra, non-matching)
// GLOBAL DAT_001be3b8 undefined4 *
// GLOBAL DAT_001be3bc float
// GLOBAL DAT_001be3c0 undefined4
// GLOBAL DAT_001be3c4 float

undefined4 func_001BE2A8(int param_1)

{
  int iVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(float *)(albw_frame + 0x8))
  #define local_74 (*(float *)(albw_frame + 0xc))
  #define local_70 (*(undefined4 *)(albw_frame + 0x10))
  #define local_6c (*(float *)(albw_frame + 0x14))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x18))
  #define local_64 (*(float *)(albw_frame + 0x1c))
  #define afStack_60 ((float *)(albw_frame + 0x20))
  #define afStack_30 ((float *)(albw_frame + 0x50))
  func_00491624(afStack_30,0x40000000,0,0);
  piVar2 = (int *)(param_1 + 0x43c);
  func_0011549C((float *)(*(int *)(param_1 + 0x43c) + 100),
                (float *)(*(int *)(param_1 + 0x43c) + 100),afStack_30);
  func_001151F8(afStack_60,(undefined4 *)(*piVar2 + 100),DAT_001be3b8);
  local_6c = DAT_001be3bc;
  uStack_68 = DAT_001be3c0;
  local_64 = DAT_001be3bc;
  func_00115CA8(&local_78,afStack_60,&local_6c);
  func_00115C54(&local_78,&local_78,(float *)(param_1 + 0x3d0));
  local_74 = local_74 - DAT_001be3c4;
  iVar1 = *piVar2;
  *(float *)(iVar1 + 4) = local_78;
  *(float *)(iVar1 + 8) = local_74;
  *(undefined4 *)(iVar1 + 0xc) = local_70;
  func_004356B4((int *)*piVar2);
  *(undefined1 *)(*(int *)(param_1 + 0x44c) + 0x61) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x444) + 0x44) = 1;
  func_00588C14(param_1,0,1);
  iVar1 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
  func_004D8AEC((float *)(iVar1 + 0x80),*(uint *)(param_1 + 1000),(float *)(param_1 + 0x3d0));
  return func_004CEAF0(*(int *)(param_1 + 0x430));
}

