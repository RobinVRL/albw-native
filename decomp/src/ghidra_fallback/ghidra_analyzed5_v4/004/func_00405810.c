#include "ghidra_types.h"

extern int func_003E6760(undefined4 *param_1);
extern int func_0041E61C(undefined4 *param_1);
extern int func_0041E744(int param_1);
extern int func_0041E7BC(undefined4 param_1);
extern int func_006800B0(byte *param_1,byte *param_2,uint param_3);
extern int func_006806AC(int param_1);

// USA 00405810 <- EU 004057F0 (Ghidra, non-matching)

undefined4 func_00405810(int *param_1,int *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  byte bVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define abStack_78 ((byte *)(albw_frame + 0x8))
  #define local_50 (*(int *)(albw_frame + 0x30))
  #define local_30 (*(int *)(albw_frame + 0x50))
  #define local_2c (*(int *)(albw_frame + 0x54))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define iStack_24 (*(int *)(albw_frame + 0x5c))
  #define local_20 (*(int *)(albw_frame + 0x60))
  #define iStack_1c (*(int *)(albw_frame + 0x64))
  #define local_18 (*(float *)(albw_frame + 0x68))
  func_006806AC((int)abStack_78);
  (**(code **)(*param_1 + 0x68))(param_1,abStack_78);
  local_50 = param_1[0x3f];
  func_0041E61C((undefined4 *)abStack_78);
  func_006800B0(abStack_78,(byte *)param_1[0x29],(uint)*(ushort *)((int)param_1 + 0xce));
  func_0041E744((int)abStack_78);
  bVar1 = *(byte *)(param_1 + 0x3d);
  bVar3 = (bVar1 & 0x10) != 0;
  if ((bVar1 & 0x20) == 0) {
    bVar3 = bVar3 | 2;
  }
  if ((bVar1 & 8) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2,abStack_78,0,bVar3);
  }
  else {
    puVar2 = func_003E6760(&local_30);
    func_003E6760(puVar2 + 1);
    local_30 = param_1[0x3a];
    local_2c = param_1[0x3b];
    local_28 = param_1[0x36];
    iStack_24 = param_1[0x37];
    local_20 = param_1[0x38];
    iStack_1c = param_1[0x39];
    local_18 = ALBW_AS_F32(param_1[0x3c]) * ALBW_AS_F32(param_1[0x2e]);
    (**(code **)(*param_2 + 0x18))(param_2,abStack_78,&local_30,bVar3);
  }
  return func_0041E7BC(abStack_78);
}

