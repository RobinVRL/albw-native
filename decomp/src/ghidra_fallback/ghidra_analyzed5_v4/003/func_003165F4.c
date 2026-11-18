#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004D8240(float *param_1,uint param_2,uint param_3,float fparam_0);
extern float DAT_003166ac;
extern float DAT_003166b0;
extern int DAT_003166b4;
extern int DAT_003166b8;
extern char s_SE_EnemyFireBall_SHOT_003166bc[];
extern char s_SE_EnemyIceBall_SHOT_003166d4[];

// USA 003165F4 <- EU 003165D0 (Ghidra, non-matching)
// GLOBAL DAT_003166ac float
// GLOBAL DAT_003166b0 float
// GLOBAL DAT_003166b4 int
// GLOBAL DAT_003166b8 int
// GLOBAL s_SE_EnemyFireBall_SHOT_003166bc string
// GLOBAL s_SE_EnemyIceBall_SHOT_003166d4 string

int func_003165F4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  iVar1 = param_1[0x11f];
  if ((iVar1 == 1 || iVar1 == 2) || (fparam_0 = DAT_003166b0, iVar1 == 3 || iVar1 == 4)) {
    fparam_0 = DAT_003166ac;
  }
  func_004D8240((float *)(param_1 + 0xf7),param_1[0x132],param_1[0xfa],fparam_0);
  iVar1 = DAT_003166b4;
  *(undefined1 *)(param_1[0x10d] + 0x61) = 0;
  param_1[0x130] = 300;
  param_1[0x131] = iVar1;
  param_1[0x12f] = 0;
  iVar1 = DAT_003166b8;
  switch(param_1[0x11f]) {
  case 0:
  case 2:
  case 4:
    local_10 = DAT_003166b8;
    local_c = s_SE_EnemyFireBall_SHOT_003166bc;
    iVar1 = func_00150A84(param_1,&local_10,0);
    break;
  case 1:
  case 3:
    local_10 = DAT_003166b8;
    local_c = s_SE_EnemyIceBall_SHOT_003166d4;
    uVar2 = func_00150A84(param_1,&local_10,0);
    return uVar2;
  }
  return iVar1;
}

