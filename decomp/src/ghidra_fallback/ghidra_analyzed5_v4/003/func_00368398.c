#include "ghidra_types.h"

extern int func_001788DC(int param_1,undefined4 *param_2);
extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int DAT_0036848c;
extern int *DAT_00368490;

// USA 00368398 <- EU 00368374 (Ghidra, non-matching)
// GLOBAL DAT_0036848c int
// GLOBAL DAT_00368490 int *

void func_00368398(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(undefined4 *)(albw_frame + 0xc))
  #define local_28 ((int *)(albw_frame + 0x18))
  if (*(int *)(param_1 + 0x2c) != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_28[3] = 0xffffffff;
    local_28[2] = 0;
    local_34 = *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0xa8);
    local_38 = DAT_0036848c;
    func_005826A4(*DAT_00368490,local_28,(int *)(param_1 + 4),&local_38);
    if (local_28[0] != 0) {
      iVar3 = *(int *)(param_1 + 0x28);
      (**(code **)(*param_2 + 8))(param_2);
      *(int *)(iVar3 + 0x68) = param_2[1];
      (**(code **)(*param_2 + 8))(param_2);
      iVar1 = 0;
      do {
        if (*(short *)(param_2[1] + iVar1 * 2) == 0) {
          if (iVar1 < 0x40001) goto LAB_00368440;
          break;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x40001);
      iVar1 = 0;
LAB_00368440:
      *(int *)(iVar3 + 0x70) = iVar1 << 1;
      func_001788DC(*(int *)(param_1 + 0x28),local_28);
      iVar1 = *(int *)(param_1 + 0x28);
      piVar2 = *(int **)(param_1 + 0x2c);
      *(undefined2 *)(iVar1 + 0x32) = 0;
      *(undefined1 *)(iVar1 + 0x3d) = 0;
      (**(code **)(*piVar2 + 0x60))
                (piVar2,*(undefined4 *)(*(int *)(param_1 + 0x28) + 8),0,
                 *(ushort *)(*(int *)(param_1 + 0x28) + 0x20) >> 1);
    }
  }
  return;
}

