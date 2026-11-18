#include "ghidra_types.h"

extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_00401498(int param_1,int param_2,undefined4 param_3);
extern int func_004018A8(int param_1,uint *param_2,int param_3);
extern int func_00401C98(int param_1,uint *param_2,int param_3,int param_4,int param_5,float param_6);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_0041F5E4(int param_1);
extern int func_00568A68(int *param_1);
extern float func_00568B68(int param_1);

// USA 00400AB4 <- EU 00400A94 (Ghidra, non-matching)

uint * func_00400AB4(int param_1,uint *param_2,int *param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint in_fpscr;
  int iVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  
  puVar2 = (uint *)func_004030E4(param_1,param_2,1,8,7,1);
  iVar3 = func_00568A68(param_3);
  iVar7 = param_3[0x15];
  iVar10 = param_3[0x13];
  iVar12 = param_3[0x14];
  *(int *)(param_4 + 0x74) = param_3[0x12];
  iVar9 = param_3[0x16];
  *(int *)(param_4 + 0x78) = iVar10;
  iVar10 = param_3[0x17];
  *(int *)(param_4 + 0x7c) = iVar12;
  iVar12 = param_3[0x18];
  *(int *)(param_4 + 0x80) = iVar7;
  iVar7 = param_3[0x19];
  *(int *)(param_4 + 0x84) = iVar9;
  iVar9 = param_3[0x1a];
  *(int *)(param_4 + 0x88) = iVar10;
  iVar10 = param_3[0x1b];
  *(int *)(param_4 + 0x8c) = iVar12;
  iVar12 = param_3[0x1c];
  iVar13 = param_3[0x1d];
  *(int *)(param_4 + 0x90) = iVar7;
  *(int *)(param_4 + 0x94) = iVar9;
  *(int *)(param_4 + 0x98) = iVar10;
  *(int *)(param_4 + 0x9c) = iVar12;
  *(int *)(param_4 + 0xa0) = iVar13;
  *(undefined1 *)(param_4 + 0xba) = 0;
  func_00401434(param_1,0);
  puVar2 = (uint *)func_00401160(param_1,puVar2,iVar3);
  puVar2 = func_004018A8(param_1,puVar2,iVar3);
  puVar2 = func_00401C98(param_1,puVar2,param_4,(int)param_3,iVar3,ALBW_AS_F32(param_3[0x2f]));
  uVar4 = *(undefined4 *)(param_4 + 0x78);
  uVar5 = *(undefined4 *)(param_4 + 0x7c);
  iVar3 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
  *(undefined4 *)(iVar3 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
  uVar6 = *(undefined4 *)(param_4 + 0x80);
  *(undefined4 *)(iVar3 + 0x1fc) = uVar4;
  uVar4 = *(undefined4 *)(param_4 + 0x84);
  *(undefined4 *)(iVar3 + 0x200) = uVar5;
  uVar5 = *(undefined4 *)(param_4 + 0x88);
  *(undefined4 *)(iVar3 + 0x204) = uVar6;
  uVar6 = *(undefined4 *)(param_4 + 0x8c);
  *(undefined4 *)(iVar3 + 0x208) = uVar4;
  uVar11 = *(undefined4 *)(param_4 + 0x90);
  *(undefined4 *)(iVar3 + 0x20c) = uVar5;
  uVar4 = *(undefined4 *)(param_4 + 0x94);
  *(undefined4 *)(iVar3 + 0x210) = uVar6;
  uVar5 = *(undefined4 *)(param_4 + 0x98);
  *(undefined4 *)(iVar3 + 0x214) = uVar11;
  uVar6 = *(undefined4 *)(param_4 + 0x9c);
  uVar11 = *(undefined4 *)(param_4 + 0xa0);
  *(undefined4 *)(iVar3 + 0x218) = uVar4;
  *(undefined4 *)(iVar3 + 0x21c) = uVar5;
  *(undefined4 *)(iVar3 + 0x220) = uVar6;
  *(undefined4 *)(iVar3 + 0x224) = uVar11;
  uVar4 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x5fc) = uVar4;
  *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
  fVar8 = func_00568B68((int)param_3);
  iVar3 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
  uVar4 = ALBW_AS_U32(VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x15) & 3));
  *(undefined4 *)(param_1 + 0x600) = uVar4;
  cVar1 = *(char *)(param_1 + 0x33);
  iVar7 = param_3[0xf];
  iVar9 = param_3[0x10];
  *(float *)(iVar3 + 0x400) = fVar8;
  *(undefined4 *)(iVar3 + 0x404) = uVar5;
  *(int *)(iVar3 + 0x3f8) = iVar7;
  *(int *)(iVar3 + 0x3fc) = iVar9;
  *(char *)(param_1 + 0x33) = cVar1 + '\x01';
  func_00401498(param_1,(int)(param_3 + 0x2a),(uint)*(byte *)((int)param_3 + 0x46));
  func_0041F5E4(param_1);
  return puVar2;
}

