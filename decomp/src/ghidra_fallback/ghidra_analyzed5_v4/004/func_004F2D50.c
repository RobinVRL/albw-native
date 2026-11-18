#include "ghidra_types.h"

extern int func_004F32A4(int param_1,uint param_2);
extern int func_004F88A0(int *param_1,undefined2 *param_2);
extern int func_004F9554(int param_1,ushort param_2,ushort param_3,int param_4);
extern int func_004FACD4(int param_1,int *param_2,undefined4 param_3,int *param_4);
extern int func_004FB024(int param_1);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_00588BE4(int param_1);
extern int DAT_004f2dec;
extern int *DAT_004f2df0;
extern float DAT_004f2df4;
extern int *DAT_004f2df8;

// USA 004F2D50 <- EU 004F2D28 (Ghidra, non-matching)
// GLOBAL DAT_004f2dec int
// GLOBAL DAT_004f2df0 int *
// GLOBAL DAT_004f2df4 float
// GLOBAL DAT_004f2df8 int *

undefined4 func_004F2D50(int *param_1)

{
  int iVar1;
  undefined4 in_r2;
  int *in_r3;
  ushort uVar2;
  
  iVar1 = DAT_004f2dec;
  param_1[0xf7] = DAT_004f2dec;
  param_1[0xf8] = iVar1;
  param_1[0xf9] = iVar1;
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_004f2df0) {
    func_004F32A4((int)param_1,1);
  }
  else {
    func_004FB070((int)param_1,DAT_004f2df4);
    func_004FACD4((int)param_1,(int *)0x0,in_r2,in_r3);
  }
  param_1[0x167] = param_1[0x167] & 0xfffffcfb;
  func_004F88A0(param_1,(undefined2 *)param_1[0x23e]);
  iVar1 = func_00588BE4((int)param_1);
  if (iVar1 == *DAT_004f2df8) {
    uVar2 = 9;
  }
  else {
    uVar2 = 5;
  }
  func_004F9554(param_1[0x10c],uVar2,0,1);
  func_004F9554(param_1[0x10d],uVar2,0,1);
  return func_004FB024((int)param_1);
}

