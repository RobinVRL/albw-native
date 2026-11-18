#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_002BDDA4(int param_1);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB0A4(int param_1,float fparam_0);
extern int func_00532554(int param_1,uint param_2);
extern int func_0058A7D4(void);
extern int func_0058A8F0(int param_1);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern int func_00662A14(undefined4 *param_1,undefined1 param_2);
extern float fRam002bc688;
extern float DAT_002bc684;

// USA 002BC5AC <- EU 002BC588 (Ghidra, non-matching)
// GLOBAL DAT_002bc684 float
// GLOBAL UNK_002bc688 float

void func_002BC5AC(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  longlong lVar7;
  
  puVar1 = func_002BDDA4(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)func_00532554((int)puVar1,(int)*(short *)(param_1 + 0x2e));
    *(undefined4 *)(param_1 + 0x920) = *puVar1;
    *(undefined4 *)(param_1 + 0x924) = puVar1[1];
    *(undefined4 *)(param_1 + 0x928) = puVar1[2];
  }
  fVar5 = DAT_002bc684;
  *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x920);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x924);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x928);
  lVar7 = func_0058ACC8(param_1,fVar5);
  if ((int)lVar7 != 0) {
    *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 2;
  }
  iVar2 = func_0058A8F0(param_1);
  if (iVar2 != 0) {
    func_004FABDC(param_1,3,8,0);
    puVar3 = (uint *)func_0058A7D4();
    fVar5 = func_0058AC38(param_1);
    uVar4 = func_00111A64(puVar3);
    fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    func_004FB0A4(param_1,fVar6 * fRam002bc688 * fVar5);
    func_00662A14((undefined4 *)(param_1 + 0x8bc),2);
  }
  return;
}

