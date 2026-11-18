#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003581DC(float *param_1,uint *param_2,undefined4 param_3);
extern int func_004FB4E0(int param_1,float fparam_0);
extern int func_0058A7D4(void);
extern float func_0058AC38(int param_1);
extern longlong func_0058ACC8(int param_1,float fparam_0);
extern void func_0065E398();
extern float DAT_0021fcc0;
extern uint DAT_0021fcc4;
extern float DAT_0021fcc8;

// USA 0021FB9C <- EU 0021FB9C (Ghidra, non-matching)
// GLOBAL DAT_0021fcc0 float
// GLOBAL DAT_0021fcc4 uint
// GLOBAL DAT_0021fcc8 float

undefined4 func_0021FB9C(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  bool bVar5;
  float in_s0;
  float fparam_0;
  longlong lVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(uint *)(albw_frame + 0x0))
  #define local_1c (*(float *)(albw_frame + 0x4))
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  if (*(int *)(param_1 + 0xab4) < 3) {
    lVar6 = func_0058ACC8(param_1,DAT_0021fcc0);
    if ((int)lVar6 != 0) {
      iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x40c) + 0x24) + 0x14) +
              *(int *)(param_1 + 0xab8) * 0x30;
      local_1c = *(float *)(iVar2 + 0xc);
      local_18 = *(undefined4 *)(iVar2 + 0x1c);
      local_14 = *(undefined4 *)(iVar2 + 0x2c);
      local_20 = *(uint *)(param_1 + 1000);
      puVar3 = (uint *)func_0058A7D4();
      uVar1 = DAT_0021fcc4;
      uVar4 = func_00111A64(puVar3);
      iVar2 = (int)((ulonglong)uVar1 * (ulonglong)uVar4 >> 0x20);
      bVar5 = *(char *)(param_1 + 0xb00) == '\0';
      if (bVar5) {
        local_20 = (local_20 + 0x40000000) - iVar2;
      }
      else {
        local_20 = iVar2 + local_20 + 0xc0000000;
      }
      *(bool *)(param_1 + 0xb00) = bVar5;
      func_003581DC(&local_1c,&local_20,*(undefined4 *)(param_1 + 0x2cc));
    }
    fparam_0 = func_0058AC38(param_1);
    lVar6 = func_0058ACC8(param_1,fparam_0);
    if (((int)lVar6 != 0) &&
       (iVar2 = *(int *)(param_1 + 0xab4) + 1, *(int *)(param_1 + 0xab4) = iVar2, iVar2 == 3)) {
      return func_004FB4E0(param_1,DAT_0021fcc8);
    }
  }
  else {
    func_0065E398((undefined4 *)(param_1 + 0x8c0),8,in_s0);
  }
  return 0;
}

