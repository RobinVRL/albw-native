#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_003E6DD4(int param_1,float *param_2);
extern int func_00491D78(float *param_1,float *param_2,float *param_3,float *param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004BC8D8(int param_1);
extern int func_004BCAA8(int param_1);
extern int func_004BEA40(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_0050ECC8(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4);
extern int *DAT_0050e4b0;
extern undefined4 *DAT_0050e4b4;
extern char s_FireCMY_0050e4b8[];

// USA 0050E2EC <- EU 0050E2C4 (Ghidra, non-matching)
// GLOBAL DAT_0050e4b0 int *
// GLOBAL DAT_0050e4b4 undefined4 *
// GLOBAL s_FireCMY_0050e4b8 string

void func_0050E2EC(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  float *pfVar9;
  uint in_fpscr;
  float fVar10;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define afStack_78 ((float *)(albw_frame + 0x8))
  #define afStack_48 ((float *)(albw_frame + 0x38))
  #define fStack_18 (*(float *)(albw_frame + 0x68))
  #define fStack_14 (*(float *)(albw_frame + 0x6c))
  piVar8 = (int *)param_1[0x25d];
  uVar1 = *(uint *)(param_1[0x25f] + (char)param_1[0x259] * 8 + 4);
  pcVar3 = *(code **)(param_1[0x25f] + (char)param_1[0x259] * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)((int)piVar8 + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)((int)piVar8) + ((int)uVar1 >> 1));
  puVar5 = (undefined4 *)param_1[0x25c];
  iVar2 = param_1[600] + 1;
  param_1[600] = iVar2;
  uVar4 = extraout_r1;
  if (puVar5 != (undefined4 *)0x0) {
    fVar10 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210((int)puVar5,1,fVar10);
    uVar4 = extraout_r1_00;
  }
  if (*(short *)((int)param_1 + 0x2e) == 1) {
    func_0050ECC8(param_1,uVar4,puVar5,(uint)piVar8);
  }
  else if (((*(short *)((int)param_1 + 0x2e) == 2) && (param_1[0x284] == 0)) &&
          (*(int *)(*DAT_0050e4b0 + 0x18) != 0)) {
    piVar8 = param_1 + 0x265;
    puVar5 = DAT_0050e4b4;
    func_001E8268(*(int *)(*DAT_0050e4b0 + 0x18),param_1 + 0x263,DAT_0050e4b4,piVar8);
  }
  func_004BCAA8((int)param_1);
  func_004BC8D8((int)param_1);
  func_004BEA40((int)param_1,0,puVar5,piVar8);
  iVar2 = param_1[0x271];
  pfVar9 = (float *)(param_1 + 0x271);
  if (((iVar2 == 0) || (*(int *)(iVar2 + 0x1c) != param_1[0x272])) ||
     (((*(uint *)(iVar2 + 0x3c) & 4) == 0 && (*(uint *)(iVar2 + 0x3c) & 0x40) == 0 &&
      (((iVar6 = *(int *)(iVar2 + 0x20), iVar6 == 0 ||
        (*(int *)(iVar2 + 0x24) != *(int *)(iVar6 + 0xc))) || (*(int *)(iVar6 + 4) < 1)))))) {
    if (param_1[0xd1] == 0) {
      *pfVar9 = 0.0;
      param_1[0x272] = 0;
    }
    else {
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x272])) {
        func_00110848(iVar2);
      }
      func_004A1B9C((int *)&fStack_18,param_1[0xd1],(uint *)s_FireCMY_0050e4b8);
      *pfVar9 = fStack_18;
      param_1[0x272] = (int)ALBW_AS_U32(fStack_14);
    }
  }
  iVar2 = param_1[0x285];
  iVar6 = *(int *)(*(int *)(param_1[0x1e9] + 0x24) + 0x14);
  fVar10 = *pfVar9;
  if ((fVar10 != 0.0) && (*(int *)((int)ALBW_AS_U32(fVar10) + 0x1c) == param_1[0x272])) {
    iVar7 = *(int *)((int)ALBW_AS_U32(fVar10) + 0xc);
    if (iVar7 != 0) {
      fStack_18 = *(float *)(iVar7 + 0x3c);
      fStack_14 = fStack_18;
      func_00491D78(afStack_78,&fStack_18,(float *)(iVar7 + 0x4c),(float *)(iVar7 + 0x40));
      func_001157FC(afStack_48,(float *)(iVar6 + iVar2 * 0x30),afStack_78);
      iVar2 = *(int *)((int)ALBW_AS_U32(fVar10) + 0x20);
      if (((iVar2 != 0) && (*(int *)((int)ALBW_AS_U32(fVar10) + 0x24) == *(int *)(iVar2 + 0xc))) &&
         (0 < *(int *)(iVar2 + 4))) {
        func_003E6DD4(iVar2,afStack_48);
      }
    }
    *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) = *(uint *)((int)ALBW_AS_U32(fVar10) + 0x3c) & 0xfffffffe;
    return;
  }
  return;
}

