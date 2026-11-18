#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_00401C98(int param_1,uint *param_2,int param_3,int param_4,int param_5,float param_6);
extern int func_00401D90(int param_1,uint *param_2);
extern int func_00403360(int param_1,uint *param_2,int param_3);
extern int func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5);
extern int func_0041F5E4(int param_1);
extern undefined *DAT_00402b6c;
extern int DAT_00402b70;
extern int DAT_00402b74;

// USA 0040279C <- EU 0040277C (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_00402b6c undefined *
// GLOBAL DAT_00402b70 int
// GLOBAL DAT_00402b74 int

uint * func_0040279C(int param_1,uint *param_2,int param_3,int param_4,float *param_5,float *param_6
                    )

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 ((float *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0x4c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x50))
  #define iStack_2c (*(int *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  func_00100118((int)local_78,DAT_00402b6c,8,4);
  iVar5 = DAT_00402b70;
  local_78[8] = *param_5;
  local_78[9] = param_5[1];
  local_78[0] = *(float *)(param_3 + 0x3c) - param_6[1];
  local_78[1] = param_6[2];
  local_78[0xb] = param_5[1];
  local_78[10] = (*param_5 + *(float *)(param_3 + 0x3c)) - param_6[1];
  local_78[2] = param_6[1];
  local_78[3] = *(float *)(param_3 + 0x40) - param_6[3];
  local_78[0xc] = *param_5;
  local_78[0xd] = param_5[1] - param_6[2];
  local_78[4] = *param_6;
  local_78[5] = *(float *)(param_3 + 0x40) - param_6[2];
  local_78[0xe] = *param_5 + *param_6;
  uVar4 = 0;
  local_78[0xf] = (param_5[1] - *(float *)(param_3 + 0x40)) + param_6[3];
  local_78[6] = *(float *)(param_3 + 0x3c) - *param_6;
  local_78[7] = param_6[3];
  if ((*(byte *)(param_3 + 0xce) & 2) == 0) {
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar6 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar6 != 0)) &&
         ((*(uint *)(iVar6 + 0x78) & 3) != 0)) {
        if ((((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31))) ||
            (0x20 < *(byte *)(param_1 + 0x33) + 7)) && (*(byte *)(param_1 + 0x30) != 0)) {
          param_2 = (uint *)func_00401D90(param_1,param_2);
        }
        puVar2 = (uint *)func_00401160(param_1,param_2,iVar6);
        puVar2 = (uint *)func_00403360(param_1,puVar2,iVar6);
        param_2 = func_00401C98(param_1,puVar2,local_28,param_3,iVar6,0.0);
        uVar3 = uVar4 & 0xff;
        bVar9 = uVar3 < 8;
        if (bVar9) {
          uVar3 = (uint)*(byte *)(*(int *)(param_3 + 0xd0) + uVar3 * 8);
        }
        if (!bVar9) {
          uVar3 = 0;
        }
        uVar3 = *(uint *)(iVar5 + (uVar4 & 0xff) * 4) | *(uint *)(DAT_00402b74 + uVar3 * 4);
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        func_00401434(param_1,uVar3);
        fVar11 = local_78[uVar4 * 2 + 8];
        fVar12 = local_78[uVar4 * 2 + 9];
        fVar13 = local_78[uVar4 * 2];
        fVar14 = local_78[uVar4 * 2 + 1];
        iVar6 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar10 = ALBW_AS_U32(VectorUnsignedToFloat
                           (*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(param_1 + 0x600) = uVar10;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar6 + 0x400) = fVar11;
        *(float *)(iVar6 + 0x404) = fVar12;
        *(float *)(iVar6 + 0x3f8) = fVar13;
        *(float *)(iVar6 + 0x3fc) = fVar14;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        func_0041F5E4(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  else {
    bVar9 = true;
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(uint *)(iVar5 + 0x78) & 3) != 0)) {
        if (bVar9) {
          puVar2 = (uint *)func_00401160(param_1,param_2,iVar5);
          puVar2 = (uint *)func_00403360(param_1,puVar2,iVar5);
          param_2 = func_00403444(param_1,puVar2,local_28,param_3,iVar5);
          bVar9 = false;
          iVar5 = extraout_r1;
        }
        else {
          uVar3 = *(byte *)(param_1 + 0x30) + 1;
          bVar7 = 0x16 < uVar3;
          bVar8 = uVar3 == 0x17;
          if (uVar3 < 0x18) {
            bVar7 = 0x1f < *(byte *)(param_1 + 0x31);
            bVar8 = *(byte *)(param_1 + 0x31) == 0x20;
          }
          if (((bVar7 && !bVar8) || (0x20 < *(byte *)(param_1 + 0x33) + 1)) &&
             (*(byte *)(param_1 + 0x30) != 0)) {
            param_2 = (uint *)func_00401D90(param_1,param_2);
          }
          param_2 = (uint *)func_00403360(param_1,param_2,iVar5);
          iVar5 = extraout_r1_00;
        }
        uVar3 = uVar4 & 0xff;
        bVar8 = uVar3 < 8;
        if (bVar8) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar8) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar8) {
          uVar3 = 0;
        }
        uVar3 = *(uint *)(DAT_00402b70 + (uVar4 & 0xff) * 4) | *(uint *)(DAT_00402b74 + uVar3 * 4);
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        func_00401434(param_1,uVar3);
        fVar11 = local_78[uVar4 * 2];
        fVar12 = local_78[uVar4 * 2 + 1];
        fVar13 = local_78[uVar4 * 2 + 8];
        fVar14 = local_78[uVar4 * 2 + 9];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar10 = ALBW_AS_U32(VectorUnsignedToFloat
                           (*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
        *(undefined4 *)(param_1 + 0x600) = uVar10;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar11;
        *(float *)(iVar5 + 0x3fc) = fVar12;
        *(float *)(iVar5 + 0x400) = fVar13;
        *(float *)(iVar5 + 0x404) = fVar14;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        func_0041F5E4(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 4);
  }
  return param_2;
}

