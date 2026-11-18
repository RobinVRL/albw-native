#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0014E2A0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004356B4(int *param_1);
extern int func_004CEAF0(int param_1);
extern uint DAT_0050a920;
extern int *DAT_0050a924;
extern float DAT_0050a928;
extern int *DAT_0050a92c;
extern float *DAT_0050a930;

// GLOBAL DAT_0050a920 uint
// GLOBAL DAT_0050a924 int *
// GLOBAL DAT_0050a928 float
// GLOBAL DAT_0050a92c int *
// GLOBAL DAT_0050a930 float *
// USA 0050A74C <- EU 0050A728 (Ghidra, function missing from the decomp table)

undefined4 func_0050A74C(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  int iVar4;
  int *piVar5;
  uint in_fpscr;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_40 (*(float *)(albw_frame + 0x0))
  #define fStack_3c (*(float *)(albw_frame + 0x4))
  #define iStack_38 (*(int *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define iStack_30 (*(int *)(albw_frame + 0x10))
  #define iStack_2c (*(int *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define iStack_24 (*(int *)(albw_frame + 0x1c))
  #define iStack_20 (*(int *)(albw_frame + 0x20))
  func_0014E2A0(param_1,*(undefined4 *)(param_1 + 0x448),param_1 + 0x46c,DAT_0050a920,0,0);
  piVar3 = (int *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x434) + *(char *)(param_1 + 0x41c) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x42c) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x418) + 1;
  *(int *)(param_1 + 0x418) = iVar2;
  if (*(int *)(param_1 + 0x428) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x428),1,fparam_0);
  }
  piVar3 = DAT_0050a924;
  piVar5 = *(int **)(param_1 + 0x444);
  iVar2 = *(int *)(param_1 + 0x458);
  iVar4 = DAT_0050a924[2];
  piVar5[0x16] = *DAT_0050a924;
  piVar5[0x17] = iVar2;
  piVar5[0x18] = iVar4;
  if (*(short *)(param_1 + 0x2c) == 1) {
    func_00115D70(&fStack_28,DAT_0050a930,DAT_0050a930[-2] / ALBW_AS_F32(piVar3[1]));
    fStack_34 = fStack_28;
    iStack_30 = iStack_24;
    iStack_2c = iStack_20;
  }
  else {
    fStack_34 = ALBW_AS_F32(piVar3[9]);
    iStack_30 = piVar3[10];
    iStack_2c = piVar3[0xb];
  }
  func_00115C54(&fStack_40,(float *)(param_1 + 0x3d0),&fStack_34);
  fStack_3c = fStack_3c + *(float *)(param_1 + 0x458) * DAT_0050a928;
  piVar5[1] = (int)ALBW_AS_U32(fStack_40);
  piVar5[2] = (int)ALBW_AS_U32(fStack_3c);
  piVar5[3] = iStack_38;
  func_004356B4(piVar5);
  piVar3 = DAT_0050a92c;
  piVar5 = *(int **)(param_1 + 0x448);
  iVar2 = *(int *)(param_1 + 0x458);
  iVar4 = DAT_0050a92c[2];
  piVar5[0x16] = *DAT_0050a92c;
  piVar5[0x17] = iVar2;
  piVar5[0x18] = iVar4;
  piVar5[1] = (int)ALBW_AS_U32(fStack_40);
  piVar5[2] = (int)ALBW_AS_U32(fStack_3c);
  piVar5[3] = iStack_38;
  func_004356B4(piVar5);
  if (*(char *)(*(int *)(param_1 + 0x40c) + 0x30) != '\0') {
    func_00169A80(*(int **)(param_1 + 0x414),extraout_r1,iStack_38,piVar3);
    func_00168E9C(*(int **)(param_1 + 0x414),*(int *)(param_1 + 0x40c),(int *)0x0);
  }
  iVar2 = *(int *)(param_1 + 0x40c);
  *(uint *)(iVar2 + 0x164) = *(uint *)(iVar2 + 0x164) | 0x40000000;
  *(undefined4 *)(iVar2 + 0x78) = *(undefined4 *)(param_1 + 0x45c);
  return func_004CEAF0(*(int *)(param_1 + 0x40c));
}

