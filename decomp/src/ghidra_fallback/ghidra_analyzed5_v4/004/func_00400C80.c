#include "ghidra_types.h"

extern int func_004016FC(int param_1,uint *param_2,int param_3);
extern int func_00401D90(int param_1,uint *param_2);
extern int func_00401E14(int param_1,undefined4 *param_2,int param_3);
extern int func_00568A68(int *param_1);
extern int func_005694A0(int param_1,float *param_2);
extern float DAT_0040109c;
extern float DAT_004010a0;
extern float DAT_004010a4;

// USA 00400C80 <- EU 00400C60 (Ghidra, non-matching)
// GLOBAL DAT_0040109c float
// GLOBAL DAT_004010a0 float
// GLOBAL DAT_004010a4 float

uint * func_00400C80(int *param_1,uint *param_2,int *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  byte *pbVar9;
  uint in_fpscr;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_c0 ((int *)(albw_frame + 0x0))
  #define local_b8 (*(float * *)(albw_frame + 0x8))
  #define local_b4 (*(undefined4 *)(albw_frame + 0xc))
  #define local_b0 (*(float *)(albw_frame + 0x10))
  #define local_ac (*(float *)(albw_frame + 0x14))
  #define local_a8 (*(float *)(albw_frame + 0x18))
  #define local_a4 (*(float *)(albw_frame + 0x1c))
  #define local_a0 (*(float *)(albw_frame + 0x20))
  #define local_9c (*(float *)(albw_frame + 0x24))
  #define local_98 (*(float *)(albw_frame + 0x28))
  #define local_94 (*(float *)(albw_frame + 0x2c))
  #define local_90 (*(float *)(albw_frame + 0x30))
  #define local_8c (*(float *)(albw_frame + 0x34))
  #define local_88 (*(float *)(albw_frame + 0x38))
  #define local_84 (*(float *)(albw_frame + 0x3c))
  #define local_80 (*(float *)(albw_frame + 0x40))
  #define local_7c (*(float *)(albw_frame + 0x44))
  #define local_78 (*(float *)(albw_frame + 0x48))
  #define local_74 (*(float *)(albw_frame + 0x4c))
  #define local_70 (*(int * *)(albw_frame + 0x50))
  #define local_6c (*(uint *)(albw_frame + 0x54))
  #define afStack_68 ((float *)(albw_frame + 0x58))
  if ((*(short *)((int)param_3 + 0xce) != 0) && (param_3[0x2d] != 0)) {
    iVar3 = func_00568A68(param_3);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = param_3[0x3f];
    }
    if (iVar3 != 0 && iVar4 != 0) {
      if ((char)param_1[0xc] != '\0') {
        param_2 = (uint *)func_00401D90((int)param_1,param_2);
      }
      if (*(char *)(param_3[0x3f] + 6) == '\0') {
        (**(code **)(*param_3 + 100))(param_3,param_1);
      }
      iVar4 = param_3[0x3f];
      if (*(short *)(iVar4 + 4) != 0) {
        iVar3 = func_00568A68(param_3);
        func_005694A0((int)param_3,afStack_68);
        local_c0[1] = 0;
        local_b4 = 0;
        local_90 = DAT_0040109c;
        local_8c = DAT_0040109c;
        local_88 = DAT_0040109c;
        local_80 = DAT_004010a0;
        local_7c = DAT_004010a0;
        local_78 = DAT_004010a0;
        local_b8 = afStack_68;
        local_6c = (uint)((*(byte *)(param_3 + 0x3d) & 0x10) != 0);
        uVar8 = *(uint *)(iVar3 + 0x6c);
        uVar5 = (uint)*(byte *)((int)param_3 + 0x46);
        local_a4 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        local_b0 = (float)VectorUnsignedToFloat(uVar8 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
        local_ac = (float)VectorUnsignedToFloat
                                    ((uVar8 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        local_a8 = (float)VectorUnsignedToFloat((uVar8 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        local_b0 = local_b0 * DAT_004010a4;
        local_ac = local_ac * DAT_004010a4;
        local_a4 = local_a4 * DAT_004010a4;
        local_a8 = local_a8 * DAT_004010a4;
        uVar8 = *(uint *)(iVar3 + 0x70);
        fVar11 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
        fVar10 = (float)VectorUnsignedToFloat(uVar8 >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        local_98 = (float)VectorUnsignedToFloat((uVar8 << 8) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        local_9c = (float)VectorUnsignedToFloat
                                    ((uVar8 << 0x10) >> 0x18,(byte)(in_fpscr >> 0x15) & 3);
        local_a0 = (float)VectorUnsignedToFloat(uVar8 & 0xff,(byte)(in_fpscr >> 0x15) & 3);
        local_9c = local_9c * DAT_004010a4;
        local_a0 = local_a0 * DAT_004010a4;
        local_94 = fVar10 * DAT_004010a4 * fVar11 * DAT_004010a4;
        local_98 = local_98 * DAT_004010a4;
        local_70 = param_3 + 0x2b;
        uVar8 = *(uint *)(iVar3 + 0x74);
        if ((uVar8 & 0x10000) == 0) {
          local_84 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          local_84 = local_84 * DAT_004010a4;
          local_74 = local_84;
        }
        else {
          local_84 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          pbVar9 = (byte *)(((uVar8 << 0x1e) >> 0x19) + ((uVar8 << 0x1c) >> 0x1e) * 0x14 +
                            (uVar8 >> 1 & 0x18) + (uVar8 >> 6 & 8) + (uVar8 >> 8 & 0xc) +
                            ((int)(uVar8 << 0x13) >> 0x1f) * -0xc + (uVar8 >> 4 & 0x1c) +
                            ((uVar8 << 0x10) >> 0x1d) * 0x14 + *(int *)(iVar3 + 0x7c));
          local_84 = local_84 * DAT_004010a4;
          local_90 = (float)VectorUnsignedToFloat((uint)*pbVar9,(byte)(in_fpscr >> 0x15) & 3);
          local_8c = (float)VectorUnsignedToFloat((uint)pbVar9[1],(byte)(in_fpscr >> 0x15) & 3);
          local_88 = (float)VectorUnsignedToFloat((uint)pbVar9[2],(byte)(in_fpscr >> 0x15) & 3);
          local_90 = local_90 * DAT_004010a4;
          local_8c = local_8c * DAT_004010a4;
          local_88 = local_88 * DAT_004010a4;
          local_80 = (float)VectorUnsignedToFloat((uint)pbVar9[3],(byte)(in_fpscr >> 0x15) & 3);
          local_7c = (float)VectorUnsignedToFloat((uint)pbVar9[4],(byte)(in_fpscr >> 0x15) & 3);
          fVar11 = (float)VectorUnsignedToFloat((uint)pbVar9[6],(byte)(in_fpscr >> 0x15) & 3);
          fVar10 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
          local_78 = (float)VectorUnsignedToFloat((uint)pbVar9[5],(byte)(in_fpscr >> 0x15) & 3);
          local_80 = local_80 * DAT_004010a4;
          local_7c = local_7c * DAT_004010a4;
          local_78 = local_78 * DAT_004010a4;
          local_74 = fVar11 * DAT_004010a4 * fVar10 * DAT_004010a4;
        }
        *(undefined1 *)((int)param_1 + 0x62a) = 5;
        local_c0[0] = iVar4;
        puVar6 = func_004016FC((int)param_1,param_2,iVar3);
        fVar12 = local_78;
        fVar2 = local_7c;
        fVar1 = local_80;
        fVar13 = local_98;
        fVar11 = local_9c;
        fVar10 = local_a0;
        if ((*(byte *)(param_3 + 0x3d) & 0x20) != 0) {
          local_a0 = local_b0;
          local_9c = local_ac;
          local_98 = local_a8;
          local_80 = local_90;
          local_7c = local_8c;
          local_78 = local_88;
          local_6c = local_6c & 0xfffffffe;
          puVar6 = (uint *)(**(code **)(*param_1 + 0x14))(param_1,puVar6,local_c0);
          local_7c = fVar2;
          local_80 = fVar1;
          local_6c = local_6c | 1;
          local_a0 = fVar10;
          local_9c = fVar11;
          local_98 = fVar13;
          local_78 = fVar12;
        }
        puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x14))(param_1,puVar6,local_c0);
        puVar6 = func_00401E14((int)param_1,puVar7,1);
        return puVar6;
      }
    }
  }
  return param_2;
}

