#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_0010B3EC(undefined4 *param_1,int param_2,int param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A9178(undefined4 param_1,int param_2,float *param_3,undefined4 *param_4, undefined4 param_5,int param_6,float fparam_0,float fparam_1);
extern int func_004A97F8(int param_1,float *param_2,float *param_3,int *param_4,uint param_5);
extern int DAT_004aaf10;
extern int *DAT_004aaf14;
extern uint *DAT_004aaf18;

// USA 004AAD4C <- EU 004AAD24 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 uint
// GLOBAL DAT_004aaf10 int
// GLOBAL DAT_004aaf14 int *
// GLOBAL DAT_004aaf18 uint *

void func_004AAD4C(int param_1,float *param_2,undefined4 *param_3,undefined4 param_4,uint param_5,
                  uint param_6,float fparam_0,float fparam_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define local_6c (*(float *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define afStack_64 ((float *)(albw_frame + 0xc))
  #define afStack_58 ((float *)(albw_frame + 0x18))
  #define uStack_3c (*(undefined8 *)(albw_frame + 0x34))
  #define local_34 (*(int *)(albw_frame + 0x3c))
  #define local_30 (*(float * *)(albw_frame + 0x40))
  #define puStack_2c (*(undefined4 * *)(albw_frame + 0x44))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x48))
  uStack_3c = CONCAT44(fparam_1,fparam_0);
  uVar13 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  uVar12 = CONCAT44(param_6,fparam_1);
  local_70 = fparam_1;
  local_6c = fparam_1;
  local_68 = fparam_1;
  local_34 = param_1;
  local_30 = param_2;
  puStack_2c = param_3;
  uStack_28 = param_4;
  func_00115C70(afStack_64,param_2,&local_70);
  func_00115C54(afStack_58,local_30,&local_70);
  if (((*(uint *)(DAT_004aaf10 + 0x24) & 1) == 0) &&
     (iVar2 = func_00100174(DAT_004aaf14), puVar1 = DAT_004aaf18, iVar2 != 0)) {
    puVar5 = DAT_004aaf18 + 3;
    *DAT_004aaf18 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    func_0010B3EC(puVar1,100,(int)puVar5);
  }
  iVar2 = local_34;
  uVar11 = 0;
  iVar9 = local_34 + 0xbf3c;
  do {
    puVar1 = DAT_004aaf18;
    if ((param_5 & 1 << (uVar11 & 0xff)) != 0) {
      *DAT_004aaf18 = 0;
      func_004A97F8(local_34,afStack_64,afStack_58,(int *)puVar1,uVar11);
      uVar10 = *puVar1;
      uVar8 = 0;
      if (0 < (int)uVar10) {
        do {
          if (uVar8 < *DAT_004aaf18) {
            iVar6 = *(int *)(DAT_004aaf18[2] + uVar8 * 4);
            iVar3 = *(int *)(DAT_004aaf18[2] + uVar8 * 4);
          }
          else {
            iVar6 = 0;
            iVar3 = 0;
          }
          for (iVar3 = *(int *)(iVar3 + 4); iVar3 != iVar6; iVar3 = *(int *)(iVar3 + 4)) {
            func_004A9178(local_34,*(int *)(iVar3 + 8),local_30,puStack_2c,param_4,
                          (int)((ulonglong)uVar12 >> 0x20),ALBW_AS_F32(uVar13),ALBW_AS_F32(uVar12));
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)uVar10);
      }
      iVar3 = *(int *)(iVar2 + 0xbf48);
      for (iVar6 = *(int *)(iVar2 + 0xbf40) - iVar3; iVar6 != iVar9 - *(int *)(iVar2 + 0xbf48);
          iVar6 = *(int *)(iVar6 + iVar3 + 4) - iVar3) {
        iVar4 = iVar6 + 0xb4;
        if (uVar11 < 6) {
          iVar4 = iVar4 + uVar11 * 0xc;
        }
        iVar7 = iVar6 + 0xb4;
        iVar4 = *(int *)(iVar4 + 4);
        if (uVar11 < 6) {
          iVar7 = iVar7 + uVar11 * 0xc;
        }
        for (; iVar4 != iVar7; iVar4 = *(int *)(iVar4 + 4)) {
          func_004A9178(local_34,*(int *)(iVar4 + 8),local_30,puStack_2c,param_4,
                        (int)((ulonglong)uVar12 >> 0x20),ALBW_AS_F32(uVar13),ALBW_AS_F32(uVar12));
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while ((int)uVar11 < 6);
  return;
}

