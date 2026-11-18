#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_005229AC(int *param_1,int *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0046cfcc;
extern int *DAT_0046cfd0;
extern int *DAT_0046cfd4;
extern int *DAT_0046cfd8;
extern float DAT_0046cfdc;
extern char s_T_PlusRupee_00_0046cfbc[];

// USA 0046CEB4 <- EU 0046CE8C (Ghidra, non-matching)
// GLOBAL DAT_0046cfcc int
// GLOBAL DAT_0046cfd0 int *
// GLOBAL DAT_0046cfd4 int *
// GLOBAL DAT_0046cfd8 int *
// GLOBAL DAT_0046cfdc float
// GLOBAL s_T_PlusRupee_00_0046cfbc string

void func_0046CEB4(int param_1)

{
  int *piVar1;
  float fparam_0;
  int *piVar2;
  int *piVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(char * *)(albw_frame + 0xc))
  #define local_30 ((int *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x24))
  iVar4 = DAT_0046cfcc;
  local_34 = s_T_PlusRupee_00_0046cfbc;
  local_38 = DAT_0046cfcc;
  piVar2 = (int *)func_005229AC(*(int **)(param_1 + 0x1c),&local_38);
  piVar1 = DAT_0046cfd0;
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (piVar3 == piVar1) goto LAB_0046ceec;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0046ceec:
  if (piVar2 != (int *)0x0) {
    piVar3 = (int *)piVar2[0x2a];
  }
  if (piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[3] = 0xffffffff;
    local_30[2] = 0;
    local_1c = piVar2[0x2a];
    local_30[4] = iVar4;
    func_005826A4(*DAT_0046cfd8,local_30,DAT_0046cfd4,local_30 + 4);
    iVar4 = *(int *)(*(int *)(param_1 + 0xb8) + 0x30) - *(int *)(param_1 + 200);
    if (*(int *)(param_1 + 0xc4) < iVar4) {
      iVar4 = *(int *)(param_1 + 0xc4);
    }
    *(short *)(*(int *)(param_1 + 0xbc) + 0x60) = (short)iVar4;
    func_001788DC(*(int *)(param_1 + 0xbc),local_30);
    iVar4 = *(int *)(param_1 + 0xbc);
    *(undefined2 *)(iVar4 + 0x32) = 0;
    *(undefined1 *)(iVar4 + 0x3d) = 0;
    (**(code **)(*piVar2 + 0x60))
              (piVar2,*(undefined4 *)(*(int *)(param_1 + 0xbc) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0xbc) + 0x20) >> 1);
  }
  *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 0x9a) = 3;
  fparam_0 = DAT_0046cfdc;
  *(undefined2 *)(param_1 + 0x98) = 0;
  func_002317C0((undefined2 *)(param_1 + 0x98),fparam_0);
  return;
}

