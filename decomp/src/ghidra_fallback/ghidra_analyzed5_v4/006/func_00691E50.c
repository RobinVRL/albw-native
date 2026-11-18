#include "ghidra_types.h"

extern int func_00691884(int *param_1,int *param_2);
extern undefined4 DAT_00691ee8;
extern int DAT_00691eec;

// USA 00691E50 <- EU 00691E28 (Ghidra, non-matching)
// GLOBAL DAT_00691ee8 undefined4
// GLOBAL DAT_00691eec int

uint func_00691E50(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define local_28 (*(int *)(albw_frame + 0x8))
  #define local_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(undefined4 *)(albw_frame + 0x1c))
  iVar2 = DAT_00691eec;
  local_14 = DAT_00691ee8;
  local_18 = DAT_00691eec;
  iVar1 = func_00691884(param_2,&local_18);
  if (iVar1 == 0) {
    uVar4 = 0;
    if (0 < param_1[0x1c]) {
      do {
        piVar3 = param_1 + uVar4 * 7;
        do {
          iVar2 = func_00691884(param_2,piVar3);
          if (iVar2 != 0) {
            return uVar4;
          }
          uVar4 = uVar4 + 1;
          if (param_1[0x1c] <= (int)uVar4) {
            return 0xffffffff;
          }
          piVar3 = param_1;
        } while (3 < uVar4);
      } while( true );
    }
  }
  else {
    local_28 = iVar2;
    local_24 = DAT_00691ee8;
    iVar2 = func_00691884(param_1 + 0x15,&local_28);
    if (iVar2 != 0) {
      return 3;
    }
  }
  return 0xffffffff;
}

