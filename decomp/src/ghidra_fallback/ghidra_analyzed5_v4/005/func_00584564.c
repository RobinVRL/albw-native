#include "ghidra_types.h"

extern int func_005845EC(int param_1,int *param_2);

// USA 00584564 <- EU 0058453C (Ghidra, non-matching)

int func_00584564(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x220];
  #define local_218 (*(undefined1 * *)(albw_frame + 0x8))
  #define local_214 (*(undefined4 *)(albw_frame + 0xc))
  #define local_210 (*(undefined4 *)(albw_frame + 0x10))
  #define local_20c (*(int *)(albw_frame + 0x14))
  #define auStack_208 ((undefined1 *)(albw_frame + 0x18))
  local_210 = 0;
  local_20c = 0;
  local_218 = auStack_208;
  local_214 = 0x80;
  func_005845EC(param_1,(int *)&local_218);
  iVar2 = 0;
  iVar3 = 0;
  do {
    iVar1 = iVar3 * 0x40;
    iVar3 = iVar3 + 1;
    if (*(char *)(param_1 + iVar1 + 10) < '\0') {
      iVar2 = iVar2 + 1;
    }
  } while (iVar3 != 0x14);
  if (local_20c <= iVar2) {
    iVar2 = local_20c;
  }
  return iVar2;
}

