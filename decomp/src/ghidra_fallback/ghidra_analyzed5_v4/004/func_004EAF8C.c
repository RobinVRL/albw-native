#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00111A64(uint *param_1);
extern int func_0014E500(int *param_1,int *param_2,int param_3);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_0056CAD4(int param_1,uint param_2);
extern int func_0056D3E4(int param_1,uint *param_2);
extern int func_0057F260(int param_1);
extern int *piRam004eb14c;
extern int DAT_004eb140;

// USA 004EAF8C <- EU 004EAF64 (Ghidra, non-matching)
// GLOBAL DAT_004eb140 int
// GLOBAL UNK_004eb14c int *

void func_004EAF8C(int param_1,int *param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r3;
  uint *puVar6;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_50 (*(int *)(albw_frame + 0x0))
  #define local_4c (*(uint * *)(albw_frame + 0x4))
  #define local_48 (*(int *)(albw_frame + 0x8))
  #define local_44 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_25 (*(undefined1 *)(albw_frame + 0x2b))
  local_4c = (uint *)local_44;
  local_48 = 0x20;
  uStack_25 = 0;
  local_44[0] = 0;
  local_50 = DAT_004eb140;
  (**(code **)(*param_2 + 8))(param_2);
  puVar6 = (uint *)param_2[1];
  puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  uVar3 = func_0056D3E4((int)puVar2,puVar6);
  (**(code **)(*param_2 + 8))(param_2);
  func_004994B0((int)&local_50,(int)"%s_1" /* EU 004EB144 */,param_2[1],in_r3);
  (**(code **)(local_50 + 8))(&local_50);
  puVar6 = local_4c;
  puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
  uVar4 = func_0056D3E4((int)puVar2,puVar6);
  puVar6 = local_4c;
  piVar1 = piRam004eb14c;
  if (uVar4 == 0xffffffff) {
    (**(code **)(*param_2 + 8))(param_2);
    uVar4 = 0;
    do {
      if (*(char *)(param_2[1] + uVar4) == '\0') {
        if ((int)uVar4 < 0x40001) goto LAB_004eb0f0;
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 0x40001);
    uVar4 = 0;
LAB_004eb0f0:
    if (local_48 <= (int)uVar4) {
      uVar4 = local_48 - 1;
    }
    (**(code **)(*param_2 + 8))(param_2);
    func_0010E3C4(puVar6,(uint *)param_2[1],uVar4);
    *(undefined1 *)((int)puVar6 + uVar4) = 0;
    *(uint *)(param_1 + 0x6c) = uVar3;
  }
  else {
    uVar4 = func_00111A64((uint *)(*piRam004eb14c + 0x660));
    iVar5 = (int)((ulonglong)uVar4 * 3 >> 0x20);
    uVar4 = uVar3 + iVar5;
    if (uVar4 == *(uint *)(param_1 + 0x6c)) {
      do {
        uVar4 = func_00111A64((uint *)(*piVar1 + 0x660));
        iVar5 = (int)((ulonglong)uVar4 * 3 >> 0x20);
        uVar4 = uVar3 + iVar5;
      } while (uVar4 == *(uint *)(param_1 + 0x6c));
    }
    *(uint *)(param_1 + 0x6c) = uVar3 + iVar5;
    puVar2 = func_0057F260(*(int *)(*(int *)(param_1 + 0x24) + 0x140));
    iVar5 = func_0056CAD4((int)puVar2,uVar3 + iVar5);
    func_004994B0((int)&local_50,iVar5,uVar4,in_r3);
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    func_0014E500(*(int **)(param_1 + 0x58),&local_50,param_3);
  }
  return;
}

