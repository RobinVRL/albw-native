#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014DBF4(int *param_1,int *param_2,undefined4 param_3,int param_4);
extern float func_0049216C(float *param_1,uint *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2D1C(int param_1,float *param_2);
extern int DAT_0031770c;
extern float DAT_00317710;
extern undefined4 DAT_00317714;
extern int DAT_00317718;
extern char s_SE_Soldier_APPEAR_FROM_WALL_MAGI_00317740[];
extern char s_SE_Soldier_APPEAR_FROM_WALL_PAIN_0031771c[];

// USA 003175F4 <- EU 003175D0 (Ghidra, non-matching)
// GLOBAL DAT_0031770c int
// GLOBAL DAT_00317710 float
// GLOBAL DAT_00317714 undefined4
// GLOBAL DAT_00317718 int
// GLOBAL s_SE_Soldier_APPEAR_FROM_WALL_MAGI_00317740 string
// GLOBAL s_SE_Soldier_APPEAR_FROM_WALL_PAIN_0031771c string

undefined4 func_003175F4(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(char * *)(albw_frame + 0xc))
  #define local_60 (*(int *)(albw_frame + 0x10))
  #define iStack_5c (*(int *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_50 (*(float *)(albw_frame + 0x20))
  #define local_4c (*(uint *)(albw_frame + 0x24))
  #define iStack_48 (*(int *)(albw_frame + 0x28))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define afStack_40 ((float *)(albw_frame + 0x30))
  piVar2 = (int *)(DAT_0031770c + param_1[0x10e] * 8);
  (**(code **)(*piVar2 + 8))(piVar2);
  puVar3 = (uint *)piVar2[1];
  piVar2 = param_1 + 0x10c;
  if (param_1[0xd1] == 0) {
    *piVar2 = 0;
    param_1[0x10d] = 0;
  }
  else {
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x10d])) {
      func_00110848(iVar1);
    }
    func_004A1B9C(&local_60,param_1[0xd1],puVar3);
    *piVar2 = local_60;
    param_1[0x10d] = iStack_5c;
  }
  local_58 = DAT_00317710;
  uStack_54 = DAT_00317714;
  local_50 = DAT_00317710;
  func_00115C54(&local_58,&local_58,(float *)(param_1 + 0xf4));
  local_4c = param_1[8];
  iStack_48 = param_1[0xfa];
  uStack_44 = 0;
  func_0049216C(afStack_40,&local_4c,&local_58);
  iVar1 = param_1[0x10c];
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x10d])) {
    func_004A2D1C(iVar1,afStack_40);
  }
  local_68 = DAT_00317718;
  if (*(short *)((int)param_1 + 0x2e) < 1) {
    local_64 = s_SE_Soldier_APPEAR_FROM_WALL_MAGI_00317740;
    return func_0014DBF4(param_1,&local_68,&local_58,0);
  }
  local_64 = s_SE_Soldier_APPEAR_FROM_WALL_PAIN_0031771c;
  return func_0014DBF4(param_1,&local_68,&local_58,0);
}

