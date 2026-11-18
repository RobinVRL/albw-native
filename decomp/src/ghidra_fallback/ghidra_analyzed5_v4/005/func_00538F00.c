#include "ghidra_types.h"

extern int func_005382AC(undefined4 param_1,int *param_2,char *param_3,int param_4);
extern int DAT_00538fbc;
extern int *DAT_00538fc0;

// USA 00538F00 <- EU 00538ED8 (Ghidra, non-matching)
// GLOBAL DAT_00538fbc int
// GLOBAL DAT_00538fc0 int *

undefined4 func_00538F00(undefined4 param_1,int *param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  _Alignas(8) unsigned char albw_frame[0x60];
  #define local_60 (*(int *)(albw_frame + 0x0))
  #define local_5c (*(undefined1 * *)(albw_frame + 0x4))
  #define uStack_58 (*(undefined4 *)(albw_frame + 0x8))
  #define local_54 ((undefined1 *)(albw_frame + 0xc))
  #define uStack_15 (*(undefined1 *)(albw_frame + 0x4b))
  local_5c = local_54;
  uStack_58 = 0x40;
  uStack_15 = 0;
  local_54[0] = 0;
  local_60 = DAT_00538fbc;
  iVar2 = func_005382AC(param_1,&local_60,(char *)(*DAT_00538fc0 + 0x18),1);
  uVar3 = 0;
  if (iVar2 != 0) {
    (**(code **)(local_60 + 8))(&local_60);
    (**(code **)(local_60 + 8))(&local_60);
    puVar1 = local_5c;
    (**(code **)(*param_2 + 8))(param_2);
    if (puVar1 != (undefined1 *)param_2[1]) {
      iVar2 = 0;
      while( true ) {
        if (local_5c[iVar2] != ((undefined1 *)param_2[1])[iVar2]) {
          return 0;
        }
        if (local_5c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
        if (0x40000 < iVar2) {
          return 0;
        }
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}

