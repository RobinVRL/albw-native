#include "ghidra_types.h"

extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004905E0(float fparam_0);
extern int func_0051D27C(int *param_1,int param_2,int param_3);
extern int func_00520FC0(void);
extern float DAT_002116fc;
extern int *DAT_00211700;

// USA 00211574 <- EU 00211574 (Ghidra, non-matching)
// GLOBAL DAT_002116fc float
// GLOBAL DAT_00211700 int *

undefined1 func_00211574(int param_1)

{
  undefined1 uVar1;
  float *pfVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((float *)(albw_frame + 0x8))
  #define local_10 (*(float *)(albw_frame + 0x10))
  uVar1 = *(undefined1 *)(param_1 + 0x8c0);
  switch(uVar1) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    pfVar2 = (float *)func_00520FC0();
    func_00115C70(local_18,pfVar2,(float *)(param_1 + 0x3d0));
    if (local_10 == DAT_002116fc && local_18[0] == DAT_002116fc) {
      iVar3 = 0;
    }
    else if (local_10 < DAT_002116fc) {
      if (local_18[0] < DAT_002116fc) {
        if (local_18[0] < local_10) {
          iVar3 = func_004905E0(local_10 / local_18[0]);
          iVar3 = -0x40000000 - iVar3;
        }
        else {
          iVar3 = func_004905E0(local_18[0] / local_10);
          iVar3 = iVar3 + -0x80000000;
        }
      }
      else {
        local_10 = -local_10;
        if (local_10 < local_18[0]) {
          iVar3 = func_004905E0(local_10 / local_18[0]);
          iVar3 = iVar3 + 0x40000000;
        }
        else {
          iVar3 = func_004905E0(local_18[0] / local_10);
          iVar3 = -0x80000000 - iVar3;
        }
      }
    }
    else if (local_18[0] < DAT_002116fc) {
      local_18[0] = -local_18[0];
      if (local_10 < local_18[0]) {
        iVar3 = func_004905E0(local_10 / local_18[0]);
        iVar3 = iVar3 + -0x40000000;
      }
      else {
        iVar3 = func_004905E0(local_18[0] / local_10);
        iVar3 = -iVar3;
      }
    }
    else if (local_10 < local_18[0]) {
      iVar3 = func_004905E0(local_10 / local_18[0]);
      iVar3 = 0x40000000 - iVar3;
    }
    else {
      iVar3 = func_004905E0(local_18[0] / local_10);
    }
    uVar1 = func_0051D27C((int *)(param_1 + 1000),iVar3,*DAT_00211700);
  }
  return uVar1;
}

