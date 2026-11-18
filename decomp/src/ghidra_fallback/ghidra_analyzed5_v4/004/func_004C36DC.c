#include "ghidra_types.h"

extern int func_0029383C(int param_1);
extern int func_003C7DEC(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3);

// USA 004C36DC <- EU 004C36B4 (Ghidra, non-matching)

undefined4 func_004C36DC(int param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 ((char *)(albw_frame + 0xc))
  #define local_10 ((int *)(albw_frame + 0x10))
  if (*(int *)(param_1 + 0x10) != 0) {
    *(undefined1 *)(param_1 + 0x9b8) = 0;
    if ((*(char *)(param_1 + 0x9ba) != '\0') && (*(uint *)(param_1 + 0x9c0) < 2)) {
      *(undefined4 *)(param_1 + 0x9c0) = 4;
    }
    return func_0029383C(param_1 + 0x9cc);
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  local_10[0] = 0;
  local_18 = 0;
  local_14[0] = '\0';
  iVar1 = func_003C7DEC(local_10,&local_18,local_14);
  if (-1 < iVar1) {
    bVar2 = local_10[0] == 4;
    if (bVar2) {
      local_10[0] = local_18;
    }
    if ((bVar2 && local_10[0] == 1) && (local_14[0] != '\0')) {
      *(undefined4 *)(param_1 + 0x9c0) = 3;
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x9c0) = 2;
  return 0;
}

