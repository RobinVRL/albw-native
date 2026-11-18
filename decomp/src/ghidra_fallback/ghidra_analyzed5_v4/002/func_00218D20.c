#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A8F40(int param_1,int *param_2,uint param_3);
extern int DAT_00218eb4;
extern uint DAT_00218ed8;
extern int *DAT_00218edc;
extern float DAT_00218ee0;
extern int DAT_00218ee4;
extern float DAT_00218ee8;
extern char s_Break_00218eb8[];
extern char s_SE_Kyameron_DISAPPEAR_00218ec0[];

// USA 00218D20 <- EU 00218D20 (Ghidra, non-matching)
// GLOBAL DAT_00218eb4 int
// GLOBAL DAT_00218ed8 uint
// GLOBAL DAT_00218edc int *
// GLOBAL DAT_00218ee0 float
// GLOBAL DAT_00218ee4 int
// GLOBAL DAT_00218ee8 float
// GLOBAL s_Break_00218eb8 string
// GLOBAL s_SE_Kyameron_DISAPPEAR_00218ec0 string

void func_00218D20(int *param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(char * *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 (*(int *)(albw_frame + 0xc))
  #define local_40 (*(uint *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x18))
  #define local_34 (*(int *)(albw_frame + 0x1c))
  #define local_30 (*(undefined1 *)(albw_frame + 0x20))
  #define local_28 (*(int *)(albw_frame + 0x28))
  #define local_24 (*(char * *)(albw_frame + 0x2c))
  #define aiStack_20 ((int *)(albw_frame + 0x30))
  iVar1 = DAT_00218eb4;
  uVar4 = param_1[0x23c] + 1;
  param_1[0x23c] = uVar4;
  if ((int)uVar4 < 0xb4) {
    local_40 = DAT_00218ed8 | uVar4 & 0xffff0000;
    local_50 = 0;
    local_4c = (char *)0x0;
    local_48 = 0;
    local_3c = 0xff;
    uStack_38 = 0;
    local_30 = 0;
    local_44 = param_1[0xb3];
    local_34 = param_1[0x109];
    uVar4 = func_004A8F40(*DAT_00218edc,&local_50,4);
    if (uVar4 != 0) {
      if (param_1[0xd1] != 0) {
        func_004A1B9C(aiStack_20,param_1[0xd1],(uint *)s_Break_00218eb8);
      }
      local_24 = s_SE_Kyameron_DISAPPEAR_00218ec0;
      local_28 = iVar1;
      func_00150A84(param_1,&local_28,0);
      *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    }
    if ((char)param_1[0x23f] != '\0') {
      param_1[0x23d] = param_1[0x23e];
      *(undefined1 *)(param_1 + 0x23f) = 0;
    }
    fVar3 = DAT_00218ee8;
    fVar2 = DAT_00218ee0;
    uVar4 = param_1[0x23d];
    pfVar5 = (float *)(DAT_00218ee4 + (uVar4 >> 0x18) * 0x10);
    fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0xf4] =
         (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf4]) + (*pfVar5 + pfVar5[1] * fVar6 * DAT_00218ee0) * DAT_00218ee8));
    param_1[0xf6] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0xf6]) + (pfVar5[2] + pfVar5[3] * fVar7 * fVar2) * fVar3));
    return;
  }
  if (param_1[0xd1] != 0) {
    func_004A1B9C(&local_48,param_1[0xd1],(uint *)s_Break_00218eb8);
  }
  local_4c = s_SE_Kyameron_DISAPPEAR_00218ec0;
  local_50 = iVar1;
  func_00150A84(param_1,&local_50,0);
  *(undefined1 *)((int)param_1 + 0x2d7) = 1;
  return;
}

