#include "ghidra_types.h"

extern int func_00231448(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern float DAT_004422b0;
extern int DAT_004422b4;
extern int *DAT_004422b8;
extern int DAT_004422bc;
extern int *DAT_004422c0;

// USA 00442154 <- EU 00442134 (Ghidra, non-matching)
// GLOBAL DAT_004422b0 float
// GLOBAL DAT_004422b4 int
// GLOBAL DAT_004422b8 int *
// GLOBAL DAT_004422bc int
// GLOBAL DAT_004422c0 int *

void func_00442154(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float fparam_0;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 (*(int *)(albw_frame + 0x0))
  #define local_8c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_88 (*(undefined4 *)(albw_frame + 0x8))
  #define local_84 ((undefined2 *)(albw_frame + 0xc))
  #define local_46 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_44 (*(uint *)(albw_frame + 0x4c))
  #define local_40 ((int *)(albw_frame + 0x50))
  fparam_0 = DAT_004422b0;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x8e) = 6;
  *(undefined2 *)(param_1 + 0x8c) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x8c),fparam_0);
  iVar6 = *(int *)(param_1 + 0xc0);
  if (*(char *)(iVar6 + 0x48) == '\0') {
    *(undefined2 *)(iVar6 + 0x20) = 0;
    func_002317C0((undefined2 *)(iVar6 + 0x20),fparam_0);
    *(undefined1 *)(iVar6 + 0x48) = 1;
  }
  func_002317C0((undefined2 *)(iVar6 + 0x2c),fparam_0);
  *(undefined1 *)(iVar6 + 0x49) = 0;
  iVar6 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar6 + 0x48) != '\0') {
    *(undefined2 *)(iVar6 + 0x20) = 2;
    func_002317C0((undefined2 *)(iVar6 + 0x20),fparam_0);
    *(undefined1 *)(iVar6 + 0x48) = 0;
  }
  func_00231448(iVar6 + 0x2c);
  iVar3 = DAT_004422bc;
  piVar2 = DAT_004422b8;
  iVar1 = DAT_004422b4;
  *(undefined1 *)(iVar6 + 0x49) = 0;
  uVar7 = 0;
  do {
    piVar4 = (int *)(param_1 + 0xbc);
    if (uVar7 < 2) {
      piVar4 = piVar4 + uVar7;
    }
    iVar6 = *piVar4;
    if (*(int *)(iVar6 + 0x44) != 0) {
      local_40[0] = 0;
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0xffffffff;
      iVar5 = func_005826A4(*piVar2,local_40,DAT_004422c0,(int *)(iVar1 + uVar7 * 8));
      if (iVar5 != 0) {
        local_8c = local_84;
        uStack_88 = 0x20;
        local_46 = 0;
        local_84[0] = 0;
        local_90 = iVar3;
        local_44 = func_00583794(local_40,&local_90);
        local_44 = local_44 & 0xffff;
        piVar4 = *(int **)(iVar6 + 0x44);
        (**(code **)(local_90 + 8))(&local_90);
        (**(code **)(*piVar4 + 0x60))(piVar4,local_8c,0,local_44);
      }
    }
    uVar7 = uVar7 + 1;
  } while ((int)uVar7 < 2);
  return;
}

