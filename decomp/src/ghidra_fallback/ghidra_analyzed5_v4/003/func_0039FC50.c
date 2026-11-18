#include "ghidra_types.h"

extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001151EC(undefined4 *param_1,undefined4 *param_2);
extern int func_001157FC(float *param_1,float *param_2,float *param_3);
extern int func_0048B5D4(float *param_1,float *param_2,uint param_3);
extern int func_00491B3C(float *param_1,float *param_2);
extern float DAT_0039fde0;
extern int DAT_0039fde4;
extern undefined4 DAT_0039fde8;
extern float DAT_0039fdec;

// USA 0039FC50 <- EU 0039FC2C (Ghidra, non-matching)
// GLOBAL DAT_0039fde0 float
// GLOBAL DAT_0039fde4 int
// GLOBAL DAT_0039fde8 undefined4
// GLOBAL DAT_0039fdec float

undefined4 func_0039FC50(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  _Alignas(8) unsigned char albw_frame[0xa0];
  #define afStack_a0 ((float *)(albw_frame + 0x0))
  #define afStack_70 ((float *)(albw_frame + 0x30))
  #define local_64 (*(float *)(albw_frame + 0x3c))
  #define local_54 (*(undefined4 *)(albw_frame + 0x4c))
  #define local_44 (*(float *)(albw_frame + 0x5c))
  #define afStack_40 ((float *)(albw_frame + 0x60))
  #define local_30 (*(float *)(albw_frame + 0x70))
  #define local_2c (*(undefined4 *)(albw_frame + 0x74))
  #define local_28 (*(float *)(albw_frame + 0x78))
  if ((*(int *)(param_1 + 0x2c) == param_3) && (*(int *)(param_1 + 0xc) != 0)) {
    func_001119F4(afStack_a0,
                  (undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x24) + 0x14) +
                  *(int *)(param_1 + 0x2c) * 0x30));
    iVar1 = DAT_0039fde4;
    uVar2 = *(uint *)(param_1 + 0x24);
    pfVar3 = (float *)(DAT_0039fde4 + (uVar2 >> 0x18) * 0x10);
    fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_30 = pfVar3[2] + pfVar3[3] * fVar5 * DAT_0039fde0;
    fVar5 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_2c = DAT_0039fde8;
    local_28 = -(*pfVar3 + pfVar3[1] * fVar5 * DAT_0039fde0);
    uVar11 = DAT_0039fde8;
    fVar5 = DAT_0039fde0;
    func_0048B5D4(afStack_40,&local_30,*(uint *)(param_1 + 0xc));
    func_00491B3C(afStack_70,afStack_40);
    uVar2 = *(uint *)(param_1 + 0xc);
    pfVar3 = (float *)(iVar1 + (uVar2 >> 0x18) * 0x10);
    fVar8 = *pfVar3;
    fVar6 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = pfVar3[1];
    uVar4 = *(uint *)(param_1 + 0x24);
    pfVar3 = (float *)(iVar1 + (uVar4 >> 0x18) * 0x10);
    fVar7 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorUnsignedToFloat(uVar2 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_64 = (fVar8 + fVar10 * fVar6 * fVar5) * (*pfVar3 + pfVar3[1] * fVar7 * fVar5) *
               DAT_0039fdec;
    fVar6 = (float)VectorUnsignedToFloat(uVar4 & 0xffffff,(byte)(in_fpscr >> 0x15) & 3);
    local_44 = (fVar8 + fVar10 * fVar9 * fVar5) * (pfVar3[2] + pfVar3[3] * fVar6 * fVar5) *
               DAT_0039fdec;
    local_54 = uVar11;
    func_001157FC(afStack_a0,afStack_a0,afStack_70);
    func_001151EC((undefined4 *)
                  (*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x24) + 0x14) +
                  *(int *)(param_1 + 0x2c) * 0x30),afStack_a0);
    return 1;
  }
  return 0;
}

