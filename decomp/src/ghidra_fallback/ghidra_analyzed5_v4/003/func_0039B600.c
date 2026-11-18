#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_00491338(float *param_1,uint param_2,uint param_3,uint param_4);
extern int func_004CEAF0(int param_1);
extern int func_004CF478(int param_1,int param_2);
extern void func_004D7E0C(float *param_1,uint param_2,uint param_3);
extern int func_004D7EB0(float *param_1,uint param_2,uint param_3,float *param_4);
extern undefined4 DAT_0039b788;
extern undefined4 DAT_0039b78c;
extern float DAT_0039b790;
extern undefined4 DAT_0039b794;
extern undefined4 DAT_0039b798;

// USA 0039B600 <- EU 0039B5DC (Ghidra, non-matching)
// GLOBAL DAT_0039b788 undefined4
// GLOBAL DAT_0039b78c undefined4
// GLOBAL DAT_0039b790 float
// GLOBAL DAT_0039b794 undefined4
// GLOBAL DAT_0039b798 undefined4

undefined4 func_0039B600(int param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define uStack_3c (*(undefined4 *)(albw_frame + 0x4))
  #define uStack_38 (*(undefined4 *)(albw_frame + 0x8))
  #define afStack_34 ((float *)(albw_frame + 0xc))
  piVar6 = (int *)(*(char *)(param_1 + 0x410) * 8 + 4);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x428) + (int)piVar6);
  pcVar3 = *(code **)(*(int *)(param_1 + 0x428) + *(char *)(param_1 + 0x410) * 8);
  if ((uVar1 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(param_1 + 0x420) + ((int)uVar1 >> 1)));
  }
  (*pcVar3)((int)(*(int *)(param_1 + 0x420)) + ((int)uVar1 >> 1));
  iVar5 = *(int *)(param_1 + 0x41c);
  iVar2 = *(int *)(param_1 + 0x40c) + 1;
  *(int *)(param_1 + 0x40c) = iVar2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(iVar5,1,fparam_0);
    uVar4 = extraout_r1_00;
  }
  func_00169A80(*(int **)(param_1 + 0x480),uVar4,iVar5,piVar6);
  func_00168E9C(*(int **)(param_1 + 0x480),*(int *)(param_1 + 0x430),(int *)0x0);
  iVar2 = *(int *)(param_1 + 0x430);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  func_004D7EB0((float *)(iVar2 + 0x80),*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000),
                (float *)(param_1 + 0x3d0));
  func_004CEAF0(*(int *)(param_1 + 0x430));
  if (*(char *)(param_1 + 0x410) != '\0') {
    return func_004CF478(*(int *)(param_1 + 0x430),0);
  }
  func_004CF478(*(int *)(param_1 + 0x430),1);
  piVar6 = (int *)(param_1 + 0x47c);
  func_00491338((float *)(*(int *)(param_1 + 0x47c) + 100),*(uint *)(param_1 + 0x20),
                *(uint *)(param_1 + 1000),0);
  uStack_38 = DAT_0039b798;
  uVar4 = DAT_0039b788;
  iVar2 = *piVar6;
  *(undefined4 *)(iVar2 + 0x58) = DAT_0039b78c;
  *(undefined4 *)(iVar2 + 0x5c) = uVar4;
  *(undefined4 *)(iVar2 + 0x60) = uVar4;
  fStack_40 = DAT_0039b790;
  uStack_3c = DAT_0039b794;
  func_004D7E0C(afStack_34,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 1000));
  func_00115CE4(&fStack_40,afStack_34,&fStack_40);
  func_00115C54(&fStack_40,&fStack_40,(float *)(param_1 + 0x3d0));
  iVar2 = *piVar6;
  *(float *)(iVar2 + 4) = fStack_40;
  *(undefined4 *)(iVar2 + 8) = uStack_3c;
  *(undefined4 *)(iVar2 + 0xc) = uStack_38;
  return func_004356B4((int *)*piVar6);
}

