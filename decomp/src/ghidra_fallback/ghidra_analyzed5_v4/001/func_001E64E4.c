#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0051E6D0(int param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_001e6674;
extern float DAT_001e6678;
extern float DAT_001e667c;

// USA 001E64E4 <- EU 001E64E4 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// GLOBAL DAT_001e6674 int *
// GLOBAL DAT_001e6678 float
// GLOBAL DAT_001e667c float

void func_001E64E4(int param_1,float *param_2,int *param_3,uint param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint in_r12;
  bool bVar9;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(float *)(albw_frame + 0x0))
  #define fStack_6c (*(float *)(albw_frame + 0x4))
  #define fStack_68 (*(float *)(albw_frame + 0x8))
  #define local_64 (*(float *)(albw_frame + 0xc))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_5c (*(undefined4 *)(albw_frame + 0x14))
  #define local_58 (*(float *)(albw_frame + 0x18))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x20))
  #define local_4c (*(float *)(albw_frame + 0x24))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x28))
  #define local_44 (*(undefined4 *)(albw_frame + 0x2c))
  #define local_40 (*(float *)(albw_frame + 0x30))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x34))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x38))
  #define local_34 (*(float *)(albw_frame + 0x3c))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x40))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x44))
  bVar9 = *(char *)(param_1 + 0x23) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x26);
  }
  if (((bVar9 && cVar1 != '\0') && (uVar2 = (uint)*(char *)(param_1 + 0x21), uVar2 != param_4)) &&
     (iVar8 = *DAT_001e6674, iVar8 != 0)) {
    iVar6 = *(int *)(param_5 + 0x28);
    if (iVar6 != 0) {
      in_r12 = *(uint *)(param_5 + 0x20);
    }
    if (iVar6 != 0 && param_4 < in_r12) {
      iVar7 = *(int *)(iVar6 + param_4 * 4);
    }
    else {
      iVar7 = 0;
    }
    if (iVar6 != 0) {
      param_5 = *(uint *)(param_5 + 0x20);
    }
    if (iVar6 != 0 && uVar2 < param_5) {
      iVar6 = *(int *)(iVar6 + uVar2 * 4);
    }
    else {
      iVar6 = 0;
    }
    if (iVar7 != 0 && iVar6 != 0) {
      local_70 = *(float *)(iVar7 + 0x18);
      fStack_6c = *(float *)(iVar7 + 0x1c);
      fStack_68 = *(float *)(iVar7 + 0x20);
      local_44 = *(undefined4 *)(iVar6 + 0x20);
      local_4c = *(float *)(iVar6 + 0x18);
      uStack_48 = *(undefined4 *)(iVar6 + 0x1c);
      func_00115C54(&local_34,&local_4c,&local_70);
      local_64 = local_34;
      uStack_60 = uStack_30;
      uStack_5c = uStack_2c;
      func_00115D70(&local_34,&local_64,DAT_001e6678);
      local_40 = local_34;
      uStack_3c = uStack_30;
      uStack_38 = uStack_2c;
      fparam_0 = DAT_001e667c;
      uVar2 = func_0051E6D0(iVar8,&local_70,DAT_001e667c);
      uVar3 = func_0051E6D0(iVar8,&local_4c,fparam_0);
      uVar4 = func_0051E6D0(iVar8,&local_40,fparam_0);
      uVar5 = func_0051E6D0(iVar8,param_2,fparam_0);
      if ((((uVar2 ^ 1) & (uVar3 ^ 1) & (uVar4 ^ 1) & (uVar5 ^ 1)) != 0) ||
         (((uVar5 ^ 1) & (uVar2 ^ 1) & ~(uVar3 ^ 1)) != 0)) {
        *param_2 = local_70;
        param_2[1] = fStack_6c;
        param_2[2] = fStack_68;
        func_00115C70(&local_34,&local_70,param_2);
        local_58 = local_34;
        uStack_54 = uStack_30;
        uStack_50 = uStack_2c;
        iVar8 = func_0068C690(&local_58);
        *param_3 = iVar8;
      }
    }
  }
  return;
}

