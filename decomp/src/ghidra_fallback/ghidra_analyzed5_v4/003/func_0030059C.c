#include "ghidra_types.h"

extern int func_001B8290(int param_1,int *param_2);
extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EB0(int *param_1,undefined4 param_2,uint *param_3);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00560FA0(int param_1,uint *param_2,int param_3);
extern int func_00561114(int *param_1,int *param_2,uint *param_3);
extern int func_00689894(int param_1,int *param_2,uint param_3);
extern int *DAT_003006f4;
extern uint DAT_003006f8;
extern char s_areaId_003006ec[];

// USA 0030059C <- EU 00300578 (Ghidra, non-matching)
// GLOBAL DAT_003006f4 int *
// GLOBAL DAT_003006f8 uint
// GLOBAL s_areaId_003006ec string

undefined4 func_0030059C(int param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define aiStack_38 ((int *)(albw_frame + 0x8))
  #define local_30 (*(uint *)(albw_frame + 0x10))
  #define local_2c (*(int *)(albw_frame + 0x14))
  #define local_28 ((int *)(albw_frame + 0x18))
  func_003C7A70(aiStack_38);
  bVar2 = func_00560EF8(param_2,aiStack_38,(uint *)s_areaId_003006ec);
  if (bVar2) {
    iVar4 = 0;
    while (iVar3 = func_00560FA0((int)aiStack_38,&local_30,iVar4), iVar3 != 0) {
      iVar3 = *(int *)(param_1 + 0x5d4);
      if (iVar3 < *(int *)(param_1 + 0x5d8)) {
        *(int *)(param_1 + 0x5d4) = iVar3 + 1;
        *(short *)(*(int *)(param_1 + 0x5dc) + iVar3 * 2) = (short)local_30;
      }
      iVar4 = iVar4 + 1;
    }
  }
  piVar1 = DAT_003006f4;
  *(undefined1 *)(param_1 + 0x57f) = 0;
  *(undefined1 *)(param_1 + 0x57c) = 0;
  (**(code **)(*piVar1 + 8))(piVar1);
  func_00560EB0(param_2,param_1 + 0x57c,(uint *)piVar1[1]);
  if (*(char *)(param_1 + 0x57c) != '\0') {
    *(undefined1 *)(param_1 + 0x57d) = 1;
    (**(code **)(piVar1[2] + 8))(piVar1 + 2);
    func_00560EB0(param_2,param_1 + 0x57f,(uint *)piVar1[3]);
    local_28[0] = 0;
    (**(code **)(piVar1[4] + 8))(piVar1 + 4);
    iVar4 = func_00561114(param_2,local_28,(uint *)piVar1[5]);
    if (iVar4 != 0) {
      local_2c = local_28[0];
      local_30 = DAT_003006f8;
      func_00689894(param_1 + 0x588,(int *)&local_30,0xffffffff);
    }
  }
  return func_001B8290(param_1,param_2);
}

