#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4C4(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_004FBFBC(int param_1,int param_2,int param_3);
extern int func_0054DDF4(int param_1,uint param_2);
extern int func_0058A7D4(void);
extern float func_0058AC14(int param_1);
extern int func_0068C690(float *param_1);
extern float fRam002b3fa0;
extern undefined4 uRam002b3fa4;
extern undefined4 uRam002b3fac;
extern undefined4 uRam002b3fb0;
extern int *piRam002b3fa8;

// USA 002B3E70 <- EU 002B3E4C (Ghidra, non-matching)
// GLOBAL UNK_002b3fa0 float
// GLOBAL UNK_002b3fa4 undefined4
// GLOBAL UNK_002b3fa8 int *
// GLOBAL UNK_002b3fac uint
// GLOBAL UNK_002b3fb0 undefined4

void func_002B3E70(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 *puVar6;
  float fVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define uStack_34 (*(undefined4 *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define fStack_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(undefined4 *)(albw_frame + 0x18))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x1c))
  func_004FABDC(param_1,4,0xffffffff,0);
  fparam_0 = fRam002b3fa0;
  func_004FB4E0(param_1,fRam002b3fa0);
  func_004FBFBC(param_1,0,0);
  fVar7 = func_0058AC14(param_1);
  func_004FB070(param_1,fVar7 - fparam_0);
  func_004FB4C4(param_1,fparam_0);
  if (*(char *)(param_1 + 0x650) == '\0') {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(param_1 + 0x5a8);
  }
  *(uint *)(iVar3 + 0x164) = *(uint *)(iVar3 + 0x164) | 0x90000;
  if (*(int *)(param_1 + 0x958) != 0) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x958) + 0x14) + 0x10) = uRam002b3fa4;
  }
  if (*(char *)(param_1 + 0x8f1) != '\x06') {
    func_00115C70(&fStack_2c,(float *)(param_1 + 0x3d0),*(float **)(*piRam002b3fa8 + 0x1c));
    fStack_38 = fStack_2c;
    uStack_34 = uStack_28;
    uStack_30 = uStack_24;
    iVar3 = func_0068C690(&fStack_38);
    puVar4 = (uint *)func_0058A7D4();
    uVar1 = uRam002b3fac;
    uVar5 = func_00111A64(puVar4);
    *(int *)(param_1 + 0x95c) =
         ((int)((ulonglong)uVar1 * (ulonglong)uVar5 >> 0x20) - ((int)uVar1 >> 1)) + iVar3;
    uVar2 = uRam002b3fb0;
    *(undefined4 *)(param_1 + 0x938) = 300;
    *(undefined4 *)(param_1 + 0x93c) = uVar2;
    *(undefined4 *)(param_1 + 0x934) = 0;
  }
  puVar6 = (undefined2 *)func_0054DDF4(param_1,1);
  func_004F88A0((int *)param_1,puVar6);
  *(undefined1 *)(param_1 + 0x985) = 0;
  *(undefined1 *)(param_1 + 0x984) = 0;
  return;
}

