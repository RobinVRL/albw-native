#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002CA950(undefined4 *param_1);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004CF478(int param_1,int param_2);
extern int func_00588C14(int param_1,int param_2,uint param_3);
extern undefined4 DAT_002cacc0;
extern int DAT_002cacc4;
extern uint *DAT_002cacc8;

// USA 002CABDC <- EU 002CABB8 (Ghidra, non-matching)
// GLOBAL DAT_002cacc0 undefined4
// GLOBAL DAT_002cacc4 int
// GLOBAL DAT_002cacc8 uint *

void func_002CABDC(int *param_1)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define aiStack_18 ((int *)(albw_frame + 0x8))
  if (*(char *)(param_1[0x103] + 0x30) != '\0') {
    local_1c = DAT_002cacc0;
    local_20 = DAT_002cacc4;
    func_00150A84(param_1,&local_20,0);
    if (param_1[0xd1] != 0) {
      func_004A1B9C(aiStack_18,param_1[0xd1],DAT_002cacc8);
    }
    iVar1 = param_1[0x10b];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0x1c) == param_1[0x10c])) {
      iVar2 = *(int *)(iVar1 + 0x20);
      if ((iVar2 != 0) &&
         ((*(int *)(iVar1 + 0x24) == *(int *)(iVar2 + 0xc) && (0 < *(int *)(iVar2 + 4))))) {
        *(undefined1 *)(iVar2 + 0x280) = 1;
      }
      *(uint *)(iVar1 + 0x3c) = *(uint *)(iVar1 + 0x3c) & 0xfffffffb | 8;
    }
    *(undefined1 *)(param_1[0x105] + 0x44) = 0;
    func_004CF478(param_1[0x103],0);
    func_00588C14((int)param_1,0,1);
    if ((short)param_1[0xb] != 0) {
      func_002CA950(param_1 + 0xf4);
    }
    *(undefined1 *)((int)param_1 + 0x2d7) = 1;
    (**(code **)(param_1[200] + 0x30))(param_1 + 200);
  }
  return;
}

