#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_00115DAC(float *param_1,float *param_2,float *param_3,float fparam_0);
extern float func_00115DC8(float *param_1);
extern int func_004356B4(int *param_1);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A8030(int param_1,int *param_2,uint param_3);
extern int func_004CEAF0(int param_1);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00520FC0(void);
extern int func_0068C690(float *param_1);
extern uint DAT_00508d04;
extern float DAT_00508d08;
extern int *DAT_00508d0c;
extern float DAT_00508d10;
extern float DAT_00508d14;
extern undefined4 DAT_00508d18;
extern int *DAT_00508d1c;
extern undefined4 DAT_00508d20;
extern float DAT_00508d24;

// USA 005088D0 <- EU 005088A8 (Ghidra, non-matching)
// GLOBAL DAT_00508d04 uint
// GLOBAL DAT_00508d08 float
// GLOBAL DAT_00508d0c int *
// GLOBAL DAT_00508d10 float
// GLOBAL DAT_00508d14 float
// GLOBAL DAT_00508d18 undefined4
// GLOBAL DAT_00508d1c int *
// GLOBAL DAT_00508d20 undefined4
// GLOBAL DAT_00508d24 float

void func_005088D0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  uint uVar4;
  float *pfVar5;
  float *pfVar6;
  int *piVar7;
  bool bVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_b0 (*(float * *)(albw_frame + 0x0))
  #define local_ac (*(float *)(albw_frame + 0x4))
  #define local_a8 (*(float *)(albw_frame + 0x8))
  #define local_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_a0 (*(float *)(albw_frame + 0x10))
  #define local_9c (*(float * *)(albw_frame + 0x14))
  #define local_98 (*(float *)(albw_frame + 0x18))
  #define local_94 (*(float *)(albw_frame + 0x1c))
  #define local_90 (*(float * *)(albw_frame + 0x20))
  #define local_8c (*(float *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define local_84 (*(float *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define fStack_7c (*(float *)(albw_frame + 0x34))
  #define local_78 (*(float *)(albw_frame + 0x38))
  #define local_74 (*(undefined4 *)(albw_frame + 0x3c))
  #define local_70 (*(undefined4 *)(albw_frame + 0x40))
  #define local_60 (*(float *)(albw_frame + 0x50))
  #define local_5c (*(float *)(albw_frame + 0x54))
  #define local_58 (*(float *)(albw_frame + 0x58))
  #define local_54 (*(float *)(albw_frame + 0x5c))
  #define local_50 (*(float *)(albw_frame + 0x60))
  if (*(char *)(param_1 + 0x514) != '\x02' && *(char *)(param_1 + 0x514) != '\x03') {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x410);
  pfVar5 = (float *)(param_1 + 0x444);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x440),*(uint *)(param_1 + 0x43c),pfVar5
               );
  iVar2 = *(int *)(param_1 + 0x410);
  local_78 = *(float *)(iVar2 + 0x84);
  local_74 = *(undefined4 *)(iVar2 + 0x94);
  local_70 = *(undefined4 *)(iVar2 + 0xa4);
  func_00115D70(&local_a8,&local_78,*(float *)(param_1 + 0x468));
  local_84 = local_a8;
  uStack_80 = local_a4;
  fStack_7c = local_a0;
  func_00115C54(&local_a8,pfVar5,&local_84);
  fVar11 = DAT_00508d08;
  *(float *)(param_1 + 0x450) = local_a8;
  *(undefined4 *)(param_1 + 0x454) = local_a4;
  *(float *)(param_1 + 0x458) = local_a0;
  local_58 = *(float *)(param_1 + 0x444);
  local_54 = *(float *)(param_1 + 0x448);
  local_50 = *(float *)(param_1 + 0x44c);
  uVar4 = (uint)ALBW_AS_U32(local_a8) & 0xffff0000;
  local_b0 = (float *)0x0;
  local_a8 = 0.0;
  local_a0 = ALBW_AS_F32((uVar4 | DAT_00508d04));
  local_a4 = 0;
  local_98 = 0.0;
  local_8c = fVar11;
  local_88 = CONCAT22((*(undefined2 *)((char *)&local_88 + 2)),0x100);
  local_94 = ALBW_AS_F32((param_1 + 0x450));
  local_90 = &local_58;
  local_9c = (float *)0x1f;
  local_ac = ALBW_AS_F32((param_1 + 0x4d8));
  func_004A8030(*DAT_00508d0c,(int *)&local_b0,0xf);
  bVar8 = false;
  piVar7 = (int *)(param_1 + 0x4f8);
  pfVar6 = (float *)(param_1 + 0x45c);
  fVar9 = fVar11;
  if (*(char *)(param_1 + 0x535) == '\0') {
    pfVar3 = (float *)(param_1 + 0x450);
    *(float *)(param_1 + 0x468) =
         (*(float *)(param_1 + 0x448) - *(float *)(param_1 + 0x454)) / *(float *)(param_1 + 0x470);
    iVar2 = *piVar7;
    if ((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != *(int *)(param_1 + 0x4fc))) goto LAB_00508b44;
  }
  else {
    *(float *)(param_1 + 0x468) =
         (*(float *)(param_1 + 0x448) - *(float *)(param_1 + 0x460)) / *(float *)(param_1 + 0x470);
    bVar8 = *(int *)(param_1 + 0x43c) + 0x3fffffffU < 0x7fffffff;
    if (bVar8) {
      local_ac = *(float *)(param_1 + 0x444);
      local_a8 = *(float *)(param_1 + 0x448);
      local_a4 = *(undefined4 *)(param_1 + 0x44c);
      func_00115C70(&local_ac,&local_ac,pfVar6);
      func_00115DC8(&local_ac);
      local_58 = *(float *)(param_1 + 0x45c);
      local_54 = *(float *)(param_1 + 0x460);
      local_50 = *(float *)(param_1 + 0x464);
      local_b0 = &local_58;
      func_00115D70(&local_94,&local_ac,DAT_00508d10);
      local_a0 = local_94;
      local_9c = local_90;
      local_98 = local_8c;
      func_00115C54(local_b0,local_b0,&local_a0);
      iVar2 = *piVar7;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4fc))) {
        func_004A2F38(iVar2,&local_58);
      }
      fVar9 = (*(float *)(param_1 + 0x448) - local_54) / *(float *)(param_1 + 0x470);
      if (fVar9 <= fVar11) {
        fVar9 = DAT_00508d14;
      }
      goto LAB_00508b44;
    }
    iVar2 = *piVar7;
    if ((iVar2 == 0) || (pfVar3 = pfVar6, *(int *)(iVar2 + 0x1c) != *(int *)(param_1 + 0x4fc)))
    goto LAB_00508b44;
  }
  func_004A2F38(iVar2,pfVar3);
