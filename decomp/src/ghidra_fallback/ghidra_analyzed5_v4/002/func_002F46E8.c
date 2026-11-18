#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004D7F70(float *param_1,uint param_2);
extern int func_004D838C(float *param_1,float *param_2,float fparam_0,float fparam_1,float fparam_2);
extern int func_0051D1C0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float fparam_0, float fparam_1,float fparam_2);
extern int func_0068C690(float *param_1);
extern float *DAT_002f48bc;
extern float DAT_002f48c0;
extern float DAT_002f48c4;
extern float DAT_002f48c8;
extern float DAT_002f48cc;
extern undefined4 DAT_002f48d0;
extern undefined4 DAT_002f48d4;
extern float DAT_002f48d8;
extern int DAT_002f48dc;

// USA 002F46E8 <- EU 002F46C4 (Ghidra, non-matching)
// GLOBAL DAT_002f48bc float *
// GLOBAL DAT_002f48c0 float
// GLOBAL DAT_002f48c4 float
// GLOBAL DAT_002f48c8 float
// GLOBAL DAT_002f48cc float
// GLOBAL DAT_002f48d0 undefined4
// GLOBAL DAT_002f48d4 undefined4
// GLOBAL DAT_002f48d8 float
// GLOBAL DAT_002f48dc int

undefined4 func_002F46E8(int param_1,int param_2,float *param_3)

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
  #define local_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  if (param_2 != 0 && param_3 != (float *)0x0) {
    func_00115C70(afStack_34,(float *)(param_1 + 0xe30),(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(afStack_34);
    pfVar7 = DAT_002f48bc;
    *(int *)(param_2 + 8) = iVar2;
    local_40 = *pfVar7;
    fStack_3c = pfVar7[1];
    fStack_38 = pfVar7[2];
    func_004D7F70(&local_40,*(uint *)(param_1 + 1000));
    func_00115C54(&local_40,&local_40,(float *)(param_1 + 0x3d0));
    uVar1 = DAT_002f48d0;
    fparam_1 = DAT_002f48cc;
    fparam_0 = DAT_002f48c8;
    fVar6 = DAT_002f48c4;
    fVar4 = DAT_002f48c0;
    iVar2 = *(int *)(param_1 + 0xc28);
    pfVar7 = (float *)(param_1 + 0xc4c);
    if (iVar2 == 0) {
      *param_3 = local_40;
      param_3[1] = fStack_3c;
      param_3[2] = fStack_38;
      *pfVar7 = local_40;
      *(float *)(param_1 + 0xc50) = fStack_3c;
      *(float *)(param_1 + 0xc54) = fStack_38;
      *(undefined4 *)(param_1 + 0xc44) = 100;
      *(undefined4 *)(param_1 + 0xc48) = uVar1;
      *(undefined4 *)(param_1 + 0xc40) = 0;
      *(undefined4 *)(param_1 + 0xc2c) = *(undefined4 *)(param_2 + 4);
      *(int *)(param_1 + 0xc28) = *(int *)(param_1 + 0xc28) + 1;
    }
    else if (iVar2 == 1) {
      func_004D838C(pfVar7,&local_40,DAT_002f48c8,DAT_002f48cc,DAT_002f48c4);
      fVar4 = *(float *)(param_1 + 0xc50);
      fVar6 = *(float *)(param_1 + 0xc54);
      *param_3 = *(float *)(param_1 + 0xc4c);
      param_3[1] = fVar4;
      param_3[2] = fVar6;
      uVar1 = DAT_002f48d4;
      if (*(uint *)(param_1 + 0xc40) < *(uint *)(param_1 + 0xc44)) {
        *(uint *)(param_1 + 0xc40) = *(uint *)(param_1 + 0xc40) + 1;
      }
      else {
        *(undefined4 *)(param_1 + 0xc44) = 0xa0;
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
                    *(undefined4 *)(DAT_002f48dc + 0x6c),DAT_002f48d8,fparam_1,fVar9);
      func_004D838C(pfVar7,&local_40,fparam_0,fparam_1,fVar6);
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

