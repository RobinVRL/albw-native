#include "ghidra_types.h"

extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_004EBB28(int param_1,int *param_2,int param_3);
extern int func_00539000(int param_1,int *param_2);
extern int DAT_00321708;
extern int *DAT_0032170c;
extern int DAT_00321710;

// USA 00321690 <- EU 0032166C (Ghidra, non-matching)
// GLOBAL DAT_00321708 int
// GLOBAL DAT_0032170c int *
// GLOBAL DAT_00321710 int

undefined4 func_00321690(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x4b))
  iVar2 = DAT_00321710;
  piVar1 = DAT_0032170c;
  if (0xc < param_2) {
    return 0;
  }
  local_5c = local_54;
  uStack_58 = 0x40;
  uStack_15 = 0;
  local_54[0] = 0;
  local_60 = DAT_00321708;
  if (param_2 == 0) {
    iVar3 = func_00539000(*DAT_0032170c,&local_60);
    if (iVar3 == 0) {
      return 0;
    }
  }
  else {
    func_004994B0((int)&local_60,*(undefined4 *)(DAT_00321710 + param_2 * 0xc),(int)&uStack_58 + 3,
                  0x40);
  }
  return func_004EBB28(*piVar1,&local_60,*(int *)(iVar2 + param_2 * 0xc + 8));
}

