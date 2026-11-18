#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00115E10(float *param_1,float *param_2,float *param_3);
extern int func_00150688(undefined4 param_1,int param_2,undefined2 *param_3);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_0048B57C(float *param_1,float *param_2,float fparam_0);
extern int func_0048B620(float *param_1,float *param_2,float *param_3);
extern int func_00588BE4(int param_1);
extern float DAT_0013ed04;
extern float DAT_0013ed08;
extern int DAT_0013ed0c;
extern float DAT_0013ed10;
extern float *DAT_0013ed14;
extern int *DAT_0013ed18;
extern int DAT_0013ed1c;
extern char s_SE_GoroIwal_ROLL_0013ed20[];
extern char s_SE_IronBall_ROLL_L_0013ed34[];

// USA 0013EA58 <- EU 0013EA58 (Ghidra, non-matching)
// GLOBAL DAT_0013ed04 float
// GLOBAL DAT_0013ed08 float
// GLOBAL DAT_0013ed0c int
// GLOBAL DAT_0013ed10 float
// GLOBAL DAT_0013ed14 float *
// GLOBAL DAT_0013ed18 int *
// GLOBAL DAT_0013ed1c int
// GLOBAL s_SE_GoroIwal_ROLL_0013ed20 string
// GLOBAL s_SE_IronBall_ROLL_L_0013ed34 string

undefined4 func_0013EA58(int param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  char cVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(char * *)(albw_frame + 0x4))
  #define local_68 (*(float *)(albw_frame + 0x8))
  #define fStack_64 (*(float *)(albw_frame + 0xc))
  #define fStack_60 (*(float *)(albw_frame + 0x10))
  #define local_5c (*(float *)(albw_frame + 0x14))
  #define afStack_54 ((float *)(albw_frame + 0x1c))
  #define local_48 (*(float *)(albw_frame + 0x28))
  #define local_44 (*(float *)(albw_frame + 0x2c))
  #define fStack_40 (*(float *)(albw_frame + 0x30))
  #define local_3c (*(float *)(albw_frame + 0x34))
  #define afStack_38 ((float *)(albw_frame + 0x38))
  func_00115C70(afStack_54,(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x484));
  fVar9 = DAT_0013ed08;
  fVar8 = DAT_0013ed04;
  if (*(char *)(param_1 + 0x51f) != '\0') {
    fVar6 = *(float *)(param_1 + 0x490) - *(float *)(param_1 + 0x3d0);
    fVar7 = *(float *)(param_1 + 0x498) - *(float *)(param_1 + 0x3d8);
    if ((DAT_0013ed0c <= (int)ALBW_AS_U32((fVar6 * fVar6 + fVar7 * fVar7))) ||
       (*(float *)(param_1 + 0x3e0) <= *(float *)(*(int *)(param_1 + 0x42c) + 4) * DAT_0013ed10)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    if (*(char *)(param_1 + 0x522) != cVar4) {
      *(char *)(param_1 + 0x522) = cVar4;
      func_00150688(param_1,*(int *)(param_1 + 0x418),*(undefined2 **)(param_1 + 0x3a0));
      if (cVar4 != '\0') {
        iVar3 = *(int *)(param_1 + 0x418);
        uVar1 = *(undefined1 *)(iVar3 + 0x20);
        uVar2 = *(undefined2 *)(iVar3 + 0x32);
        *(undefined1 *)(iVar3 + 0x20) = 0;
        *(undefined1 *)(iVar3 + 0x21) = 0x1f;
        *(undefined1 *)(iVar3 + 0x22) = 0xff;
        *(undefined1 *)(iVar3 + 0x23) = 0;
        *(float *)(iVar3 + 0x24) = fVar9;
        *(float *)(iVar3 + 0x28) = fVar9;
        *(float *)(iVar3 + 0x2c) = fVar9;
        *(undefined2 *)(iVar3 + 0x30) = 0;
        *(undefined2 *)(iVar3 + 0x32) = 0xffff;
        *(float *)(iVar3 + 0x34) = fVar8;
        *(undefined1 *)(*(int *)(param_1 + 0x418) + 0x20) = uVar1;
        *(undefined2 *)(*(int *)(param_1 + 0x418) + 0x32) = uVar2;
      }
    }
  }
  if (*(char *)(*(int *)(param_1 + 0x410) + 0x30) != '\0') {
    if (*(char *)(param_1 + 0x51e) == '\0') {
      fVar7 = *(float *)(param_1 + 0x43c) * **(float **)(param_1 + 0x42c);
      func_00115E10(afStack_38,(float *)(param_1 + 0x49c),afStack_54);
      fVar6 = func_00115DC8(afStack_38);
      if (fVar6 == fVar9) {
        local_68 = *DAT_0013ed14;
        fStack_64 = DAT_0013ed14[1];
        fStack_60 = DAT_0013ed14[2];
        local_5c = DAT_0013ed14[3];
      }
      else {
        func_0048B57C(&local_68,afStack_38,fVar7);
      }
      pfVar5 = (float *)(param_1 + 0x4d8);
      func_0048B620(&local_48,&local_68,pfVar5);
      *pfVar5 = local_48;
      *(float *)(param_1 + 0x4e4) = local_3c;
      *(float *)(param_1 + 0x4dc) = local_44;
      *(float *)(param_1 + 0x4e0) = fStack_40;
      fVar6 = SQRT(local_3c * local_3c + local_48 * local_48 + local_44 * local_44 +
                   fStack_40 * fStack_40);
      if (fVar9 < fVar6) {
        fVar8 = fVar8 / fVar6;
        *(float *)(param_1 + 0x4e4) = local_3c * fVar8;
        *pfVar5 = local_48 * fVar8;
        *(float *)(param_1 + 0x4dc) = *(float *)(param_1 + 0x4dc) * fVar8;
        *(float *)(param_1 + 0x4e0) = fStack_40 * fVar8;
      }
    }
    if (*(char *)(param_1 + 0x522) == '\0') {
      iVar3 = func_00588BE4(param_1);
      local_70 = DAT_0013ed1c;
      if (iVar3 != *DAT_0013ed18) {
        local_6c = s_SE_IronBall_ROLL_L_0013ed34;
        return func_001507D8(param_1,&local_70,0);
      }
      local_6c = s_SE_GoroIwal_ROLL_0013ed20;
      func_001507D8(param_1,&local_70,0);
    }
  }
  return 0;
}

