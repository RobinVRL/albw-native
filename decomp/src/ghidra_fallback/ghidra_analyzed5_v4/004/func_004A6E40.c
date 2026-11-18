#include "ghidra_types.h"

extern int func_0040E1BC(int param_1,undefined4 param_2,float fparam_0);
extern int func_004A7058(int param_1,undefined4 param_2,int param_3);
extern int func_004A71C4(int param_1);
extern int func_0057D86C(int *param_1);
extern int func_005819C8(int param_1);

// USA 004A6E40 <- EU 004A6E18 (Ghidra, non-matching)

undefined1 func_004A6E40(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  cVar1 = *(char *)(param_1 + 0x24);
  if (cVar1 == '\x01') {
    if (*(int *)(param_1 + 0x34) < 1) {
      uVar3 = func_004A7058(param_1,param_2,param_3);
      *(char *)(param_1 + 0x24) = (char)uVar3;
    }
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
    goto LAB_004a6f98;
  }
  if (cVar1 == '\x02') {
    bVar2 = func_0057D86C((int *)(param_1 + 0x44));
    if (bVar2) {
      func_004A71C4(param_1);
      bVar2 = func_0057D86C((int *)(param_1 + 0x44));
      if (bVar2) {
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
      *(undefined1 *)(param_1 + 0x24) = 3;
      goto LAB_004a6f98;
    }
  }
  else {
    if (cVar1 != '\x03') goto LAB_004a6f98;
    if (0 < *(int *)(param_1 + 0x38)) {
      (**(code **)(**(int **)(param_1 + 0x20) + 4))
                (*(int **)(param_1 + 0x20),param_1 + 0x44,*(undefined4 *)(param_1 + 0x14),0);
      func_004A71C4(param_1);
      bVar2 = func_0057D86C((int *)(param_1 + 0x44));
      if (bVar2) {
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
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      goto LAB_004a6f98;
    }
    bVar2 = func_0057D86C((int *)(param_1 + 0x44));
    if (bVar2) {
      uVar4 = func_005819C8(param_1 + 8);
      if (uVar4 != 0) {
        func_004A71C4(param_1);
      }
      goto LAB_004a6f98;
    }
  }
  *(undefined1 *)(param_1 + 0x24) = 4;
LAB_004a6f98:
  local_1c = *(int *)(param_1 + 0x1c);
  piVar5 = *(int **)(*(int *)(local_1c + 8) + 0x24);
  if (piVar5 != (int *)0x0) {
    local_20 = param_1 + 8;
    local_18 = param_1 + 0x44;
    local_14 = param_1;
    (**(code **)(*piVar5 + 8))(piVar5,&local_20);
  }
  return *(undefined1 *)(param_1 + 0x24);
}

