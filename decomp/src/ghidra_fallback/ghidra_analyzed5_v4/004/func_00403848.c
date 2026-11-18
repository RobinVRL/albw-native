#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_00403360(int param_1,uint *param_2,int param_3);
extern int func_00403444(int param_1,uint *param_2,int param_3,int param_4,int param_5);
extern int func_0041F5E4(int param_1);
extern uint *DAT_00403a10;
extern int DAT_00403a14;

// USA 00403848 <- EU 00403828 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 float *
// PARAM param_6 Stack[0x4]:4 undefined4 *
// GLOBAL DAT_00403a10 uint *
// GLOBAL DAT_00403a14 int

uint * func_00403848(int param_1,uint *param_2,int param_3,int *param_4,float *param_5,
                    undefined4 *param_6)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  undefined4 uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  
  if ((*(char *)(param_3 + 0xcd) != '\0') &&
     (iVar8 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar8 != 0)) {
    puVar2 = (uint *)func_00401160(param_1,param_2,iVar8);
    puVar2 = (uint *)func_00403360(param_1,puVar2,iVar8);
    puVar3 = func_00403444(param_1,puVar2,(int)param_4,param_3,iVar8);
    iVar8 = DAT_00403a14;
    puVar2 = DAT_00403a10;
    uVar5 = *DAT_00403a10 | *(uint *)(DAT_00403a14 + (uint)**(byte **)(param_3 + 0xd0) * 4);
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar5 = uVar5 | 0x40000000;
    }
    func_00401434(param_1,uVar5);
    fVar6 = *param_5;
    uVar7 = *param_6;
    fVar9 = param_5[1];
    uVar10 = *(undefined4 *)(param_3 + 0x40);
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar12 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar12;
    cVar1 = *(char *)(param_1 + 0x33);
    *(undefined4 *)(iVar4 + 0x3f8) = uVar7;
    *(undefined4 *)(iVar4 + 0x3fc) = uVar10;
    *(float *)(iVar4 + 0x400) = fVar6;
    *(float *)(iVar4 + 0x404) = fVar9;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    func_0041F5E4(param_1);
    if ((*(byte *)(param_3 + 0xcd) < 2) ||
       (iVar4 = *(int *)(*(int *)(param_3 + 0xd0) + 0xc), iVar4 == 0)) {
      return puVar3;
    }
    puVar3 = (uint *)func_004030E4(param_1,puVar3,1,0,1,0);
    param_2 = (uint *)func_00403360(param_1,puVar3,iVar4);
    uVar5 = puVar2[1] | *(uint *)(iVar8 + (uint)*(byte *)(*(int *)(param_3 + 0xd0) + 8) * 4);
    if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
      uVar5 = uVar5 | 0x40000000;
    }
    func_00401434(param_1,uVar5);
    fVar9 = *param_5;
    fVar13 = *(float *)(param_3 + 0x3c);
    fVar11 = ALBW_AS_F32(param_6[1]);
    fVar6 = param_5[1];
    uVar7 = *(undefined4 *)(param_3 + 0x40);
    iVar8 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar10 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x600) = uVar10;
    cVar1 = *(char *)(param_1 + 0x33);
    *(float *)(iVar8 + 0x3f8) = fVar11;
    *(undefined4 *)(iVar8 + 0x3fc) = uVar7;
    *(float *)(iVar8 + 0x400) = (fVar9 + fVar13) - fVar11;
    *(float *)(iVar8 + 0x404) = fVar6;
    *(char *)(param_1 + 0x33) = cVar1 + '\x01';
    func_0041F5E4(param_1);
  }
  return param_2;
}

