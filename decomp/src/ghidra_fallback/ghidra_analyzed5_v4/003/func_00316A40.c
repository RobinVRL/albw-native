#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern float func_00491624(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_005568E8(int param_1);
extern int func_00664D94(undefined4 *param_1,undefined1 param_2);
extern float DAT_00316c5c;
extern float DAT_00316c60;
extern int *DAT_00316c64;
extern undefined4 *DAT_00316c68;
extern undefined4 DAT_00316c6c;
extern undefined4 DAT_00316c70;
extern undefined4 DAT_00316c74;
extern float DAT_00316c78;
extern float DAT_00316c7c;
extern char s_SE_EnemyFireBall_FLY_00316c80[];
extern char s_SE_EnemyIceBall_FLY_00316c98[];

// USA 00316A40 <- EU 00316A1C (Ghidra, non-matching)
// GLOBAL DAT_00316c5c float
// GLOBAL DAT_00316c60 float
// GLOBAL DAT_00316c64 int *
// GLOBAL DAT_00316c68 undefined4 *
// GLOBAL DAT_00316c6c undefined4
// GLOBAL DAT_00316c70 undefined4
// GLOBAL DAT_00316c74 undefined4
// GLOBAL DAT_00316c78 float
// GLOBAL DAT_00316c7c float
// GLOBAL s_SE_EnemyFireBall_FLY_00316c80 string
// GLOBAL s_SE_EnemyIceBall_FLY_00316c98 string

undefined4 func_00316A40(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define local_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(char * *)(albw_frame + 0x24))
  if (*(uint *)(param_1 + 0x4bc) < *(uint *)(param_1 + 0x4c0)) {
    uVar1 = *(uint *)(param_1 + 0x4bc) + 1;
    *(uint *)(param_1 + 0x4bc) = uVar1;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x4bc);
  }
  fVar7 = DAT_00316c5c;
  if (uVar1 < *(uint *)(param_1 + 0x4c0)) {
    iVar2 = *(int *)(param_1 + 0x434);
    if ((iVar2 != 0) && (*(char *)(iVar2 + 0x61) == '\0')) {
      fVar4 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8);
      fVar6 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10);
      fVar5 = DAT_00316c5c;
      if (*(int *)(param_1 + 0x47c) == 1 || *(int *)(param_1 + 0x47c) == 4) {
        fVar5 = DAT_00316c60;
      }
      if (fVar5 < SQRT(fVar4 * fVar4 + fVar6 * fVar6)) {
        *(undefined1 *)(iVar2 + 0x61) = 1;
      }
    }
    piVar3 = *(int **)(param_1 + 0x474);
    if (piVar3 != (int *)0x0) {
      iVar2 = *piVar3;
    }
    if ((piVar3 == (int *)0x0 || iVar2 == 0) ||
       (iVar2 = func_005568E8(*DAT_00316c64), *piVar3 == iVar2)) {
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc)
                   );
      local_4c = *DAT_00316c68;
      uStack_48 = DAT_00316c68[1];
      uStack_44 = DAT_00316c68[2];
      local_58 = DAT_00316c6c;
      uStack_54 = DAT_00316c70;
      local_50 = DAT_00316c6c;
      iVar2 = func_0014EEC8(param_1,(uint)&local_4c,&local_58,DAT_00316c74,DAT_00316c78);
      if (iVar2 == 0) {
        iVar2 = *(int *)(param_1 + 0x430);
        *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_1 + 0x3d0);
        *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x3d4);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
        func_004356B4(*(int **)(param_1 + 0x430));
        func_00491624(&local_40,0,*(uint *)(param_1 + 1000),0);
        func_001512B4(*(int *)(param_1 + 0x438),(float *)(param_1 + 0x3d0));
        func_0015133C(*(int *)(param_1 + 0x438),&local_40);
        switch(*(undefined4 *)(param_1 + 0x47c)) {
        case 0:
        case 2:
        case 4:
          local_40 = DAT_00316c7c;
          local_3c = s_SE_EnemyFireBall_FLY_00316c80;
          return func_001507D8(param_1,(int *)&local_40,0);
        case 1:
        case 3:
          local_40 = DAT_00316c7c;
          local_3c = s_SE_EnemyIceBall_FLY_00316c98;
          return func_001507D8(param_1,(int *)&local_40,0);
        default:
          return 0;
        }
      }
      if ((*(int *)(param_1 + 0x47c) == 1 || *(int *)(param_1 + 0x47c) == 4) &&
         (fVar5 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 8),
         fVar4 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0x10),
         SQRT(fVar5 * fVar5 + fVar4 * fVar4) <= fVar7)) {
        return 0;
      }
    }
  }
  return func_00664D94((undefined4 *)(param_1 + 0x40c),1);
}

