#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_0036BC6C(undefined4 param_1,float *param_2,int param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern float DAT_0036c3cc;
extern float DAT_0036c3d0;
extern float DAT_0036c3d4;
extern float DAT_0036c3d8;
extern int DAT_0036c3dc;
extern int *DAT_0036c3e0;

// USA 0036C2DC <- EU 0036C2B8 (Ghidra, non-matching)
// GLOBAL DAT_0036c3cc float
// GLOBAL DAT_0036c3d0 float
// GLOBAL DAT_0036c3d4 float
// GLOBAL DAT_0036c3d8 float
// GLOBAL DAT_0036c3dc int
// GLOBAL DAT_0036c3e0 int *

undefined4 func_0036C2DC(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  float fparam_2;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(undefined4 *)(albw_frame + 0x4))
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  #define afStack_2c ((float *)(albw_frame + 0x24))
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_50 = *(float *)(iVar1 + 0x3d0);
    local_4c = *(undefined4 *)(iVar1 + 0x3d4);
    local_48 = *(undefined4 *)(iVar1 + 0x3d8);
    local_44 = *(float *)(iVar1 + 0x3d0);
    local_40 = *(undefined4 *)(iVar1 + 0x3d4);
    local_3c = *(undefined4 *)(iVar1 + 0x3d8);
    func_0036BC6C(param_1,&local_50,*(int *)(param_1 + 8));
    fparam_2 = DAT_0036c3cc;
    fparam_1 = DAT_0036c3d0;
    fparam_0 = DAT_0036c3d4;
    func_004D838C((float *)(param_1 + 0x30),&local_50,DAT_0036c3d4,DAT_0036c3d0,DAT_0036c3cc);
    func_004D838C((float *)(param_1 + 0x3c),&local_44,fparam_0,fparam_1,fparam_2);
    func_00115C54(afStack_38,(float *)(param_1 + 0x30),(float *)(param_1 + 0x3c));
    func_00115D70(afStack_38,afStack_38,DAT_0036c3d8);
    puVar3 = (undefined4 *)(DAT_0036c3dc + (*(uint *)(param_1 + 0x1c) & 0xff) * 0x2c);
    func_00115C54(afStack_2c,afStack_38,(float *)(puVar3 + 7));
    uVar2 = func_001E8268(*(int *)(*DAT_0036c3e0 + 0x18),(int *)(*(int *)(param_1 + 0xc) + 0xac),
                          afStack_2c,puVar3);
  }
  return uVar2;
}

