#include "ghidra_types.h"

extern int func_00519E70(int param_1,undefined4 *param_2);
extern int func_0051AE88(int param_1,undefined4 param_2);
extern int func_0051B0C8(int param_1,undefined4 param_2);
extern int func_0051B1D0(int param_1,undefined1 param_2);
extern int func_00582260(int param_1,uint param_2,uint param_3);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00691884(int *param_1,int *param_2);
extern int *DAT_004b0c94;
extern int *DAT_004b0c98;
extern int DAT_004b0c9c;
extern int DAT_004b0ca0;
extern int *DAT_004b0ca4;
extern int *DAT_004b0ca8;
extern undefined4 DAT_004b0cac;

// USA 004B0B3C <- EU 004B0B14 (Ghidra, non-matching)
// PARAM param_5 Stack[0x0]:4 int
// PARAM param_6 Stack[0x4]:4 undefined4
// PARAM param_7 Stack[0x8]:1 undefined1
// GLOBAL DAT_004b0c94 int *
// GLOBAL DAT_004b0c98 int *
// GLOBAL DAT_004b0c9c int
// GLOBAL DAT_004b0ca0 int
// GLOBAL DAT_004b0ca4 int *
// GLOBAL DAT_004b0ca8 int *
// GLOBAL DAT_004b0cac undefined4

void func_004B0B3C(int param_1,int *param_2,int *param_3,int param_4,int param_5,undefined4 param_6,
                  undefined1 param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(undefined4 *)(albw_frame + 0x4))
  #define local_68 (*(int *)(albw_frame + 0x8))
  #define local_64 (*(int *)(albw_frame + 0xc))
  #define local_60 ((int *)(albw_frame + 0x10))
  #define local_4c (*(int *)(albw_frame + 0x24))
  #define local_40 ((int *)(albw_frame + 0x30))
  piVar1 = DAT_004b0c94;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0xffffffff;
  iVar3 = func_005826A4(*DAT_004b0c94,local_40,param_2,param_3);
  piVar2 = DAT_004b0c98;
  if (iVar3 != 0) {
    func_0051B1D0(*DAT_004b0c98,(char)param_4);
    func_00519E70(*piVar2,local_40);
    iVar3 = DAT_004b0c9c;
    if (param_4 == 0) {
      local_60[0] = 0;
      local_60[4] = DAT_004b0c9c;
      local_4c = DAT_004b0ca0;
      local_64 = DAT_004b0ca0 + -0xc;
      local_60[1] = 0;
      local_68 = DAT_004b0c9c;
      local_60[2] = 0;
      local_60[3] = 0xffffffff;
      iVar4 = func_005826A4(*piVar1,local_60,&local_68,local_60 + 4);
      if (iVar4 != 0) {
        func_0051B0C8(*piVar2,local_60);
      }
    }
    if (param_5 == 1) {
      func_0051AE88(*piVar2,2);
    }
    else if (param_5 == 2) {
      func_0051AE88(*piVar2,1);
    }
    else {
      func_0051AE88(*piVar2,0);
    }
    iVar4 = func_00582260(*DAT_004b0ca8,(int)*(char *)(*DAT_004b0ca4 + 0x18),
                          *(uint *)(*DAT_004b0ca4 + 0x1c));
    local_6c = DAT_004b0cac;
    local_70 = iVar3;
    iVar3 = func_00691884((int *)(iVar4 + 4),&local_70);
    if (iVar3 == 0) {
      *(undefined1 *)(param_1 + 0x2400) = 0;
      *(undefined1 *)(param_1 + 0x2401) = param_7;
      *(undefined4 *)(param_1 + 0x23f4) = param_6;
    }
  }
  return;
}

