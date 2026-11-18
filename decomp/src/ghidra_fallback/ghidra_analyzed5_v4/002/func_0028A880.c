#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014EEC8(int param_1,uint param_2,undefined4 *param_3,undefined4 param_4,float fparam_0);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_001E47F4(int param_1,int param_2);
extern int func_00289F70(int param_1);
extern int func_004CEAF0(int param_1);
extern int func_00520FF8(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int func_00581D60(int param_1);
extern int func_00661708(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0028aa3c;
extern int *DAT_0028aa40;
extern float DAT_0028aa44;
extern float *DAT_0028aa48;
extern int *DAT_0028aa4c;
extern float DAT_0028aa50;
extern undefined4 DAT_0028aa54;
extern int *DAT_0028aa58;

// USA 0028A880 <- EU 0028A8A8 (Ghidra, non-matching)
// GLOBAL DAT_0028aa3c int *
// GLOBAL DAT_0028aa40 int *
// GLOBAL DAT_0028aa44 float
// GLOBAL DAT_0028aa48 float *
// GLOBAL DAT_0028aa4c int *
// GLOBAL DAT_0028aa50 float
// GLOBAL DAT_0028aa54 undefined4
// GLOBAL DAT_0028aa58 int *

undefined4 func_0028A880(int param_1,int param_2,float *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  float *pfVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define fStack_1c (*(float *)(albw_frame + 0x4))
  #define fStack_18 (*(float *)(albw_frame + 0x8))
  piVar1 = DAT_0028aa3c;
  pfVar5 = &local_20;
  if ((param_2 == 0) && (*(int *)(*DAT_0028aa3c + 0x44) != 0)) {
    uVar2 = func_00581D60(*DAT_0028aa40);
    uVar4 = (uint)*(short *)(param_1 + 0x54);
    bVar6 = uVar2 == uVar4;
    if (bVar6) {
      uVar2 = (uint)*(byte *)(param_1 + 0x4f8);
    }
    if (bVar6 && uVar2 == 5) {
      *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_0028aa44;
      func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc)
                   );
      local_20 = *DAT_0028aa48;
      fStack_1c = DAT_0028aa48[1];
      fStack_18 = DAT_0028aa48[2];
      param_3 = DAT_0028aa48;
      param_4 = DAT_0028aa4c;
      iVar3 = func_0014EEC8(param_1,(uint)&local_20,DAT_0028aa48,DAT_0028aa4c,DAT_0028aa50);
      if (iVar3 != 0) {
        func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),&local_20);
        *(undefined4 *)(param_1 + 0x3e0) = DAT_0028aa54;
        iVar3 = func_00520FF8(param_1);
        param_3 = pfVar5;
        if (iVar3 != 0) {
          *(uint *)(param_1 + 0x2e0) = *(uint *)(param_1 + 0x2e0) | 2;
          func_00661708((undefined4 *)(param_1 + 0x4f4),9);
          param_3 = pfVar5;
        }
      }
      func_00289F70(param_1);
      uVar4 = extraout_r1;
    }
    if ((*(int *)(*piVar1 + 0x44) != 0) && (*(char *)(param_1 + 0x4f8) == '\0')) {
      func_00169A80(*(int **)(param_1 + 0x580),uVar4,param_3,param_4);
      func_00168E9C(*(int **)(param_1 + 0x580),*(int *)(param_1 + 0x478),(int *)0x0);
      func_004CEAF0(*(int *)(param_1 + 0x478));
    }
  }
  if (((*(short *)(param_1 + 0x2c) == 1) && (*(char *)(param_1 + 0x5d6) == '\0')) &&
     (iVar3 = func_0052FBA0(*DAT_0028aa58 + 0x3dbbc,*(uint *)(param_1 + 0x50)), iVar3 == 0)) {
    if (*(char *)(param_1 + 0x4f8) == '\x06') {
      *(undefined1 *)(param_1 + 0x5d6) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x2d7) = 1;
    }
  }
  return func_001E47F4(param_1,param_2);
}

