#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004EA868(int param_1,int *param_2,undefined4 *param_3,int param_4,float fparam_0);
extern int func_004EBC10(int param_1,int *param_2);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00688F58(undefined4 *param_1,int *param_2);
extern int *piRam004eb87c;
extern int DAT_004eb874;
extern int DAT_004eb878;

// USA 004EB78C <- EU 004EB764 (Ghidra, non-matching)
// GLOBAL DAT_004eb874 int
// GLOBAL DAT_004eb878 int
// GLOBAL UNK_004eb87c int *

void func_004EB78C(int param_1,float fparam_0)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r3;
  float fparam_0_00;
  ulonglong uVar6;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(uint * *)(albw_frame + 0xc))
  #define iStack_28 (*(int *)(albw_frame + 0x58))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0x5c))
  uVar6 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (*(int *)(param_1 + 0x58) != 0) {
    uStack_24 = *(undefined4 *)(DAT_004eb874 + 0x20);
    iStack_28 = DAT_004eb878;
    func_00688F58(&local_78,&iStack_28);
    func_004EBC10(param_1,&local_78);
    (**(code **)(local_78 + 8))(&local_78);
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar3 = func_0056D3E4((int)puVar2,local_74);
    piVar1 = piRam004eb87c;
    uVar4 = func_00111A64((uint *)(*piRam004eb87c + 0x660));
    fparam_0_00 = ALBW_AS_F32(uVar6);
    iVar5 = (int)((ulonglong)uVar4 * 3 >> 0x20);
    uVar4 = *(uint *)(param_1 + 0x70);
    if (uVar3 + iVar5 == uVar4) {
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
    func_004994B0((int)&local_78,iVar5,uVar4,in_r3);
    func_004EA868(param_1,&local_78,(undefined4 *)0x0,0,fparam_0_00);
  }
  return;
}

