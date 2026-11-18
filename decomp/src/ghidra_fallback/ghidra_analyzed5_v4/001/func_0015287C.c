#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_004994FC(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004C5F84(int *param_1,uint *param_2,uint param_3,int param_4);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern undefined4 DAT_001529ec;
extern int *DAT_001529f0;
extern int *DAT_001529f4;
extern undefined4 DAT_001529f8;
extern uint DAT_001529fc;
extern int *DAT_00152a00;
extern int DAT_00152a04;

// USA 0015287C <- EU 0015287C (Ghidra, non-matching)
// GLOBAL DAT_001529ec undefined4
// GLOBAL DAT_001529f0 int *
// GLOBAL DAT_001529f4 int *
// GLOBAL DAT_001529f8 undefined4
// GLOBAL DAT_001529fc uint
// GLOBAL DAT_00152a00 int *
// GLOBAL DAT_00152a04 int

undefined4 func_0015287C(int param_1,uint *param_2,int *param_3,int *param_4)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0xd0];
  #define auStack_d0 ((undefined1 *)(albw_frame + 0x0))
  #define local_52 (*(undefined2 *)(albw_frame + 0x7e))
  #define local_50 (*(uint *)(albw_frame + 0x80))
  #define puStack_4c (*(uint * *)(albw_frame + 0x84))
  #define local_48 (*(undefined4 *)(albw_frame + 0x88))
  #define local_44 (*(undefined4 *)(albw_frame + 0x8c))
  #define local_40 (*(undefined4 *)(albw_frame + 0x90))
  #define local_3c (*(undefined1 * *)(albw_frame + 0x94))
  #define local_38 (*(undefined4 *)(albw_frame + 0x98))
  #define local_30 ((int *)(albw_frame + 0xa0))
  #define local_1c (*(undefined1 * *)(albw_frame + 0xb4))
  #define local_18 (*(undefined4 *)(albw_frame + 0xb8))
  local_1c = auStack_d0;
  local_30[4] = DAT_001529ec;
  local_30[3] = 0xffffffff;
  local_18 = 0x40;
  local_52 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  piVar4 = param_3;
  puVar1 = auStack_d0;
  if (*DAT_001529f0 != 0) {
    piVar4 = DAT_001529f4 + -4;
    param_4 = DAT_001529f4;
    iVar3 = func_005826A4(*DAT_001529f0,local_30,piVar4,DAT_001529f4);
    puVar1 = local_1c;
    if (iVar3 != 0) {
      func_004994FC((int)(local_30 + 4),local_30[0],(uint)piVar4,param_4);
      goto LAB_00152904;
    }
  }
  local_1c = puVar1;
  func_004994FC((int)(local_30 + 4),DAT_001529f8,(uint)piVar4,param_4);
LAB_00152904:
  local_48 = 0x3c;
  local_50 = DAT_001529fc;
  local_44 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    local_44 = *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x14);
  }
  local_40 = 0xc80;
  local_38 = 0x80;
  iVar3 = *DAT_00152a00;
  if (*(char *)(*(int *)(iVar3 + 0x14) + 0x1600) == '\0') {
    uVar5 = (uint)*(ushort *)(iVar3 + *(int *)(iVar3 + 0x9bc) * DAT_00152a04 * 4 + 0xc2c);
  }
  else {
    uVar5 = 0;
  }
  puStack_4c = param_2;
  local_3c = auStack_d0;
  iVar3 = func_004C5F84((int *)(param_1 + 0x20),&local_50,uVar5,(int)param_3);
  *(char *)(param_1 + 0xdec) = (char)iVar3;
  if (iVar3 == 0) {
    func_0010E3C4((uint *)(param_1 + 0x8e4),param_2,0x3c);
    *(undefined1 *)(param_1 + 0x8e0) = 0;
    *(undefined1 *)(param_1 + 0xde0) = 0;
    return 1;
  }
  if (iVar3 == 6) {
    uVar2 = 2;
  }
  else {
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0xde0) = uVar2;
  return 0;
}

