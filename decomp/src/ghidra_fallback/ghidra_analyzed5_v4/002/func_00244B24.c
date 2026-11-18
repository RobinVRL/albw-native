#include "ghidra_types.h"

extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00244E68(undefined4 *param_1,undefined4 param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_00244c28;
extern float DAT_00244c2c;
extern float DAT_00244c30;
extern int *DAT_00244c34;
extern undefined4 *DAT_00244c38;
extern int DAT_00244c3c;

// USA 00244B24 <- EU 00244B24 (Ghidra, non-matching)
// GLOBAL DAT_00244c28 int *
// GLOBAL DAT_00244c2c float
// GLOBAL DAT_00244c30 float
// GLOBAL DAT_00244c34 int *
// GLOBAL DAT_00244c38 undefined4 *
// GLOBAL DAT_00244c3c int

void func_00244B24(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 (*(undefined4 *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define local_5c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_50 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x60))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x68))
  iVar4 = *(int *)(*DAT_00244c28 + 0x18);
  if (iVar4 != 0) {
    local_88 = *(undefined4 *)(param_1 + 0x3d0);
    local_84 = *(undefined4 *)(param_1 + 0x3d4);
    local_80 = *(undefined4 *)(param_1 + 0x3d8);
    fVar5 = (float)VectorUnsignedToFloat
                             (*(undefined4 *)(param_1 + 0x9cc),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = (fVar5 - DAT_00244c2c) / DAT_00244c30;
    piVar1 = (int *)func_005841A8(*DAT_00244c34,*DAT_00244c38,
                                  *(int **)(DAT_00244c3c + *DAT_00244c34));
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      local_88 = *(undefined4 *)(iVar2 + 8);
      local_84 = *(undefined4 *)(iVar2 + 0xc);
      local_80 = *(undefined4 *)(iVar2 + 0x10);
    }
    func_00244E68(&local_50,param_1,fVar5);
    local_7c = local_50;
    uStack_78 = uStack_4c;
    uStack_74 = uStack_48;
    uStack_70 = uStack_44;
    uStack_6c = uStack_40;
    uStack_68 = uStack_3c;
    uStack_64 = uStack_38;
    uStack_60 = uStack_34;
    local_5c = local_30;
    uStack_58 = uStack_2c;
    uStack_54 = uStack_28;
    func_001E8268(iVar4,(int *)(param_1 + 0x9d0),&local_88,&local_7c);
    uVar3 = *(int *)(param_1 + 0x9cc) + 1;
    *(uint *)(param_1 + 0x9cc) = uVar3;
    if (0x78 < uVar3) {
      *(undefined4 *)(param_1 + 0x9cc) = 0;
      *(undefined1 *)(param_1 + 0x9d8) = 0;
    }
  }
  return;
}

