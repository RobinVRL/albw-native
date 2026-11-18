#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_00166C20(int *param_1,uint param_2,int *param_3,int param_4);
extern int func_0016773C(int param_1,int param_2);
extern int func_00168100(int *param_1,int *param_2,int *param_3);
extern int func_00168434(undefined4 *param_1);
extern int func_005229AC(int *param_1,int *param_2);
extern undefined4 DAT_0031b314;
extern int DAT_0031b318;
extern undefined4 DAT_0031b31c;
extern undefined4 DAT_0031b320;

// USA 0031B220 <- EU 0031B1FC (Ghidra, non-matching)
// GLOBAL DAT_0031b314 undefined4
// GLOBAL DAT_0031b318 int
// GLOBAL DAT_0031b31c undefined4
// GLOBAL DAT_0031b320 undefined4

void func_0031B220(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x2c) == 0) {
    puVar2 = (undefined4 *)func_0010BAB4(0x74);
    if (puVar2 == (undefined4 *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = func_00168434(puVar2);
    }
    func_00168100(piVar5,param_2,param_3);
    *(int **)(param_1 + 0x2c) = piVar5;
    *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
    func_0016773C((int)piVar5,2);
    iVar1 = DAT_0031b318;
    local_1c = DAT_0031b314;
    local_20 = DAT_0031b318;
    func_00166C20(piVar5,0,&local_20,0);
    local_1c = DAT_0031b31c;
    local_20 = iVar1;
    func_00166C20(piVar5,1,&local_20,0);
    *(int **)(param_1 + 0x44) = piVar5;
    *(undefined2 *)(param_1 + 0x3e) = 0;
    *(undefined2 *)(param_1 + 0x3c) = 0;
    *(int **)(param_1 + 0x38) = piVar5;
    *(undefined2 *)(param_1 + 0x32) = 1;
    *(undefined2 *)(param_1 + 0x30) = 5;
    iVar3 = piVar5[3];
    if (1 < (uint)piVar5[2]) {
      iVar3 = iVar3 + 0x38;
    }
    *(undefined1 *)(iVar3 + 0x28) = 1;
    local_20 = iVar1;
    local_1c = DAT_0031b320;
    uVar4 = func_005229AC(piVar5,&local_20);
    *(undefined4 *)(param_1 + 0x48) = uVar4;
    *(byte *)(piVar5 + 0x1c) = *(byte *)(piVar5 + 0x1c) | 8;
  }
  return;
}

