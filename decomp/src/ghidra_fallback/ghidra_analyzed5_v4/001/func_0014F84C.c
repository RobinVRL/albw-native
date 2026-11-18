#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0014F0B0(int param_1);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A7620(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern undefined4 DAT_0014fa30;
extern undefined4 DAT_0014fa34;
extern float DAT_0014fa38;
extern float DAT_0014fa3c;
extern int *DAT_0014fa40;

// USA 0014F84C <- EU 0014F84C (Ghidra, non-matching)
// GLOBAL DAT_0014fa30 undefined4
// GLOBAL DAT_0014fa34 undefined4
// GLOBAL DAT_0014fa38 float
// GLOBAL DAT_0014fa3c float
// GLOBAL DAT_0014fa40 int *

int func_0014F84C(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define uStack_b0 (*(uint *)(albw_frame + 0x0))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_a0 (*(undefined2 *)(albw_frame + 0x10))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define iStack_94 (*(int *)(albw_frame + 0x1c))
  #define puStack_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define fStack_84 (*(float *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x38))
  #define auStack_74 ((undefined4 *)(albw_frame + 0x3c))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x70))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x74))
  puVar4 = &uStack_b0;
  puVar1 = func_004331A0(auStack_3c);
  pbVar2 = (byte *)func_00436384(auStack_74,puVar1);
  func_00110D44(&uStack_b0,pbVar2,0x2a);
  iStack_94 = param_1 + 0x3d0;
  uStack_48 = *(undefined4 *)(param_1 + 0x368);
  uStack_44 = *(undefined4 *)(param_1 + 0x36c);
  uStack_40 = *(undefined4 *)(param_1 + 0x370);
  uStack_ac = *(undefined4 *)(param_1 + 0x3ec);
  puStack_90 = &uStack_48;
  uStack_80 = *param_2;
  uStack_7c = param_2[1];
  uStack_78 = param_2[2];
  uStack_a4 = *(undefined4 *)(param_1 + 0x2cc);
  uStack_a0 = *(undefined2 *)(param_1 + 0x54);
  uStack_98 = *(undefined4 *)(param_1 + 0x3a0);
  uStack_b0 = param_1 + 0x3d0;
  uStack_9c = param_3;
  fStack_84 = fparam_0;
  func_0014F0B0(param_1);
  iVar3 = func_004A7620(*DAT_0014fa40,puVar4,*(uint *)(param_1 + 0x3b8),DAT_0014fa3c,DAT_0014fa38);
  if (((*(byte *)(param_1 + 0x397) & 1) != 0) && ((*(uint *)(param_1 + 0x398) & 0x80) != 0)) {
    if (*(char *)(param_1 + 0x38d) == '\0') {
      if (*(char *)(param_1 + 0x38e) != '\0') {
        (**(code **)(*(int *)(param_1 + 800) + 0x3c))(param_1 + 800);
      }
    }
    else {
      (**(code **)(*(int *)(param_1 + 800) + 0x38))(param_1 + 800);
    }
    *(byte *)(param_1 + 0x397) = *(byte *)(param_1 + 0x397) & 0xfe;
  }
  if ((*(byte *)(param_1 + 0x397) & 2) == 0) {
    if ((*(byte *)(param_1 + 0x397) & 4) == 0) {
      func_0035227C(param_1 + 0x324,(uint)*(byte *)(param_1 + 0x392));
    }
    else {
      func_0035227C(param_1 + 0x324,(uint)*(byte *)(param_1 + 0x393));
    }
  }
  if (((*(int *)(param_1 + 0x2d0) != 0) && (*(char *)(*(int *)(param_1 + 0x2d0) + 0x23) == '\0')) &&
     (iVar5 = *(int *)(param_1 + 0x34c), iVar5 != 0)) {
    func_004D0194(iVar5,(uint)*(byte *)(param_1 + 0x392));
    func_004D0268(iVar5,(uint)*(byte *)(param_1 + 0x394));
  }
  return iVar3;
}

