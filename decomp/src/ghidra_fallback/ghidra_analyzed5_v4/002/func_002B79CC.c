#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002b7a54;
extern float DAT_002b7a58;
extern uint DAT_002b7a5c;
extern int DAT_002b7a60;

// USA 002B79CC <- EU 002B79A8 (Ghidra, non-matching)
// GLOBAL DAT_002b7a54 int *
// GLOBAL DAT_002b7a58 float
// GLOBAL DAT_002b7a5c uint
// GLOBAL DAT_002b7a60 int

void func_002B79CC(int param_1,undefined2 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint extraout_r1;
  float *pfVar4;
  undefined8 uVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define afStack_20 ((float *)(albw_frame + 0x20))
  piVar1 = DAT_002b7a54;
  if (*(char *)(param_1 + 0x936) == '\x01') {
    *(undefined1 *)(param_1 + 0x936) = 3;
    pfVar4 = *(float **)(*piVar1 + 0x1c);
    local_38 = *pfVar4;
    fStack_34 = pfVar4[1];
    fStack_30 = pfVar4[2];
    pfVar4 = *(float **)(*piVar1 + 0x20);
    local_2c = *pfVar4;
    fStack_28 = pfVar4[1];
    fStack_24 = pfVar4[2];
    func_00115D70(&local_2c,&local_2c,DAT_002b7a58);
    func_00115C54(&local_38,&local_38,&local_2c);
    func_00115C70(afStack_20,&local_38,(float *)(param_1 + 0x3d0));
    iVar3 = func_0068C690(afStack_20);
    uVar5 = func_00114608(DAT_002b7a5c,extraout_r1);
    iVar2 = DAT_002b7a60;
    *(uint *)(param_1 + 0xa20) = (int)uVar5 + iVar3 & 0xe0000000;
    *(undefined2 *)(iVar2 + param_1) = param_2;
  }
  return;
}

