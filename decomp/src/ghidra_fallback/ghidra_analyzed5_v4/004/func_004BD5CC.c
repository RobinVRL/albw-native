#include "ghidra_types.h"

extern int func_001E6778(int *param_1,int param_2,uint param_3,undefined1 param_4,undefined1 param_5, float fparam_0);
extern undefined4 func_004A7F00(int param_1,int param_2,uint param_3);
extern int func_004A8304(undefined4 param_1,int param_2);
extern int DAT_004bd6b4;
extern int DAT_004bd6b8;
extern int *DAT_004bd6bc;
extern int DAT_004bd6c0;

// USA 004BD5CC <- EU 004BD5A4 (Ghidra, non-matching)
// GLOBAL DAT_004bd6b4 int
// GLOBAL DAT_004bd6b8 int
// GLOBAL DAT_004bd6bc int *
// GLOBAL DAT_004bd6c0 int

void func_004BD5CC(int *param_1,uint param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  float fparam_0;
  int iVar4;
  
  iVar4 = DAT_004bd6b8;
  cVar1 = (char)param_1[0x216];
  uVar3 = param_2;
  if (cVar1 == '\x02') {
    uVar3 = (uint)*(byte *)((int)param_1 + 0x859);
  }
  if ((cVar1 != '\x02' || uVar3 != param_2) || (*(char *)(DAT_004bd6b4 + (int)param_1) != param_3))
  {
    *(char *)((int)param_1 + 0x859) = (char)param_2;
    param_1[0xeb] = iVar4;
    *(char *)(param_1 + 0x246) = (char)param_3;
    piVar2 = DAT_004bd6bc;
    if (*(char *)((int)param_1 + 0x85a) == '\x03' && cVar1 == '\0') {
      func_004A8304(*DAT_004bd6bc,param_1[0x21b]);
      func_004A7F00(*piVar2,param_1[0x21b],3);
    }
    iVar4 = DAT_004bd6c0;
    param_1[0x20d] = DAT_004bd6c0;
    if ((uint)*(byte *)((int)param_1 + 0x852) != (int)(char)param_1[0x217]) {
      (**(code **)(*param_1 + 0xac))(param_1,*(undefined1 *)((int)param_1 + 0x856),0xffffffff);
    }
    if ((uint)*(byte *)((int)param_1 + 0x852) == (int)(char)param_1[0x217]) {
      fparam_0 = ALBW_AS_F32(param_1[0x22e]);
    }
    else {
      fparam_0 = ALBW_AS_F32(param_1[0x22d]);
    }
    func_001E6778(param_1 + 0x1f1,(int)param_1,param_2,(char)param_3,1,fparam_0);
    *(byte *)((int)param_1 + 0x7eb) = ~(byte)((uint)param_1[0x22b] >> 0xd) & 1;
    param_1[0xf7] = iVar4;
    param_1[0xf8] = iVar4;
    param_1[0xf9] = iVar4;
    *(undefined1 *)(param_1 + 0x216) = 1;
  }
  return;
}

