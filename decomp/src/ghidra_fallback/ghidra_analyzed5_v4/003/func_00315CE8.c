#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F85C(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_00588BE4(int param_1);
extern int func_00664C50(undefined4 *param_1,undefined1 param_2);
extern float DAT_00315e0c;
extern undefined DAT_00315e10;
extern int DAT_00315e28;
extern float DAT_00315e2c;
extern int *DAT_00315e30;
extern float DAT_00315e34;
extern undefined4 DAT_00315e38;
extern int *DAT_00315e3c;
extern char s__SE_Boomerang_FLY_00315e13[];
extern char s_cf_00315e13[];
extern undefined4 _DAT_00315e10;

// USA 00315CE8 <- EU 00315CC4 (Ghidra, non-matching)
// GLOBAL DAT_00315e0c float
// GLOBAL DAT_00315e10 undefined
// GLOBAL DAT_00315e28 int
// GLOBAL DAT_00315e2c float
// GLOBAL DAT_00315e30 int *
// GLOBAL DAT_00315e34 float
// GLOBAL DAT_00315e38 undefined4
// GLOBAL DAT_00315e3c int *
// GLOBAL s_cf_00315e13 string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void func_00315CE8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define local_28 (*(float *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c (*(char * *)(albw_frame + 0x24))
  local_38 = DAT_00315e0c;
  local_34 = DAT_00315e0c;
  local_30 = _DAT_00315e10;
  local_20 = DAT_00315e28;
  local_1c = s__SE_Boomerang_FLY_00315e13 + 1;
  fparam_0 = DAT_00315e0c;
  func_001507D8(param_1,&local_20,0);
  fVar3 = *(float *)(param_1 + 0x478);
  *(float *)(param_1 + 0x478) = fVar3 + -fVar3 * DAT_00315e2c;
  func_004D7F70(&local_38,*(uint *)(param_1 + 1000));
  func_00115C54(&local_38,&local_38,(float *)(param_1 + 0x3d0));
  if (*(uint *)(param_1 + 0x488) < *(uint *)(param_1 + 0x48c)) {
    *(uint *)(param_1 + 0x488) = *(uint *)(param_1 + 0x488) + 1;
    iVar1 = func_0051E6D0(*DAT_00315e30,&local_38,fparam_0);
    if ((iVar1 != 0) || (*(char *)(param_1 + 0x519) != '\0')) {
      local_28 = DAT_00315e34;
      local_2c = fparam_0;
      local_24 = fparam_0;
      iVar1 = func_0014F85C(param_1,0,&local_2c,DAT_00315e38,DAT_00315e34);
      if (iVar1 != 0) {
        func_00664C50((undefined4 *)(param_1 + 0x454),1);
      }
      return;
    }
  }
  func_00664C50((undefined4 *)(param_1 + 0x454),1);
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_00315e3c) {
    uVar2 = 0x28;
  }
  else {
    uVar2 = 0x1e;
  }
  *(undefined4 *)(param_1 + 0x494) = uVar2;
  return;
}