LAB_00508b44:
  pfVar3 = func_00115DAC(pfVar6,&local_78,pfVar5,*(float *)(param_1 + 0x468));
  uVar10 = DAT_00508d18;
  if (bVar8) {
    pfVar3 = (float *)(uint)*(byte *)(param_1 + 0x535);
  }
  iVar2 = *(int *)(param_1 + 0x410);
  if (!bVar8 || pfVar3 == (float *)0x0) {
    fVar9 = *(float *)(param_1 + 0x468);
  }
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x74) = uVar10;
  *(float *)(iVar2 + 0x78) = fVar9;
  *(undefined4 *)(iVar2 + 0x7c) = uVar10;
  func_004CEAF0(*(int *)(param_1 + 0x410));
  if (*(char *)(param_1 + 0x535) == '\0') {
    fVar9 = *pfVar5;
    uVar10 = *(undefined4 *)(param_1 + 0x448);
    uVar14 = *(undefined4 *)(param_1 + 0x44c);
    fVar12 = *(float *)(param_1 + 0x450);
    uVar13 = *(undefined8 *)(param_1 + 0x454);
  }
  else {
    fVar12 = *pfVar6;
    uVar13 = *(undefined8 *)(param_1 + 0x460);
    fVar9 = *pfVar5;
    uVar10 = *(undefined4 *)(param_1 + 0x448);
    uVar14 = *(undefined4 *)(param_1 + 0x44c);
  }
  pfVar5 = (float *)func_00520FC0();
  func_00115C70(&local_60,pfVar5,(float *)(param_1 + 0x3d0));
  bVar8 = *(char *)(param_1 + 0x534) != '\0';
  uVar4 = *(uint *)(param_1 + 0x43c);
  if (bVar8) {
    uVar4 = uVar4 + *DAT_00508d1c;
  }
  if (!bVar8) {
    uVar4 = uVar4 - *DAT_00508d1c;
  }
  func_004D80A4(&local_54,uVar4,
                SQRT(local_60 * local_60 + local_5c * local_5c + local_58 * local_58));
  iVar2 = *(int *)(param_1 + 0x420);
  local_50 = fVar11;
  func_00115C54((float *)&local_90,(float *)(param_1 + 0x3d0),&local_54);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar2 + 0x24) = *(undefined4 *)(iVar2 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 8);
  *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0xc);
  *(float **)(iVar2 + 4) = local_90;
  *(float *)(iVar2 + 8) = local_8c;
  *(undefined4 *)(iVar2 + 0xc) = local_88;
  uVar1 = DAT_00508d20;
  iVar2 = *(int *)(param_1 + 0x420);
  *(float *)(iVar2 + 0x58) = fVar9;
  *(undefined4 *)(iVar2 + 0x5c) = uVar10;
  *(undefined4 *)(iVar2 + 0x60) = uVar14;
  *(float *)(iVar2 + 100) = fVar12;
  *(int *)(iVar2 + 0x68) = (int)uVar13;
  *(int *)(iVar2 + 0x6c) = (int)((ulonglong)uVar13 >> 0x20);
  *(undefined4 *)(iVar2 + 0x70) = uVar1;
  func_004356B4(*(int **)(param_1 + 0x420));
  iVar2 = func_0068C690(&local_78);
  if (*(char *)(param_1 + 0x534) == '\0') {
    uVar4 = iVar2 + 0x20000000;
  }
  else {
    uVar4 = iVar2 + 0xe0000000;
  }
  iVar2 = *(int *)(param_1 + 0x424);
  func_004D80A4((float *)(iVar2 + 0x24),uVar4,DAT_00508d24);
  *(float *)(iVar2 + 0x28) = fVar11;
  if (*(uint *)(param_1 + 0x4ac) < *(uint *)(param_1 + 0x4b0)) {
    *(uint *)(param_1 + 0x4ac) = *(uint *)(param_1 + 0x4ac) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x535) = 0;
  }
  return;
}

