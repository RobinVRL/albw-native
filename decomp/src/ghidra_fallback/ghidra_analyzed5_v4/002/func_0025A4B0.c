#include "ghidra_types.h"

extern int func_00259CC4(int param_1,uint param_2);
extern int func_00540848(int param_1,int *param_2);
extern int DAT_0025a580;
extern undefined4 DAT_0025a584;
extern int *DAT_0025a588;
extern int *DAT_0025a58c;
extern int DAT_0025a590;

// USA 0025A4B0 <- EU 0025A4D8 (Ghidra, non-matching)
// GLOBAL DAT_0025a580 int
// GLOBAL DAT_0025a584 undefined4
// GLOBAL DAT_0025a588 int *
// GLOBAL DAT_0025a58c int *
// GLOBAL DAT_0025a590 int

undefined4 func_0025A4B0(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(undefined4 *)(albw_frame + 0x0))
  #define local_c (*(undefined4 *)(albw_frame + 0x4))
  if (*(int *)(param_1 + 0x44) != *(int *)(param_1 + 0x48)) {
    if (*(int *)(param_1 + 0x44) == 3) {
      local_c = *(undefined4 *)(DAT_0025a580 + 0x24);
      local_10 = DAT_0025a584;
      iVar2 = func_00540848(*DAT_0025a588,&local_10);
      if ((iVar2 == 0) || (*(int *)(*(int *)(*DAT_0025a58c + 0x1c) + 4) <= DAT_0025a590)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        return func_00259CC4(param_1,0);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x58) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
  }
  return 0;
}

