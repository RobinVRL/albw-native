#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_002917A4(int param_1,float *param_2,undefined4 param_3,float fparam_0);
extern int func_00291A38(int param_1,float *param_2,float fparam_0);
extern int func_004FABDC(int param_1,undefined4 param_2,uint param_3,int param_4);
extern int DAT_004fdfb8;
extern float DAT_004fdfbc;
extern int *DAT_004fdfc0;
extern int DAT_004fdfc4;
extern int DAT_004fdfc8;
extern char s_SE_PL_Sword_HIT_EN_BOUNCE_004fdfcc[];

// USA 004FDE70 <- EU 004FDE48 (Ghidra, non-matching)
// GLOBAL DAT_004fdfb8 int
// GLOBAL DAT_004fdfbc float
// GLOBAL DAT_004fdfc0 int *
// GLOBAL DAT_004fdfc4 int
// GLOBAL DAT_004fdfc8 int
// GLOBAL s_SE_PL_Sword_HIT_EN_BOUNCE_004fdfcc string

void func_004FDE70(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  float fVar6;
  int iVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  iVar7 = DAT_004fdfb8;
  cVar1 = *(char *)(param_3 + 0x24);
  if ((param_2 & 0xff) - 0x15 < 8) {
    param_1[0xf7] = DAT_004fdfb8;
    param_1[0xf8] = iVar7;
    param_1[0xf9] = iVar7;
    param_1[0x13f] = 0;
    func_004FABDC((int)param_1,2,0xffffffff,0);
  }
  else {
    uVar3 = param_2 & 0xff;
    bVar5 = 0x1d < uVar3;
    bVar4 = uVar3 != 0x1e;
    if (bVar4) {
      uVar3 = uVar3 - 0xe;
      bVar5 = 2 < uVar3;
    }
    if (((!bVar5 || (!bVar4 || uVar3 == 3)) || (param_2 == 4 || param_2 == 3)) ||
       ((cVar1 == '\a' || cVar1 == '\0') || cVar1 == '\x06')) {
      func_004FABDC((int)param_1,1,0xffffffff,0);
      param_1[0xf7] = iVar7;
      param_1[0xf8] = iVar7;
      param_1[0xf9] = iVar7;
      param_1[0x13f] = 0;
    }
  }
  iVar2 = DAT_004fdfc4;
  fVar6 = DAT_004fdfbc;
  if (cVar1 != '\x05') {
    if (cVar1 == '\b') {
      if (0 < *(short *)(DAT_004fdfc8 + (int)param_1)) {
        func_00291A38(*DAT_004fdfc0,param_1 + 0xf4,DAT_004fdfbc);
        local_1c = s_SE_PL_Sword_HIT_EN_BOUNCE_004fdfcc;
        local_20 = iVar2;
        func_00150A84(param_1,&local_20,0);
        return;
      }
    }
    else if (cVar1 == '\v' || cVar1 == '\f') {
      param_1[0xf7] = iVar7;
      param_1[0xf8] = iVar7;
      param_1[0xf9] = iVar7;
      param_1[0x13f] = 0;
    }
    return;
  }
  func_002917A4(*DAT_004fdfc0,param_1 + 0xf4,0,DAT_004fdfbc);
  local_1c = s_SE_PL_Sword_HIT_EN_BOUNCE_004fdfcc;
  local_20 = iVar2;
  func_00150A84(param_1,&local_20,0);
  return;
}

