#include "ghidra_types.h"

extern int func_0012F0E0(int param_1,int *param_2,undefined *param_3);
extern int func_00405998(int param_1,uint *param_2,uint param_3);
extern int DAT_0012f460;

// USA 0012F388 <- EU 0012F388 (Ghidra, non-matching)
// GLOBAL DAT_0012f460 int

void func_0012F388(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x40];
  #define local_38 (*(int *)(albw_frame + 0x8))
  #define local_34 (*(int *)(albw_frame + 0xc))
  #define local_30 ((int *)(albw_frame + 0x10))
  #define local_24 (*(undefined4 *)(albw_frame + 0x1c))
  if (*(char *)(param_1 + 0x148) != '\0') {
    local_34 = (int)param_2 + param_3 * 2;
    local_38 = DAT_0012f460;
    (**(code **)(DAT_0012f460 + 8))(&local_38);
    iVar3 = local_34;
    (**(code **)(local_38 + 8))(&local_38);
    iVar1 = 0;
    do {
      puVar2 = (undefined *)(uint)*(ushort *)(local_34 + iVar1 * 2);
      if (puVar2 == (undefined *)0x0) {
        if (iVar1 < 0x40001) goto LAB_0012f414;
        break;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x40001);
    iVar1 = 0;
LAB_0012f414:
    local_24 = 0xffffffff;
    local_30[1] = 0;
    local_30[2] = (uint)(iVar1 << 0x10) >> 0xf;
    local_30[0] = iVar3;
    func_0012F0E0(param_1,local_30,puVar2);
  }
  func_00405998(param_1,param_2,param_3);
  *(undefined1 *)(*(int *)(param_1 + 0xfc) + 6) = 0;
  return;
}

