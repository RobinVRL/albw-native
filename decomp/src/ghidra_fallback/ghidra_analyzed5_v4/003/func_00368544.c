#include "ghidra_types.h"

extern int func_00100118(int param_1,undefined *param_2,int param_3,int param_4);
extern int func_0010CEE0(undefined4 param_1,int *param_2,undefined4 param_3);
extern int func_003B5E14(int param_1,int *param_2,int *param_3,int param_4,undefined1 param_5);
extern int func_003B6698(undefined4 *param_1);
extern int func_003B672C(int param_1,uint *param_2);
extern int func_004B948C(int param_1,int param_2);
extern undefined *DAT_0036867c;
extern int DAT_00368680;

// USA 00368544 <- EU 00368520 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:1 char
// GLOBAL DAT_0036867c undefined *
// GLOBAL DAT_00368680 int

void func_00368544(int param_1,int *param_2,uint param_3,int *param_4,int param_5,char param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  _Alignas(8) unsigned char albw_frame[0x100];
  #define auStack_fc ((uint *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0xb8))
  #define local_40 (*(int *)(albw_frame + 0xc0))
  #define iStack_3c (*(int *)(albw_frame + 0xc4))
  #define iStack_34 (*(int *)(albw_frame + 0xcc))
  #define local_30 (*(int * *)(albw_frame + 0xd0))
  #define uStack_2c (*(uint *)(albw_frame + 0xd4))
  #define piStack_28 (*(int * *)(albw_frame + 0xd8))
  if ((((*(byte *)(param_1 + 0xf5) & 8) == 0) && (0 < (int)param_3)) && (param_2 != (int *)0x0)) {
    iStack_34 = param_1;
    local_30 = param_2;
    uStack_2c = param_3;
    piStack_28 = param_4;
    func_003B6698(auStack_fc);
    iVar1 = func_0010CEE0(param_3 * 0x148,(int *)0x0,4);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = func_00100118(iVar1,DAT_0036867c,0x148,param_3);
    }
    if (iVar2 != 0) {
      *(int *)(param_1 + 0xa8) = iVar2;
      *(uint *)(param_1 + 0xa4) = param_3;
    }
    uVar5 = *(uint *)(param_1 + 0xa4);
    iVar2 = *(int *)(param_1 + 0xa8);
    uVar3 = 0;
    if (uVar5 != 0) {
      local_48 = DAT_00368680;
      do {
        piVar4 = param_4;
        if (uVar3 < param_3) {
          piVar4 = param_4 + uVar3 * 2;
        }
        (**(code **)(*piVar4 + 8))(piVar4);
        if (piVar4[1] != 0) {
          piVar4 = param_4;
          if (uVar3 < param_3) {
            piVar4 = param_4 + uVar3 * 2;
          }
          (**(code **)(*piVar4 + 8))(piVar4);
          iStack_3c = piVar4[1];
          local_40 = local_48;
          func_003B5E14(iVar2 + uVar3 * 0x148,local_30,&local_40,0,param_6 + (char)uVar3);
          func_003B672C(iVar2 + uVar3 * 0x148,auStack_fc);
          func_004B948C(param_5,iVar2 + uVar3 * 0x148);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
    }
    *(byte *)(param_1 + 0xf5) = *(byte *)(param_1 + 0xf5) | 8;
  }
  return;
}

