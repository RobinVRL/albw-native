#include "ghidra_types.h"

extern int func_00407A24(int *param_1);
extern int func_0040D930(int *param_1,int param_2);
extern int func_0040D9FC(int *param_1,int param_2);
extern int func_00412A3C(int *param_1,uint param_2);
extern int func_00412BB4(void);
extern int func_00412C68(int param_1,undefined4 *param_2);

// USA 0040E028 <- EU 0040E008 (Ghidra, non-matching)

void func_0040E028(int *param_1,undefined4 param_2,int *param_3,undefined *param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  if ((*(byte *)((int)param_1 + 0x9b) != 0) && (*(byte *)((int)param_1 + 0x9b) < 2)) {
    param_1[0x2b] = -1;
    if ((int *)param_1[2] != (int *)0x0) {
      func_00407A24((int *)param_1[2]);
    }
    if ((int *)param_1[3] != (int *)0x0) {
      func_00407A24((int *)param_1[3]);
    }
    iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    if (iVar1 != 0) {
      (**(code **)(*param_1 + 0x1c))(param_1);
    }
    if ((int *)param_1[4] != (int *)0x0) {
      func_0040D930((int *)param_1[4],(int)param_1);
    }
    if ((int *)param_1[6] != (int *)0x0) {
      func_0040D9FC((int *)param_1[6],(int)param_1);
    }
    piVar2 = (int *)param_1[9];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0xc))(piVar2,param_1[10],param_1);
      param_1[10] = 0;
    }
    if (*(char *)((int)param_1 + 0x95) != '\0') {
      piVar2 = (int *)func_00412BB4();
      puVar3 = (undefined4 *)func_00412A3C(piVar2,6);
      puVar3[3] = piVar2[0x61];
      *(undefined1 *)(puVar3 + 1) = 6;
      uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
      puVar3[4] = uVar4;
      *(undefined1 *)(puVar3 + 5) = *(undefined1 *)((int)param_1 + 0x97);
      func_00412C68((int)piVar2,puVar3);
      *(undefined1 *)((int)param_1 + 0x95) = 0;
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
    *(undefined1 *)(param_1 + 0x27) = 2;
    piVar2 = (int *)func_00412BB4();
    puVar3 = (undefined4 *)func_00412A3C(piVar2,6);
    puVar3[3] = piVar2[0x61];
    *(undefined1 *)(puVar3 + 1) = 4;
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1);
    puVar3[4] = uVar4;
    func_00412C68((int)piVar2,puVar3);
    if ((code *)param_1[0x3c] != (code *)0x0) {
      (*(code *)param_1[0x3c])();
      param_1[0x3c] = 0;
    }
    *(undefined1 *)((int)param_1 + 0x97) = 0;
    *(undefined1 *)((int)param_1 + 0x9b) = 2;
  }
  return;
}

