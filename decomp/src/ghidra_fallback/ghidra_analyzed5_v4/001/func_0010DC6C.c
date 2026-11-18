#include "ghidra_types.h"

extern int func_0010AC24(undefined4 param_1,undefined4 param_2);
extern int func_0010F7EC(int *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4, undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8, undefined4 param_9,int param_10,undefined4 param_11,undefined4 param_12);
extern int func_0010FB48(int param_1);
extern int DAT_0010dde0;
extern int DAT_0010dde4;
extern undefined4 DAT_0010dde8;
extern int DAT_0010ddec;

// USA 0010DC6C <- EU 0010DC6C (Ghidra, non-matching)
// GLOBAL DAT_0010dde0 int
// GLOBAL DAT_0010dde4 int
// GLOBAL DAT_0010dde8 undefined4
// GLOBAL DAT_0010ddec int

/* WARNING: Variable defined which should be unmapped: objStack_60 */

int func_0010DC6C(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define objStack_60 ((uint *)(albw_frame + 0x0))
  #define local_48 ((int *)(albw_frame + 0x18))
  #define local_40 (*(undefined4 ** *)(albw_frame + 0x20))
  #define local_3c (*(undefined4 *)(albw_frame + 0x24))
  #define local_38 ((int *)(albw_frame + 0x28))
  #define local_30 (*(int *)(albw_frame + 0x30))
  #define local_28 (*(int *)(albw_frame + 0x38))
  #define local_20 (*(int *)(albw_frame + 0x40))
  local_40 = &local_40;
  local_48[0] = 0;
  local_48[1] = 1;
  local_3c = 1;
  local_38[0] = *(int *)(DAT_0010dde0 + 0x10);
  objStack_60[4] = 1;
  objStack_60[5] = 0;
  objStack_60[0] = 1;
  objStack_60[1] = 2;
  objStack_60[3] = 0xc;
  objStack_60[2] = param_4;
  iVar2 = func_0010F7EC(local_38,local_48,0,3,1,local_40,1,2,param_4,0xc,1,0);
  if (iVar2 < 0) {
    func_0010AC24(iVar2,0x10dcdc);
  }
  iVar2 = local_48[0];
  piVar3 = func_0010FB48(DAT_0010dde4);
  uVar1 = DAT_0010dde8;
  if (piVar3 == (int *)0x0) {
    software_interrupt(0x23);
    func_0010AC24(DAT_0010dde8,0x10dd6c);
  }
  else {
    *piVar3 = DAT_0010ddec;
    piVar3[1] = iVar2;
  }
  iVar2 = 0;
  if (param_3 == 0) {
LAB_0010dd98:
    iVar4 = param_1 * 0x20 + param_2 * 0x18 + iVar2;
LAB_0010dda8:
    if (0 < iVar4) goto LAB_0010ddc4;
  }
  else {
    iVar2 = (**(code **)*piVar3)(piVar3,objStack_60,0,0,&local_40,0x28);
    iVar4 = -1;
    if ((iVar2 < 0) || (objStack_60[0] != 0x28)) goto LAB_0010dda8;
    iVar2 = local_28 + local_20 + local_38[0] + local_30;
    if (-1 < iVar2) goto LAB_0010dd98;
  }
  software_interrupt(0x23);
  func_0010AC24(uVar1,0x10ddc4);
LAB_0010ddc4:
  (**(code **)(*piVar3 + 0x30))(piVar3);
  return iVar4;
}

