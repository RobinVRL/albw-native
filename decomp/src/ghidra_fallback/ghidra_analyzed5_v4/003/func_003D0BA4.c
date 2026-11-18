#include "ghidra_types.h"

extern int func_00563F64(int *param_1);
extern uint DAT_003d0c54;
extern int DAT_003d0c58;
extern uint DAT_003d0c5c;

// USA 003D0BA4 <- EU 003D0B80 (Ghidra, non-matching)
// GLOBAL DAT_003d0c54 uint
// GLOBAL DAT_003d0c58 int
// GLOBAL DAT_003d0c5c uint

uint func_003D0BA4(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((char *)(albw_frame + 0x8))
  uVar3 = (**(code **)(*param_1 + 0x2c))(param_1,local_18,1,2,0,0);
  uVar1 = DAT_003d0c54;
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  if (local_18[0] != '\0') {
    uVar3 = (**(code **)(*param_1 + 0x2c))(param_1,local_18,1,3,0,0);
    iVar2 = DAT_003d0c58;
    if ((int)uVar3 < 0) {
      return uVar3;
    }
    if (local_18[0] != '\0') {
      return uVar1 | uVar1 >> 0x1f;
    }
    if (*(char *)(DAT_003d0c58 + 2) == '\0') {
      uVar3 = func_00563F64(param_1);
      *(char *)(iVar2 + 2) = (char)((int)uVar3 >> 0x1f) + '\x01';
    }
    if (*(char *)(iVar2 + 2) != '\0') {
      return 0;
    }
    if (uVar3 == DAT_003d0c5c) {
      return uVar3;
    }
  }
  return uVar1;
}

