// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_0010A464(undefined4 *param_1);
extern int func_00111A64(uint *param_1);
extern int func_0025B7D8(int param_1,uint param_2);
extern int func_0025B874(undefined4 *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004EA868(int param_1,int *param_2,undefined4 *param_3,int param_4,float fparam_0);
extern int func_004EC238(int param_1,int *param_2);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern undefined4 uRam004ebfd0;
extern int *piRam004ebfcc;
extern int DAT_004ebfc4;
extern int DAT_004ebfc8;

// USA 004EBEB0 <- EU 004EBE88 (Ghidra, non-matching)
// GLOBAL DAT_004ebfc4 int
// GLOBAL DAT_004ebfc8 int
// GLOBAL UNK_004ebfcc int *
// GLOBAL UNK_004ebfd0 uint

int func_004EBEB0(int param_1,float fparam_0)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r3;
  float fparam_0_00;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0xe0];
  #define local_d8 (*(int *)(albw_frame + 0x8))
  #define local_d4 (*(uint * *)(albw_frame + 0xc))
  #define auStack_88 ((undefined4 *)(albw_frame + 0x58))
  #define local_28 (*(int *)(albw_frame + 0xb8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xbc))
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  iVar5 = 0;
  if (*(int *)(param_1 + 0x5c) != 0) {
    local_24 = *(undefined4 *)(DAT_004ebfc4 + 0x20);
    local_28 = DAT_004ebfc8;
    func_00688F58(&local_d8,&local_28);
    func_004EC238(param_1,&local_d8);
    (**(code **)(local_d8 + 8))(&local_d8);
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar3 = func_0056D3E4((int)puVar2,local_d4);
    piVar1 = piRam004ebfcc;
    uVar4 = func_00111A64((uint *)(*piRam004ebfcc + 0x660));
    fparam_0_00 = ALBW_AS_F32(uVar6);
    iVar5 = (int)((ulonglong)uVar4 * 3 >> 0x20);
    uVar4 = uVar3 + iVar5;
    if (uVar4 == *(uint *)(param_1 + 0x70)) {
      do {
        uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
        fparam_0_00 = ALBW_AS_F32(uVar6);
        iVar5 = (int)((ulonglong)uVar4 * 3 >> 0x20);
        uVar4 = uVar3 + iVar5;
      } while (uVar4 == *(uint *)(param_1 + 0x70));
    }
    *(uint *)(param_1 + 0x70) = uVar3 + iVar5;
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    iVar5 = func_0056CAD4((int)puVar2,uVar3 + iVar5);
    func_004994B0((int)&local_d8,iVar5,uVar4,in_r3);
    func_0010A464(auStack_88);
    func_0025B7D8((int)auStack_88,uRam004ebfd0);
    iVar5 = func_004EA868(param_1,&local_d8,auStack_88,1,fparam_0_00);
    func_0025B874(auStack_88);
  }
  return iVar5;
}

