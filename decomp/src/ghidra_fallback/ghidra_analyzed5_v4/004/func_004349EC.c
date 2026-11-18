#include "ghidra_types.h"

extern int func_00434C3C(undefined4 *param_1,int param_2);

// USA 004349EC <- EU 004349CC (Ghidra, non-matching)

uint func_004349EC(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(int *)(albw_frame + 0x4))
  uVar3 = 0;
  do {
    func_00434C3C(&local_20,uVar3);
    (**(code **)(local_20 + 8))(&local_20);
    (**(code **)(local_20 + 8))(&local_20);
    iVar2 = local_1c;
    (**(code **)(*param_1 + 8))(param_1);
    bVar1 = true;
    if (iVar2 != param_1[1]) {
      iVar2 = 0;
      do {
        if (*(char *)(local_1c + iVar2) != *(char *)(param_1[1] + iVar2)) break;
        if (*(char *)(local_1c + iVar2) == '\0') goto LAB_00434a64;
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40001);
      bVar1 = false;
    }
LAB_00434a64:
    if (bVar1) {
      return uVar3 & 0xff;
    }
    uVar3 = uVar3 + 1;
    if (0xe < (int)uVar3) {
      return 0;
    }
  } while( true );
}

