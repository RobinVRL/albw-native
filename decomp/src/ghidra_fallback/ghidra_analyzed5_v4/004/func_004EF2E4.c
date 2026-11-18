#include "ghidra_types.h"

extern float func_00115154(float *param_1,float *param_2,uint param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_002923B0(int param_1,int param_2,float *param_3,float fparam_0);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int *DAT_004ef3d4;
extern float DAT_004ef3d8;
extern int *DAT_004ef3dc;

// USA 004EF2E4 <- EU 004EF2BC (Ghidra, non-matching)
// GLOBAL DAT_004ef3d4 int *
// GLOBAL DAT_004ef3d8 float
// GLOBAL DAT_004ef3dc int *

void func_004EF2E4(int param_1)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  float fparam_0;
  float fVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(float *)(albw_frame + 0x0))
  #define local_5c (*(float *)(albw_frame + 0x4))
  #define afStack_58 ((float *)(albw_frame + 0x8))
  #define local_50 (*(float *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_38 (*(uint *)(albw_frame + 0x28))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_30 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  #define local_28 (*(float *)(albw_frame + 0x38))
  #define fStack_24 (*(float *)(albw_frame + 0x3c))
  #define fStack_20 (*(float *)(albw_frame + 0x40))
  piVar1 = DAT_004ef3d4;
  if (*(char *)(param_1 + 99) == '\0') {
    if ((*(char *)(param_1 + 100) != '\0') &&
       (iVar3 = func_004EF418(param_1,(byte *)(param_1 + 0x54),5,0), iVar3 != 0)) {
      *(undefined1 *)(param_1 + 100) = 0;
      *(undefined1 *)(*piVar1 + 0x7abe) = 0;
      return;
    }
  }
  else {
    iVar3 = *DAT_004ef3d4;
    local_50 = *(float *)(iVar3 + 0x10);
    uStack_4c = *(undefined4 *)(iVar3 + 0x14);
    uStack_48 = *(undefined4 *)(iVar3 + 0x18);
    uStack_44 = *(undefined4 *)(iVar3 + 0x1c);
    uStack_40 = *(undefined4 *)(iVar3 + 0x20);
    uStack_3c = *(undefined4 *)(iVar3 + 0x24);
    uStack_38 = *(uint *)(iVar3 + 0x28);
    uStack_34 = *(undefined4 *)(iVar3 + 0x2c);
    local_30 = *(undefined4 *)(iVar3 + 0x30);
    uStack_2c = *(undefined4 *)(iVar3 + 0x34);
    func_00115154(&local_60,afStack_58,uStack_38);
    local_5c = DAT_004ef3d8;
    fVar4 = DAT_004ef3d8;
    func_00115DC8(&local_60);
    piVar1 = DAT_004ef3dc;
    func_00115C70(&local_28,&local_50,*(float **)(*DAT_004ef3dc + 0x1c));
    fparam_0 = local_60 * local_28 + local_5c * fStack_24 + afStack_58[0] * fStack_20;
    if (fparam_0 <= fVar4) {
      fparam_0 = -fparam_0;
    }
    bVar2 = func_002923B0(*piVar1,(int)&local_50,&local_60,fparam_0);
    if (bVar2) {
      *(undefined1 *)(param_1 + 99) = 0;
    }
  }
  return;
}

