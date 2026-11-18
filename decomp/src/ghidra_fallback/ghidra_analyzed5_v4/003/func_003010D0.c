#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_001511F0(int *param_1);
extern int func_001512B4(int param_1,float *param_2);
extern int func_0015133C(int param_1,undefined4 *param_2);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_00491938(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_00521380(int param_1);

// USA 003010D0 <- EU 003010AC (Ghidra, non-matching)

void func_003010D0(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define afStack_38 ((float *)(albw_frame + 0x8))
  iVar3 = *(int *)(param_2 + 0x10);
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  func_00491938((float *)(iVar3 + 0x80),0,*(uint *)(param_2 + 4),0);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(iVar3 + 0x74) = uVar1;
  *(undefined4 *)(iVar3 + 0x78) = uVar1;
  *(undefined4 *)(iVar3 + 0x7c) = uVar1;
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(iVar3 + 0x9c) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(iVar3 + 0xac) = *(undefined4 *)(param_2 + 0x2c);
  func_004CEAF0(iVar3);
  piVar2 = *(int **)(param_2 + 0x18);
  piVar2[1] = *(int *)(param_2 + 0x24);
  piVar2[2] = *(int *)(param_2 + 0x28);
  piVar2[3] = *(int *)(param_2 + 0x2c);
  piVar2[0x16] = (int)ALBW_AS_U32((*(float *)(param_1 + 0x624) * *(float *)(param_2 + 0xc)));
  func_004356B4(piVar2);
  *(undefined4 *)(param_2 + 0x30) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_2 + 0x34) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_2 + 0x38) = *(undefined4 *)(param_2 + 0x2c);
  func_00115C54((float *)(param_2 + 0x24),(float *)(param_2 + 0x24),(float *)(param_2 + 0x3c));
  iVar3 = func_00521380(*(int *)(param_2 + 0x14));
  if (iVar3 != 0) {
    func_001512B4(*(int *)(param_2 + 0x14),(float *)(param_2 + 0x24));
    func_001511F0(*(int **)(param_2 + 0x14));
    func_00491338(afStack_38,0,*(uint *)(param_2 + 4),0);
    func_0015133C(*(int *)(param_2 + 0x14),afStack_38);
  }
  return;
}

