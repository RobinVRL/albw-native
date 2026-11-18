#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00115C70(float *param_1,float *param_2,float *param_3);
extern int func_00115CE4(float *param_1,float *param_2,float *param_3);
extern int func_00115D70(float *param_1,float *param_2,float fparam_0);
extern float func_00115DC8(float *param_1);

// USA 004352FC <- EU 004352DC (Ghidra, non-matching)

void func_004352FC(int param_1,int param_2,int param_3,float *param_4)

{
  float *pfVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(float *)(albw_frame + 0x0))
  #define local_4c (*(float *)(albw_frame + 0x4))
  #define local_48 (*(float *)(albw_frame + 0x8))
  #define local_44 (*(float *)(albw_frame + 0xc))
  #define fStack_40 (*(float *)(albw_frame + 0x10))
  #define fStack_3c (*(float *)(albw_frame + 0x14))
  #define afStack_38 ((float *)(albw_frame + 0x18))
  #define local_2c (*(float *)(albw_frame + 0x24))
  #define local_28 (*(float *)(albw_frame + 0x28))
  #define local_24 (*(float *)(albw_frame + 0x2c))
  *(undefined2 *)(param_1 + 100) = *(undefined2 *)(param_2 + 100);
  fVar2 = *(float *)(param_2 + 0x58);
  *(float *)(param_1 + 0x58) = fVar2;
  *(float *)(param_1 + 0x5c) = fVar2 * fVar2;
  if ((param_3 != 0) && ((*(byte *)(param_3 + 0xa8) & 6) != 0)) {
    func_00115CE4((float *)(param_1 + 0x1c),(float *)(param_3 + 0x3c),(float *)(param_2 + 0x1c));
    func_00115C54((float *)(param_1 + 0x1c),(float *)(param_1 + 0x1c),param_4);
    pfVar1 = (float *)(param_1 + 0x28);
    if ((*(byte *)(param_3 + 0xa8) & 6) == 0) {
      *pfVar1 = *(float *)(param_2 + 0x28);
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
    }
    else {
      func_00115CE4(pfVar1,(float *)(param_3 + 0x84),(float *)(param_2 + 0x28));
      func_00115DC8(pfVar1);
    }
    pfVar1 = (float *)(param_1 + 0x34);
    if ((*(byte *)(param_3 + 0xa8) & 6) == 0) {
      *pfVar1 = *(float *)(param_2 + 0x34);
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
    }
    else {
      func_00115CE4(pfVar1,(float *)(param_3 + 0x84),(float *)(param_2 + 0x34));
      func_00115DC8(pfVar1);
    }
    pfVar1 = (float *)(param_1 + 0x40);
    if ((*(byte *)(param_3 + 0xa8) & 6) == 0) {
      *pfVar1 = *(float *)(param_2 + 0x40);
      *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    }
    else {
      func_00115CE4(pfVar1,(float *)(param_3 + 0x84),(float *)(param_2 + 0x40));
      func_00115DC8(pfVar1);
    }
    pfVar1 = (float *)(param_1 + 0x4c);
    if ((*(byte *)(param_3 + 0xa8) & 6) == 0) {
      *pfVar1 = *(float *)(param_2 + 0x4c);
      *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
    }
    else {
      func_00115CE4(pfVar1,(float *)(param_3 + 0x84),(float *)(param_2 + 0x4c));
      func_00115DC8(pfVar1);
    }
    if ((*(byte *)(param_3 + 0xa8) & 2) == 0) {
      fVar2 = *(float *)(param_3 + 4) * *(float *)(param_2 + 0x60);
    }
    else {
      func_00115D70(&local_2c,(float *)(param_2 + 0x4c),*(float *)(param_2 + 0x60));
      local_44 = local_2c;
      fStack_40 = local_28;
      fStack_3c = local_24;
      func_00115C54(&local_2c,&local_44,(float *)(param_2 + 0x1c));
      local_50 = local_2c;
      local_4c = local_28;
      local_48 = local_24;
      func_00115CE4(afStack_38,(float *)(param_3 + 0x3c),&local_50);
      func_00115C54(afStack_38,afStack_38,param_4);
      func_00115C70(&local_2c,afStack_38,(float *)(param_1 + 0x1c));
      fVar2 = *(float *)(param_1 + 0x4c) * local_2c + *(float *)(param_1 + 0x50) * local_28 +
              *(float *)(param_1 + 0x54) * local_24;
    }
    *(float *)(param_1 + 0x60) = fVar2;
    return;
  }
  func_00115C54((float *)(param_1 + 0x1c),param_4,(float *)(param_2 + 0x1c));
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_2 + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_2 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
  return;
}

