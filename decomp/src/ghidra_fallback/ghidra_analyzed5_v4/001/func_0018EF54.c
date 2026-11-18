#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_0035227C(int param_1,undefined4 param_2);
extern int func_004904CC(float fparam_0,float fparam_1);
extern int func_004B06FC(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00588BE4(int param_1);
extern float DAT_0018f310;
extern int DAT_0018f314;
extern int *DAT_0018f318;
extern int *DAT_0018f31c;
extern int *DAT_0018f320;
extern uint *DAT_0018f324;
extern undefined4 *DAT_0018f328;
extern undefined4 DAT_0018f32c;
extern float *DAT_0018f330;
extern int DAT_0018f334;
extern int *DAT_0018f338;
extern int *DAT_0018f33c;
extern float DAT_0018f340;
extern float DAT_0018f344;

// USA 0018EF54 <- EU 0018EF54 (Ghidra, non-matching)
// GLOBAL DAT_0018f310 float
// GLOBAL DAT_0018f314 int
// GLOBAL DAT_0018f318 int *
// GLOBAL DAT_0018f31c int *
// GLOBAL DAT_0018f320 int *
// GLOBAL DAT_0018f324 uint *
// GLOBAL DAT_0018f328 undefined4 *
// GLOBAL DAT_0018f32c undefined4
// GLOBAL DAT_0018f330 float *
// GLOBAL DAT_0018f334 int
// GLOBAL DAT_0018f338 int *
// GLOBAL DAT_0018f33c int *
// GLOBAL DAT_0018f340 float
// GLOBAL DAT_0018f344 float

undefined4 func_0018EF54(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  ushort *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(float *)(albw_frame + 0x8))
  #define fStack_54 (*(float *)(albw_frame + 0xc))
  #define fStack_50 (*(float *)(albw_frame + 0x10))
  #define local_44 (*(float *)(albw_frame + 0x1c))
  #define local_40 (*(float *)(albw_frame + 0x20))
  #define local_3c (*(float *)(albw_frame + 0x24))
  #define local_38 (*(float *)(albw_frame + 0x28))
  #define fStack_34 (*(float *)(albw_frame + 0x2c))
  #define local_30 (*(float *)(albw_frame + 0x30))
  if (*(char *)(param_1 + 0x4a0) == '\0') {
    fVar2 = *(float *)(param_2 + 8);
    if (fVar2 <= DAT_0018f310) {
      fVar2 = -fVar2;
    }
    if (((int)ALBW_AS_U32(fVar2) <= DAT_0018f314) &&
       (puVar3 = (ushort *)func_004B06FC((*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5),
       (*puVar3 & 2) == 0)) {
      if (((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x160) &&
         ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x10U) != 0)) {
        if (*(char *)(param_1 + 0x560) == '\0') {
          *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_2 + 4);
          *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0xc);
          *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x10);
          *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x14);
          *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x18);
        }
        *(undefined1 *)(param_1 + 0x561) = 1;
      }
      piVar4 = (int *)func_0052FBA0(*DAT_0018f318 + 0x3dbbc,*(uint *)(param_2 + 0x28));
      if (piVar4 != (int *)0x0) {
        iVar5 = func_00588BE4((int)piVar4);
        if ((iVar5 == *DAT_0018f31c) || (iVar5 == *DAT_0018f320)) {
          if (((*DAT_0018f324 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_0018f324), iVar5 != 0)
             ) {
            *DAT_0018f328 = DAT_0018f32c;
          }
          iVar5 = (**(code **)*piVar4)(piVar4,DAT_0018f328);
          if (iVar5 == 0) {
            piVar4 = (int *)0x0;
          }
          iVar5 = (**(code **)(*piVar4 + 0x58))(piVar4);
          if (iVar5 != 0) {
            fVar2 = *(float *)(param_1 + 0x3dc) * *DAT_0018f330 +
                    *(float *)(param_1 + 0x3e0) * DAT_0018f330[1] +
                    *(float *)(param_1 + 0x3e4) * DAT_0018f330[2];
            func_00115E10(&local_38,(float *)(param_1 + 0x3dc),DAT_0018f330);
            iVar5 = func_004904CC(SQRT(local_38 * local_38 + fStack_34 * fStack_34 +
                                       local_30 * local_30),fVar2);
            if ((uint)(iVar5 + DAT_0018f334) < (uint)(DAT_0018f334 * 2)) {
              *(int **)(param_1 + 0x4fc) = piVar4;
            }
          }
        }
        else {
          if (iVar5 == *DAT_0018f338) {
            return 0;
          }
          if ((iVar5 == *DAT_0018f33c) && ((*(ushort *)(param_2 + 0x20) & 0x7e0) == 0x1a0)) {
            if (*(char *)(param_1 + 0x560) == '\0') {
              *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(param_2 + 4);
              *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(param_2 + 8);
              *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(param_2 + 0xc);
              *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x10);
              *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(param_2 + 0x14);
              *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(param_2 + 0x18);
            }
            *(undefined1 *)(param_1 + 0x561) = 1;
            return 0;
          }
        }
      }
      if ((1 << (*(ushort *)(param_2 + 0x20) & 0x1f) & 0x80U) == 0) {
        if (*(char *)(param_1 + 0x55c) != '\0') {
          if (*(char *)(param_1 + 0x4e4) == '\x03') {
            return 0;
          }
          if ((*(char *)(param_1 + 0x4e4) == '\x04') && (*(char *)(param_1 + 0x558) != '\x01')) {
            return 0;
          }
        }
        uVar1 = (*(ushort *)(param_2 + 0x20) & 0x7e0) >> 5;
        *(char *)(param_1 + 0x4e4) = (char)uVar1;
        *(undefined4 *)(param_1 + 0x4e8) = *(undefined4 *)(param_2 + 0x28);
        func_0035227C(param_1 + 0x324,uVar1);
        func_00115D70(&local_58,(float *)(param_1 + 0x3dc),DAT_0018f340);
        local_44 = local_58;
        local_40 = fStack_54;
        local_3c = fStack_50;
        func_00115DC8(&local_44);
        fVar2 = local_44 * *(float *)(param_2 + 4) + local_40 * *(float *)(param_2 + 8) +
                local_3c * *(float *)(param_2 + 0xc);
        if (((uint)ALBW_AS_U32(DAT_0018f344) <= (uint)ALBW_AS_U32(fVar2)) ||
           ((int)((int)ALBW_AS_U32(DAT_0018f344) + 0x80000000U) <= (int)ALBW_AS_U32(fVar2))) {
          fVar2 = *(float *)(param_2 + 0x1c) / fVar2;
          if (fVar2 <= *(float *)(param_1 + 0x4f8)) {
            fVar2 = *(float *)(param_1 + 0x4f8);
          }
          *(float *)(param_1 + 0x4f8) = fVar2;
        }
        *(undefined1 *)(param_1 + 0x55c) = 1;
        *(byte *)(param_1 + 0x558) = (byte)*(undefined2 *)(param_2 + 0x20) & 0x1f;
        *(char *)(param_1 + 0x559) = (char)((*(uint *)(param_2 + 0x24) & 0x1800) >> 0xb);
        uVar6 = *(undefined4 *)(param_2 + 0x14);
        uVar7 = *(undefined4 *)(param_2 + 0x18);
        *(undefined4 *)(param_1 + 0x500) = *(undefined4 *)(param_2 + 0x10);
        *(undefined4 *)(param_1 + 0x504) = uVar6;
        *(undefined4 *)(param_1 + 0x508) = uVar7;
        return 1;
      }
    }
  }
  return 0;
}

