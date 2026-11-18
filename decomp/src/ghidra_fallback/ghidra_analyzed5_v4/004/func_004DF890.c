#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_004DE3E0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_004dfa20;
extern int *DAT_004dfa24;
extern undefined4 *DAT_004dfa28;
extern int DAT_004dfa2c;
extern float DAT_004dfa30;
extern float DAT_004dfa34;

// USA 004DF890 <- EU 004DF868 (Ghidra, non-matching)
// GLOBAL DAT_004dfa20 int *
// GLOBAL DAT_004dfa24 int *
// GLOBAL DAT_004dfa28 undefined4 *
// GLOBAL DAT_004dfa2c int
// GLOBAL DAT_004dfa30 float
// GLOBAL DAT_004dfa34 float

undefined4 func_004DF890(int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define local_94 (*(float *)(albw_frame + 0xc))
  #define local_90 (*(undefined4 *)(albw_frame + 0x10))
  #define local_8c (*(undefined4 *)(albw_frame + 0x14))
  #define local_88 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x24))
  #define uStack_78 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_70 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_6c (*(undefined4 *)(albw_frame + 0x34))
  #define local_68 (*(undefined4 *)(albw_frame + 0x38))
  #define uStack_64 (*(undefined4 *)(albw_frame + 0x3c))
  #define uStack_60 (*(undefined4 *)(albw_frame + 0x40))
  #define local_5c (*(undefined4 *)(albw_frame + 0x44))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x48))
  #define uStack_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x50))
  #define uStack_4c (*(undefined4 *)(albw_frame + 0x54))
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x58))
  #define uStack_44 (*(undefined4 *)(albw_frame + 0x5c))
  #define uStack_40 (*(undefined4 *)(albw_frame + 0x60))
  #define local_3c (*(undefined4 *)(albw_frame + 0x64))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x68))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0x6c))
  #define local_2c (*(float *)(albw_frame + 0x74))
  #define local_28 (*(float *)(albw_frame + 0x78))
  #define local_24 (*(float *)(albw_frame + 0x7c))
  piVar5 = (int *)(param_1 + 0x990);
  switch(*(undefined4 *)(param_1 + 0x990)) {
  case 0:
    iVar4 = *(int *)(*DAT_004dfa20 + 0x18);
    if (iVar4 != 0) {
      local_94 = *(float *)(param_1 + 0x3d0);
      local_90 = *(undefined4 *)(param_1 + 0x3d4);
      local_8c = *(undefined4 *)(param_1 + 0x3d8);
      piVar1 = (int *)func_005841A8(*DAT_004dfa24,*DAT_004dfa28,
                                    *(int **)(DAT_004dfa2c + *DAT_004dfa24));
      iVar2 = *piVar1;
      if (iVar2 != 0) {
        local_94 = *(float *)(iVar2 + 8);
        local_90 = *(undefined4 *)(iVar2 + 0xc);
        local_8c = *(undefined4 *)(iVar2 + 0x10);
      }
      fVar6 = DAT_004dfa30;
      func_004DE3E0(&local_5c,param_1,10,DAT_004dfa30);
      local_88 = local_5c;
      uStack_84 = uStack_58;
      uStack_80 = uStack_54;
      uStack_7c = uStack_50;
      uStack_78 = uStack_4c;
      uStack_74 = uStack_48;
      uStack_70 = uStack_44;
      uStack_6c = uStack_40;
      local_68 = local_3c;
      uStack_64 = uStack_38;
      uStack_60 = uStack_34;
      local_2c = DAT_004dfa34;
      local_24 = DAT_004dfa34;
      local_28 = fVar6;
      func_00120FBC(iVar4,(int *)(param_1 + 0x9d4),&local_94,&local_88,0,0,&local_2c);
      *(undefined4 *)(param_1 + 0x994) = 0;
      *piVar5 = *(int *)(param_1 + 0x990) + 1;
      return 0;
    }
    break;
  case 1:
    uVar3 = *(int *)(param_1 + 0x994) + 1;
    *(uint *)(param_1 + 0x994) = uVar3;
    if (uVar3 < 0xb4) {
      return 0;
    }
    iVar4 = 2;
    goto LAB_004df9b0;
  case 2:
    iVar4 = *(int *)(*DAT_004dfa20 + 0x18);
    if (iVar4 != 0) {
      func_001212EC(iVar4,(int *)(param_1 + 0x9d4),0x5a,0);
      *(undefined4 *)(param_1 + 0x994) = 0;
      *piVar5 = *(int *)(param_1 + 0x990) + 1;
      return 0;
    }
    break;
  case 3:
    uVar3 = *(int *)(param_1 + 0x994) + 1;
    *(uint *)(param_1 + 0x994) = uVar3;
    if (uVar3 < 0x5a) {
      return 0;
    }
    iVar4 = 4;
LAB_004df9b0:
    *piVar5 = iVar4;
switchD_004df8a0_default:
    return 0;
  case 4:
    break;
  default:
    goto switchD_004df8a0_default;
  }
  return 1;
}

