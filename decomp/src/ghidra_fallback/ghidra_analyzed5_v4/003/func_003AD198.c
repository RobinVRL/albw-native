#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00151150(int param_1,float *param_2);
extern int func_001512B4(int param_1,float *param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern float fRam003ad360;
extern undefined4 uRam003ad364;
extern undefined DAT_003ad368;

// USA 003AD198 <- EU 003AD174 (Ghidra, non-matching)
// GLOBAL DAT_003ad368 undefined
// GLOBAL UNK_003ad360 float
// GLOBAL UNK_003ad364 undefined4

void func_003AD198(int param_1)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  float *pfVar5;
  bool bVar6;
  bool bVar7;
  uint in_fpscr;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x8))
  fVar1 = *(float *)(param_1 + 0x4ac);
  pfVar5 = (float *)(param_1 + 0x4ac);
  if (fVar1 == 0.0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *(undefined4 *)(param_1 + 0x4b0) = 0;
    }
    else {
      func_004A1B9C((int *)&local_20,*(int *)(param_1 + 0x344),(uint *)&DAT_003ad368);
      *pfVar5 = local_20;
      *(undefined4 *)(param_1 + 0x4b0) = uStack_1c;
    }
    fVar1 = *pfVar5;
    if ((fVar1 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar1) + 0x1c) == *(int *)(param_1 + 0x4b0))) {
      *(undefined4 *)((int)ALBW_AS_U32(fVar1) + 0x28) = *(undefined4 *)(param_1 + 0x49c);
      *(undefined4 *)((int)ALBW_AS_U32(fVar1) + 0x2c) = *(undefined4 *)(param_1 + 0x4a0);
      *(undefined4 *)((int)ALBW_AS_U32(fVar1) + 0x30) = *(undefined4 *)(param_1 + 0x4a4);
      *(uint *)((int)ALBW_AS_U32(fVar1) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar1) + 0x3c) | 0x10;
    }
    fVar1 = *pfVar5;
    if ((fVar1 == 0.0) || (*(int *)((int)ALBW_AS_U32(fVar1) + 0x1c) != *(int *)(param_1 + 0x4b0)))
    goto LAB_003ad1b0;
  }
  else if (*(int *)((int)ALBW_AS_U32(fVar1) + 0x1c) != *(int *)(param_1 + 0x4b0)) goto LAB_003ad1b0;
  func_004A2F38((int)ALBW_AS_U32(fVar1),(undefined4 *)(param_1 + 0x3d0));
LAB_003ad1b0:
  func_00151148(*(int *)(param_1 + 0x43c),1);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar4 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar2 & 1) != 0) {
    piVar4 = (int *)(*piVar4 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar2 >> 1)));
  }
  (*(code *)*piVar4)();
  iVar3 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar3;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar1 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar1);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  bVar6 = false;
  if (*(float *)(param_1 + 0x490) == fRam003ad360) {
    bVar6 = *(float *)(param_1 + 0x494) == fRam003ad360;
  }
  bVar7 = false;
  if (bVar6) {
    bVar7 = *(float *)(param_1 + 0x498) == fRam003ad360;
  }
  if (!bVar7) {
    func_001512B4(*(int *)(param_1 + 0x43c),(float *)(param_1 + 0x3d0));
    local_20 = *(float *)(param_1 + 0x490);
    uStack_18 = *(undefined4 *)(param_1 + 0x498);
    uStack_1c = uRam003ad364;
    func_00151150(*(int *)(param_1 + 0x43c),&local_20);
  }
  iVar3 = *(int *)(param_1 + 0x438);
  *(undefined4 *)(iVar3 + 4) = *(undefined4 *)(param_1 + 0x3d0);
  *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_1 + 0x3d4);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_1 + 0x3d8);
  piVar4 = *(int **)(param_1 + 0x438);
  if ((char)piVar4[0xc] == '\0') {
    *(undefined1 *)(piVar4 + 0xc) = 1;
    piVar4[7] = piVar4[1];
    piVar4[8] = piVar4[2];
    piVar4[9] = piVar4[3];
  }
  piVar4[4] = piVar4[7];
  piVar4[5] = piVar4[8];
  piVar4[6] = piVar4[9];
  (**(code **)(*piVar4 + 0x10))(piVar4);
  piVar4[7] = piVar4[1];
  piVar4[8] = piVar4[2];
  piVar4[9] = piVar4[3];
  return;
}

