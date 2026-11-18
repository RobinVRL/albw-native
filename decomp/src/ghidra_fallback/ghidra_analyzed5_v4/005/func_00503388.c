#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_0023256C(int param_1,int param_2,uint param_3,uint param_4);
extern int func_00401160(int param_1,uint *param_2,int param_3);
extern int func_00401434(int param_1,uint param_2);
extern int func_00401498(int param_1,int param_2,undefined4 param_3);
extern int func_004018A8(int param_1,uint *param_2,int param_3);
extern int func_00401C98(int param_1,uint *param_2,int param_3,int param_4,int param_5,float param_6);
extern int func_00401D90(int param_1,uint *param_2);
extern int func_00403EA0(int param_1,undefined4 *param_2);
extern int func_00403F40(int param_1,undefined4 *param_2,undefined4 *param_3);
extern int func_0041F5E4(int param_1);
extern int func_00568A68(int *param_1);
extern float func_00568B68(int param_1);

// USA 00503388 <- EU 00503360 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 uint
// PARAM param_6 Stack[0x4]:4 int

uint * func_00503388(int param_1,uint *param_2,int *param_3,int *param_4,uint param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  _Alignas(8) unsigned char albw_frame[0xb0];
  #define local_a8 (*(undefined4 *)(albw_frame + 0x8))
  #define uStack_a4 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_a0 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_9c (*(undefined4 *)(albw_frame + 0x14))
  #define uStack_98 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_94 (*(undefined4 *)(albw_frame + 0x1c))
  #define uStack_90 (*(undefined4 *)(albw_frame + 0x20))
  #define uStack_8c (*(undefined4 *)(albw_frame + 0x24))
  #define local_88 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_84 (*(undefined4 *)(albw_frame + 0x2c))
  #define uStack_80 (*(undefined4 *)(albw_frame + 0x30))
  #define uStack_7c (*(undefined4 *)(albw_frame + 0x34))
  #define auStack_78 ((uint *)(albw_frame + 0x38))
  #define local_38 (*(float *)(albw_frame + 0x78))
  #define iStack_34 (*(int *)(albw_frame + 0x7c))
  ulonglong uVar12;
  
  if (((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31) + 8)) ||
     (0x20 < *(byte *)(param_1 + 0x33) + 7)) {
    if (*(byte *)(param_1 + 0x30) != 0) {
      param_2 = (uint *)func_00401D90(param_1,param_2);
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  iVar1 = func_00568A68(param_3);
  iVar3 = param_3[0x13];
  iVar6 = param_3[0x14];
  iVar8 = param_3[0x15];
  *(int *)(param_6 + 0x74) = param_3[0x12];
  iVar10 = param_3[0x16];
  *(int *)(param_6 + 0x78) = iVar3;
  iVar3 = param_3[0x17];
  *(int *)(param_6 + 0x7c) = iVar6;
  iVar6 = param_3[0x18];
  *(int *)(param_6 + 0x80) = iVar8;
  iVar9 = param_3[0x19];
  *(int *)(param_6 + 0x84) = iVar10;
  iVar8 = param_3[0x1a];
  *(int *)(param_6 + 0x88) = iVar3;
  iVar10 = param_3[0x1b];
  *(int *)(param_6 + 0x8c) = iVar6;
  iVar3 = param_3[0x1c];
  iVar6 = param_3[0x1d];
  *(int *)(param_6 + 0x90) = iVar9;
  *(int *)(param_6 + 0x94) = iVar8;
  *(int *)(param_6 + 0x98) = iVar10;
  *(int *)(param_6 + 0x9c) = iVar3;
  *(int *)(param_6 + 0xa0) = iVar6;
  *(undefined1 *)(param_6 + 0xba) = 0;
  func_00401434(param_1,0);
  puVar2 = (uint *)func_00401160(param_1,param_2,iVar1);
  puVar2 = func_004018A8(param_1,puVar2,iVar1);
  puVar2 = func_00401C98(param_1,puVar2,param_6,(int)param_3,iVar1,ALBW_AS_F32(param_3[0x2f]));
  func_00403EA0(param_1,(undefined4 *)(param_6 + 0x74));
  local_38 = func_00568B68((int)param_3);
  iStack_34 = iVar9;
  func_00403F40(param_1,param_3 + 0xf,&local_38);
  func_00401498(param_1,(int)(param_3 + 0x2a),(uint)*(byte *)((int)param_3 + 0x46));
  fVar11 = *(float *)(param_1 + 0x608);
  uVar12 = (ulonglong)(uint)ALBW_AS_U32(fVar11);
  if (0x3f800000 < (int)ALBW_AS_U32(fVar11)) {
    func_0010E3C4(auStack_78,(uint *)(param_1 + (int)fVar11 * 0x10 + 0x1f8),0x40);
  }
  func_0041F5E4(param_1);
  iVar1 = param_4[1];
  uVar5 = 0;
  if (0 < iVar1) {
    do {
      local_a8 = *(undefined4 *)(param_6 + 0x74);
      uStack_a4 = *(undefined4 *)(param_6 + 0x78);
      uStack_a0 = *(undefined4 *)(param_6 + 0x7c);
      uStack_9c = *(undefined4 *)(param_6 + 0x80);
      uStack_98 = *(undefined4 *)(param_6 + 0x84);
      uStack_94 = *(undefined4 *)(param_6 + 0x88);
      uStack_90 = *(undefined4 *)(param_6 + 0x8c);
      uStack_8c = *(undefined4 *)(param_6 + 0x90);
      local_88 = *(undefined4 *)(param_6 + 0x94);
      uStack_84 = *(undefined4 *)(param_6 + 0x98);
      uStack_80 = *(undefined4 *)(param_6 + 0x9c);
      uStack_7c = *(undefined4 *)(param_6 + 0xa0);
      iVar3 = func_0023256C((int)param_4,(int)&local_a8,uVar5,param_5);
      if (iVar3 != 0) {
        if (*(byte *)(param_1 + 0x30) + 1 < 0x18) {
          uVar4 = *(byte *)(param_1 + 0x31) + 7;
          if (uVar4 < 0x21) {
            uVar4 = (uint)*(byte *)(param_1 + 0x33);
          }
          if (0x20 < uVar4) goto LAB_0050357c;
        }
        else {
LAB_0050357c:
          if (*(byte *)(param_1 + 0x30) != 0) {
            puVar2 = (uint *)func_00401D90(param_1,puVar2);
          }
          *(undefined1 *)(param_1 + 0x31) = 0;
          *(undefined1 *)(param_1 + 0x32) = 0;
        }
        func_00403EA0(param_1,&local_a8);
        if ((int)uVar12 < 0x3f800001) {
          *(int *)(param_1 + 0x608) = (int)uVar12;
        }
        else {
          uVar7 = ALBW_AS_U32(VectorUnsignedToFloat
                            ((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x15) & 3));
          *(undefined4 *)(param_1 + 0x608) = uVar7;
          func_0010E3C4((uint *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1f8),
                        auStack_78,0x40);
          *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x04';
        }
        func_0041F5E4(param_1);
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < iVar1);
  }
  return puVar2;
}

