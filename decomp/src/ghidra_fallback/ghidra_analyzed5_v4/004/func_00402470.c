#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_00403360(int param_1,uint *param_2,int param_3);
extern int func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5);
extern int func_0041F5E4(int param_1);
extern uint *DAT_00402774;
extern uint *DAT_00402778;

// USA 00402470 <- EU 00402450 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 float *
// GLOBAL DAT_00402774 uint *
// GLOBAL DAT_00402778 uint *

uint * func_00402470(int param_1,uint *param_2,int param_3,int *param_4,float *param_5,
                    float *param_6)

{
  byte bVar1;
  char cVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  
  if (((*(char *)(param_3 + 0xcd) != '\0') &&
      (iVar7 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar7 != 0)) &&
     ((*(uint *)(iVar7 + 0x78) & 3) != 0)) {
    puVar3 = (uint *)func_00401160(param_1,param_2,iVar7);
    puVar3 = (uint *)func_00403360(param_1,puVar3,iVar7);
    puVar3 = func_00403444(param_1,puVar3,(int)param_4,param_3,iVar7);
    bVar1 = *(byte *)(param_3 + 0xce);
    uVar6 = *DAT_00402774 | *DAT_00402778;
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar8 = *(float *)(param_3 + 0x3c);
    fVar10 = param_6[1];
    fVar9 = *param_5;
    fVar11 = param_5[1];
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    fVar12 = param_6[2];
    uVar15 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar15;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar7 + 0x3f8) = fVar8 - fVar10;
    *(float *)(iVar7 + 0x3fc) = fVar12;
    *(float *)(iVar7 + 0x400) = fVar9;
    *(float *)(iVar7 + 0x404) = fVar11;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
    puVar4 = (uint *)func_004030E4(param_1,puVar3,1,0,1,0);
    puVar3 = DAT_00402778;
    uVar6 = DAT_00402778[1] | DAT_00402774[1];
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar10 = *param_5;
    fVar12 = *(float *)(param_3 + 0x3c);
    fVar8 = param_6[1];
    fVar13 = param_6[3];
    fVar9 = param_5[1];
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar15 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    fVar11 = *(float *)(param_3 + 0x40);
    fVar14 = param_6[1];
    *(undefined4 *)(param_1 + 0x600) = uVar15;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar7 + 0x3f8) = fVar14;
    *(float *)(iVar7 + 0x3fc) = fVar11 - fVar13;
    *(float *)(iVar7 + 0x400) = (fVar10 + fVar12) - fVar8;
    *(float *)(iVar7 + 0x404) = fVar9;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
    puVar5 = (uint *)func_004030E4(param_1,puVar4,1,0,1,0);
    puVar4 = DAT_00402774;
    uVar6 = puVar3[4] | DAT_00402774[3];
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar13 = param_5[1];
    fVar16 = *(float *)(param_3 + 0x40);
    fVar9 = *param_5;
    fVar11 = *param_6;
    fVar10 = param_6[3];
    fVar12 = *(float *)(param_3 + 0x3c);
    fVar8 = param_6[3];
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    fVar14 = *param_6;
    uVar15 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar15;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar7 + 0x3f8) = fVar12 - fVar14;
    *(float *)(iVar7 + 0x3fc) = fVar8;
    *(float *)(iVar7 + 0x400) = fVar9 + fVar11;
    *(float *)(iVar7 + 0x404) = (fVar13 - fVar16) + fVar10;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
    param_2 = (uint *)func_004030E4(param_1,puVar5,1,0,1,0);
    uVar6 = puVar3[2] | puVar4[2];
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar8 = param_5[1];
    fVar10 = param_6[2];
    fVar11 = *(float *)(param_3 + 0x40);
    fVar12 = param_6[2];
    fVar9 = *param_5;
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar15 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    fVar13 = *param_6;
    *(undefined4 *)(param_1 + 0x600) = uVar15;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar7 + 0x3f8) = fVar13;
    *(float *)(iVar7 + 0x3fc) = fVar11 - fVar12;
    *(float *)(iVar7 + 0x400) = fVar9;
    *(float *)(iVar7 + 0x404) = fVar8 - fVar10;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
  }
  return param_2;
}

