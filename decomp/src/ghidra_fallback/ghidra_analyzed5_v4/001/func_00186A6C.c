#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00270784(int param_1,int param_2);
extern int func_00520FC0(void);
extern int *DAT_00186c98;
extern undefined4 DAT_00186c9c;
extern undefined4 *DAT_00186ca0;
extern float DAT_00186ca4;
extern float DAT_00186ca8;
extern float DAT_00186cac;
extern int *DAT_00186cb0;

// USA 00186A6C <- EU 00186A6C (Ghidra, non-matching)
// GLOBAL DAT_00186c98 int *
// GLOBAL DAT_00186c9c undefined4
// GLOBAL DAT_00186ca0 undefined4 *
// GLOBAL DAT_00186ca4 float
// GLOBAL DAT_00186ca8 float
// GLOBAL DAT_00186cac float
// GLOBAL DAT_00186cb0 int *

undefined4 func_00186A6C(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  uVar8 = DAT_00186c9c;
  if (param_2 == 0) {
    iVar4 = *DAT_00186c98;
    if (iVar4 == 0) {
      return 1;
    }
    sVar1 = *(short *)(param_1 + 0x95a);
    if (sVar1 == 0) {
      if (*(short *)(param_1 + 0x9c4) == 0xaf) {
        *(undefined4 *)(param_1 + 0xa08) = DAT_00186c9c;
        puVar5 = DAT_00186ca0;
        iVar4 = *(int *)(iVar4 + 0x18);
        if (iVar4 == 0) goto LAB_00186be8;
        *(undefined4 *)(param_1 + 0x9dc) = *DAT_00186ca0;
        *(undefined4 *)(param_1 + 0x9e0) = puVar5[1];
        *(undefined4 *)(param_1 + 0x9e4) = puVar5[2];
        *(undefined4 *)(param_1 + 0x9e8) = puVar5[3];
        uVar6 = puVar5[5];
        uVar7 = puVar5[6];
        *(undefined4 *)(param_1 + 0x9ec) = puVar5[4];
        *(undefined4 *)(param_1 + 0x9f0) = uVar6;
        *(undefined4 *)(param_1 + 0x9f4) = uVar7;
        *(undefined4 *)(param_1 + 0x9f8) = puVar5[7];
        *(undefined4 *)(param_1 + 0x9fc) = puVar5[8];
        *(undefined4 *)(param_1 + 0xa00) = puVar5[9];
        *(undefined2 *)(param_1 + 0xa04) = *(undefined2 *)(puVar5 + 10);
        *(undefined2 *)(param_1 + 0xa06) = *(undefined2 *)((int)puVar5 + 0x2a);
        *(undefined4 *)(param_1 + 0xa0c) = *(undefined4 *)(param_1 + 0x9e8);
        puVar5 = (undefined4 *)func_00520FC0();
        fVar3 = DAT_00186ca8;
        fVar2 = DAT_00186ca4;
        uVar6 = *puVar5;
        uVar7 = puVar5[1];
        *(undefined4 *)(param_1 + 0x9d8) = puVar5[2];
        *(undefined4 *)(param_1 + 0x9d0) = uVar6;
        *(undefined4 *)(param_1 + 0x9d4) = uVar7;
        *(float *)(param_1 + 0x9d0) = *(float *)(param_1 + 0x9d0) - fVar2;
        *(float *)(param_1 + 0x9d8) = *(float *)(param_1 + 0x9d8) - fVar3;
        *(float *)(param_1 + 0x9d4) = *(float *)(param_1 + 0x9d4) + fVar3;
        local_34 = DAT_00186cac;
        local_2c = DAT_00186cac;
        local_30 = uVar8;
        func_00120FBC(iVar4,(int *)(param_1 + 0x9c8),(float *)(param_1 + 0x9d0),
                      (undefined4 *)(param_1 + 0x9dc),0,0,&local_34);
      }
      if (*(short *)(param_1 + 0x9c4) != 0) {
LAB_00186be8:
        *(short *)(param_1 + 0x9c4) = *(short *)(param_1 + 0x9c4) + -1;
        return 0;
      }
      if (*DAT_00186cb0 != 0) {
        func_00270784(*DAT_00186cb0,300);
      }
    }
    else {
      if (sVar1 != 1) {
        if (sVar1 != 2) {
          return 0;
        }
        if (*(int *)(iVar4 + 0x18) == 0) {
          return 1;
        }
        if (*(int *)(*(int *)(iVar4 + 0x18) + 0x10c) < 0) {
          return 1;
        }
        return 0;
      }
      if (*(int *)(iVar4 + 0x18) != 0) {
        func_001212EC(*(int *)(iVar4 + 0x18),(int *)(param_1 + 0x9c8),400,0);
      }
    }
    *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    if (*(char *)(param_1 + 0x85f) == '\0') {
      return 1;
    }
  }
  return 0;
}

