#include "ghidra_types.h"

extern int func_002313DC(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0047D480(int param_1,int *param_2,int *param_3,float fparam_0,float fparam_1);
extern int func_004B989C(int param_1);
extern int func_0066DB6C(undefined4 *param_1,undefined1 param_2);
extern float DAT_004619e0;

// USA 004618B0 <- EU 00461888 (Ghidra, non-matching)
// GLOBAL DAT_004619e0 float

undefined4 func_004618B0(int param_1)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  float fparam_0;
  
  fparam_0 = DAT_004619e0;
  *(undefined1 *)(param_1 + 0x9a) = 0;
  iVar3 = *(int *)(param_1 + 0x9c) + 1;
  *(int *)(param_1 + 0x9c) = iVar3;
  if (iVar3 == 0x3c) {
    func_002317C0((undefined2 *)(*(int *)(param_1 + 0x138) + 0x44),fparam_0);
  }
  if (((*(ushort *)(*(int *)(param_1 + 0x14) + 0x16) & 8) != 0) &&
     (*(int *)(*(int *)(param_1 + 0x14) + 8) == 0)) {
    *(undefined1 *)(param_1 + 0xf) = 100;
    func_004B989C(*(int *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined2 *)(param_1 + 0x3a) = 3;
    *(undefined2 *)(param_1 + 0x38) = 0;
    func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
    *(undefined1 *)(param_1 + 0x99) = 1;
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 0x14) + 0x16);
  if ((uVar2 & 0x10) == 0) {
    if (((uVar2 & 0x20) != 0) || (((uVar2 & 8) == 0 && (*(char *)(param_1 + 0x99) != '\0')))) {
      *(undefined1 *)(param_1 + 0xf) = 0x69;
      func_004B989C(*(int *)(param_1 + 0x10));
      *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined2 *)(param_1 + 0x3a) = 3;
      *(undefined2 *)(param_1 + 0x38) = 2;
      func_002317C0((undefined2 *)(param_1 + 0x38),fparam_0);
      *(undefined1 *)(param_1 + 0x99) = 0;
      *(undefined1 *)(param_1 + 0x9a) = 1;
    }
    iVar3 = *(int *)(param_1 + 0x138);
    cVar1 = *(char *)(iVar3 + 0xd);
    bVar4 = cVar1 == '\0';
    if (bVar4) {
      cVar1 = *(char *)(iVar3 + 0xe);
    }
    if (bVar4 && cVar1 == '\0') {
      *(undefined1 *)(iVar3 + 0xe) = 1;
      func_0047D480(*(int *)(param_1 + 0x138),(int *)(param_1 + 0xa0),(int *)(param_1 + 0xec),
                    *(float *)(param_1 + 0x7c),*(float *)(param_1 + 0x80));
      return func_002313DC(*(int *)(param_1 + 0x138) + 0x44);
    }
  }
  else {
    func_0066DB6C((undefined4 *)(param_1 + 0x50),4);
  }
  return 0;
}

