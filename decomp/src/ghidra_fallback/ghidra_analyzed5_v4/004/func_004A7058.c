#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_0040E1BC(int param_1,undefined4 param_2,float fparam_0);
extern int func_004A71C4(int param_1);
extern int func_0057D86C(int *param_1);

// USA 004A7058 <- EU 004A7030 (Ghidra, non-matching)

undefined4 func_004A7058(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define local_c (*(int *)(albw_frame + 0x14))
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar2 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x10))();
    *(int **)(param_1 + 0x20) = piVar2;
  }
  else {
    func_00110DDC((undefined4 *)(param_1 + 0x44),0);
    piVar2 = *(int **)(param_1 + 0x20);
  }
  if (piVar2 != (int *)0x0) {
    param_3 = *(int *)(param_1 + 0x14);
  }
  if (piVar2 != (int *)0x0 && param_3 != -1) {
    if (*(int *)(param_1 + 0x38) < 1) {
      iVar3 = (**(code **)*piVar2)(piVar2,param_1 + 0x44);
    }
    else {
      iVar3 = (*(code *)((undefined4 *)*piVar2)[1])(piVar2,param_1 + 0x44);
    }
    if (iVar3 != 0) {
      if (*(int *)(param_1 + 0x38) < 1) {
        uVar4 = 2;
      }
      else {
        func_004A71C4(param_1);
        bVar1 = func_0057D86C((int *)(param_1 + 0x44));
        if (bVar1) {
          if (*(int *)(param_1 + 0x44) != 0) {
            func_0040E1BC(*(int *)(param_1 + 0x44),0,*(float *)(param_1 + 0x28));
          }
          if (*(int *)(param_1 + 0x44) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc) = *(undefined4 *)(param_1 + 0x2c);
          }
          if (*(int *)(param_1 + 0x44) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xd0) = *(undefined4 *)(param_1 + 0x30);
          }
        }
        local_14 = *(int *)(param_1 + 0x1c);
        piVar2 = *(int **)(*(int *)(local_14 + 8) + 0x24);
        if (piVar2 != (int *)0x0) {
          local_18 = param_1 + 8;
          local_10 = param_1 + 0x44;
          local_c = param_1;
          (**(code **)(*piVar2 + 4))(piVar2,&local_18);
        }
        uVar4 = 3;
      }
      return uVar4;
    }
  }
  return 4;
}

