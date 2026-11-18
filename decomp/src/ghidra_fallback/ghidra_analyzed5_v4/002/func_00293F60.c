// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010C7F8(int param_1,int param_2,float fparam_0);
extern int func_002581CC(int param_1,undefined4 param_2);
extern int func_00258CCC(int param_1,undefined4 param_2);
extern int func_00258ED4(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,float fparam_0);
extern int func_0029536C(int param_1);
extern int func_00295E40(int param_1,uint param_2);
extern int func_0029669C(int param_1);
extern int func_00296D70(int param_1,uint param_2,int param_3,int param_4,int param_5);
extern int func_002972C0(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_00407B38(int param_1,undefined4 param_2,float fparam_0);
extern int func_00407EF8(int param_1,int param_2,float fparam_0);
extern int func_004EB350(int param_1,undefined1 param_2,undefined4 param_3,int *param_4);
extern int func_004EBFFC(int param_1,int param_2,float fparam_0);
extern int func_0053F9B8(int param_1);
extern int func_00540370(int param_1,uint param_2);
extern int func_00556E64(int param_1);
extern int func_00588268(int param_1);
extern float DAT_00294290;
extern int *DAT_00294294;
extern float DAT_00294298;
extern int *DAT_0029429c;
extern int *DAT_002942a0;
extern float DAT_002942a4;
extern undefined4 DAT_002942a8;
extern float DAT_002942ac;
extern float DAT_002942b0;
extern undefined4 DAT_00294424;
extern undefined4 DAT_00294428;

// USA 00293F60 <- EU 00293F88 (Ghidra, non-matching)
// GLOBAL DAT_00294290 float
// GLOBAL DAT_00294294 int *
// GLOBAL DAT_00294298 float
// GLOBAL DAT_0029429c int *
// GLOBAL DAT_002942a0 int *
// GLOBAL DAT_002942a4 float
// GLOBAL DAT_002942a8 undefined4
// GLOBAL DAT_002942ac float
// GLOBAL DAT_002942b0 float
// GLOBAL DAT_00294424 undefined4
// GLOBAL DAT_00294428 undefined4

undefined4 func_00293F60(int param_1,undefined4 param_2,int param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  
  piVar3 = DAT_00294294;
  fVar8 = DAT_00294298;
  fVar9 = DAT_00294290;
  if ((*(uint *)(param_1 + 0x128) & 0x10) != 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar4 = *(int *)(param_1 + 0x20);
      param_3 = (param_1 + 0x14) - iVar4;
      for (iVar2 = *(int *)(param_1 + 0x18) - iVar4; iVar2 != param_3;
          iVar2 = *(int *)(iVar2 + iVar4 + 4) - iVar4) {
        param_4 = (int *)(uint)*(byte *)(iVar2 + 0x6a);
        if (param_4 != (int *)0x0) goto LAB_002940d0;
      }
    }
    bVar1 = false;
    if (*(int *)(param_1 + 0x1c) != 0) {
      iVar6 = *(int *)(param_1 + 0x20);
      iVar4 = (param_1 + 0x14) - iVar6;
      iVar2 = *(int *)(param_1 + 0x18) - iVar6;
      if (iVar2 != iVar4) {
        do {
          func_002581CC(iVar2,0x1e);
          if ((*(uint *)(iVar2 + 0x38) & 4) != 0) {
            bVar1 = true;
          }
          iVar2 = *(int *)(iVar2 + iVar6 + 4) - iVar6;
        } while (iVar2 != iVar4);
        if (bVar1) {
          iVar6 = *(int *)(param_1 + 0x20);
          for (iVar2 = *(int *)(param_1 + 0x18) - iVar6; iVar2 != iVar4;
              iVar2 = *(int *)(iVar2 + iVar6 + 4) - iVar6) {
            if ((*(uint *)(iVar2 + 0x38) & 4) == 0) {
              func_00258CCC(iVar2,0);
            }
          }
        }
      }
    }
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xffffffe7;
    if (*(char *)(*DAT_0029429c + 0x25) == '\x02' || *(char *)(*DAT_0029429c + 0x25) == '\x03') {
      func_004EBFFC(*piVar3,0,fVar9);
    }
    else {
      func_004EBFFC(*piVar3,0x1e,fVar8);
    }
  }
LAB_002940d0:
  if (((*(uint *)(param_1 + 0x128) & 4) != 0) && (iVar2 = func_00588268(*piVar3), iVar2 == 0)) {
    *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xfffffffb;
    if (*(uint *)(param_1 + 0x178) < 4) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 0xc);
    }
    func_0010C7F8(iVar2,0x78,fVar8);
  }
  piVar7 = DAT_002942a0;
  if ((*(uint *)(param_1 + 0x128) & 1) == 0) {
    bVar1 = func_00556E64(*DAT_002942a0);
    if (bVar1) {
      func_00407B38(*(int *)(param_1 + 0xbc),2,DAT_002942a4);
      *(float *)(*(int *)(param_1 + 0xbc) + 0x40) = fVar9;
      func_00407EF8(*(int *)(param_1 + 0xbc),0,fVar8);
      func_00407EF8(*(int *)(param_1 + 0xbc),1,fVar8);
      *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x4c) = DAT_002942a8;
      if (*(int *)(param_1 + 0x178) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(param_1 + 0x180);
      }
      func_0010C7F8(iVar2,10,DAT_002942ac);
      *(uint *)(param_1 + 0x128) = *(uint *)(param_1 + 0x128) & 0xfffffffd | 1;
      if (*(int *)(param_1 + 0x1c) != 0) {
        iVar6 = *(int *)(param_1 + 0x20);
        iVar2 = *(int *)(param_1 + 0x18);
        fVar8 = DAT_002942b0;
        for (iVar4 = iVar2 - iVar6; iVar4 != (param_1 + 0x14) - iVar6;
            iVar4 = *(int *)(iVar4 + iVar6 + 4) - iVar6) {
          func_00258ED4(iVar4,iVar2,param_3,param_4,fVar8);
          iVar2 = extraout_r1;
        }
      }
      func_004EB350(*piVar3,0,param_3,param_4);
    }
    else {
      if ((*(uint *)(param_1 + 0x128) & 2) == 0) {
        fVar9 = DAT_002942a4;
        iVar2 = func_0053F9B8(*piVar7);
        if (iVar2 == 0) goto LAB_00294324;
        func_0029536C(param_1);
        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x40) = DAT_00294424;
        func_00407EF8(*(int *)(param_1 + 0xbc),0,fVar8);
        *(undefined4 *)(*(int *)(param_1 + 0xbc) + 0x4c) = DAT_00294428;
        if (*(int *)(param_1 + 0x178) == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = **(int **)(param_1 + 0x180);
        }
        func_0010C7F8(iVar2,10,fVar9);
        uVar5 = *(uint *)(param_1 + 0x128) | 2;
      }
      else {
        iVar2 = func_0053F9B8(*piVar7);
        if (iVar2 != 0) goto LAB_00294324;
        func_0029536C(param_1);
        uVar5 = *(uint *)(param_1 + 0x128) & 0xfffffffd;
      }
      *(uint *)(param_1 + 0x128) = uVar5;
    }
  }
  else {
    bVar1 = func_00556E64(*DAT_002942a0);
    if (!bVar1) {
      func_0029536C(param_1);
    }
  }
