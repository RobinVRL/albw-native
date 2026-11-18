#include "ghidra_types.h"

extern int func_0011FBD4(undefined4 *param_1,int param_2);

// USA 0011F890 <- EU 0011F890 (Ghidra, non-matching)

int func_0011F890(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  iVar3 = 0;
  do {
    func_0011FBD4(&local_20,iVar3);
    (**(code **)(local_20 + 8))(&local_20);
    (**(code **)(local_20 + 8))(&local_20);
    iVar2 = local_1c;
    (**(code **)(*param_1 + 8))(param_1);
    bVar1 = true;
    if (iVar2 != param_1[1]) {
      iVar2 = 0;
      do {
        if (*(char *)(local_1c + iVar2) != *(char *)(param_1[1] + iVar2)) break;
        if (*(char *)(local_1c + iVar2) == '\0') goto LAB_0011f928;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40001);
      bVar1 = false;
    }
LAB_0011f928:
    if (bVar1) {
      return (int)(char)iVar3;
    }
    iVar3 = iVar3 + 1;
    if (0x18 < iVar3) {
      return -1;
    }
  } while( true );
}

