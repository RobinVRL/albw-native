#include "ghidra_types.h"

extern int func_001151CC(undefined4 *param_1,undefined4 *param_2);
extern int func_001151F8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_001512E8(int *param_1);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float fRam0023e564;
extern int iRam0023e560;
extern undefined4 uRam0023e568;
extern float DAT_0023e56c;

// USA 0023E21C <- EU 0023E21C (Ghidra, non-matching)
// GLOBAL DAT_0023e56c float
// GLOBAL UNK_0023e560 int
// GLOBAL UNK_0023e564 float
// GLOBAL UNK_0023e568 undefined4

undefined4 func_0023E21C(int param_1)

{
  float *pfVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int *piVar6;
  float fVar7;
  int iVar8;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define fStack_c0 (*(float *)(albw_frame + 0x0))
  #define fStack_bc (*(float *)(albw_frame + 0x4))
  #define iStack_b8 (*(int *)(albw_frame + 0x8))
  #define fStack_b4 (*(float *)(albw_frame + 0xc))
  #define fStack_b0 (*(float *)(albw_frame + 0x10))
  #define iStack_a4 (*(int *)(albw_frame + 0x1c))
  #define iStack_98 (*(int *)(albw_frame + 0x28))
  #define fStack_78 (*(float *)(albw_frame + 0x48))
  #define iStack_74 (*(int *)(albw_frame + 0x4c))
  #define iStack_70 (*(int *)(albw_frame + 0x50))
  #define fStack_6c (*(float *)(albw_frame + 0x54))
  #define iStack_68 (*(int *)(albw_frame + 0x58))
  #define iStack_64 (*(int *)(albw_frame + 0x5c))
  #define fStack_58 (*(float *)(albw_frame + 0x68))
  #define fStack_54 (*(float *)(albw_frame + 0x6c))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x70))
  #define fStack_48 (*(float *)(albw_frame + 0x78))
  #define iStack_44 (*(int *)(albw_frame + 0x7c))
  #define iStack_40 (*(int *)(albw_frame + 0x80))
  #define fStack_3c (*(float *)(albw_frame + 0x84))
  #define iStack_38 (*(int *)(albw_frame + 0x88))
  #define iStack_34 (*(int *)(albw_frame + 0x8c))
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x10);
  pfVar1 = (float *)(iRam0023e560 + *(short *)(param_1 + 0x2c) * 0x14);
  *(float *)(param_1 + 0x3d0) = *(float *)(param_1 + 0x3d0) + *pfVar1;
  *(float *)(param_1 + 0x3d8) = *(float *)(param_1 + 0x3d8) + pfVar1[1];
  uVar5 = (int)ALBW_AS_U32(pfVar1[3]) + *(int *)(param_1 + 0x24);
  *(uint *)(param_1 + 1000) = uVar5;
  func_00491338(&fStack_b4,(uint)ALBW_AS_U32(pfVar1[2]),uVar5,(uint)ALBW_AS_U32(pfVar1[4]));
  uVar5 = 0;
  piVar6 = (int *)(param_1 + 0x7b4);
  do {
    piVar3 = piVar6;
    if (uVar5 < 4) {
      piVar3 = piVar6 + uVar5;
    }
    iVar2 = *piVar3;
    puVar4 = (uint *)(iVar2 + 0x164);
    *puVar4 = *puVar4 | 0x40000000;
    func_001151F8((undefined4 *)(iVar2 + 0x80),&fStack_b4,(undefined4 *)(param_1 + 0x3d0));
    piVar3 = piVar6;
    if (uVar5 < 4) {
      piVar3 = piVar6 + uVar5;
    }
    func_004CEAF0(*piVar3);
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  func_001512E8(*(int **)(param_1 + 0x7cc));
  func_0015133C(*(int *)(param_1 + 0x7cc),&fStack_b4);
  fVar7 = fRam0023e564;
  fStack_54 = func_0054DE3C(param_1,0,1);
  uStack_50 = uRam0023e568;
  fStack_58 = fVar7;
  func_00115CE4(&fStack_c0,&fStack_b4,&fStack_58);
  func_00115C54(&fStack_c0,&fStack_c0,(float *)(param_1 + 0x3d0));
  fVar7 = DAT_0023e56c;
  piVar6 = *(int **)(param_1 + 0x7ac);
  pfVar1 = (float *)(piVar6 + 0x16);
  switch((short)piVar6[0x15]) {
  case 1:
    piVar3 = piVar6 + 1;
    piVar6[1] = (int)ALBW_AS_U32(fStack_c0);
    piVar6[2] = (int)ALBW_AS_U32(fStack_bc);
    goto LAB_0023e45c;
  case 5:
    goto LAB_0023e41c;
  case 6:
    piVar6[1] = (int)ALBW_AS_U32(fStack_c0);
    piVar6[2] = (int)ALBW_AS_U32(fStack_bc);
    piVar6[3] = iStack_b8;
    piVar6[0x16] = (int)ALBW_AS_U32((*pfVar1 * fVar7));
    break;
  case 7:
    piVar6[1] = (int)ALBW_AS_U32(fStack_c0);
    piVar6[2] = (int)ALBW_AS_U32(fStack_bc);
    piVar6[3] = iStack_b8;
    fStack_b0 = *pfVar1;
    iStack_a4 = piVar6[0x17];
    iStack_98 = piVar6[0x18];
LAB_0023e41c:
    piVar6[0x16] = (int)ALBW_AS_U32(fStack_b0);
    piVar6[0x17] = iStack_a4;
    piVar6[0x18] = iStack_98;
    break;
  case 8:
    piVar6[1] = (int)ALBW_AS_U32(fStack_c0);
    piVar6[2] = (int)ALBW_AS_U32(fStack_bc);
    piVar6[3] = iStack_b8;
    func_001151CC(piVar6 + 0x19,&fStack_b4);
    piVar3 = piVar6 + 0x16;
    piVar6[0x16] = (int)ALBW_AS_U32(*pfVar1);
    piVar6[0x17] = piVar6[0x17];
    iStack_b8 = piVar6[0x18];
LAB_0023e45c:
    piVar3[2] = iStack_b8;
    break;
  case 9:
    fStack_48 = fStack_b0;
    iStack_44 = iStack_a4;
    iStack_40 = iStack_98;
    func_00115D70(&fStack_3c,&fStack_48,ALBW_AS_F32(piVar6[0x17]));
    fStack_6c = fStack_3c;
    iStack_68 = iStack_38;
    iStack_64 = iStack_34;
    func_00115C54(&fStack_3c,&fStack_c0,&fStack_6c);
    iVar2 = iStack_34;
    fVar7 = fStack_3c;
    iVar8 = iStack_38;
    func_00115D70(&fStack_3c,&fStack_48,ALBW_AS_F32(piVar6[0x17]));
    fStack_78 = fStack_3c;
    iStack_74 = iStack_38;
    iStack_70 = iStack_34;
    func_00115C70(&fStack_3c,&fStack_c0,&fStack_78);
    *pfVar1 = fVar7;
    piVar6[0x17] = iVar8;
    piVar6[0x18] = iVar2;
    piVar6[0x19] = (int)ALBW_AS_U32(fStack_3c);
    piVar6[0x1a] = iStack_38;
    piVar6[0x1b] = iStack_34;
    piVar6[0x1c] = (int)ALBW_AS_U32((*pfVar1 * DAT_0023e56c));
  }
  func_004356B4(piVar6);
  fStack_bc = func_0054DE3C(param_1,1,1);
  fStack_c0 = *(float *)(param_1 + 0x3d0);
  iStack_b8 = *(undefined4 *)(param_1 + 0x3d8);
  fStack_bc = *(float *)(param_1 + 0x3d4) + fStack_bc;
  iVar2 = *(int *)(param_1 + 0x40c);
  *(float *)(iVar2 + 4) = fStack_c0;
  *(float *)(iVar2 + 8) = fStack_bc;
  *(int *)(iVar2 + 0xc) = iStack_b8;
  return func_004356B4(*(int **)(param_1 + 0x40c));
}

