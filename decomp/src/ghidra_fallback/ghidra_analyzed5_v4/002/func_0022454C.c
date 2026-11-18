#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0036BE78();
extern int func_0036C058(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4);
extern int func_0065E774(undefined4 *param_1,undefined1 param_2);
extern float DAT_00224650;
extern float DAT_00224654;

// USA 0022454C <- EU 0022454C (Ghidra, non-matching)
// GLOBAL DAT_00224650 float
// GLOBAL DAT_00224654 float

void func_0022454C(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x468) == 10) {
    *(undefined1 *)(param_1 + 0x580) = 2;
    *(int *)(param_1 + 0x4b4) = param_1 + 0x704;
    func_0036C058(param_1 + 0x48c,0xffffffff,0xffffffff,0);
  }
  if (9 < *(int *)(param_1 + 0x468)) {
    func_0036BE78(param_1 + 0x48c);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x68c) + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00224650) {
      if (*(float *)(iVar1 + 8) <= DAT_00224650) goto LAB_00224600;
    }
    else if (*(float *)(iVar1 + 8) == *(float *)(iVar1 + 0x14)) {
LAB_00224600:
      func_0065E774((undefined4 *)(param_1 + 0x468),0xb);
      *(undefined4 *)(param_1 + 0x3d0) = *(undefined4 *)(param_1 + 0x710);
      *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x714);
      *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x718);
      *(undefined1 *)(param_1 + 0x685) = 0;
      return;
    }
  }
  func_00115C54((float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3d0),(float *)(param_1 + 0x3dc));
  *(float *)(param_1 + 0x3e0) = *(float *)(param_1 + 0x3e0) - DAT_00224654;
  return;
}

