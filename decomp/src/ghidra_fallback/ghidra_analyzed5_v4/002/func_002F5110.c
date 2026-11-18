#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1,float fparam_2);
extern float *DAT_002f52bc;
extern float DAT_002f52c0;
extern float DAT_002f52c4;
extern float DAT_002f52c8;
extern float DAT_002f52cc;
extern undefined4 DAT_002f52d0;
extern undefined4 DAT_002f52d4;
extern float DAT_002f52d8;
extern int DAT_002f52dc;

// USA 002F5110 <- EU 002F50EC (Ghidra, non-matching)
// GLOBAL DAT_002f52bc float *
// GLOBAL DAT_002f52c0 float
// GLOBAL DAT_002f52c4 float
// GLOBAL DAT_002f52c8 float
// GLOBAL DAT_002f52cc float
// GLOBAL DAT_002f52d0 undefined4
// GLOBAL DAT_002f52d4 undefined4
// GLOBAL DAT_002f52d8 float
// GLOBAL DAT_002f52dc int

undefined4 func_002F5110(int param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  float *pfVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fparam_1;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  if (param_2 != 0 && param_3 != (float *)0x0) {
    local_38 = *(float *)(param_1 + 0x3d0);
    fStack_34 = *(float *)(param_1 + 0x3d4);
    fStack_30 = *(float *)(param_1 + 0x3d8);
    func_00115C54(&local_38,&local_38,DAT_002f52bc);
    uVar1 = DAT_002f52d0;
    fparam_1 = DAT_002f52cc;
    fparam_0 = DAT_002f52c8;
    fVar6 = DAT_002f52c4;
    fVar4 = DAT_002f52c0;
    iVar2 = *(int *)(param_1 + 0xc28);
    pfVar7 = (float *)(param_1 + 0xc4c);
    if (iVar2 == 0) {
      *param_3 = local_38;
      param_3[1] = fStack_34;
      param_3[2] = fStack_30;
      *pfVar7 = local_38;
      *(float *)(param_1 + 0xc50) = fStack_34;
      *(float *)(param_1 + 0xc54) = fStack_30;
      *(undefined4 *)(param_1 + 0xc44) = 0x6e;
      *(undefined4 *)(param_1 + 0xc48) = uVar1;
      *(undefined4 *)(param_1 + 0xc40) = 0;
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_1 + 0xc28) = *(int *)(param_1 + 0xc28) + 1;
    }
    else if (iVar2 == 1) {
      func_004D838C(pfVar7,&local_38,DAT_002f52c8,DAT_002f52cc,DAT_002f52c4);
      fVar4 = *(float *)(param_1 + 0xc50);
      fVar6 = *(float *)(param_1 + 0xc54);
      *param_3 = *(float *)(param_1 + 0xc4c);
      param_3[1] = fVar4;
      param_3[2] = fVar6;
      uVar1 = DAT_002f52d4;
      if (*(uint *)(param_1 + 0xc40) < *(uint *)(param_1 + 0xc44)) {
        *(uint *)(param_1 + 0xc40) = *(uint *)(param_1 + 0xc40) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc44) = 100;
        *(undefined4 *)(param_1 + 0xc48) = uVar1;
        *(undefined4 *)(param_1 + 0xc40) = 0;
        *(int *)(param_1 + 0xc28) = *(int *)(param_1 + 0xc28) + 1;
      }
    }
    else if (iVar2 == 2) {
      uVar3 = *(uint *)(param_1 + 0xc40);
      uVar5 = *(uint *)(param_1 + 0xc44);
      if (uVar3 < uVar5) {
        uVar3 = uVar3 + 1;
        *(uint *)(param_1 + 0xc40) = uVar3;
      }
      bVar8 = uVar5 != 0;
      if (bVar8) {
        uVar3 = *(uint *)(param_1 + 0xc40);
      }
      fVar9 = fparam_1;
      if (bVar8 && uVar3 != 0) {
        fVar9 = fVar4;
      }
      if ((bVar8 && uVar3 != 0) && uVar3 < uVar5) {
        fVar9 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
        fVar9 = fVar9 * *(float *)(param_1 + 0xc48);
      }
      func_0051D1C0((undefined4 *)(param_2 + 4),*(undefined4 *)(param_1 + 0xc2c),
                    *(undefined4 *)(DAT_002f52dc + 0x68),DAT_002f52d8,fparam_1,fVar9);
      func_004D838C(pfVar7,&local_38,fparam_0,fparam_1,fVar6);
      fVar4 = *(float *)(param_1 + 0xc50);
      fVar6 = *(float *)(param_1 + 0xc54);
      *param_3 = *(float *)(param_1 + 0xc4c);
      param_3[1] = fVar4;
      param_3[2] = fVar6;
    }
    return func_00115C54(param_3,param_3,(float *)(param_1 + 0xc58));
  }
  return 0;
}

