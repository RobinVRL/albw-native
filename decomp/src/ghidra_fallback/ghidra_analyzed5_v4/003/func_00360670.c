// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0014EEB8(int param_1,undefined4 *param_2,undefined4 param_3,float fparam_0);
extern int func_001507D8(int param_1,int *param_2,int param_3);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0025B824(int param_1,float fparam_0);
extern int func_0025B874(undefined4 *param_1);
extern int func_002F5924(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00360B48(int param_1);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004A3138(int param_1,undefined4 *param_2,float fparam_0);
extern int func_00521018(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00539200(int param_1);
extern int func_00666D48(undefined4 *param_1,undefined1 param_2);
extern int DAT_00360914;
extern float DAT_00360918;
extern float DAT_0036091c;
extern int *DAT_00360920;
extern float DAT_00360924;
extern undefined4 DAT_00360928;
extern float DAT_0036092c;
extern char s_SE_MediumGanonBall_MOVE_003608fc[];

// USA 00360670 <- EU 0036064C (Ghidra, non-matching)
// GLOBAL DAT_00360914 int
// GLOBAL DAT_00360918 float
// GLOBAL DAT_0036091c float
// GLOBAL DAT_00360920 int *
// GLOBAL DAT_00360924 float
// GLOBAL DAT_00360928 undefined4
// GLOBAL DAT_0036092c float
// GLOBAL s_SE_MediumGanonBall_MOVE_003608fc string

/* WARNING: Variable defined which should be unmapped: objStack_88 */

void func_00360670(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  uint in_fpscr;
  float fVar7;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define objStack_88 ((uint *)(albw_frame + 0x8))
  #define local_28 (*(int *)(albw_frame + 0x68))
  #define local_24 (*(char * *)(albw_frame + 0x6c))
  if ((*(uint *)(param_1 + 0x4c0) < *(uint *)(param_1 + 0x4c4)) &&
     (*(uint *)(param_1 + 0x4c0) = *(uint *)(param_1 + 0x4c0) + 1,
     *(char *)(param_1 + 0x410) != '\0')) {
    func_0010A464(objStack_88);
    local_24 = s_SE_MediumGanonBall_MOVE_003608fc;
    local_28 = DAT_00360914;
    func_001507D8(param_1,&local_28,(int)objStack_88);
    bVar1 = func_00539200((int)objStack_88);
    if (bVar1) {
      fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x500),
                                         (byte)(in_fpscr >> 0x15) & 3);
      func_0025B824((int)objStack_88,DAT_0036091c + fVar7 * DAT_00360918);
    }
    func_0025B874(objStack_88);
  }
  piVar6 = (int *)(param_1 + 0x40c);
  piVar2 = (int *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  uVar4 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  piVar5 = (int *)(*(int *)(param_1 + 0x420) + ((int)uVar4 >> 1));
  if ((uVar4 & 1) != 0) {
    piVar2 = (int *)(*piVar2 + *piVar5);
  }
  (*(code *)*piVar2)(piVar5);
  iVar3 = *piVar6;
  *piVar6 = iVar3 + 1;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fVar7 = (float)VectorUnsignedToFloat(iVar3 + 1,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fVar7);
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  piVar2 = DAT_00360920;
  if (*(char *)(param_1 + 0x410) == '\0') {
    func_0052FBA0(*DAT_00360920 + 0x3dbbc,*(uint *)(param_1 + 0x50));
  }
  func_001512B4(*(int *)(param_1 + 0x444),(float *)(param_1 + 0x3d0));
  func_00360B48(param_1);
  iVar3 = *(int *)(param_1 + 0x47c);
  if (iVar3 != 0) {
    if (*(char *)(param_1 + 0x410) == '\x06') {
      return;
    }
    if (*(char *)(param_1 + 0x511) == '\0') {
      if (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x480)) {
        func_004A2F38(iVar3,(undefined4 *)(param_1 + 0x3d0));
      }
    }
    else if (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x480)) {
      func_004A3138(iVar3,(undefined4 *)(param_1 + 0x3d0),DAT_00360924);
    }
  }
  if (*(char *)(param_1 + 0x410) == '\x01') {
    objStack_88[0] = 0;
    objStack_88[1] = 0;
    uVar4 = func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x43c),param_1 + 0x448,0x1f00,0,0);
    bVar1 = uVar4 == 0;
    if (bVar1) {
      uVar4 = (uint)*(byte *)(param_1 + 0x512);
    }
    if (bVar1 && uVar4 == 0) {
      objStack_88[0] = 0;
      objStack_88[1] = 0;
      func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x440),param_1 + 0x458,0x1f00,0,0);
    }
  }
  if (((*(char *)(param_1 + 0x410) != '\0' && *(char *)(param_1 + 0x410) != '\x06') &&
      (iVar3 = func_0014EEB8(param_1,(undefined4 *)(param_1 + 0x4cc),DAT_00360928,DAT_0036092c),
      iVar3 != 0)) &&
     ((bVar1 = func_00521018(param_1), bVar1 || (*(char *)(param_1 + 0x410) == '\x03')))) {
    iVar3 = func_0052FBA0(*piVar2 + 0x3dbbc,*(uint *)(param_1 + 0x50));
    if (iVar3 != 0) {
      func_002F5924(iVar3,param_1);
    }
    func_00666D48(piVar6,6);
  }
  return;
}

