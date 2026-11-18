#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_00520FC0(void);
extern int func_0058A7D4(void);
extern int func_0068C690(float *param_1);
extern undefined4 uRam002fa1d4;
extern undefined4 uRam002fa1d8;

// USA 002FA0EC <- EU 002FA0C8 (Ghidra, non-matching)
// GLOBAL UNK_002fa1d4 undefined4
// GLOBAL UNK_002fa1d8 undefined4

void func_002FA0EC(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  float *pfVar3;
  uint uVar4;
  uint *puVar5;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define fStack_38 (*(float *)(albw_frame + 0x8))
  #define fStack_34 (*(float *)(albw_frame + 0xc))
  #define uStack_30 (*(undefined4 *)(albw_frame + 0x10))
  #define uStack_2c (*(undefined4 *)(albw_frame + 0x14))
  #define fStack_28 (*(float *)(albw_frame + 0x18))
  #define fStack_24 (*(float *)(albw_frame + 0x1c))
  #define uStack_20 (*(undefined4 *)(albw_frame + 0x20))
  #define fStack_1c (*(float *)(albw_frame + 0x24))
  #define uStack_18 (*(undefined4 *)(albw_frame + 0x28))
  #define uStack_14 (*(undefined4 *)(albw_frame + 0x2c))
  *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x80;
  func_004FABDC(param_1,1,0xffffffff,0);
  pfVar3 = (float *)func_00520FC0();
  func_00115C70(&fStack_38,pfVar3,(float *)(param_1 + 0x3d0));
  fStack_28 = fStack_38;
  fStack_24 = fStack_34;
  uStack_20 = uStack_30;
  uVar4 = func_0068C690(&fStack_28);
  cVar1 = *(char *)(param_1 + 0xa14);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      *(uint *)(param_1 + 0xa18) = uVar4 + 0x80000000;
      goto LAB_002fa1a0;
    }
    if (cVar1 == '\x02') {
      func_00115C70(&fStack_1c,(float *)(param_1 + 8),(float *)(param_1 + 0x3d0));
      fStack_34 = fStack_1c;
      uStack_30 = uStack_18;
      uStack_2c = uStack_14;
      uVar4 = func_0068C690(&fStack_34);
    }
    else {
      if (cVar1 != '\x03') goto LAB_002fa1a0;
      puVar5 = (uint *)func_0058A7D4();
      uVar4 = func_00111A64(puVar5);
    }
  }
  *(uint *)(param_1 + 0xa18) = uVar4;
LAB_002fa1a0:
  uVar2 = uRam002fa1d4;
  *(undefined1 *)(param_1 + 0xa1c) = 0;
  *(undefined4 *)(param_1 + 0xa10) = uVar2;
  uVar2 = uRam002fa1d8;
  *(undefined4 *)(param_1 + 0x8e4) = 0x3c;
  *(undefined4 *)(param_1 + 0x8e8) = uVar2;
  *(undefined4 *)(param_1 + 0x8e0) = 0;
  return;
}

