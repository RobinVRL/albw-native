#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00151358(int *param_1);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern float DAT_00208900;
extern undefined4 *DAT_00208904;
extern float DAT_00208908;
extern float DAT_0020890c;
extern undefined4 DAT_00208910;
extern int *DAT_00208914;

// USA 002084C4 <- EU 002084C4 (Ghidra, non-matching)
// GLOBAL DAT_00208900 float
// GLOBAL DAT_00208904 undefined4 *
// GLOBAL DAT_00208908 float
// GLOBAL DAT_0020890c float
// GLOBAL DAT_00208910 undefined4
// GLOBAL DAT_00208914 int *

undefined4 func_002084C4(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define fStack_c0 (*(float *)(albw_frame + 0x0))
  #define uStack_bc (*(undefined4 *)(albw_frame + 0x4))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define fStack_b0 (*(float *)(albw_frame + 0x10))
  #define uStack_ac (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0x1c))
  #define fStack_a0 (*(float *)(albw_frame + 0x20))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x24))
  #define local_94 (*(int * *)(albw_frame + 0x2c))
  #define auStack_90 ((undefined4 *)(albw_frame + 0x30))
  #define fStack_74 (*(float *)(albw_frame + 0x4c))
  #define fStack_60 (*(float *)(albw_frame + 0x60))
  #define piStack_5c (*(int * *)(albw_frame + 0x64))
  #define fStack_58 (*(float *)(albw_frame + 0x68))
  #define fStack_54 (*(float *)(albw_frame + 0x6c))
  #define local_50 (*(int * *)(albw_frame + 0x70))
  #define fStack_4c (*(float *)(albw_frame + 0x74))
  #define fStack_48 (*(float *)(albw_frame + 0x78))
  #define piStack_44 (*(int * *)(albw_frame + 0x7c))
  #define fStack_40 (*(float *)(albw_frame + 0x80))
  #define fStack_3c (*(float *)(albw_frame + 0x84))
  #define piStack_38 (*(int * *)(albw_frame + 0x88))
  #define fStack_34 (*(float *)(albw_frame + 0x8c))
  local_94 = (int *)(param_1 + 0xd90);
  local_50 = (int *)(param_1 + 0xd7c);
  iVar1 = *(int *)(param_1 + 0xd58);
  piVar3 = (int *)(param_1 + 0xd58);
  if (*(char *)(param_1 + 0xba4) == '\0') {
    if (iVar1 != 0) {
      func_004CF478(iVar1,0);
    }
    if (*(int *)(param_1 + 0xd78) != 0) {
      func_00151148(*(int *)(param_1 + 0xd78),0);
    }
    if (*(int *)(param_1 + 0xd7c) != 0) {
      func_00151148(*(int *)(param_1 + 0xd7c),0);
    }
    if (*(int *)(param_1 + 0xd80) != 0) {
      func_00151148(*(int *)(param_1 + 0xd80),0);
    }
    if (*(int *)(param_1 + 0xd84) != 0) {
      func_00151148(*(int *)(param_1 + 0xd84),0);
    }
    if (*(int *)(param_1 + 0xd88) != 0) {
      func_00151148(*(int *)(param_1 + 0xd88),0);
    }
    if (*(int *)(param_1 + 0xd8c) != 0) {
      func_00151148(*(int *)(param_1 + 0xd8c),0);
    }
    if (*(int *)(param_1 + 0xd90) != 0) {
      return func_00151148(*(int *)(param_1 + 0xd90),0);
    }
  }
  else {
    func_004CF478(iVar1,1);
    iVar4 = *(int *)(*(int *)(param_1 + 0x41c) + 0x1c);
    uStack_a4 = *(undefined4 *)(iVar4 + 0x88);
    fStack_a0 = *(float *)(iVar4 + 0x8c);
    uStack_9c = *(undefined4 *)(iVar4 + 0x90);
    func_001119F4(auStack_90,*(undefined4 **)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14));
    fStack_a0 = fStack_74 + DAT_00208900;
    iVar1 = *piVar3;
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    fVar8 = fStack_74;
    func_001151F8((undefined4 *)(iVar1 + 0x80),(undefined4 *)(iVar4 + 100),&uStack_a4);
    iVar1 = *piVar3;
    uVar5 = *DAT_00208904;
    uVar6 = DAT_00208904[1];
    uVar7 = DAT_00208904[2];
    *(uint *)(iVar1 + 0x164) = *(uint *)(iVar1 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar1 + 0x74) = uVar5;
    *(undefined4 *)(iVar1 + 0x78) = uVar6;
    *(undefined4 *)(iVar1 + 0x7c) = uVar7;
    func_004CEAF0(*piVar3);
    func_004D80A4(&fStack_c0,*(uint *)(param_1 + 1000),DAT_00208908);
    piVar3 = DAT_00208914;
    fStack_b0 = fVar8 + DAT_0020890c;
    uStack_bc = DAT_00208910;
    fStack_a0 = fStack_b0;
    if (*(int *)(param_1 + 0xd78) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0x9fc) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      piVar2 = *(int **)(param_1 + 0xd78);
      iVar1 = DAT_00208914[1];
      iVar4 = DAT_00208914[2];
      piVar2[4] = *DAT_00208914;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54(&fStack_3c,&fStack_b4,&fStack_c0);
      fStack_48 = fStack_3c;
      piStack_44 = piStack_38;
      fStack_40 = fStack_34;
      func_001512B4(*(int *)(param_1 + 0xd78),&fStack_48);
      func_00151148(*(int *)(param_1 + 0xd78),1);
    }
    if (*(int *)(param_1 + 0xd7c) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xa00) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd7c);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54(&fStack_40,&fStack_b4,&fStack_c0);
      fStack_4c = fStack_40;
      fStack_48 = fStack_3c;
      piStack_44 = piStack_38;
      func_001512B4(*local_50,&fStack_4c);
      func_00151148(*local_50,1);
    }
    if (*(int *)(param_1 + 0xd80) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xa04) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd80);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54((float *)&piStack_44,&fStack_b4,&fStack_c0);
      local_50 = piStack_44;
      fStack_4c = fStack_40;
      fStack_48 = fStack_3c;
      func_001512B4(*(int *)(param_1 + 0xd80),(float *)&local_50);
      func_00151148(*(int *)(param_1 + 0xd80),1);
    }
    if (*(int *)(param_1 + 0xd84) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xa08) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd84);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54(&fStack_48,&fStack_b4,&fStack_c0);
      fStack_54 = fStack_48;
      local_50 = piStack_44;
      fStack_4c = fStack_40;
      func_001512B4(*(int *)(param_1 + 0xd84),&fStack_54);
      func_00151148(*(int *)(param_1 + 0xd84),1);
    }
    if (*(int *)(param_1 + 0xd88) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xa0c) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd88);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54(&fStack_4c,&fStack_b4,&fStack_c0);
      fStack_58 = fStack_4c;
      fStack_54 = fStack_48;
      local_50 = piStack_44;
      func_001512B4(*(int *)(param_1 + 0xd88),&fStack_58);
      func_00151148(*(int *)(param_1 + 0xd88),1);
    }
    if (*(int *)(param_1 + 0xd8c) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xa10) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd8c);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54((float *)&local_50,&fStack_b4,&fStack_c0);
      piStack_5c = local_50;
      fStack_58 = fStack_4c;
      fStack_54 = fStack_48;
      func_001512B4(*(int *)(param_1 + 0xd8c),(float *)&piStack_5c);
      func_00151148(*(int *)(param_1 + 0xd8c),1);
    }
    if (*(int *)(param_1 + 0xd90) != 0) {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0x9cc) * 0x30;
      fStack_b4 = *(float *)(iVar1 + 0xc);
      uStack_ac = *(undefined4 *)(iVar1 + 0x2c);
      fStack_b0 = fStack_a0;
      piVar2 = *(int **)(param_1 + 0xd90);
      iVar1 = piVar3[1];
      iVar4 = piVar3[2];
      piVar2[4] = *piVar3;
      piVar2[5] = iVar1;
      piVar2[6] = iVar4;
      func_00151358(piVar2);
      func_00115C54(&fStack_54,&fStack_b4,&fStack_c0);
      fStack_60 = fStack_54;
      piStack_5c = local_50;
      fStack_58 = fStack_4c;
      func_001512B4(*local_94,&fStack_60);
      func_00151148(*local_94,1);
    }
  }
  return 0;
}

