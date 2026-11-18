#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_0049DA04(int param_1,int *param_2,uint param_3);
extern int func_0049FCE8(int *param_1);
extern int *DAT_0049d810;

// USA 0049D774 <- EU 0049D74C (Ghidra, non-matching)
// GLOBAL DAT_0049d810 int *

undefined4 func_0049D774(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_30 ((int *)(albw_frame + 0x0))
  #define iStack_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(int *)(albw_frame + 0x14))
  func_0010C0B8(param_1 + 4);
  while (param_2[5] != 0) {
    func_0049D774(param_1,*(int **)(param_2[5] + 0x10));
  }
  iVar1 = func_0049DA04(param_1,param_2,7);
  if (iVar1 != 0) {
    func_0049FCE8(param_2 + 4);
    local_1c = param_2[0x16];
    iVar1 = 0;
    local_30[0] = param_2[0x11];
    local_30[1] = param_2[0x12];
    local_30[2] = param_2[0x13];
    local_30[3] = param_2[0x14];
    iStack_20 = param_2[0x15];
    iVar2 = *DAT_0049d810;
    if (0 < iVar2) {
      do {
        if ((int *)local_30[iVar1] != (int *)0x0) {
          (**(code **)(*(int *)local_30[iVar1] + 0x10))((int *)local_30[iVar1]);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  return func_0010EEE0(param_1 + 4);
}

