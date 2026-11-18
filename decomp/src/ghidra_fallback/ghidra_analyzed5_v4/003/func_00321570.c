#include "ghidra_types.h"

extern int func_00296784(int param_1,int *param_2);
extern int func_004994B0(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,...);
extern int func_00539000(int param_1,int *param_2);
extern undefined4 DAT_003215e0;
extern int *DAT_003215e4;
extern int DAT_003215e8;

// USA 00321570 <- EU 0032154C (Ghidra, non-matching)
// GLOBAL DAT_003215e0 undefined4
// GLOBAL DAT_003215e4 int *
// GLOBAL DAT_003215e8 int

undefined4 func_00321570(undefined4 param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 (*(undefined1 * *)(albw_frame + 0xc))
  #define uStack_50 (*(undefined4 *)(albw_frame + 0x10))
  #define local_4c ((undefined1 *)(albw_frame + 0x14))
  #define uStack_d (*(undefined1 *)(albw_frame + 0x53))
  piVar1 = DAT_003215e4;
  if (0xc < param_2) {
    return 0;
  }
  local_54 = local_4c;
  uStack_50 = 0x40;
  uStack_d = 0;
  local_4c[0] = 0;
  local_58 = DAT_003215e0;
  if (param_2 == 0) {
    iVar2 = func_00539000(*DAT_003215e4,&local_58);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else {
    func_004994B0((int)&local_58,*(undefined4 *)(DAT_003215e8 + param_2 * 0xc),(int)&uStack_50 + 3,
                  0x40);
  }
  return func_00296784(*piVar1,&local_58);
}

