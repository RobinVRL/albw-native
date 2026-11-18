// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_003929C4(int *param_1);
extern int func_00392C20(int param_1);
extern int func_00392DBC(int param_1);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int func_004C2554(int param_1);
extern int func_004C2650(int *param_1);
extern int func_0052E32C(int param_1,undefined4 *param_2);
extern int func_00547514(int param_1);
extern int func_00588BE4(int param_1);
extern float DAT_004c31f0;
extern uint DAT_004c31f4;
extern int *DAT_004c31f8;
extern int *DAT_004c31fc;
extern int *DAT_004c3200;
extern int DAT_004c3204;
extern undefined4 DAT_004c3208;
extern undefined4 DAT_004c320c;
extern float DAT_004c3210;
extern int DAT_004c3214;
extern int *DAT_004c3218;
extern float DAT_004c321c;
extern float DAT_004c3220;
extern float DAT_004c3224;

// USA 004C2EF4 <- EU 004C2ECC (Ghidra, non-matching)
// MAPFIX: tools/ghidra_name_fixes.json applied (do not apply again)
// GLOBAL DAT_004c31f0 float
// GLOBAL DAT_004c31f4 uint
// GLOBAL DAT_004c31f8 int *
// GLOBAL DAT_004c31fc int *
// GLOBAL DAT_004c3200 int *
// GLOBAL DAT_004c3204 int
// GLOBAL DAT_004c3208 undefined4
// GLOBAL DAT_004c320c undefined4
// GLOBAL DAT_004c3210 float
// GLOBAL DAT_004c3214 int
// GLOBAL DAT_004c3218 int *
// GLOBAL DAT_004c321c float
// GLOBAL DAT_004c3220 float
// GLOBAL DAT_004c3224 float

undefined4 func_004C2EF4(int param_1,uint param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define iStack_60 (*(int *)(albw_frame + 0x0))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_50 (*(uint *)(albw_frame + 0x10))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_40 (*(undefined1 *)(albw_frame + 0x20))
  #define fStack_3c (*(float *)(albw_frame + 0x24))
  #define iStack_38 (*(int *)(albw_frame + 0x28))
  #define fStack_34 (*(float *)(albw_frame + 0x2c))
  #define iStack_30 (*(int *)(albw_frame + 0x30))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x34))
  piVar1 = DAT_004c3218;
  if (*(char *)(param_1 + 0x568) != '\0') {
    if (*(short *)(param_1 + 0x2c) == 1) {
      func_00547514(param_1 + 4);
    }
    *(undefined1 *)(param_1 + 0x2d7) = 1;
    return 0;
  }
  switch(*(undefined1 *)(param_1 + 0x4f8)) {
  case 0:
    uStack_50 = DAT_004c31f4 | param_2 & 0xffff0000;
    iStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_4c = 0xff;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_54 = *(undefined4 *)(param_1 + 0x2cc);
    uStack_44 = *(undefined4 *)(param_1 + 0x4fc);
    fVar7 = DAT_004c31f0;
    uVar4 = func_004A8F40(*DAT_004c31f8,&iStack_60,0x1200);
    if (uVar4 != 0) {
      iVar3 = func_00588BE4(param_1);
      iVar5 = DAT_004c3204;
      piVar1 = DAT_004c3200;
      if (iVar3 == *DAT_004c31fc) {
        uStack_2c = DAT_004c3208;
        iStack_30 = DAT_004c3204;
        func_00150A84((int *)param_1,&iStack_30,0);
      }
      else {
        iVar3 = func_00588BE4(param_1);
        if (iVar3 == *piVar1) {
          uStack_2c = DAT_004c320c;
          iStack_30 = iVar5;
          func_00150A84((int *)param_1,&iStack_30,0);
        }
        else {
          fStack_34 = DAT_004c3210;
          iStack_38 = iVar5;
          func_00150A84((int *)param_1,&iStack_38,0);
        }
      }
      (**(code **)(*(int *)(param_1 + 800) + 0x30))(param_1 + 800);
      *(undefined1 *)(param_1 + 0x568) = 1;
      iVar5 = func_00588BE4(param_1);
      if (iVar5 == *piVar1) {
        iStack_38 = DAT_004c3214;
        fStack_3c = fVar7;
        fStack_34 = fVar7;
        func_0014FD6C(param_1,&fStack_3c,*(undefined4 *)(param_1 + 1000));
      }
    }
    break;
  case 1:
    fVar9 = DAT_004c31f0;
    func_0052E32C(*DAT_004c3218,(undefined4 *)(param_1 + 0x3d0));
    fVar8 = DAT_004c3224;
    fVar7 = DAT_004c3220;
    iVar5 = *piVar1;
    *(undefined4 *)(param_1 + 1000) = **(undefined4 **)(iVar5 + 0x24);
    fVar6 = *(float *)(*(int *)(iVar5 + 0x1c) + 4);
    *(float *)(param_1 + 0x570) = fVar6;
    fVar8 = (fVar8 * ((*(float *)(param_1 + 0x3d4) - fVar6) - fVar9)) / fVar7 + DAT_004c321c;
    fVar7 = DAT_004c321c;
    if (0x3f800000 < (int)ALBW_AS_U32(fVar8)) {
      fVar7 = fVar8;
    }
    *(float *)(param_1 + 0x574) = fVar8;
    *(float *)(param_1 + 0x574) = fVar7;
    if (*(uint *)(param_1 + 0x588) < *(uint *)(param_1 + 0x58c)) {
      *(uint *)(param_1 + 0x588) = *(uint *)(param_1 + 0x588) + 1;
    }
    bVar2 = *(char *)(param_1 + 0x56b) != '\0';
    uVar4 = 0;
    if (bVar2) {
      uVar4 = *(uint *)(param_1 + 0x588);
    }
    if (bVar2 && uVar4 < *(uint *)(param_1 + 0x58c)) {
      *(float *)(param_1 + 0x4e0) = fVar9;
    }
    break;
  case 2:
    func_004C2650((int *)param_1);
    break;
  case 3:
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
    iVar5 = func_003929C4((int *)(param_1 + 0x5a0));
    goto joined_r0x004c31a8;
  case 4:
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
    iVar5 = func_00392C20(param_1 + 0x5a0);
joined_r0x004c31a8:
    if (iVar5 != 0) {
LAB_004c31d8:
      *(undefined1 *)(param_1 + 0x568) = 1;
    }
    break;
  case 5:
    func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
    bVar2 = func_00392DBC(param_1 + 0x5a0);
    if (!bVar2) break;
    goto LAB_004c31d8;
  }
  return func_004C2554(param_1);
}

