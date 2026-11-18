#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_00401C98(int param_1,uint *param_2,int param_3,int param_4,int param_5,float param_6);
extern int func_00401D90(int param_1,uint *param_2);
extern int func_00403360(int param_1,uint *param_2,int param_3);
extern int func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5);
extern int func_0041F5E4(int param_1);
extern int DAT_00402f40;
extern int DAT_00402f44;

// USA 00402B98 <- EU 00402B78 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_00402f40 int
// GLOBAL DAT_00402f44 int

uint * func_00402B98(int param_1,uint *param_2,int param_3,int param_4,float *param_5,float *param_6
                    )

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint in_fpscr;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  _Alignas(8) unsigned char albw_frame[0xc0];
  #define local_b8 ((float *)(albw_frame + 0x8))
  #define iStack_34 (*(int *)(albw_frame + 0x8c))
  #define puStack_30 (*(uint * *)(albw_frame + 0x90))
  #define iStack_2c (*(int *)(albw_frame + 0x94))
  #define local_28 (*(int *)(albw_frame + 0x98))
  uVar4 = 0;
  local_b8[0] = *param_5;
  local_b8[1] = param_5[1];
  local_b8[6] = param_6[1];
  local_b8[0xb] = param_6[3];
  local_b8[2] = *param_6;
  local_b8[3] = param_6[2];
  local_b8[0x11] = local_b8[1] - local_b8[3];
  local_b8[4] = (local_b8[0] + *(float *)(param_3 + 0x3c)) - local_b8[6];
  local_b8[9] = (local_b8[1] - *(float *)(param_3 + 0x40)) + local_b8[0xb];
  local_b8[0x18] = local_b8[0] + local_b8[2];
  local_b8[0x13] = (*(float *)(param_3 + 0x40) - local_b8[3]) - local_b8[0xb];
  local_b8[0x1a] = (*(float *)(param_3 + 0x3c) - local_b8[2]) - local_b8[6];
  local_b8[5] = local_b8[1];
  local_b8[7] = local_b8[3];
  local_b8[8] = local_b8[0];
  local_b8[10] = local_b8[2];
  local_b8[0xc] = local_b8[4];
  local_b8[0xd] = local_b8[9];
  local_b8[0xe] = local_b8[6];
  local_b8[0xf] = local_b8[0xb];
  local_b8[0x10] = local_b8[0];
  local_b8[0x12] = local_b8[2];
  local_b8[0x14] = local_b8[4];
  local_b8[0x15] = local_b8[0x11];
  local_b8[0x16] = local_b8[6];
  local_b8[0x17] = local_b8[0x13];
  local_b8[0x19] = local_b8[1];
  local_b8[0x1b] = local_b8[3];
  local_b8[0x1c] = local_b8[0x18];
  local_b8[0x1d] = local_b8[9];
  local_b8[0x1e] = local_b8[0x1a];
  local_b8[0x1f] = local_b8[0xb];
  iStack_34 = param_1;
  puStack_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if ((*(byte *)(param_3 + 0xce) & 2) == 0) {
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(uint *)(iVar5 + 0x78) & 3) != 0)) {
        if ((((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31))) ||
            (0x20 < *(byte *)(param_1 + 0x33) + 7)) && (*(byte *)(param_1 + 0x30) != 0)) {
          param_2 = (uint *)func_00401D90(param_1,param_2);
        }
        puVar2 = (uint *)func_00401160(param_1,param_2,iVar5);
        puVar2 = (uint *)func_00403360(param_1,puVar2,iVar5);
        param_2 = func_00401C98(param_1,puVar2,local_28,param_3,iVar5,0.0);
        uVar3 = uVar4 & 0xff;
        bVar8 = uVar3 < 8;
        iVar5 = extraout_r1_01;
        if (bVar8) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar8) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar8) {
          uVar3 = 0;
        }
        uVar3 = *(uint *)(DAT_00402f40 + (uVar4 & 0xff) * 4) | *(uint *)(DAT_00402f44 + uVar3 * 4);
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        func_00401434(param_1,uVar3);
        fVar12 = local_b8[uVar4 * 4];
        fVar13 = local_b8[uVar4 * 4 + 1];
        fVar10 = local_b8[uVar4 * 4 + 2];
        fVar11 = local_b8[uVar4 * 4 + 3];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar9 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3))
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar9;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar10;
        *(float *)(iVar5 + 0x3fc) = fVar11;
        *(float *)(iVar5 + 0x400) = fVar12;
        *(float *)(iVar5 + 0x404) = fVar13;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        func_0041F5E4(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  else {
    bVar8 = true;
    do {
      if ((((uVar4 & 0xff) < (uint)*(byte *)(param_3 + 0xcd)) &&
          (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + (uVar4 & 0xff) * 8 + 4), iVar5 != 0)) &&
         ((*(uint *)(iVar5 + 0x78) & 3) != 0)) {
        if (bVar8) {
          puVar2 = (uint *)func_00401160(param_1,param_2,iVar5);
          puVar2 = (uint *)func_00403360(param_1,puVar2,iVar5);
          param_2 = func_00403444(param_1,puVar2,local_28,param_3,iVar5);
          bVar8 = false;
          iVar5 = extraout_r1;
        }
        else {
          uVar3 = *(byte *)(param_1 + 0x30) + 1;
          bVar6 = 0x16 < uVar3;
          bVar7 = uVar3 == 0x17;
          if (uVar3 < 0x18) {
            bVar6 = 0x1f < *(byte *)(param_1 + 0x31);
            bVar7 = *(byte *)(param_1 + 0x31) == 0x20;
          }
          if (((bVar6 && !bVar7) || (0x20 < *(byte *)(param_1 + 0x33) + 1)) &&
             (*(byte *)(param_1 + 0x30) != 0)) {
            param_2 = (uint *)func_00401D90(param_1,param_2);
          }
          param_2 = (uint *)func_00403360(param_1,param_2,iVar5);
          iVar5 = extraout_r1_00;
        }
        uVar3 = uVar4 & 0xff;
        bVar7 = uVar3 < 8;
        if (bVar7) {
          iVar5 = *(int *)(param_3 + 0xd0);
        }
        if (bVar7) {
          uVar3 = (uint)*(byte *)(iVar5 + uVar3 * 8);
        }
        if (!bVar7) {
          uVar3 = 0;
        }
        uVar3 = *(uint *)(DAT_00402f40 + (uVar4 & 0xff) * 4) | *(uint *)(DAT_00402f44 + uVar3 * 4);
        if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
          uVar3 = uVar3 | 0x40000000;
        }
        func_00401434(param_1,uVar3);
        fVar12 = local_b8[uVar4 * 4];
        fVar13 = local_b8[uVar4 * 4 + 1];
        fVar10 = local_b8[uVar4 * 4 + 2];
        fVar11 = local_b8[uVar4 * 4 + 3];
        iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
        uVar9 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3))
        ;
        *(undefined4 *)(param_1 + 0x600) = uVar9;
        cVar1 = *(char *)(param_1 + 0x33);
        *(float *)(iVar5 + 0x3f8) = fVar10;
        *(float *)(iVar5 + 0x3fc) = fVar11;
        *(float *)(iVar5 + 0x400) = fVar12;
        *(float *)(iVar5 + 0x404) = fVar13;
        *(char *)(param_1 + 0x33) = cVar1 + '\x01';
        func_0041F5E4(param_1);
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  return param_2;
}

