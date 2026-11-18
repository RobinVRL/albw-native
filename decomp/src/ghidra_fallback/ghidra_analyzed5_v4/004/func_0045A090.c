#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_0023194C(int param_1,undefined4 param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern float DAT_0045a1ac;
extern int *DAT_0045a1b0;
extern int *DAT_0045a1b4;
extern int *DAT_0045a1b8;

// USA 0045A090 <- EU 0045A068 (Ghidra, non-matching)
// GLOBAL DAT_0045a1ac float
// GLOBAL DAT_0045a1b0 int *
// GLOBAL DAT_0045a1b4 int *
// GLOBAL DAT_0045a1b8 int *

void func_0045A090(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 ((int *)(albw_frame + 0x8))
  func_002317C0((undefined2 *)(param_1 + 0x14c),DAT_0045a1ac);
  func_0023194C(param_1 + 0x14c,8);
  local_28[0] = 0;
  local_28[1] = 0;
  local_28[3] = 0xffffffff;
  local_28[2] = 0;
  if ((*(int *)(param_1 + 500) != 0) &&
     (iVar2 = func_005826A4(*DAT_0045a1b4,local_28,DAT_0045a1b0,(int *)(param_1 + 0x1f8)),
     piVar3 = DAT_0045a1b8, iVar2 != 0)) {
    piVar4 = (int *)(param_1 + 0x1f8);
    (**(code **)(*(int *)(param_1 + 0x1f8) + 8))(piVar4);
    (**(code **)(*piVar4 + 8))(piVar4);
    iVar2 = *(int *)(param_1 + 0x1fc);
    (**(code **)(*piVar3 + 8))(piVar3);
    if (iVar2 == piVar3[1]) {
LAB_0045a148:
      *(short *)(*(int *)(param_1 + 0x1f0) + 0x60) = (short)*(undefined4 *)(param_1 + 0x214) + 1;
      *(short *)(*(int *)(param_1 + 0x1f0) + 0x62) = (short)*(undefined4 *)(param_1 + 0x230) + 1;
    }
    else {
      iVar2 = 0;
      do {
        cVar1 = *(char *)(*(int *)(param_1 + 0x1fc) + iVar2);
        if (cVar1 != *(char *)(piVar3[1] + iVar2)) break;
        if (cVar1 == '\0') goto LAB_0045a148;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40001);
    }
    func_001788DC(*(int *)(param_1 + 0x1f0),local_28);
    iVar2 = *(int *)(param_1 + 0x1f0);
    piVar3 = *(int **)(param_1 + 500);
    *(undefined2 *)(iVar2 + 0x32) = 0;
    *(undefined1 *)(iVar2 + 0x3d) = 0;
    (**(code **)(*piVar3 + 0x60))
              (piVar3,*(undefined4 *)(*(int *)(param_1 + 0x1f0) + 8),0,
               *(ushort *)(*(int *)(param_1 + 0x1f0) + 0x20) >> 1);
  }
  return;
}

