#include "ghidra_types.h"

extern int func_003525AC(int param_1,undefined4 *param_2,int param_3);
extern int func_003529A0(undefined4 *param_1,undefined4 param_2,undefined4 param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *DAT_004f0734;
extern char s_SE__s__s__004f0738[];
extern char s_cf_004f0738[];

// USA 004F0678 <- EU 004F0650 (Ghidra, non-matching)
// GLOBAL DAT_004f0734 int *
// GLOBAL s_cf_004f0738 string

int func_004F0678(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define auStack_38 ((undefined4 *)(albw_frame + 0x8))
  #define local_30 (*(undefined4 *)(albw_frame + 0x10))
  #define local_28 (*(undefined4 *)(albw_frame + 0x18))
  #define local_18 (*(undefined4 *)(albw_frame + 0x28))
  iVar1 = param_1[0x33];
  if (iVar1 == 0) {
    func_00689928(param_1 + 0x15,param_2,0xffffffff);
    func_00689928(param_1 + 0x15,param_3,0xffffffff);
    (**(code **)(*param_3 + 8))(param_3);
    iVar3 = param_3[1];
    iVar1 = *DAT_004f0734;
    piVar2 = (int *)(iVar1 + 0x68);
    (**(code **)(*piVar2 + 8))(piVar2);
    func_004994B0((int)(param_1 + 0x20),s_SE__s__s__004f0738,*(uint *)(iVar1 + 0x6c),iVar3);
    (**(code **)(param_1[0x15] + 8))(param_1 + 0x15);
    func_003529A0(auStack_38,param_1[0x16],param_1 + 0xd);
    local_18 = 0x100;
    local_30 = (**(code **)(*param_1 + 0x14))(param_1);
    local_28 = (**(code **)(*param_1 + 0x18))(param_1);
    iVar1 = func_003525AC((int)(param_1 + 0x2b),auStack_38,(int)(param_1 + 0x3d));
  }
  return iVar1;
}

