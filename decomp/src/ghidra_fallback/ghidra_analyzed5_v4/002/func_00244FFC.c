#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_00244E68(undefined4 *param_1,undefined4 param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00245154;
extern int *DAT_00245158;
extern undefined4 *DAT_0024515c;
extern int DAT_00245160;
extern float DAT_00245164;
extern float DAT_00245168;

// USA 00244FFC <- EU 00244FFC (Ghidra, non-matching)
// GLOBAL DAT_00245154 int *
// GLOBAL DAT_00245158 int *
// GLOBAL DAT_0024515c undefined4 *
// GLOBAL DAT_00245160 int
// GLOBAL DAT_00245164 float
// GLOBAL DAT_00245168 float

undefined4 func_00244FFC(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(float *)(albw_frame + 0x44))
  #define local_58 (*(float *)(albw_frame + 0x48))
  #define local_54 (*(float *)(albw_frame + 0x4c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x70))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x74))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x78))
  iVar1 = *(int *)(param_1 + 0x9c8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*DAT_00245154 + 0x18);
    if (iVar1 == 0) {
      return 1;
    }
    local_94 = *(float *)(param_1 + 0x3d0);
    local_90 = *(undefined4 *)(param_1 + 0x3d4);
    local_8c = *(undefined4 *)(param_1 + 0x3d8);
    piVar2 = (int *)func_005841A8(*DAT_00245158,*DAT_0024515c,
                                  *(int **)(DAT_00245160 + *DAT_00245158));
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      local_94 = *(float *)(iVar3 + 8);
      local_90 = *(undefined4 *)(iVar3 + 0xc);
      local_8c = *(undefined4 *)(iVar3 + 0x10);
    }
    fVar5 = DAT_00245164;
    func_00244E68(&local_50,param_1,DAT_00245164);
    local_88 = local_50;
    uStack_84 = uStack_4c;
    uStack_80 = uStack_48;
    uStack_7c = uStack_44;
    uStack_78 = uStack_40;
    uStack_74 = uStack_3c;
    uStack_70 = uStack_38;
    uStack_6c = uStack_34;
    local_68 = local_30;
    uStack_64 = uStack_2c;
    uStack_60 = uStack_28;
    local_5c = DAT_00245168;
    local_54 = DAT_00245168;
    local_58 = fVar5;
    func_00120FBC(iVar1,(undefined4 *)(param_1 + 0x9d0),&local_94,&local_88,0,0,&local_5c);
    *(int *)(param_1 + 0x9c8) = *(int *)(param_1 + 0x9c8) + 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 != 2) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x9d8) = 1;
    return 1;
  }
  uVar4 = *(int *)(param_1 + 0x9cc) + 1;
  *(uint *)(param_1 + 0x9cc) = uVar4;
  if (100 < uVar4) {
    *(int *)(param_1 + 0x9c8) = *(int *)(param_1 + 0x9c8) + 1;
  }
  return 0;
}

