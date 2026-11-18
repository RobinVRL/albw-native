#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_004FAB60(int param_1,undefined4 param_2,int param_3);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int func_004FB070(int param_1,float fparam_0);
extern int func_004FB4E0(int param_1,float fparam_0);
extern undefined8 func_0058AB74(int param_1);
extern float fRam002068a0;
extern float fRam002068a4;
extern int DAT_0020689c;
extern char s_SE_DeadRock_DAMAGE_00206888[];

// USA 00206780 <- EU 00206780 (Ghidra, non-matching)
// GLOBAL DAT_0020689c int
// GLOBAL UNK_002068a0 float
// GLOBAL UNK_002068a4 float
// GLOBAL s_SE_DeadRock_DAMAGE_00206888 string

void func_00206780(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  undefined8 uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  if (param_1[0xe8] != param_1[0x247]) {
    uVar3 = (uint)*(byte *)(param_1[0x144] + 4);
    if (uVar3 == 0xf) {
      cVar1 = *(char *)(param_3 + 0x24);
      if ((cVar1 != -1 && cVar1 != '\x1f') || (*(char *)(param_3 + 0x26) == '\f')) {
        local_1c = s_SE_DeadRock_DAMAGE_00206888;
        local_20 = DAT_0020689c;
        func_00150A84(param_1,&local_20,0);
        if (cVar1 == '\x05') {
          *(undefined1 *)(param_1 + 0x246) = 1;
        }
      }
    }
    uVar6 = func_0058AB74((int)param_1);
    uVar2 = (uint)uVar6;
    bVar4 = uVar2 != 4;
    if (bVar4) {
      uVar2 = uVar3 - 5;
    }
    if (((3 < uVar2 && (bVar4 && uVar2 != 4)) && (uVar3 != 0 && uVar3 != 2)) && (uVar3 != 10)) {
      func_004FABDC((int)param_1,4,0xffffffff,0);
      fVar5 = fRam002068a0;
      func_004FB4E0((int)param_1,fRam002068a0);
      func_004FAB60((int)param_1,1,0);
      func_004FB070((int)param_1,fRam002068a4);
      if (param_1[0x106] != 0) {
        *(float *)(*(int *)(param_1[0x106] + 0x14) + 0x10) = fVar5;
      }
      return;
    }
  }
  return;
}

