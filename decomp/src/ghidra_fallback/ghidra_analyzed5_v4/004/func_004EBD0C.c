#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004EA868(int param_1,int *param_2,undefined4 *param_3,int param_4,float fparam_0);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int func_00689024(undefined4 *param_1);
extern undefined8 func_00689928(int *param_1,int *param_2,uint param_3);
extern int *piRam004ebe84;
extern int *DAT_004ebe64;
extern int DAT_004ebe68;
extern int DAT_004ebe80;
extern char s__Stone2_004ebe78[];
extern char s__s_InWall_004ebe6c[];
extern char s_cf_004ebe6c[];

// USA 004EBD0C <- EU 004EBCE4 (Ghidra, non-matching)
// GLOBAL DAT_004ebe64 int *
// GLOBAL DAT_004ebe68 int
// GLOBAL DAT_004ebe80 int
// GLOBAL UNK_004ebe84 int *
// GLOBAL s_cf_004ebe6c string
// GLOBAL s__Stone2_004ebe78 string

undefined4 func_004EBD0C(int param_1,float fparam_0)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_r3;
  float fparam_0_00;
  ulonglong uVar7;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define local_74 (*(uint * *)(albw_frame + 0xc))
  #define local_28 (*(int *)(albw_frame + 0x58))
  #define local_24 (*(char * *)(albw_frame + 0x5c))
  piVar1 = DAT_004ebe64;
  uVar7 = (ulonglong)(uint)ALBW_AS_U32(fparam_0);
  if (((*(int *)(param_1 + 0x58) != 0) && (bVar2 = func_00556EAC(*DAT_004ebe64,0x61), !bVar2)) &&
     (bVar2 = func_00556EAC(*piVar1,0x62), !bVar2)) {
    func_00689024(&local_78);
    func_004994B0((int)&local_78,s__s_InWall_004ebe6c,*(uint *)(DAT_004ebe68 + 0x20),in_r3);
    if ((*(ushort *)(*(int *)(*(int *)(param_1 + 0x58) + 0x5f4) + 0x3bac) & 0x7e0) == 0x2e0) {
      local_24 = s__Stone2_004ebe78;
      local_28 = DAT_004ebe80;
      func_00689928(&local_78,&local_28,0xffffffff);
    }
    (**(code **)(local_78 + 8))(&local_78);
    puVar3 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    uVar4 = func_0056D3E4((int)puVar3,local_74);
    piVar1 = piRam004ebe84;
    uVar5 = func_00111A64((uint *)(*piRam004ebe84 + 0x660));
    fparam_0_00 = ALBW_AS_F32(uVar7);
    iVar6 = (int)((ulonglong)uVar5 * 3 >> 0x20);
    uVar5 = uVar4 + iVar6;
    if (uVar5 == *(uint *)(param_1 + 0x70)) {
      do {
        uVar5 = func_00111A64((uint *)(*piVar1 + 0x660));
        fparam_0_00 = ALBW_AS_F32(uVar7);
        iVar6 = (int)((ulonglong)uVar5 * 3 >> 0x20);
        uVar5 = uVar4 + iVar6;
      } while (uVar5 == *(uint *)(param_1 + 0x70));
    }
    *(uint *)(param_1 + 0x70) = uVar4 + iVar6;
    puVar3 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    iVar6 = func_0056CAD4((int)puVar3,uVar4 + iVar6);
    func_004994B0((int)&local_78,iVar6,uVar5,in_r3);
    iVar6 = func_004EA868(param_1,&local_78,(undefined4 *)0x0,0,fparam_0_00);
    return iVar6;
  }
  return 0;
}

