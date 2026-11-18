#include "ghidra_types.h"

extern int func_0010BAB4(undefined4 param_1);
extern int func_0010DA7C(undefined4 *param_1,undefined4 param_2,int param_3);
extern int func_001119F4(undefined4 *param_1,undefined4 *param_2);
extern int func_001215C0(int param_1);
extern int func_00152078(undefined4 *param_1);
extern int func_001E8DA8(undefined4 *param_1);
extern int func_00351CF8(undefined4 *param_1);
extern int func_00498564(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3);
extern undefined4 DAT_00121db0;
extern undefined4 DAT_00121db4;
extern undefined4 DAT_00121db8;
extern undefined4 *DAT_00121dbc;
extern undefined4 DAT_00121dc0;
extern undefined4 DAT_00121dc4;
extern undefined4 DAT_00121dc8;
extern undefined4 DAT_00121dcc;

// USA 00121C24 <- EU 00121C24 (Ghidra, non-matching)
// GLOBAL DAT_00121db0 undefined4
// GLOBAL DAT_00121db4 undefined4
// GLOBAL DAT_00121db8 undefined4
// GLOBAL DAT_00121dbc undefined4 *
// GLOBAL DAT_00121dc0 undefined4
// GLOBAL DAT_00121dc4 undefined4
// GLOBAL DAT_00121dc8 undefined4
// GLOBAL DAT_00121dcc undefined4

undefined4 *
func_00121C24(undefined4 *param_1,float fparam_0,float fparam_1,float fparam_2,float fparam_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar2 = func_0010DA7C(param_1,0,3);
  *puVar2 = DAT_00121db0;
  puVar3 = func_00498564(puVar2 + 4,fparam_0,fparam_1,fparam_2,fparam_3);
  func_00152078(puVar3 + 0x2e);
  uVar6 = DAT_00121db4;
  puVar3[0x35] = DAT_00121db4;
  puVar3[0x36] = uVar6;
  func_00152078(puVar3 + 0x37);
  puVar3[0x3e] = 0;
  puVar3[0x3f] = 0xffffffff;
  puVar3[0x40] = 0;
  puVar2 = DAT_00121dbc;
  puVar3[0x41] = DAT_00121db8;
  func_001119F4(puVar3 + 0x42,puVar2);
  uVar1 = DAT_00121dc4;
  puVar3[0x41] = DAT_00121dc0;
  puVar3[0x4e] = uVar6;
  puVar3[0x4f] = uVar6;
  puVar3[0x50] = uVar1;
  puVar3[0x51] = uVar6;
  puVar3[0x52] = uVar6;
  puVar3[0x53] = uVar6;
  uVar1 = DAT_00121dc8;
  puVar3[0x54] = uVar6;
  puVar3[0x55] = uVar1;
  puVar3[0x56] = uVar6;
  puVar2 = (undefined4 *)func_0010BAB4(0x44);
  iVar4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar4 = func_00351CF8(puVar2);
  }
  puVar3[0x5d] = iVar4;
  puVar3[0x5e] = 0;
  puVar3[0x5f] = 0;
  puVar3[0x60] = 0;
  puVar3[0x61] = 0;
  puVar3[0x62] = 0;
  puVar3[99] = 0;
  puVar3[100] = 0;
  puVar3[0x65] = 0;
  puVar3[0x66] = 0;
  uVar6 = DAT_00121dcc;
  *(undefined1 *)(puVar3 + 0x67) = 0;
  puVar5 = (undefined4 *)func_0010BAB4(uVar6);
  puVar2 = (undefined4 *)0x0;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = func_001E8DA8(puVar5);
  }
  puVar3[0x6e] = puVar2;
  puVar3[0x6f] = 0;
  puVar3[0x70] = 0;
  puVar3[0x71] = 0;
  func_001215C0((int)(puVar3 + -4));
  puVar3[0x57] = puVar3[0x68];
  puVar3[0x58] = puVar3[0x69];
  puVar3[0x59] = puVar3[0x6a];
  puVar3[0x5a] = puVar3[0x6b];
  puVar3[0x5b] = puVar3[0x6c];
  puVar3[0x5c] = puVar3[0x6d];
  puVar3[0x4e] = puVar3[0x57];
  puVar3[0x4f] = puVar3[0x58];
  puVar3[0x50] = puVar3[0x59];
  puVar3[0x51] = puVar3[0x5a];
  puVar3[0x52] = puVar3[0x5b];
  puVar3[0x53] = puVar3[0x5c];
  return puVar3 + -4;
}

