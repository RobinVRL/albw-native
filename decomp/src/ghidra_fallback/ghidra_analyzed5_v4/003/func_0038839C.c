#include "ghidra_types.h"

extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_001212EC(int param_1,int *param_2,int param_3,int param_4);
extern int func_00270784(int param_1,int param_2);
extern int func_00520FC0(void);
extern int *DAT_0038856c;
extern float DAT_00388570;
extern float DAT_00388574;
extern undefined4 *DAT_00388578;
extern float DAT_0038857c;
extern undefined4 DAT_00388580;
extern int *DAT_00388584;

// USA 0038839C <- EU 00388378 (Ghidra, non-matching)
// GLOBAL DAT_0038856c int *
// GLOBAL DAT_00388570 float
// GLOBAL DAT_00388574 float
// GLOBAL DAT_00388578 undefined4 *
// GLOBAL DAT_0038857c float
// GLOBAL DAT_00388580 undefined4
// GLOBAL DAT_00388584 int *

undefined4 func_0038839C(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_2c (*(float *)(albw_frame + 0x4))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x8))
  #define local_24 (*(float *)(albw_frame + 0xc))
  if ((param_2 != 0) || (iVar9 = *DAT_0038856c, iVar9 == 0)) {
    return 1;
  }
  sVar1 = *(short *)(param_1 + 0x95a);
  if (sVar1 == 0) {
    if (*(short *)(param_1 + 0xa04) == 0xaf) {
      pfVar5 = (float *)func_00520FC0();
      fVar3 = DAT_00388574;
      fVar2 = DAT_00388570;
      fVar6 = *pfVar5;
      fVar7 = pfVar5[1];
      *(float *)(param_1 + 0x9d4) = pfVar5[2];
      *(float *)(param_1 + 0x9cc) = fVar6;
      *(float *)(param_1 + 0x9d0) = fVar7;
      *(float *)(param_1 + 0x9cc) = *(float *)(param_1 + 0x9cc) - fVar2;
      *(float *)(param_1 + 0x9d4) = *(float *)(param_1 + 0x9d4) - fVar3;
      *(float *)(param_1 + 0x9d0) = *(float *)(param_1 + 0x9d0) + fVar3;
      fVar2 = DAT_0038857c;
      puVar4 = DAT_00388578;
      iVar9 = *(int *)(iVar9 + 0x18);
      if (iVar9 != 0) {
        *(undefined4 *)(param_1 + 0x9d8) = *DAT_00388578;
        uStack_28 = DAT_00388580;
        *(undefined4 *)(param_1 + 0x9dc) = puVar4[1];
        *(undefined4 *)(param_1 + 0x9e0) = puVar4[2];
        *(undefined4 *)(param_1 + 0x9e4) = puVar4[3];
        uVar8 = puVar4[5];
        uVar10 = puVar4[6];
        *(undefined4 *)(param_1 + 0x9e8) = puVar4[4];
        *(undefined4 *)(param_1 + 0x9ec) = uVar8;
        *(undefined4 *)(param_1 + 0x9f0) = uVar10;
        *(undefined4 *)(param_1 + 0x9f4) = puVar4[7];
        *(undefined4 *)(param_1 + 0x9f8) = puVar4[8];
        *(undefined4 *)(param_1 + 0x9fc) = puVar4[9];
        *(undefined2 *)(param_1 + 0xa00) = *(undefined2 *)(puVar4 + 10);
        *(undefined2 *)(param_1 + 0xa02) = *(undefined2 *)((int)puVar4 + 0x2a);
        local_2c = fVar2;
        local_24 = fVar2;
        func_00120FBC(iVar9,(int *)(param_1 + 0x9c4),(float *)(param_1 + 0x9cc),
                      (undefined4 *)(param_1 + 0x9d8),0,0,&local_2c);
      }
    }
    if (*(short *)(param_1 + 0xa04) != 0) {
      *(short *)(param_1 + 0xa04) = *(short *)(param_1 + 0xa04) + -1;
      return 0;
    }
    if (*DAT_00388584 != 0) {
      func_00270784(*DAT_00388584,300);
    }
  }
  else {
    if (sVar1 != 1) {
      if (sVar1 != 2) {
        return 0;
      }
      if (*(int *)(iVar9 + 0x18) != 0) {
        if (-1 < *(int *)(*(int *)(iVar9 + 0x18) + 0x10c)) {
          return 0;
        }
        return 1;
      }
      return 1;
    }
    if (*(int *)(iVar9 + 0x18) != 0) {
      func_001212EC(*(int *)(iVar9 + 0x18),(int *)(param_1 + 0x9c4),500,0);
    }
  }
  *(short *)(param_1 + 0x95a) = *(short *)(param_1 + 0x95a) + 1;
  return 0;
}

