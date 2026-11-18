#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_00403360(int param_1,uint *param_2,int param_3);
extern int func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5);
extern int func_0041F5E4(int param_1);
extern uint *DAT_00403bc4;
extern uint *DAT_00403bc8;

// USA 00403A38 <- EU 00403A18 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 undefined4 *
// GLOBAL DAT_00403bc4 uint *
// GLOBAL DAT_00403bc8 uint *

uint * func_00403A38(int param_1,uint *param_2,int param_3,int *param_4,float *param_5,
                    undefined4 *param_6)

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
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  if (((*(char *)(param_3 + 0xcd) != '\0') &&
      (iVar7 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar7 != 0)) &&
     ((*(uint *)(iVar7 + 0x78) & 3) != 0)) {
    puVar4 = (uint *)func_00401160(param_1,param_2,iVar7);
    puVar4 = (uint *)func_00403360(param_1,puVar4,iVar7);
    puVar5 = func_00403444(param_1,puVar4,(int)param_4,param_3,iVar7);
    puVar3 = DAT_00403bc8;
    puVar4 = DAT_00403bc4;
    bVar1 = *(byte *)(param_3 + 0xce);
    uVar6 = *DAT_00403bc8 | *DAT_00403bc4;
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar8 = *param_5;
    fVar9 = param_5[1];
    uVar12 = *param_6;
    uVar10 = *(undefined4 *)(param_3 + 0x40);
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar14 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar14;
    cVar2 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar7 + 0x3f8) = uVar12;
    *(undefined4 *)(iVar7 + 0x3fc) = uVar10;
    *(float *)(iVar7 + 0x400) = fVar8;
    *(float *)(iVar7 + 0x404) = fVar9;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
    param_2 = (uint *)func_004030E4(param_1,puVar5,1,0,1,0);
    uVar6 = puVar3[1] | puVar4[1];
    if ((bVar1 & 1) == 0) {
      uVar6 = uVar6 | 0x40000000;
    }
    func_00401434(param_1,uVar6);
    fVar8 = *param_5;
    fVar13 = *(float *)(param_3 + 0x3c);
    fVar11 = ALBW_AS_F32(param_6[1]);
    uVar10 = *(undefined4 *)(param_3 + 0x40);
    fVar9 = param_5[1];
    iVar7 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar12 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar12;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar7 + 0x3f8) = fVar11;
    *(undefined4 *)(iVar7 + 0x3fc) = uVar10;
    *(float *)(iVar7 + 0x400) = (fVar8 + fVar13) - fVar11;
    *(float *)(iVar7 + 0x404) = fVar9;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    func_0041F5E4(param_1);
  }
  return param_2;
}

