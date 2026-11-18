#include "ghidra_types.h"

extern int func_002E28B8(uint *param_1,uint param_2,uint param_3);
extern int func_0031B9C8(undefined4 param_1);
extern int func_00367EE8(int param_1,int param_2);
extern int func_00367F80(int param_1,uint param_2,uint param_3,uint param_4);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_003684B8(int param_1,uint param_2,uint param_3);
extern int func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_00368ACC(int param_1);
extern int func_00368B50(int param_1,uint param_2,uint param_3);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern void func_004278A0(int param_1,uint param_2);
extern int func_004279E4(int param_1,uint param_2);
extern int func_00427A84(int param_1,uint param_2);
extern int func_00427B38(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_00548798(int *param_1);
extern int DAT_00470850;

// USA 0047061C <- EU 004705F4 (Ghidra, non-matching)
// GLOBAL DAT_00470850 int

undefined4 func_0047061C(int param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0xe4) == 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0xed) == '\0') {
    puVar2 = (uint *)(*(int *)(param_1 + 0xe4) + 4);
    func_002E28B8(puVar2,0,(*puVar2 << 7) >> 0x1b);
  }
  func_00368ACC(*(int *)(param_1 + 0xe0));
  func_00368B50(*(int *)(param_1 + 0xe0),1,(int)*(char *)(param_1 + 0xed));
  iVar3 = *(int *)(param_1 + 0xe4);
  puVar2 = (uint *)(iVar3 + 4);
  if (param_2 != 0) {
    local_1c = iVar3 + 8;
    local_20 = DAT_00470850;
    func_00368398(*(int *)(param_1 + 0xe0),&local_20);
    func_00367FB4(*(int *)(param_1 + 0xe0),(ushort)(*puVar2 >> 0x1a));
    func_00368074(*(int *)(param_1 + 0xe0),iVar3 + 0x20);
    func_00367EE8(*(int *)(param_1 + 0xe0),*puVar2 & 0x1f);
    func_00367F80(*(int *)(param_1 + 0xe0),0,0,((*puVar2 << 0x19) >> 0x1e) + 2);
    if ((*puVar2 & 0x180) == 0) {
      uVar5 = 0x20;
    }
    else {
      uVar5 = 1;
    }
    func_00367F80(*(int *)(param_1 + 0xe0),1,uVar5,((*puVar2 << 0x17) >> 0x1e) + 1);
    func_00367F80(*(int *)(param_1 + 0xe0),2,2,((*puVar2 << 0x15) >> 0x1e) + 2);
  }
  iVar4 = func_00548798((int *)puVar2);
  func_003694B4(*(int *)(param_1 + 0xe0),iVar4,0);
  if (*(char *)(param_1 + 0xed) == '\0') {
    uVar5 = 0x20;
  }
  else {
    uVar5 = func_0031B9C8((*puVar2 << 0xc) >> 0x1b);
  }
  func_003684B8(*(int *)(param_1 + 0xe0),1,uVar5);
  uVar5 = func_0031B9C8((*puVar2 << 7) >> 0x1b);
  func_003684B8(*(int *)(param_1 + 0xe0),0,uVar5);
  piVar6 = (int *)((*(uint *)(iVar3 + 0x38) & 0x40000000) >> 0x1e);
  uVar5 = (*puVar2 & 0x2000000) >> 0x19;
  func_00368838(*(int *)(param_1 + 0xe0),*(uint *)(iVar3 + 0x38) >> 0x1f,uVar5,piVar6);
  iVar4 = *(int *)(param_1 + 0xe8);
  if (iVar4 != 0) {
    piVar6 = (int *)(uint)*(byte *)(iVar4 + 0x44);
    uVar5 = *(uint *)(param_1 + 0x1c);
    uVar7 = (uint)piVar6 & 1;
    uVar1 = (*(uint *)(iVar3 + 0x38) & 0x20000000) >> 0x1d;
    if ((*(byte *)(iVar4 + 0x44) & 1) != 0) {
      uVar7 = 1;
    }
    if (uVar7 != uVar1) {
      piVar6 = (int *)((uint)piVar6 & 0xfe | uVar1);
      *(char *)(iVar4 + 0x44) = (char)piVar6;
      if (uVar1 != 0) {
        *(byte *)(uVar5 + 0x70) = *(byte *)(uVar5 + 0x70) | 2;
      }
    }
  }
  func_00427A84(*(int *)(param_1 + 0x98),(*puVar2 << 0x15) >> 0x1e);
  func_004279E4(*(int *)(param_1 + 0x98),(*puVar2 << 0x17) >> 0x1e);
  func_004278A0(*(int *)(param_1 + 0x98),(*puVar2 << 0x19) >> 0x1e);
  return func_00427B38(*(int *)(param_1 + 0x98),(*puVar2 & 0x2000000) >> 0x19,uVar5,piVar6);
}

