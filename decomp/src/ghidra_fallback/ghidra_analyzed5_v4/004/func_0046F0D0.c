#include "ghidra_types.h"

extern int func_0031B9C8(undefined4 param_1);
extern int func_00367EE8(int param_1,int param_2);
extern int func_00367F80(int param_1,uint param_2,uint param_3,uint param_4);
extern int func_00367FB4(int param_1,undefined2 param_2);
extern int func_00368074(int param_1,int param_2);
extern int func_00368398(int param_1,int *param_2);
extern int func_00368838(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
extern int func_003694B4(int param_1,int param_2,int param_3);
extern void func_004278A0(int param_1,uint param_2);
extern int func_004279E4(int param_1,uint param_2);
extern int func_00427A84(int param_1,uint param_2);
extern int func_00427AF0(int param_1,float fparam_0);
extern int func_00427B38(int param_1,int param_2,undefined4 param_3,int *param_4);
extern int func_00521608(int param_1);
extern int func_00548798(int *param_1);
extern int func_00584428(int param_1);
extern int *DAT_0046f2dc;
extern int DAT_0046f2e0;
extern float DAT_0046f2e4;

// USA 0046F0D0 <- EU 0046F0A8 (Ghidra, non-matching)
// GLOBAL DAT_0046f2dc int *
// GLOBAL DAT_0046f2e0 int
// GLOBAL DAT_0046f2e4 float

undefined4 func_0046F0D0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(uint * *)(albw_frame + 0x4))
  piVar5 = DAT_0046f2dc;
  iVar2 = func_00521608(*DAT_0046f2dc);
  if (iVar2 == 0) {
    return 0;
  }
  puVar3 = (uint *)func_00584428(*piVar5);
  local_1c = puVar3 + 1;
  local_20 = DAT_0046f2e0;
  func_00368398(*(int *)(param_1 + 0xa4),&local_20);
  func_00368074(*(int *)(param_1 + 0xa4),(int)(puVar3 + 7));
  func_00367FB4(*(int *)(param_1 + 0xa4),(ushort)(*puVar3 >> 0x1a));
  iVar2 = func_00548798((int *)puVar3);
  func_003694B4(*(int *)(param_1 + 0xa4),iVar2,0);
  func_00367EE8(*(int *)(param_1 + 0xa4),*puVar3 & 0x1f);
  func_00367F80(*(int *)(param_1 + 0xa4),0,0,((*puVar3 << 0x19) >> 0x1e) + 2);
  if ((*puVar3 & 0x180) == 0) {
    uVar4 = 0x20;
  }
  else {
    uVar4 = 1;
  }
  func_00367F80(*(int *)(param_1 + 0xa4),1,uVar4,((*puVar3 << 0x17) >> 0x1e) + 1);
  func_00367F80(*(int *)(param_1 + 0xa4),2,2,((*puVar3 << 0x15) >> 0x1e) + 2);
  uVar4 = func_0031B9C8((*puVar3 << 0xc) >> 0x1b);
  func_00367F80(*(int *)(param_1 + 0xa4),4,uVar4,((*puVar3 << 0x13) >> 0x1e) + 1);
  uVar4 = func_0031B9C8((*puVar3 << 7) >> 0x1b);
  func_00367F80(*(int *)(param_1 + 0xa4),3,uVar4,((*puVar3 << 0x11) >> 0x1e) + 1);
  uVar4 = (*puVar3 & 0x2000000) >> 0x19;
  piVar5 = (int *)((puVar3[0xd] & 0x40000000) >> 0x1e);
  func_00368838(*(int *)(param_1 + 0xa4),puVar3[0xd] >> 0x1f,uVar4,piVar5);
  iVar2 = *(int *)(param_1 + 0xa8);
  if (iVar2 != 0) {
    piVar5 = (int *)(uint)*(byte *)(iVar2 + 0x44);
    uVar4 = *(uint *)(param_1 + 0x1c);
    uVar6 = (uint)piVar5 & 1;
    uVar1 = (puVar3[0xd] & 0x20000000) >> 0x1d;
    if ((*(byte *)(iVar2 + 0x44) & 1) != 0) {
      uVar6 = 1;
    }
    if (uVar6 != uVar1) {
      piVar5 = (int *)((uint)piVar5 & 0xfe | uVar1);
      *(char *)(iVar2 + 0x44) = (char)piVar5;
      if (uVar1 != 0) {
        *(byte *)(uVar4 + 0x70) = *(byte *)(uVar4 + 0x70) | 2;
      }
    }
  }
  func_00427A84(*(int *)(param_1 + 0x74),(*puVar3 << 0x15) >> 0x1e);
  func_004279E4(*(int *)(param_1 + 0x74),(*puVar3 << 0x17) >> 0x1e);
  func_004278A0(*(int *)(param_1 + 0x74),(*puVar3 << 0x19) >> 0x1e);
  func_00427B38(*(int *)(param_1 + 0x74),(*puVar3 & 0x2000000) >> 0x19,uVar4,piVar5);
  return func_00427AF0(*(int *)(param_1 + 0x74),DAT_0046f2e4);
}

