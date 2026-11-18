#include "ghidra_types.h"

extern int func_00401498(int param_1,int param_2,undefined4 param_3);
extern int func_004030E4(int param_1,uint *param_2,int param_3,int param_4,int param_5,int param_6);
extern int func_00403154(int param_1,uint *param_2,int *param_3,int *param_4,float *param_5);
extern int func_00403534(int param_1,uint *param_2,int *param_3,int *param_4,float *param_5);
extern int func_00403A38(int param_1,uint *param_2,int param_3,int *param_4,float *param_5, undefined4 *param_6);
extern int func_00403BEC(int param_1,uint *param_2,int param_3,int *param_4,float *param_5, undefined4 *param_6);
extern float func_00568B68(int param_1);

// USA 00400748 <- EU 00400728 [EDITED REGION: check by hand] (Ghidra, non-matching)

uint * func_00400748(int param_1,uint *param_2,int param_3,int param_4)

{
  char cVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 (*(float *)(albw_frame + 0x0))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x4))
  #define fStack_28 (*(float *)(albw_frame + 0x8))
  #define fStack_24 (*(float *)(albw_frame + 0xc))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_1c (*(undefined4 *)(albw_frame + 0x14))
  puVar2 = (uint *)func_004030E4(param_1,param_2,1,0xe,7,1);
  uVar6 = *(undefined4 *)(param_3 + 0x48);
  uVar10 = *(undefined4 *)(param_3 + 0x4c);
  uVar9 = *(undefined4 *)(param_3 + 0x50);
  uVar8 = *(undefined4 *)(param_3 + 0x54);
  uVar7 = *(undefined4 *)(param_3 + 0x58);
  *(undefined1 *)(param_4 + 0xba) = 0;
  uVar5 = *(undefined4 *)(param_3 + 0x5c);
  *(undefined4 *)(param_4 + 0x74) = uVar6;
  uVar6 = *(undefined4 *)(param_3 + 0x60);
  *(undefined4 *)(param_4 + 0x78) = uVar10;
  uVar10 = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(param_4 + 0x7c) = uVar9;
  uVar9 = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_4 + 0x80) = uVar8;
  uVar8 = *(undefined4 *)(param_3 + 0x6c);
  *(undefined4 *)(param_4 + 0x84) = uVar7;
  uVar7 = *(undefined4 *)(param_3 + 0x70);
  uVar11 = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_4 + 0x90) = uVar10;
  *(undefined4 *)(param_4 + 0x94) = uVar9;
  *(undefined4 *)(param_4 + 0x98) = uVar8;
  *(undefined4 *)(param_4 + 0x9c) = uVar7;
  *(undefined4 *)(param_4 + 0xa0) = uVar11;
  *(undefined4 *)(param_4 + 0x88) = uVar5;
  *(undefined4 *)(param_4 + 0x8c) = uVar6;
  local_30 = func_00568B68(param_3);
  uStack_2c = uVar6;
  if ((*(byte *)(param_3 + 0xce) & 1) == 0) {
    uVar9 = *(undefined4 *)(param_4 + 0x78);
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
    uVar5 = *(undefined4 *)(param_4 + 0x80);
    uVar6 = *(undefined4 *)(param_4 + 0x84);
    uVar7 = *(undefined4 *)(param_4 + 0x88);
    uVar8 = *(undefined4 *)(param_4 + 0x7c);
    uVar10 = *(undefined4 *)(param_4 + 0x8c);
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
    uVar11 = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(iVar4 + 0x1fc) = uVar9;
    uVar9 = *(undefined4 *)(param_4 + 0x94);
    *(undefined4 *)(iVar4 + 0x200) = uVar8;
    uVar8 = *(undefined4 *)(param_4 + 0x98);
    *(undefined4 *)(iVar4 + 0x204) = uVar5;
    uVar5 = *(undefined4 *)(param_4 + 0x9c);
    uVar12 = *(undefined4 *)(param_4 + 0xa0);
    *(undefined4 *)(iVar4 + 0x218) = uVar9;
    *(undefined4 *)(iVar4 + 0x21c) = uVar8;
    *(undefined4 *)(iVar4 + 0x220) = uVar5;
    *(undefined4 *)(iVar4 + 0x224) = uVar12;
    *(undefined4 *)(iVar4 + 0x208) = uVar6;
    *(undefined4 *)(iVar4 + 0x20c) = uVar7;
    *(undefined4 *)(iVar4 + 0x210) = uVar10;
    *(undefined4 *)(iVar4 + 0x214) = uVar11;
    uVar5 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x5fc) = uVar5;
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
    func_00401498(param_1,0,(uint)*(byte *)(param_3 + 0x46));
  }
  else {
    uVar5 = *(undefined4 *)(param_3 + 0x40);
    iVar4 = param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10;
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_3 + 0x3c);
    *(undefined4 *)(iVar4 + 0x1fc) = uVar5;
    *(float *)(iVar4 + 0x200) = local_30;
    *(undefined4 *)(iVar4 + 0x204) = uVar6;
    bVar3 = *(char *)(param_1 + 0x31) + 1;
    *(byte *)(param_1 + 0x31) = bVar3;
    iVar4 = param_1 + (uint)bVar3 * 0x10;
    *(undefined4 *)(iVar4 + 0x1f8) = *(undefined4 *)(param_4 + 0x74);
    *(undefined4 *)(iVar4 + 0x1fc) = *(undefined4 *)(param_4 + 0x78);
    *(undefined4 *)(iVar4 + 0x200) = *(undefined4 *)(param_4 + 0x7c);
    *(undefined4 *)(iVar4 + 0x204) = *(undefined4 *)(param_4 + 0x80);
    *(undefined4 *)(iVar4 + 0x208) = *(undefined4 *)(param_4 + 0x84);
    *(undefined4 *)(iVar4 + 0x20c) = *(undefined4 *)(param_4 + 0x88);
    *(undefined4 *)(iVar4 + 0x210) = *(undefined4 *)(param_4 + 0x8c);
    *(undefined4 *)(iVar4 + 0x214) = *(undefined4 *)(param_4 + 0x90);
    *(undefined4 *)(iVar4 + 0x218) = *(undefined4 *)(param_4 + 0x94);
    *(undefined4 *)(iVar4 + 0x21c) = *(undefined4 *)(param_4 + 0x98);
    *(undefined4 *)(iVar4 + 0x220) = *(undefined4 *)(param_4 + 0x9c);
    *(undefined4 *)(iVar4 + 0x224) = *(undefined4 *)(param_4 + 0xa0);
    uVar5 = ALBW_AS_U32(VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
    *(undefined4 *)(param_1 + 0x5fc) = uVar5;
    *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x03';
    func_00401498(param_1,param_3 + 0xb4,(uint)*(byte *)(param_3 + 0x46));
  }
  cVar1 = *(char *)(param_3 + 0xcc);
  if (cVar1 == '\0') {
    puVar2 = (uint *)func_00403154(param_1,puVar2,(int *)param_3,(int *)param_4,&local_30);
  }
  else if (cVar1 == '\x01') {
    puVar2 = func_00403534(param_1,puVar2,(int *)param_3,(int *)param_4,&local_30);
  }
  else if (cVar1 == '\x02') {
    fStack_24 = (float)VectorUnsignedToFloat
                                 ((uint)*(ushort *)(param_3 + 0xae),(byte)(in_fpscr >> 0x15) & 3);
    uStack_20 = ALBW_AS_U32(VectorUnsignedToFloat
                          ((uint)*(ushort *)(param_3 + 0xb0),(byte)(in_fpscr >> 0x15) & 3));
    uStack_1c = ALBW_AS_U32(VectorUnsignedToFloat
                          ((uint)*(ushort *)(param_3 + 0xb2),(byte)(in_fpscr >> 0x15) & 3));
    fStack_28 = *(float *)(param_3 + 0x3c) - fStack_24;
    cVar1 = *(char *)(param_3 + 0xcd);
    if (cVar1 == '\x01') {
      puVar2 = func_00403A38(param_1,puVar2,param_3,(int *)param_4,&local_30,&fStack_28);
    }
    else if (cVar1 == '\x02' || cVar1 == '\x04') {
      puVar2 = func_00403BEC(param_1,puVar2,param_3,(int *)param_4,&local_30,&fStack_28);
    }
  }
  return puVar2;
}

