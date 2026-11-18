#include "ghidra_types.h"

extern undefined8 func_00110D44(undefined4 *param_1,byte *param_2,uint param_3);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004331A0(undefined4 *param_1);
extern int func_00436384(undefined4 *param_1,undefined4 *param_2);
extern int func_004A9F98(int param_1,uint *param_2,uint param_3,float fparam_0,float fparam_1);
extern int func_004D0194(int param_1,undefined4 param_2);
extern int func_004D0268(int param_1,undefined4 param_2);
extern undefined4 DAT_001505bc;
extern undefined4 DAT_001505c0;
extern float DAT_001505c4;
extern float DAT_001505c8;
extern int *DAT_001505cc;

// USA 001503F4 <- EU 001503F4 (Ghidra, non-matching)
// GLOBAL DAT_001505bc undefined4
// GLOBAL DAT_001505c0 undefined4
// GLOBAL DAT_001505c4 float
// GLOBAL DAT_001505c8 float
// GLOBAL DAT_001505cc int *

int func_001503F4(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0)

{
  undefined4 *puVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(uint *)(albw_frame + 0x0))
  #define local_ac (*(undefined4 *)(albw_frame + 0x4))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(undefined2 *)(albw_frame + 0x10))
  #define local_9c (*(undefined4 *)(albw_frame + 0x14))
  #define local_98 (*(undefined4 *)(albw_frame + 0x18))
  #define local_94 (*(int *)(albw_frame + 0x1c))
  #define puStack_90 (*(undefined4 * *)(albw_frame + 0x20))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define local_80 (*(undefined4 *)(albw_frame + 0x30))
  #define local_7c (*(undefined4 *)(albw_frame + 0x34))
  #define local_78 (*(undefined4 *)(albw_frame + 0x38))
  #define auStack_74 ((undefined4 *)(albw_frame + 0x3c))
  #define local_48 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x6c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x70))
  #define auStack_3c ((undefined4 *)(albw_frame + 0x74))
  puVar1 = func_004331A0(auStack_3c);
  pbVar2 = (byte *)func_00436384(auStack_74,puVar1);
  func_00110D44(&local_b0,pbVar2,0x2a);
  local_94 = param_1 + 0x3d0;
  local_48 = *(undefined4 *)(param_1 + 0x368);
  uStack_44 = *(undefined4 *)(param_1 + 0x36c);
  uStack_40 = *(undefined4 *)(param_1 + 0x370);
  local_ac = *(undefined4 *)(param_1 + 0x3ec);
  puStack_90 = &local_48;
  local_80 = *param_3;
  local_7c = param_3[1];
  local_78 = param_3[2];
  local_a4 = *(undefined4 *)(param_1 + 0x2cc);
  local_a0 = *(undefined2 *)(param_1 + 0x54);
  local_98 = *(undefined4 *)(param_1 + 0x3a0);
  local_b0 = param_2;
  local_9c = param_4;
  local_84 = fparam_0;
  iVar3 = func_004A9F98(*DAT_001505cc,&local_b0,*(uint *)(param_1 + 0x3b8),DAT_001505c8,DAT_001505c4
                       );
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
     (iVar4 = *(int *)(param_1 + 0x34c), iVar4 != 0)) {
    func_004D0194(iVar4,(uint)*(byte *)(param_1 + 0x392));
    func_004D0268(iVar4,(uint)*(byte *)(param_1 + 0x394));
  }
  return iVar3;
}

