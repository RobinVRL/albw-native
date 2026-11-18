#include "ghidra_types.h"

extern int func_004CEA18(int param_1,int param_2,uint param_3);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FC178();
extern int func_00584C14(int param_1,int *param_2);
extern int func_00588BE4(int param_1);
extern int *DAT_004f3014;
extern undefined4 DAT_004f3018;
extern undefined4 DAT_004f301c;
extern int DAT_004f3020;
extern float DAT_004f3024;

// USA 004F2F68 <- EU 004F2F40 (Ghidra, non-matching)
// GLOBAL DAT_004f3014 int *
// GLOBAL DAT_004f3018 undefined4
// GLOBAL DAT_004f301c undefined4
// GLOBAL DAT_004f3020 int
// GLOBAL DAT_004f3024 float

undefined4 func_004F2F68(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r2;
  int *in_r3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  iVar1 = func_00588BE4(param_1);
  if (iVar1 == *DAT_004f3014) {
    func_004FAB60(param_1,0,0);
    local_18 = DAT_004f3020;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x8bc) + 0x14) + 0x10) = DAT_004f3018;
    local_14 = DAT_004f301c;
    uVar2 = func_00584C14(*(int *)(param_1 + 0x40c),&local_18);
    func_004CEA18(*(int *)(param_1 + 0x40c),1,uVar2);
  }
  else {
    func_004FB070(param_1,DAT_004f3024);
    func_004FACD4(param_1,(int *)0x0,in_r2,in_r3);
  }
  *(undefined1 *)(*(int *)(param_1 + 0x8cc) + 0x44) = 0;
  func_004F9554(*(int *)(param_1 + 0x430),0,0,1);
  func_004F9554(*(int *)(param_1 + 0x434),0,0,1);
  return func_004FC178(param_1);
}

