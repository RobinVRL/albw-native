#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00244E68(undefined4 *param_1,undefined4 param_2,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_002453f0;
extern int *DAT_002453f4;
extern undefined4 *DAT_002453f8;
extern int DAT_002453fc;
extern float DAT_00245400;
extern float DAT_00245404;
extern undefined4 DAT_00245408;

// USA 00245270 <- EU 00245270 (Ghidra, non-matching)
// GLOBAL DAT_002453f0 int *
// GLOBAL DAT_002453f4 int *
// GLOBAL DAT_002453f8 undefined4 *
// GLOBAL DAT_002453fc int
// GLOBAL DAT_00245400 float
// GLOBAL DAT_00245404 float
// GLOBAL DAT_00245408 undefined4

undefined4 func_00245270(int param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_84 (*(float *)(albw_frame + 0xc))
  #define local_80 (*(undefined4 *)(albw_frame + 0x10))
  #define local_7c (*(undefined4 *)(albw_frame + 0x14))
  #define local_78 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x34))
  #define local_58 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x40))
  #define local_4c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x60))
  #define local_2c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_1c (*(float *)(albw_frame + 0x74))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x78))
  #define local_14 (*(float *)(albw_frame + 0x7c))
  iVar4 = *(int *)(param_1 + 0x9c8);
  if (iVar4 == 0) {
    iVar4 = *(int *)(*DAT_002453f0 + 0x18);
    if (iVar4 == 0) {
      return 1;
    }
    func_001212EC(iVar4,(int *)(param_1 + 0x9d0),0x3c,0);
    iVar4 = *(int *)(param_1 + 0x9c8) + 1;
  }
  else {
    if (iVar4 == 1) {
      *(int *)(param_1 + 0x9c8) = 2;
      return 1;
    }
    if (iVar4 != 2) {
      if (iVar4 != 3) {
        return 0;
      }
      iVar4 = *(int *)(*DAT_002453f0 + 0x18);
      if (iVar4 != 0) {
        local_84 = *(float *)(param_1 + 0x3d0);
        local_80 = *(undefined4 *)(param_1 + 0x3d4);
        local_7c = *(undefined4 *)(param_1 + 0x3d8);
        piVar2 = (int *)func_005841A8(*DAT_002453f4,*DAT_002453f8,
                                      *(int **)(DAT_002453fc + *DAT_002453f4));
        iVar3 = *piVar2;
        if (iVar3 != 0) {
          local_84 = *(float *)(iVar3 + 8);
          local_80 = *(undefined4 *)(iVar3 + 0xc);
          local_7c = *(undefined4 *)(iVar3 + 0x10);
        }
        func_00244E68(&local_4c,param_1,DAT_00245400);
        local_78 = local_4c;
        uStack_74 = uStack_48;
        uStack_70 = uStack_44;
        uStack_6c = uStack_40;
        uStack_68 = uStack_3c;
        uStack_64 = uStack_38;
        uStack_60 = uStack_34;
        uStack_5c = uStack_30;
        local_58 = local_2c;
        uStack_54 = uStack_28;
        uStack_50 = uStack_24;
        local_1c = DAT_00245404;
        uStack_18 = DAT_00245408;
        local_14 = DAT_00245404;
        func_00120FBC(iVar4,(undefined4 *)(param_1 + 0x9d0),&local_84,&local_78,0,0,&local_1c);
        *(undefined4 *)(param_1 + 0x9c8) = 0;
        return 0;
      }
      return 1;
    }
    uVar1 = *(int *)(param_1 + 0x9cc) + 1;
    *(uint *)(param_1 + 0x9cc) = uVar1;
    if (uVar1 < 0x3d) {
      return 0;
    }
    iVar4 = 3;
  }
  *(int *)(param_1 + 0x9c8) = iVar4;
  return 0;
}

