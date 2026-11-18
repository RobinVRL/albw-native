#include "ghidra_types.h"

extern int DAT_004a1778;

// USA 004A1688 <- EU 004A1660 (Ghidra, non-matching)
// GLOBAL DAT_004a1778 int

undefined4 func_004A1688(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  cVar1 = *param_1;
  if (cVar1 == *param_2) {
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
          return 0;
        }
      }
      else {
        if (cVar1 != '\x03') {
          return 0;
        }
        local_14 = *(int *)(param_1 + 4);
        local_18 = DAT_004a1778;
        local_1c = *(int *)(param_2 + 4);
        local_20 = DAT_004a1778;
        (**(code **)(DAT_004a1778 + 8))(&local_18);
        (**(code **)(local_18 + 8))(&local_18);
        iVar2 = local_14;
        (**(code **)(local_20 + 8))(&local_20);
        if (iVar2 != local_1c) {
          iVar2 = 0;
          while( true ) {
            if (*(char *)(local_14 + iVar2) != *(char *)(local_1c + iVar2)) {
              return 0;
            }
            if (*(char *)(local_14 + iVar2) == '\0') break;
            iVar2 = iVar2 + 1;
            if (0x40000 < iVar2) {
              return 0;
            }
          }
          return 1;
        }
      }
      return 1;
    }
    if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
      return 1;
    }
  }
  return 0;
}

