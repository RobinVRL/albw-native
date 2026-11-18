#include "ghidra_types.h"

extern int func_004112FC(int param_1,undefined4 param_2);
extern int func_00411E2C(int *param_1,int *param_2,uint param_3,int *param_4);
extern int func_004121F8(int *param_1,uint param_2,int *param_3,int *param_4,int *param_5);
extern int func_00413060(int param_1);
extern int func_0041308C(undefined4 *param_1);
extern int func_004130D0(int *param_1);
extern int func_00413D54(int *param_1,uint param_2,int param_3,int *param_4);
extern int func_0056C424(int *param_1,uint param_2);

// USA 004189C8 <- EU 004189A8 (Ghidra, non-matching)

undefined4 func_004189C8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x280];
  #define aiStack_27c ((int *)(albw_frame + 0x4))
  #define aiStack_270 ((int *)(albw_frame + 0x10))
  func_0041308C(aiStack_27c);
  func_004112FC((int)aiStack_27c,*(undefined4 *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x2c) == 0) && (uVar4 = *(uint *)(param_1 + 0x28), uVar4 != 0xffffffff)) {
    iVar1 = func_004121F8(aiStack_270,uVar4,*(int **)(param_1 + 0x3c),(int *)0x2,(int *)0x0);
    if (iVar1 == 0) goto LAB_00418aa8;
    uVar2 = func_0056C424(aiStack_270,uVar4);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)(*(int *)(param_1 + 0x20) + 0xc);
  }
  iVar1 = func_00413D54(*(int **)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),*(int *)(param_1 + 0x1c)
                        ,piVar3);
  if (iVar1 == 0) {
    iVar1 = func_00411E2C(aiStack_270,*(int **)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),
                          *(int **)(param_1 + 0x3c));
    if (iVar1 == 0) {
LAB_00418aa8:
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x18) = 2;
      *(undefined1 *)(param_1 + 0x40) = 0;
      return func_004130D0(aiStack_27c);
    }
    iVar1 = func_00413D54(*(int **)(param_1 + 0x2c),*(uint *)(param_1 + 0x30),
                          *(int *)(param_1 + 0x1c),aiStack_270);
  }
  *(int *)(param_1 + 0x38) = iVar1;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x18) = 2;
  func_00413060((int)aiStack_27c);
  *(undefined1 *)(param_1 + 0x40) = 1;
  return func_004130D0(aiStack_27c);
}

