#include "ghidra_types.h"

extern int func_0014EB8C(int param_1,undefined4 param_2,undefined2 *param_3,uint *param_4,undefined2 param_5, undefined4 param_6,undefined2 param_7);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00352198(int param_1,int *param_2);
extern int func_00392ACC(int *param_1);
extern int func_00392C04(int param_1);
extern int func_00393164(int *param_1);
extern int func_004EAE58(int param_1,uint param_2,int param_3);
extern int func_004EAF08(int param_1,int param_2);
extern int func_004EB388(int param_1,int *param_2,int param_3);
extern int func_004EB418(int param_1,int *param_2,int param_3);
extern int func_00588BE4(int param_1);
extern float fRam004c2510;
extern undefined4 uRam004c2518;
extern undefined4 uRam004c2528;
extern int *piRam004c250c;
extern int *piRam004c2514;
extern float DAT_004c2500;
extern int *DAT_004c2504;
extern undefined4 DAT_004c2508;
extern char s_SinkSand_004c251c[];

// USA 004C2328 <- EU 004C2300 (Ghidra, non-matching)
// GLOBAL DAT_004c2500 float
// GLOBAL DAT_004c2504 int *
// GLOBAL DAT_004c2508 undefined4
// GLOBAL UNK_004c250c int *
// GLOBAL UNK_004c2510 float
// GLOBAL UNK_004c2514 int *
// GLOBAL UNK_004c2518 uint
// GLOBAL UNK_004c2528 uint
// GLOBAL s_SinkSand_004c251c string

/* WARNING: Variable defined which should be unmapped: objStack_30 */

float func_004C2328(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fVar8;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_30 ((uint *)(albw_frame + 0x0))
  #define auStack_24 ((uint *)(albw_frame + 0xc))
  piVar1 = DAT_004c2504;
  fVar8 = DAT_004c2500;
  switch(param_2) {
  case 0:
    *(float *)(param_1 + 0x574) = DAT_004c2500;
    iVar5 = *(int *)(param_1 + 0x564);
    iVar6 = 0;
    goto LAB_004c23b0;
  case 1:
    if (*(char *)(param_1 + 0x56b) == '\0') {
      func_004EAF08(*DAT_004c2504,1);
    }
    else {
      func_004EAE58(*DAT_004c2504,0x14,1);
    }
    uVar2 = DAT_004c2508;
    *(undefined4 *)(param_1 + 0x58c) = 0x37;
    *(undefined4 *)(param_1 + 0x590) = uVar2;
    *(undefined4 *)(param_1 + 0x588) = 0;
    iVar5 = *(int *)(param_1 + 0x564);
    iVar6 = 1;
LAB_004c23b0:
    func_00151148(iVar5,iVar6);
    break;
  case 2:
    func_00151148(*(int *)(param_1 + 0x564),1);
    fVar8 = fRam004c2510;
    iVar5 = *(int *)(*piRam004c250c + 0x1c);
    *(undefined4 *)(param_1 + 0x58c) = 0x13;
    *(float *)(param_1 + 0x590) = fVar8;
    *(undefined4 *)(param_1 + 0x588) = 0;
    uVar7 = 0;
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar5 + 4);
    iVar5 = func_00588BE4(param_1);
    auStack_24[0] = *(uint *)(param_1 + 0x2cc);
    if (iVar5 == *piRam004c2514) {
      uVar7 = param_1 + 0x400;
    }
    objStack_30[0] = (uint)*(short *)(param_1 + 0x54);
    if (iVar5 == *piRam004c2514) {
      uVar7 = uVar7 + 0x1c4;
    }
    objStack_30[2] = uRam004c2518;
    uVar4 = objStack_30[2];
    (*(undefined2 *)((char *)&objStack_30[2] + 0)) = (undefined2)uRam004c2518;
    uVar3 = (undefined2)objStack_30[2];
    objStack_30[1] = uVar7;
    objStack_30[2] = uVar4;
    func_0014EB8C(param_1 + 0x500,*(undefined4 *)(param_1 + 0x4fc),*(undefined2 **)(param_1 + 0x3a0)
                  ,auStack_24,*(short *)(param_1 + 0x54),uVar7,uVar3);
    if (*(char *)(param_1 + 0x56b) == '\0') {
      func_004EB418(*piVar1,(int *)param_1,1);
    }
    else {
      func_004EB388(*piVar1,(int *)param_1,1);
    }
    break;
  case 3:
    func_00151148(*(int *)(param_1 + 0x564),0);
    func_00393164((int *)(param_1 + 0x5a0));
    break;
  case 4:
    func_00151148(*(int *)(param_1 + 0x564),0);
    func_00392ACC((int *)(param_1 + 0x5a0));
    break;
  case 5:
    func_00151148(*(int *)(param_1 + 0x564),0);
    objStack_30[1] = (uint)s_SinkSand_004c251c;
    objStack_30[0] = uRam004c2528;
    func_00352198(param_1 + 0x324,(int *)objStack_30);
    func_00392C04(param_1 + 0x5a0);
  }
  *(char *)(param_1 + 0x4f8) = (char)param_2;
  return fVar8;
}

