#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int func_0066D024(undefined4 *param_1,undefined1 param_2);
extern int func_0066F540(undefined4 *param_1,undefined1 param_2);
extern int func_00689A64(int param_1,int *param_2,int param_3);
extern int *DAT_00452718;

// USA 004523F8 <- EU 004523D0 (Ghidra, non-matching)
// GLOBAL DAT_00452718 int *

undefined4 func_004523F8(int param_1,int *param_2,int *param_3,int param_4)

{
  short sVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(undefined4 *)(albw_frame + 0x10))
  #define local_1c (*(undefined4 *)(albw_frame + 0x14))
  local_1c = 0xffffffff;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar3 = func_005826A4(*DAT_00452718,&local_28,param_2,param_3);
  if (iVar3 == 0) {
    return 0;
  }
  if ((*(char *)(param_1 + 0xd) != '\0') || (*(char *)(param_1 + 0xe) != '\0')) {
    if (param_4 == 0) {
      if (*(char *)(*(int *)(param_1 + 0x264) + 0x48) != '\x02') {
        func_0066F540((undefined4 *)(*(int *)(param_1 + 0x264) + 0x44),1);
      }
      cVar2 = *(char *)(param_1 + 0x78);
      if (cVar2 == '\0') {
        func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
        func_00583794(&local_28,(int *)(param_1 + 0xb8));
        return func_0066D024((undefined4 *)(param_1 + 0x74),1);
      }
      if (cVar2 == '\x02') {
        func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
        func_00583794(&local_28,(int *)(param_1 + 0xb8));
        **(undefined2 **)(param_1 + 0x1d8) = 0;
        return func_0066D024((undefined4 *)(param_1 + 0x74),1);
      }
      if (cVar2 != '\x01') {
        return 0;
      }
      sVar1 = **(short **)(param_1 + 0x1d8);
    }
    else {
      if (param_4 != 1) {
        func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
        func_00583794(&local_28,(int *)(param_1 + 0xb8));
        **(undefined2 **)(param_1 + 0x1d8) = 0;
        return func_0066D024((undefined4 *)(param_1 + 0x74),3);
      }
      if (*(char *)(*(int *)(param_1 + 0x260) + 0x48) != '\x02') {
        func_0066F540((undefined4 *)(*(int *)(param_1 + 0x260) + 0x44),1);
      }
      cVar2 = *(char *)(param_1 + 0x78);
      if (cVar2 == '\0') {
        func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
        func_00583794(&local_28,(int *)(param_1 + 0xb8));
        return func_0066D024((undefined4 *)(param_1 + 0x74),2);
      }
      if (cVar2 == '\x01') {
        func_00689A64(param_1 + 0x144,(int *)(param_1 + 0xb8),-1);
        func_00583794(&local_28,(int *)(param_1 + 0xb8));
        **(undefined2 **)(param_1 + 0x1d8) = 0;
        return func_0066D024((undefined4 *)(param_1 + 0x74),2);
      }
      if (cVar2 != '\x02') {
        return 0;
      }
      sVar1 = **(short **)(param_1 + 0x1d8);
    }
    if (sVar1 != 0) {
      return 0;
    }
    return func_00583794(&local_28,(int *)(param_1 + 0x1d4));
  }
  func_00583794(&local_28,(int *)(param_1 + 0x144));
  func_00583794(&local_28,(int *)(param_1 + 0xb8));
  piVar5 = *(int **)(param_1 + 0xb0);
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  uVar4 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0xbc) + uVar4 * 2) == 0) {
      if ((int)uVar4 < 0x40001) goto LAB_004524dc;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_004524dc:
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  (**(code **)(*piVar5 + 0x60))(piVar5,*(undefined4 *)(param_1 + 0xbc),0,uVar4 & 0xffff);
  piVar5 = *(int **)(param_1 + 0xb4);
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  uVar4 = 0;
  do {
    if (*(short *)(*(int *)(param_1 + 0xbc) + uVar4 * 2) == 0) {
      if ((int)uVar4 < 0x40001) goto LAB_0045255c;
      break;
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x40001);
  uVar4 = 0;
LAB_0045255c:
  (**(code **)(*(int *)(param_1 + 0xb8) + 8))(param_1 + 0xb8);
  (**(code **)(*piVar5 + 0x60))(piVar5,*(undefined4 *)(param_1 + 0xbc),0,uVar4 & 0xffff);
  *(undefined1 *)(param_1 + 0xe) = 1;
  return 0;
}

