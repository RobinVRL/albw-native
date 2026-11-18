#include "ghidra_types.h"

extern int func_004356B4(int *param_1);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern float func_0054DE3C(int param_1,uint param_2,int param_3);
extern float func_0058AC38(int param_1);
extern int DAT_0021fee0;
extern float DAT_0021fee4;

// USA 0021FDFC <- EU 0021FDFC (Ghidra, non-matching)
// GLOBAL DAT_0021fee0 int
// GLOBAL DAT_0021fee4 float

void func_0021FDFC(int param_1)

{
  int iVar1;
  uint in_fpscr;
  float fVar2;
  int iVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  
  *(undefined1 *)(*(int *)(param_1 + 0x9fc) + 0x44) = 1;
  uVar4 = *(undefined8 *)(param_1 + 0x3d0);
  uVar5 = *(undefined4 *)(param_1 + 0x3d8);
  fVar2 = func_0054DE3C(param_1,0,1);
  iVar1 = *(int *)(param_1 + 0x9f8);
  *(int *)(iVar1 + 4) = (int)uVar4;
  *(float *)(iVar1 + 8) = fVar2 + ALBW_AS_F32(((ulonglong)uVar4 >> 0x20));
  *(undefined4 *)(iVar1 + 0xc) = uVar5;
  func_004356B4(*(int **)(param_1 + 0x9f8));
  if (*(char *)(param_1 + 0x8c5) != '\x17') {
    if (*(char *)(param_1 + 0x8e4) == '\x02') {
      func_004FC07C(param_1,1,0,0);
    }
    else {
      func_004FC07C(param_1,0xe,0,0);
    }
    fVar2 = func_0058AC38(param_1);
    iVar3 = VectorFloatToUnsigned(fVar2,3);
    iVar1 = iVar3;
    if (iVar3 == 0) {
      iVar1 = DAT_0021fee0;
    }
    *(int *)(param_1 + 0xa6c) = iVar3;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0xa70) = iVar1;
    }
    else {
      fVar2 = (float)VectorUnsignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
      *(float *)(param_1 + 0xa70) = DAT_0021fee4 / fVar2;
    }
    *(undefined4 *)(param_1 + 0xa68) = 0;
  }
  return;
}

