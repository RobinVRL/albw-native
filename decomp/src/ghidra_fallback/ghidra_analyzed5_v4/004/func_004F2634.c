#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB024(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int DAT_004f2788;
extern int *DAT_004f278c;
extern undefined4 DAT_004f2790;
extern int DAT_004f2794;
extern float DAT_004f2798;

// USA 004F2634 <- EU 004F260C (Ghidra, non-matching)
// GLOBAL DAT_004f2788 int
// GLOBAL DAT_004f278c int *
// GLOBAL DAT_004f2790 undefined4
// GLOBAL DAT_004f2794 int
// GLOBAL DAT_004f2798 float

undefined4 func_004F2634(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_r2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  iVar3 = DAT_004f2788;
  param_1[0xf9] = DAT_004f2788;
  param_1[0xf7] = iVar3;
  if (*(char *)((int)param_1 + 0x91b) == '\0') {
    iVar1 = func_00588BE4((int)param_1);
    if (iVar1 == *DAT_004f278c) {
      func_004FAB60((int)param_1,1,0);
      local_20 = DAT_004f2794;
      *(int *)(*(int *)(param_1[0x22f] + 0x14) + 0x10) = iVar3;
      local_1c = DAT_004f2790;
      uVar2 = func_00584C14(param_1[0x103],&local_20);
      func_004CEA18(param_1[0x103],1,uVar2);
      iVar3 = param_1[0x23f];
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == param_1[0x240])) {
        iVar1 = *(int *)(iVar3 + 0x20);
        if ((iVar1 != 0) &&
           ((*(int *)(iVar3 + 0x24) == *(int *)(iVar1 + 0xc) && (0 < *(int *)(iVar1 + 4))))) {
          *(undefined1 *)(iVar1 + 0x280) = 1;
        }
        *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffb | 8;
      }
    }
    else {
      func_004FB070((int)param_1,DAT_004f2798);
      func_004FACD4((int)param_1,(int *)0x0,in_r2,in_r3);
    }
    param_1[0x167] = param_1[0x167] & 0xfffffffb;
    *(undefined1 *)(param_1[0x233] + 0x44) = 1;
    func_004F9554(param_1[0x10c],5,0,1);
    func_004F9554(param_1[0x10d],5,0,1);
    func_004F88A0(param_1,(undefined2 *)param_1[0x23e]);
    return func_004FB024((int)param_1);
  }
  return 0;
}

