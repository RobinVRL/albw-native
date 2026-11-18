#include "ghidra_types.h"

extern int func_0012C790(int param_1);
extern int func_001B6C2C(int *param_1,undefined4 param_2,undefined4 param_3,int param_4);
extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0047D480(int param_1,int *param_2,int *param_3,float fparam_0,float fparam_1);
extern int func_004B989C(int param_1);
extern int func_0051AEA4(int param_1,int *param_2,int *param_3,int param_4);
extern int func_0051B404(int param_1);
extern int func_0066DB6C(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00461de8;
extern float DAT_00461dec;

// USA 00461CD8 <- EU 00461CB0 (Ghidra, non-matching)
// GLOBAL DAT_00461de8 int *
// GLOBAL DAT_00461dec float

void func_00461CD8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  ushort uVar1;
  int *piVar2;
  float fparam_0;
  
  piVar2 = DAT_00461de8;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  fparam_0 = DAT_00461dec;
  if (((uVar1 & 8) != 0) && (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) {
    func_001B6C2C(*(int **)(param_1 + 0x138),(uint)uVar1,param_3,param_4);
    func_0047D480(*(int *)(param_1 + 0x138),(int *)(param_1 + 0xa0),(int *)(param_1 + 0xec),
                  *(float *)(param_1 + 0x7c),*(float *)(param_1 + 0x80));
    func_002313DC(*(int *)(param_1 + 0x138) + 0x44);
    func_0051AEA4(*piVar2,(int *)(param_1 + 0xa0),(int *)(param_1 + 0xec),2);
    *(undefined1 *)(param_1 + 0xf) = 100;
    func_004B989C(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x38) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  if ((uVar1 & 0x10) == 0) {
    if (((uVar1 & 0x20) != 0) || (((uVar1 & 8) == 0 && (*(char *)(param_1 + 0x99) != '\0')))) {
      func_0012C790(*(int *)(param_1 + 0x138));
      func_0051B404(*piVar2);
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x3a) = 0;
      *(undefined2 *)(param_1 + 0x38) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
      *(undefined1 *)(param_1 + 0x99) = 0;
      *(undefined1 *)(param_1 + 0x9a) = 1;
      return;
    }
  }
  else {
    func_0066DB6C((undefined4 *)(param_1 + 0x50),2);
  }
  return;
}

