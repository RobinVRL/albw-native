#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_00368174;
extern int *DAT_00368178;
extern int DAT_0036817c;

// USA 00368074 <- EU 00368050 (Ghidra, non-matching)
// GLOBAL DAT_00368174 int
// GLOBAL DAT_00368178 int *
// GLOBAL DAT_0036817c int

void func_00368074(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_40 (*(int *)(albw_frame + 0x0))
  #define local_3c (*(undefined4 *)(albw_frame + 0x4))
  #define local_30 ((int *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x24))
  if (*(int *)(param_1 + 0x34) != 0) {
    local_30[0] = 0;
    local_30[1] = 0;
    local_30[3] = 0xffffffff;
    local_30[2] = 0;
    local_3c = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0xa8);
    local_40 = DAT_00368174;
    func_005826A4(*DAT_00368178,local_30,(int *)(param_1 + 4),&local_40);
    if (local_30[0] != 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      local_30[4] = DAT_0036817c;
      local_1c = param_2;
      (**(code **)(DAT_0036817c + 8))(local_30 + 4);
      *(int *)(iVar3 + 0x68) = local_1c;
      (**(code **)(local_30[4] + 8))(local_30 + 4);
      iVar1 = 0;
      do {
        if (*(short *)(local_1c + iVar1 * 2) == 0) {
          if (iVar1 < 0x40001) goto LAB_00368128;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x40001);
      iVar1 = 0;
LAB_00368128:
      *(int *)(iVar3 + 0x70) = iVar1 << 1;
      func_001788DC(*(int *)(param_1 + 0x28),local_30);
      iVar1 = *(int *)(param_1 + 0x28);
      piVar2 = *(int **)(param_1 + 0x34);
      *(undefined2 *)(iVar1 + 0x32) = 0;
      *(undefined1 *)(iVar1 + 0x3d) = 0;
      (**(code **)(*piVar2 + 0x60))
                (piVar2,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x28) + 0x20) >> 1);
    }
  }
  return;
}

