#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_0043625C(int *param_1,undefined4 *param_2);
extern int func_004ED9C8(int param_1);
extern float DAT_00138f18;
extern float DAT_00138f1c;

// USA 00138DDC <- EU 00138DDC (Ghidra, non-matching)
// GLOBAL DAT_00138f18 float
// GLOBAL DAT_00138f1c float

void func_00138DDC(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define fStack_1c (*(float *)(albw_frame + 0x24))
  #define local_18 (*(float *)(albw_frame + 0x28))
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8 + 4);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar1 >> 1));
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  if (*(int *)(param_1 + 0x41c) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x41c),1,fparam_0);
  }
  if (*(int *)(param_1 + 0x438) != 0) {
    fStack_1c = *(float *)(*(int *)(param_1 + 0x438) + 0x5c) * DAT_00138f18;
    local_20 = DAT_00138f1c;
    local_18 = DAT_00138f1c;
    iVar2 = *(int *)(param_1 + 0x438);
    func_00115C54(&local_34,(float *)(param_1 + 0x3d0),&local_20);
    *(float *)(iVar2 + 4) = local_34;
    *(undefined4 *)(iVar2 + 8) = uStack_30;
    *(undefined4 *)(iVar2 + 0xc) = uStack_2c;
    func_004356B4(*(int **)(param_1 + 0x438));
  }
  if (*(int *)(param_1 + 0x434) != 0) {
    func_0043625C(*(int **)(*(int *)(param_1 + 0x434) + 0x14),(undefined4 *)(param_1 + 0x3d0));
    func_004ED9C8(*(int *)(param_1 + 0x434));
  }
  iVar2 = *(int *)(param_1 + 0x430);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
    *(undefined4 *)(iVar2 + 0x74) = *(undefined4 *)(param_1 + 0x450);
    *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x454);
    *(undefined4 *)(iVar2 + 0x7c) = *(undefined4 *)(param_1 + 0x458);
  }
  return;
}

