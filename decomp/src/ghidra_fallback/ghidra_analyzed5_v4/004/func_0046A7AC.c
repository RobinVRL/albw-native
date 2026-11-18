#include "ghidra_types.h"

extern int func_005826A4(int param_1,int *param_2,int *param_3,int *param_4);
extern int func_00583794(int *param_1,int *param_2);
extern int *DAT_0046a838;
extern int *DAT_0046a83c;
extern int DAT_0046a840;

// USA 0046A7AC <- EU 0046A784 (Ghidra, non-matching)
// GLOBAL DAT_0046a838 int *
// GLOBAL DAT_0046a83c int *
// GLOBAL DAT_0046a840 int

void func_0046A7AC(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x70];
  #define local_70 (*(int *)(albw_frame + 0x0))
  #define local_6c (*(undefined2 * *)(albw_frame + 0x4))
  #define uStack_68 (*(undefined4 *)(albw_frame + 0x8))
  #define local_64 ((undefined2 *)(albw_frame + 0xc))
  #define local_26 (*(undefined2 *)(albw_frame + 0x4a))
  #define local_20 ((int *)(albw_frame + 0x50))
  if (*(int *)(param_1 + 0x44) != 0) {
    local_20[3] = 0xffffffff;
    local_20[0] = 0;
    local_20[1] = 0;
    local_20[2] = 0;
    iVar1 = func_005826A4(*DAT_0046a83c,local_20,DAT_0046a838,param_2);
    if (iVar1 != 0) {
      local_6c = local_64;
      uStack_68 = 0x20;
      local_26 = 0;
      local_70 = DAT_0046a840;
      local_64[0] = 0;
      uVar2 = func_00583794(local_20,&local_70);
      piVar3 = *(int **)(param_1 + 0x44);
      (**(code **)(local_70 + 8))(&local_70);
      (**(code **)(*piVar3 + 0x60))(piVar3,local_6c,0,uVar2 & 0xffff);
    }
  }
  return;
}

