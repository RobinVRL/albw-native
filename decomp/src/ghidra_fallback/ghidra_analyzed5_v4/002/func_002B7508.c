#include "ghidra_types.h"

extern undefined8 func_00114608(uint param_1,uint param_2);
extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern int func_0068C690(float *param_1);
extern int *DAT_002b75b8;
extern float DAT_002b75bc;
extern uint DAT_002b75c0;
extern int DAT_002b75c4;

// USA 002B7508 <- EU 002B74E4 (Ghidra, non-matching)
// GLOBAL DAT_002b75b8 int *
// GLOBAL DAT_002b75bc float
// GLOBAL DAT_002b75c0 uint
// GLOBAL DAT_002b75c4 int

void func_002B7508(int param_1,undefined2 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint extraout_r1;
  float *pfVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define fStack_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define afStack_20 ((float *)(albw_frame + 0x20))
  piVar1 = DAT_002b75b8;
  if (*(char *)(param_1 + 0x936) == '\x01') {
    *(undefined1 *)(param_1 + 0x936) = 2;
    pfVar3 = *(float **)(*piVar1 + 0x1c);
    local_38 = *pfVar3;
    fStack_34 = pfVar3[1];
    fStack_30 = pfVar3[2];
    pfVar3 = *(float **)(*piVar1 + 0x20);
    local_2c = *pfVar3;
    fStack_28 = pfVar3[1];
    fStack_24 = pfVar3[2];
    func_00115D70(&local_2c,&local_2c,DAT_002b75bc);
    func_00115C54(&local_38,&local_38,&local_2c);
    func_00115C70(afStack_20,&local_38,(float *)(param_1 + 0x3d0));
    iVar2 = func_0068C690(afStack_20);
    *(int *)(param_1 + 0xa20) = iVar2;
    if (param_3 == 0) {
      uVar4 = func_00114608(DAT_002b75c0,extraout_r1);
      *(uint *)(param_1 + 0xa20) = (int)uVar4 + iVar2 & 0xe0000000;
    }
    else {
      *(uint *)(param_1 + 0xa20) = iVar2 + 0x20000000U & 0xc0000000;
    }
    *(undefined2 *)(DAT_002b75c4 + param_1) = param_2;
  }
  return;
}

