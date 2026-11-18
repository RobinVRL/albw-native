#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0035B0A8(void);
extern int func_0035B0E8(void);
extern int func_0036BE78();
extern int func_0036BFD0(int param_1,undefined4 param_2,undefined4 param_3);
extern int func_0036C2B8(undefined4 param_1,undefined4 param_2);
extern int func_004B9DAC(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_004EB4C8(int param_1,int param_2);
extern int func_004ED46C(int param_1,int param_2);
extern int func_00588F08(int param_1);
extern int func_00660718(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0026a778;
extern undefined4 DAT_0026a77c;
extern undefined4 DAT_0026a780;
extern float DAT_0026a784;
extern float DAT_0026a788;
extern float DAT_0026a78c;
extern int *DAT_0026a790;
extern undefined4 *DAT_0026a794;
extern float *DAT_0026a798;
extern undefined4 DAT_0026a79c;
extern undefined4 *DAT_0026a7a0;
extern undefined4 DAT_0026a7a4;

// USA 0026A4D8 <- EU 0026A500 (Ghidra, non-matching)
// GLOBAL DAT_0026a778 int *
// GLOBAL DAT_0026a77c undefined4
// GLOBAL DAT_0026a780 undefined4
// GLOBAL DAT_0026a784 float
// GLOBAL DAT_0026a788 float
// GLOBAL DAT_0026a78c float
// GLOBAL DAT_0026a790 int *
// GLOBAL DAT_0026a794 undefined4 *
// GLOBAL DAT_0026a798 float *
// GLOBAL DAT_0026a79c undefined4
// GLOBAL DAT_0026a7a0 undefined4 *
// GLOBAL DAT_0026a7a4 undefined4

undefined4 func_0026A4D8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  #define local_3c (*(undefined4 *)(albw_frame + 0x14))
  #define local_38 (*(float *)(albw_frame + 0x18))
  #define local_34 (*(undefined4 *)(albw_frame + 0x1c))
  uVar8 = DAT_0026a780;
  uVar11 = DAT_0026a77c;
  piVar1 = DAT_0026a778;
  if (*(char *)(param_1 + 0xad0) == '\0') {
LAB_0026a588:
    if (*(int *)(param_1 + 0xacc) < 3) goto LAB_0026a5c4;
  }
  else {
    if (*(uint *)(param_1 + 0xac0) < *(uint *)(param_1 + 0xac4)) {
      *(uint *)(param_1 + 0xac0) = *(uint *)(param_1 + 0xac0) + 1;
      goto LAB_0026a588;
    }
    if (*(int *)(param_1 + 0xacc) < 3) {
      func_004ED46C(*DAT_0026a778,1);
      *(undefined4 *)(param_1 + 0xac4) = 0x3c;
      *(undefined4 *)(param_1 + 0xac8) = uVar11;
      *(undefined4 *)(param_1 + 0xac0) = 0;
      *(int *)(param_1 + 0xacc) = *(int *)(param_1 + 0xacc) + 1;
      goto LAB_0026a588;
    }
  }
  iVar2 = func_0035B0A8();
  if (iVar2 != 0) {
    return func_00660718((undefined4 *)(param_1 + 0x8c8),0x10);
  }
LAB_0026a5c4:
  if (*(int *)(param_1 + 0xb94) < 2) {
    if (0 < *(int *)(param_1 + 0xb94)) {
      if (*(uint *)(param_1 + 0xac0) < *(uint *)(param_1 + 0xac4)) {
        *(uint *)(param_1 + 0xac0) = *(uint *)(param_1 + 0xac0) + 1;
      }
      else if (*(int *)(param_1 + 0xacc) < 3) {
        func_004ED46C(*piVar1,1);
        uVar11 = DAT_0026a7a4;
        *(undefined4 *)(param_1 + 0xac4) = 0x5a;
        *(undefined4 *)(param_1 + 0xac8) = uVar11;
        *(undefined4 *)(param_1 + 0xac0) = 0;
        *(int *)(param_1 + 0xacc) = *(int *)(param_1 + 0xacc) + 1;
        return 0;
      }
    }
  }
  else {
    iVar2 = param_1 + 0x9ac;
    pfVar7 = (float *)(param_1 + 0xab4);
    if (*(char *)(param_1 + 0xad0) == '\0') {
      fVar10 = DAT_0026a788;
      fVar9 = DAT_0026a784;
      func_004EB4C8(*DAT_0026a790,0x3c);
      pfVar4 = (float *)func_00588F08(*piVar1);
      fVar5 = *pfVar4;
      fVar6 = pfVar4[1];
      *(float *)(param_1 + 0xabc) = pfVar4[2];
      *pfVar7 = fVar5;
      *(float *)(param_1 + 0xab8) = fVar6;
      *(undefined1 *)(param_1 + 0xaa0) = 2;
      *(float **)(param_1 + 0x9d4) = pfVar7;
      func_0036BFD0(iVar2,0xffffffff,0xffffffff);
      func_0036C2B8(iVar2,*DAT_0026a794);
      func_00115C54((float *)(param_1 + 0x984),(float *)(param_1 + 0x3d0),DAT_0026a798);
      *(undefined4 *)(param_1 + 0xac4) = 0x3c;
      *(undefined4 *)(param_1 + 0xac8) = uVar11;
      *(undefined4 *)(param_1 + 0xac0) = 0;
      *(undefined4 *)(param_1 + 0xacc) = 0;
      *(undefined1 *)(param_1 + 0xad0) = 1;
      local_3c = DAT_0026a79c;
      local_34 = DAT_0026a79c;
      local_48 = uVar8;
      local_44 = fVar10;
      local_40 = uVar8;
      local_38 = fVar9;
      return func_004B9DAC(*DAT_0026a7a0,&local_48,&local_3c);
    }
    iVar3 = func_004D838C(pfVar7,(float *)(param_1 + 0x984),DAT_0026a788,DAT_0026a78c,DAT_0026a784);
    *(float **)(param_1 + 0x9d4) = pfVar7;
    *(undefined1 *)(param_1 + 0xaa0) = 2;
    func_0036BE78(iVar2);
    if (iVar3 != 0) {
      return func_0035B0E8();
    }
  }
  return 0;
}

