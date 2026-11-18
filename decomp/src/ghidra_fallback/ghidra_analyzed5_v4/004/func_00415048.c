#include "ghidra_types.h"

extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern int func_003DD060(undefined4 *param_1);
extern int func_00412BB4(void);
extern int func_00412D48(int *param_1);
extern int func_00412F58(void);
extern int func_004137E4(void);
extern int func_0041522C(uint *param_1,uint *param_2);
extern int func_00417E24(void);
extern int func_00417E80(int param_1);
extern int func_00418648(int param_1);
extern int func_00419924(void);
extern int func_004199E8(int param_1,float fparam_0);
extern int DAT_00415204;

// USA 00415048 <- EU 00415028 (Ghidra, non-matching)
// GLOBAL DAT_00415204 int

undefined4 func_00415048(uint *param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint *puVar5;
  float in_s0;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((uint *)(albw_frame + 0x8))
  #define in_stack_fffffff4 (*(uint *)(albw_frame + 0x14)) /* V4: frame slot (callee-filled) */
  
  if (*(char *)((int)param_1 + 0x1f6) == '\x01') {
    local_18[0] = 0;
    local_18[1] = 0;
    func_003DD060(local_18 + 2);
    local_18[0] = local_18[2];
    if ((int)param_1[0x70] < (int)param_1[0x6f]) {
      puVar1 = (uint *)(param_1[0x6e] + param_1[0x70] * 8);
      *puVar1 = local_18[2];
      puVar1[1] = in_stack_fffffff4;
      param_1[0x70] = param_1[0x70] + 1;
    }
    func_0041522C(param_1,local_18);
  }
  func_0010C0C0((int *)(param_1 + 0x71));
  puVar1 = (uint *)param_1[0x75];
  if ((uint *)param_1[0x75] != param_1 + 0x75) {
    do {
      puVar5 = (uint *)*puVar1;
      (**(code **)(puVar1[-1] + 8))(puVar1 + -1);
      puVar1 = puVar5;
    } while (puVar5 != param_1 + 0x75);
  }
  puVar1 = (uint *)param_1[0x78];
  if ((uint *)param_1[0x78] != param_1 + 0x78) {
    do {
      puVar5 = (uint *)*puVar1;
      (**(code **)(puVar1[-1] + 0xc))(puVar1 + -1);
      puVar1 = puVar5;
    } while (puVar5 != param_1 + 0x78);
  }
  func_00418648(DAT_00415204);
  piVar2 = (int *)func_00412BB4();
  func_00412D48(piVar2);
  piVar2 = (int *)func_00412F58();
  func_00412D48(piVar2);
  puVar1 = (uint *)param_1[0x78];
  if ((uint *)param_1[0x78] != param_1 + 0x78) {
    do {
      puVar5 = (uint *)*puVar1;
      (**(code **)(puVar1[-1] + 8))(puVar1 + -1);
      puVar1 = puVar5;
    } while (puVar5 != param_1 + 0x78);
  }
  puVar3 = func_00417E24();
  func_00417E80((int)puVar3);
  func_004137E4();
  puVar4 = func_00419924();
  func_004199E8((int)puVar4,in_s0);
  puVar1 = (uint *)param_1[0x75];
  if ((uint *)param_1[0x75] != param_1 + 0x75) {
    do {
      puVar5 = (uint *)*puVar1;
      (**(code **)(puVar1[-1] + 0xc))(puVar1 + -1);
      puVar1 = puVar5;
    } while (puVar5 != param_1 + 0x75);
  }
  return func_0010C160((int *)(param_1 + 0x71));
}

