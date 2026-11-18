#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00323DF0(char *param_1,char param_2,int *param_3);
extern int func_003242F8(int param_1,float *param_2);
extern int func_003243A8(char *param_1,float *param_2,float *param_3);
extern int func_0036CE40(int *param_1,uint *param_2);
extern int func_0036CF20(undefined4 *param_1);
extern int func_0036CF2C(uint *param_1,undefined4 param_2,float fparam_0);
extern float func_0051CF68(float *param_1,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D2CC(int *param_1,int param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0058E2B8(int *param_1);
extern int func_00663FA8(undefined4 *param_1,undefined1 param_2);
extern int func_0068C690(float *param_1);
extern uint DAT_002e6a04;
extern float DAT_002e6a08;
extern uint DAT_002e6a0c;
extern float DAT_002e6a10;

// USA 002E678C <- EU 002E6768 (Ghidra, non-matching)
// GLOBAL DAT_002e6a04 uint
// GLOBAL DAT_002e6a08 float
// GLOBAL DAT_002e6a0c uint
// GLOBAL DAT_002e6a10 float

undefined4 func_002E678C(int param_1)

{
  bool bVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  ulonglong uVar10;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((int *)(albw_frame + 0x8))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(float *)(albw_frame + 0x1c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_2c (*(float *)(albw_frame + 0x24))
  iVar2 = func_003243A8((char *)(param_1 + 0x8f0),(float *)(param_1 + 0x3d0),
                        (float *)(param_1 + 0x3dc));
  fVar8 = func_0051CF68((float *)(param_1 + 0xa34),*(float *)(param_1 + 0xa28),
                        *(float *)(param_1 + 0xa2c),*(float *)(param_1 + 0xa30));
  *(float *)(param_1 + 0xa38) = fVar8;
  if (*(int *)(param_1 + 0xa34) == 0x3f800000) {
    *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xa64);
    *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0xa6c);
  }
  else {
    *(float *)(param_1 + 0x3dc) = *(float *)(param_1 + 0xa64) * fVar8;
    *(float *)(param_1 + 0x3e4) = *(float *)(param_1 + 0xa6c) * fVar8;
  }
  if (*(int *)(param_1 + 0x8bc) < 2) {
    return 0;
  }
  if (iVar2 == 0) {
    if (*(char *)(param_1 + 0xa00) == '\0') {
      if (2 < *(int *)(param_1 + 0x8bc)) {
        func_003242F8(param_1 + 0x8f0,&local_40);
        iVar2 = func_0068C690(&local_40);
        if (local_40 != DAT_002e6a08 || local_38 != DAT_002e6a08) {
          func_0068C690((float *)(param_1 + 0x3dc));
          local_48[0] = *(int *)(param_1 + 0xa24) - iVar2;
          uVar4 = func_0058E2B8(local_48);
          if (DAT_002e6a0c < uVar4) {
            *(undefined4 *)(param_1 + 0xa20) = *(undefined4 *)(param_1 + 1000);
            *(int *)(param_1 + 0xa24) = iVar2;
            goto LAB_002e69ec;
          }
        }
        func_0051D2CC((int *)(param_1 + 1000),iVar2,DAT_002e6a10);
        *(undefined4 *)(param_1 + 0xa24) = *(undefined4 *)(param_1 + 1000);
      }
    }
    else {
      puVar5 = (uint *)(param_1 + 0xa04);
      func_0036CF20(puVar5);
      uVar10 = (ulonglong)DAT_002e6a04;
      iVar2 = 0;
      do {
        if ((*(int *)(param_1 + 0x8e0) != iVar2) ||
           (bVar1 = func_00323DF0((char *)(param_1 + 0x8f0),(char)iVar2,(int *)0x0), bVar1)) {
          func_0036CF2C(puVar5,iVar2,ALBW_AS_F32(uVar10));
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < 4);
      puVar6 = (uint *)func_0058A7D4();
      uVar7 = func_0036CE40((int *)puVar5,puVar6);
      uVar4 = (uint)(char)uVar7;
      *(uint *)(param_1 + 0x8e0) = uVar4;
      *(undefined1 *)(param_1 + 0xa00) = 0;
      *(uint *)(param_1 + 0xa24) = uVar4;
      *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 1000);
      if (uVar4 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) goto LAB_002e69ec;
    }
  }
  else {
    fVar8 = *(float *)(param_1 + 0x3d0) - *(float *)(param_1 + 0xa58);
    fVar9 = *(float *)(param_1 + 0x3d8) - *(float *)(param_1 + 0xa60);
    if (0x3fc00000 < (int)ALBW_AS_U32((fVar8 * fVar8 + fVar9 * fVar9))) goto LAB_002e69ec;
    pfVar3 = (float *)func_00520FC0();
    func_00115C70(&local_34,pfVar3,(float *)(param_1 + 0x3d0));
    local_40 = local_34;
    uStack_3c = uStack_30;
    local_38 = fStack_2c;
    uVar4 = func_0068C690(&local_40);
    *(uint *)(param_1 + 0x8e0) = uVar4;
    *(undefined1 *)(param_1 + 0xa00) = 0;
    *(uint *)(param_1 + 0xa24) = uVar4;
    *(int *)(param_1 + 0xa20) = *(int *)(param_1 + 1000);
    if (uVar4 != *(int *)(param_1 + 1000) + 0x20000000U >> 0x1e) goto LAB_002e69ec;
  }
  uVar4 = *(uint *)(param_1 + 0x8e4);
  if (uVar4 < *(uint *)(param_1 + 0x8e8)) {
    uVar4 = uVar4 + 1;
    *(uint *)(param_1 + 0x8e4) = uVar4;
  }
  if (uVar4 < *(uint *)(param_1 + 0x8e8)) {
    return 0;
  }
LAB_002e69ec:
  return func_00663FA8((undefined4 *)(param_1 + 0x8bc),3);
}

