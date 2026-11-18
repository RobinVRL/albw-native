#include "ghidra_types.h"

extern int func_003CC054(int *param_1,int param_2);
extern int func_003CC124(undefined4 *param_1,undefined4 param_2);
extern int func_00403F18(int *param_1,undefined4 param_2,int param_3,undefined4 param_4);
extern int func_0041E918(int param_1,int param_2);
extern int func_0041F7CC(void);
extern int func_0041F7DC(void *param_1);
extern int func_0054391C(int param_1,int *param_2,undefined4 param_3,int param_4);
extern int func_005FFDC0(void);
extern int func_005FFF7C(undefined4 param_1);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_002c0f78;

// USA 002C0E38 <- EU 002C0E14 (Ghidra, non-matching)
// GLOBAL DAT_002c0f78 int *

int * func_002C0E38(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 (*(int *)(albw_frame + 0x10))
  #define local_24 (*(int *)(albw_frame + 0x1c))
  #define local_20 (*(int *)(albw_frame + 0x20))
  #define local_1c ((int *)(albw_frame + 0x24))
  piVar1 = (int *)0x0;
  if ((*(int *)(param_1 + 0x4c) != 0) &&
     (piVar1 = *(int **)(param_1 + 0x18), ((uint)piVar1 & 2) != 0)) {
    uVar2 = func_0041F7CC();
    iVar5 = 0;
    iVar4 = param_3;
    uVar2 = func_00403F18(param_2,uVar2,param_3,0);
    func_0041F7DC(uVar2);
    piVar1 = DAT_002c0f78;
    local_20 = 0;
    if (param_2[0x183] == 0) {
      func_005FFDC0();
    }
    else {
      func_005FFF7C(param_2[0x183] - *(int *)(*DAT_002c0f78 + 0x184c));
      func_006003D8(0x208,&local_20);
      func_0041E918((int)param_2,local_20);
      func_005FFDC0();
    }
    func_006003D8(0x208,&local_38);
    func_003CC124(&local_34,local_38);
    func_0054391C(param_1,&local_34,iVar4,iVar5);
    uVar3 = local_34 - local_30 & 0xfffffffc;
    if (uVar3 != 0) {
      func_00601378(uVar3);
      if (local_24 != 0) {
        func_005FFF7C(local_24);
      }
      func_006003D8(0x208,local_1c);
      func_003CC054(&local_34,local_1c[0]);
    }
    func_005FFDC0();
    func_006003D8(0x208,&local_38);
    *(int *)(*piVar1 + 0x184c) = local_38;
    uVar2 = func_0041F7CC();
    uVar2 = (**(code **)(*param_2 + 0x20))(param_2,uVar2,param_3,0);
    func_0041F7DC(uVar2);
    piVar1 = &local_34;
  }
  return piVar1;
}