LAB_00294324:
  uVar5 = *(uint *)(*(int *)(param_1 + 0xe0) + *(char *)(param_1 + 200) * 8 + 4);
  piVar7 = (int *)(*(int *)(param_1 + 0xd8) + ((int)uVar5 >> 1));
  piVar3 = (int *)(*(int *)(param_1 + 0xe0) + *(char *)(param_1 + 200) * 8);
  if ((uVar5 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *piVar7);
  }
  (*(code *)*piVar3)(piVar7);
  iVar2 = *(int *)(param_1 + 0xc4) + 1;
  *(int *)(param_1 + 0xc4) = iVar2;
  if (*(int *)(param_1 + 0xd4) != 0) {
    fVar8 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0xd4),1,fVar8);
  }
  if (0 < *(int *)(param_1 + 0x1a8)) {
    iVar2 = func_00540370(param_1,4);
    if (iVar2 == 0) {
      func_002972C0(param_1,0x78);
      func_00295E40(param_1,8);
      *(undefined4 *)(param_1 + 0x1a8) = 0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1a8) + -1;
      *(int *)(param_1 + 0x1a8) = iVar2;
      if ((iVar2 == 0) && (iVar2 = func_00296D70(param_1,4,-1,5,0), iVar2 != 0)) {
        return func_0029669C(param_1);
      }
    }
  }
  return 0;
}

