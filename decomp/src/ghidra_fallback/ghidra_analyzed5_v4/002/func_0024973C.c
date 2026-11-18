#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00143CD8(int param_1,undefined4 *param_2,int param_3,int param_4);
extern int func_002926D4(int param_1,undefined4 *param_2,undefined4 param_3);
extern int func_00295F98(int param_1);
extern void func_004AD9E8(int param_1,uint param_2,uint param_3,uint param_4,float fparam_0);
extern int func_0052FBA0(int param_1,uint param_2);
extern undefined4 DAT_002498e8;
extern int *DAT_002498ec;
extern float DAT_002498f0;
extern float DAT_002498f4;
extern int *DAT_002498f8;
extern int *DAT_002498fc;
extern undefined4 DAT_00249900;
extern int *DAT_00249904;
extern uint *DAT_00249908;
extern undefined4 DAT_0024990c;
extern undefined4 DAT_00249910;
extern undefined4 DAT_00249914;
extern undefined4 DAT_00249918;
extern undefined4 *DAT_0024991c;

// USA 0024973C <- EU 0024973C (Ghidra, non-matching)
// GLOBAL DAT_002498e8 undefined4
// GLOBAL DAT_002498ec int *
// GLOBAL DAT_002498f0 float
// GLOBAL DAT_002498f4 float
// GLOBAL DAT_002498f8 int *
// GLOBAL DAT_002498fc int *
// GLOBAL DAT_00249900 undefined4
// GLOBAL DAT_00249904 int *
// GLOBAL DAT_00249908 uint *
// GLOBAL DAT_0024990c undefined4
// GLOBAL DAT_00249910 undefined4
// GLOBAL DAT_00249914 undefined4
// GLOBAL DAT_00249918 undefined4
// GLOBAL DAT_0024991c undefined4 *

void func_0024973C(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(float *)(albw_frame + 0x10))
  #define local_3c (*(float *)(albw_frame + 0x14))
  uVar1 = DAT_002498e8;
  *(undefined4 *)(param_1 + 0x4c0) = 300;
  *(undefined4 *)(param_1 + 0x4c4) = uVar1;
  *(undefined4 *)(param_1 + 0x4bc) = 0;
  piVar2 = DAT_002498ec;
  *(undefined4 *)(param_1 + 0x4d4) = 0;
  local_44 = *(float *)(param_1 + 0x3d0);
  local_40 = *(float *)(param_1 + 0x3d4) + DAT_002498f0;
  fVar9 = *(float *)(param_1 + 0x3d8) + DAT_002498f4;
  local_3c = fVar9;
  if (*piVar2 != 0) {
    func_002926D4(*piVar2,&local_44,*(undefined4 *)(param_1 + 1000));
  }
  func_00295F98(*DAT_002498f8);
  func_004AD9E8(*DAT_002498fc,1,0,1,fVar9);
  uVar1 = DAT_00249918;
  puVar3 = DAT_00249908;
  piVar2 = DAT_00249904;
  uVar10 = CONCAT44(DAT_0024990c,DAT_00249900);
  uVar11 = CONCAT44(DAT_00249914,DAT_00249910);
  iVar7 = 0;
  iVar8 = 0x3c;
  do {
    puVar4 = (undefined4 *)func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x4e4 + iVar7 * 4));
    if (puVar4 != (undefined4 *)0x0) {
      if (((*puVar3 & 1) == 0) && (iVar5 = func_00100174((int *)DAT_00249908), iVar5 != 0)) {
        *DAT_0024991c = uVar1;
      }
      iVar5 = (**(code **)*puVar4)(puVar4,DAT_0024991c);
      puVar6 = (undefined4 *)0x0;
      if (iVar5 != 0) {
        puVar6 = puVar4;
      }
      if (puVar6 != (undefined4 *)0x0) {
        fVar9 = ALBW_AS_F32(((ulonglong)uVar10 >> 0x20));
        local_4c = local_40 + fVar9;
        local_50 = local_44 + ALBW_AS_F32(uVar10);
        uVar10 = CONCAT44(fVar9,ALBW_AS_F32(uVar10) + ALBW_AS_F32(((ulonglong)uVar11 >> 0x20)));
        local_48 = local_3c + ALBW_AS_F32(uVar11);
        func_00143CD8((int)puVar6,&local_50,iVar8,iVar7 * -0x14 + 0xb4);
        iVar8 = iVar8 + 0x14;
      }
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 3);
  return;
}

