#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_0068C690(float *param_1);
extern int *DAT_00508658;
extern undefined DAT_0050865c;
extern undefined4 DAT_00508664;

// USA 005085A8 <- EU 00508580 (Ghidra, non-matching)
// GLOBAL DAT_00508658 int *
// GLOBAL DAT_0050865c undefined
// GLOBAL DAT_00508664 undefined4

void func_005085A8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define afStack_20 ((float *)(albw_frame + 0x10))
  *(undefined1 *)(param_1 + 0x536) = 1;
  func_00115C70(afStack_20,*(float **)(*DAT_00508658 + 0x1c),(float *)(param_1 + 0x3d0));
  iVar2 = func_0068C690(afStack_20);
  if (iVar2 - 1U < 0x7fffffff) {
    *(undefined1 *)(param_1 + 0x534) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0x534) = 1;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x424) + 0x61) = 1;
  piVar3 = (int *)(param_1 + 0x4f8);
  if (*(int *)(param_1 + 0x344) == 0) {
    *piVar3 = 0;
    *(undefined4 *)(param_1 + 0x4fc) = 0;
  }
  else {
    iVar2 = *piVar3;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == *(int *)(param_1 + 0x4fc))) {
      func_00110848(iVar2);
    }
    func_004A1B9C(&local_28,*(int *)(param_1 + 0x344),(uint *)&DAT_0050865c);
    *piVar3 = local_28;
    *(undefined4 *)(param_1 + 0x4fc) = uStack_24;
  }
  uVar1 = DAT_00508664;
  *(undefined4 *)(param_1 + 0x480) = 10;
  *(undefined4 *)(param_1 + 0x484) = uVar1;
  *(undefined4 *)(param_1 + 0x47c) = 0;
  *(undefined4 *)(param_1 + 0x46c) = *(undefined4 *)(*(int *)(param_1 + 0x410) + 0x158);
  return;
}

