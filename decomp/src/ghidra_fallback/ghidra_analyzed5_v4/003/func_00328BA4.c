#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0032AD60(int param_1);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_004D80EC(float *param_1,float *param_2,int param_3);
extern int func_004FC07C(int param_1,int param_2,uint param_3,int param_4);
extern int func_0051D2F4(int *param_1,int param_2,int param_3,int param_4,float fparam_0);
extern int func_0058A8F0(int param_1);
extern undefined8 func_0058AB74(int param_1);
extern int func_00665670(undefined4 *param_1,undefined1 param_2);
extern undefined DAT_00328dc4;
extern int DAT_00328de4;
extern int *DAT_00328de8;
extern int DAT_00328dec;
extern float DAT_00328df0;
extern int DAT_00328df4;
extern char s_cf_00328dc8[];
extern undefined4 _DAT_00328dc4;

// USA 00328BA4 <- EU 00328B80 (Ghidra, non-matching)
// GLOBAL DAT_00328dc4 undefined
// GLOBAL DAT_00328de4 int
// GLOBAL DAT_00328de8 int *
// GLOBAL DAT_00328dec int
// GLOBAL DAT_00328df0 float
// GLOBAL DAT_00328df4 int

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00328BA4(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(char * *)(albw_frame + 0xc))
  uVar4 = func_0058AB74((int)param_1);
  iVar1 = (int)uVar4;
  if (iVar1 == 0) {
    iVar1 = func_0058A8F0((int)param_1);
    if (iVar1 != 0) {
      func_004FC07C((int)param_1,1,1,0);
      uVar2 = func_004D80EC((float *)(param_1 + 0xf4),(float *)(param_1 + 0x309),param_1[0xfa]);
      param_1[0x310] = uVar2;
      func_004D80A4((float *)(param_1 + 0xf7),uVar2,ALBW_AS_F32(_DAT_00328dc4));
      local_24 = s_cf_00328dc8;
      local_28 = DAT_00328de4;
      return func_00150A84(param_1,&local_28,0);
    }
  }
  else if (iVar1 == 1) {
    func_0051D2F4(param_1 + 0xfa,param_1[0x310],DAT_00328dec,*DAT_00328de8,DAT_00328df0);
    iVar3 = func_0058A8F0((int)param_1);
    iVar1 = DAT_00328df4;
    if (iVar3 != 0) {
      param_1[0xf7] = DAT_00328df4;
      param_1[0xf8] = iVar1;
      param_1[0xf9] = iVar1;
      return func_004FC07C((int)param_1,2,1,0);
    }
  }
  else if (iVar1 == 2) {
    iVar1 = func_0058A8F0((int)param_1);
    if (iVar1 != 0) {
      return func_004FC07C((int)param_1,3,8,0);
    }
  }
  else {
    if (iVar1 != 3) {
      func_004FC07C((int)param_1,3,8,0);
    }
    param_1[0x318] = param_1[0x318] + 1;
    iVar1 = param_1[0x319];
    param_1[0x319] = iVar1 + 1U;
    if (iVar1 + 1U < 9) {
      iVar1 = func_0032AD60((int)param_1);
      if (iVar1 != 0) {
        func_004FC07C((int)param_1,0,0,0);
        param_1[0x318] = 0;
      }
    }
    else if (((char)param_1[0x325] == '\0') ||
            ((*(char *)((int)param_1 + 0xc96) == '\0' && ((short)param_1[0x142] < 0x61)))) {
      *(undefined1 *)(param_1 + 0x324) = 1;
    }
    else {
      func_00665670(param_1 + 0x2ea,0x10);
    }
    if ((int)(short)param_1[0x142] <= param_1[0x31a]) {
      if (((char)param_1[0x325] != '\0') &&
         ((*(char *)((int)param_1 + 0xc96) != '\0' || (0x60 < (short)param_1[0x142])))) {
        return func_00665670(param_1 + 0x2ea,0x10);
      }
      *(undefined1 *)(param_1 + 0x324) = 1;
    }
  }
  return 0;
}

